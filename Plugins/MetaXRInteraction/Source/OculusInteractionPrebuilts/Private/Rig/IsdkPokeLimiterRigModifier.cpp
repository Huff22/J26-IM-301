/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "Rig/IsdkPokeLimiterRigModifier.h"
#include "Rig/IsdkRigComponent.h"
#include "Interaction/IsdkPokeInteractor.h"
#include "Rig/IsdkInteractionGroupRigComponent.h"
#include "OculusInteractionPrebuiltsLog.h"
#include "Rig/IsdkControllerVisualsRigComponent.h"
#include "IsdkControllerMeshComponent.h"
#include "Rig/IsdkHandVisualsRigComponent.h"
#include "IsdkHandMeshComponent.h"
#include "Rig/IsdkTrackedDataSourceRigComponent.h"
#include "Interaction/IsdkPokeInteractable.h"
#include "Interaction/IsdkClippedPlaneSurface.h"
#include "Interaction/Surfaces/IsdkPointablePlane.h"

void UIsdkPokeLimiterRigModifier::InitializeRigModifier_Implementation(
    UIsdkRigComponent* CallingRigComponent)
{
  Super::InitializeRigModifier_Implementation(CallingRigComponent);
  if (!IsValid(CallingRigComponent))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Error,
        TEXT("UIsdkPokeLimiterRigModifier::InitializeRigModifier - CallingRigComponent is null!"));
    return;
  }

  // Get the Visuals of the Rig Component
  UIsdkTrackedDataSourceRigComponent* VisualComponent = CallingRigComponent->GetVisuals();

  if (!IsValid(VisualComponent))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Error,
        TEXT("UIsdkPokeLimiterRigModifier::InitializeRigModifier - VisualComponent is invalid!"));
    return;
  }

  if (UIsdkControllerVisualsRigComponent* ControllerVisual =
          Cast<UIsdkControllerVisualsRigComponent>(VisualComponent))
  {
    UIsdkControllerMeshComponent* ControllerMeshComponent =
        ControllerVisual->GetControllerMeshComponent();
    if (!IsValid(ControllerMeshComponent))
    {
      UE_LOG(
          LogOculusInteractionPrebuilts,
          Error,
          TEXT(
              "UIsdkPokeLimiterRigModifier::InitializeRigModifier - ControllerMeshComponent is invalid!"));
      return;
    }
    if (ControllerMeshComponent->Implements<UIsdkIPosedMesh>())
    {
      ConnectedPoseMesh = ControllerMeshComponent;
      ConditionalPoseOverride = ConnectedPoseMesh->GetPoseOverride_Implementation();
    }
  }
  else if (
      UIsdkHandVisualsRigComponent* HandVisual =
          Cast<UIsdkHandVisualsRigComponent>(VisualComponent))
  {
    if (!IsValid(HandVisual))
    {
      UE_LOG(
          LogOculusInteractionPrebuilts,
          Error,
          TEXT("UIsdkPokeLimiterRigModifier::InitializeRigModifier - HandVisual is invalid!"));
      return;
    }
    UIsdkHandMeshComponent* HandMeshComponent = HandVisual->SyntheticHandVisual;
    if (!IsValid(HandMeshComponent))
    {
      UE_LOG(
          LogOculusInteractionPrebuilts,
          Error,
          TEXT(
              "UIsdkPokeLimiterRigModifier::InitializeRigModifier - HandMeshComponent is invalid!"));
      return;
    }
    if (HandMeshComponent->Implements<UIsdkIPosedMesh>())
    {
      ConnectedPoseMesh = HandMeshComponent;
      ConditionalPoseOverride = ConnectedPoseMesh->GetPoseOverride_Implementation();
    }
  }

  if (!IsValid(ConnectedPoseMesh.GetObject()))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Warning,
        TEXT(
            "UIsdkPokeLimiterRigModifier::InitializeRigModifier - No implementation of IsdkIPosedMesh found"));
    return;
  }

  /*
   * Setup the Delegate
   */
  UIsdkInteractionGroupRigComponent* InteractionGroupRig =
      CallingRigComponent->GetInteractionGroup();

  bool bBoundToDelegate = false;

  TMap<UObject*, FIsdkInteractorGroupMember> MemberMap = InteractionGroupRig->GetMemberInfoMap();
  for (const auto& Elem : MemberMap)
  {
    if (IsValid(Elem.Key))
    {
      // We only want to bind the PokeInteractor's relayed pointer events
      if (UIsdkPokeInteractor* PokeInteractorCheck = Cast<UIsdkPokeInteractor>(Elem.Key))
      {
        BoundPokeInteractor = PokeInteractorCheck;
        FIsdkInteractorBroadcastPointerEvent& PointerEventDelegate =
            BoundPokeInteractor->GetBroadcastPointerEventDelegate();
        PointerEventDelegate.AddUniqueDynamic(
            this, &UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent);
        bBoundToDelegate = true;
        break;
      }
    }
  }

  if (!bBoundToDelegate)
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Warning,
        TEXT(
            "UIsdkPokeLimiterRigModifier::InitializeRigModifier - No delegates were bound! This modifier will not trigger."));
  }
}

void UIsdkPokeLimiterRigModifier::ShutdownRigModifier_Implementation(
    UIsdkRigComponent* CallingRigComponent)
{
  UIsdkInteractionGroupRigComponent* InteractionGroupRig =
      CallingRigComponent->GetInteractionGroup();

  TMap<UObject*, FIsdkInteractorGroupMember> MemberMap = InteractionGroupRig->GetMemberInfoMap();
  for (auto& Elem : MemberMap)
  {
    if (IsValid(Elem.Key))
    {
      if (UIsdkPokeInteractor* PokeInteractorCheck = Cast<UIsdkPokeInteractor>(Elem.Key))
      {
        FIsdkInteractorBroadcastPointerEvent& PointerEventDelegate =
            PokeInteractorCheck->GetBroadcastPointerEventDelegate();
        PointerEventDelegate.RemoveDynamic(
            this, &UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent);
      }
    }
  }
}

void UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent(
    const FIsdkInteractionPointerEvent& PointerEvent)
{
  /* Validate our Interactor and Interactables */
  if (!IsValid(BoundPokeInteractor))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Error,
        TEXT(
            "UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent() - Bound Poke Interactor invalid!"));
    return;
  }

  EventPokeInteractable = Cast<UIsdkPokeInteractable>(PointerEvent.Interactable.GetObject());
  if (!IsValid(EventPokeInteractable))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Error,
        TEXT(
            "UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent() - Event Poke Interactable invalid!"));
    return;
  }

  // Make sure the event interactor matches what we've bound
  if (BoundPokeInteractor != Cast<UIsdkPokeInteractor>(PointerEvent.Interactor))
  {
    UE_LOG(
        LogOculusInteractionPrebuilts,
        Error,
        TEXT(
            "UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent() - Bound Poke Interactor mismatch with event interactor"));
    return;
  }

  const FTransform InteractorMeshRootPose = ConnectedPoseMesh->GetCurrentRootPose_Implementation();

  if (PointerEvent.Type == EIsdkPointerEventType::Unhover)
  {
    LastIntersection = FVector::Zero();
  }
  else
  {
    LastIntersection = (FVector)PointerEvent.Pose.Position;
  }

  if (PointerEvent.Type == EIsdkPointerEventType::Select)
  {
    bActuationTriggered = true;
  }

  bool bNewIsBehindSurface = false;
  FTransform InteractorTransform = BoundPokeInteractor->GetComponentTransform();
  FVector TargetPosition;

  if (!LastIntersection.IsZero())
  {
    UIsdkClippedPlaneSurface* ClippedPlanedSurface =
        Cast<UIsdkClippedPlaneSurface>(EventPokeInteractable->GetSurfacePatch().GetObject());

    if (!IsValid(ClippedPlanedSurface))
    {
      UE_LOG(
          LogOculusInteractionPrebuilts,
          Error,
          TEXT(
              "UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent() - Clipped Plane Surface Invalid"));
      return;
    }

    const UIsdkPointablePlane* PointablePlane = ClippedPlanedSurface->GetPointablePlane();
    if (!IsValid(PointablePlane))
    {
      UE_LOG(
          LogOculusInteractionPrebuilts,
          Error,
          TEXT(
              "UIsdkPokeLimiterRigModifier::HandleRelayedPointerEvent() - PointablePlane Invalid"));
      return;
    }

    const FVector InteractorOrigin = InteractorTransform.GetLocation();

    FVector IntersectionToOrigin = InteractorOrigin - LastIntersection;
    IntersectionToOrigin.Normalize();

    FVector PointableSurfaceNormal = PointablePlane->GetNormal();
    PointableSurfaceNormal.Normalize();

    const float DotProduct = IntersectionToOrigin.Dot(PointableSurfaceNormal);

    bNewIsBehindSurface = (DotProduct < 0.0f);

    TargetPosition = LastIntersection;
    if (bNewIsBehindSurface)
    {
      // The poke is not actuated, so we target a point a little above the surface
      // to show that the poke has been released.
      TargetPosition += PointableSurfaceNormal * PokeLimitingReliefMeters;
    }

    OffsetForLastIntersection = TargetPosition - InteractorTransform.GetLocation();
  }
  else
  {
    OffsetForLastIntersection = FVector::Zero();
  }

  bIsBehindSurface = bNewIsBehindSurface;

  if (bIsBehindSurface && bActuationTriggered)
  {
    FTransform LimitedTransform;
    ApplyRootPokeLimiting(InteractorMeshRootPose, LimitedTransform);
    ConditionalPoseOverride->SetRootOverride(LimitedTransform);

    if (!bPokeLimitingActive)
    {
      bPokeLimitingActive = true;
    }
  }
  else
  {
    if (bPokeLimitingActive)
    {
      bPokeLimitingActive = false;
      ConditionalPoseOverride->ResetRootOverride();
    }
  }
}

bool UIsdkPokeLimiterRigModifier::ApplyRootPokeLimiting(
    const FTransform& RootPoseIn,
    FTransform& LimitedRootPose)
{
  const FVector LimitPosition = RootPoseIn.GetLocation() + OffsetForLastIntersection;
  const FQuat LimitRotation = RootPoseIn.GetRotation();
  LimitedRootPose.SetLocation(LimitPosition);
  LimitedRootPose.SetRotation(LimitRotation);
  return OffsetForLastIntersection != FVector::Zero();
}
