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

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Rig/IsdkRigModifier.h"
#include "Interaction/IsdkInteractionEvents.h"
#include "StructTypes.h"
#include "Core/IsdkConditionalPoseOverride.h"
#include "Interaction/Pointable/IsdkInteractionPointerEvent.h"
#include "IsdkPokeLimiterRigModifier.generated.h"

class UIsdkPokeInteractable;
class UIsdkPokeInteractor;
class UIsdkHandMeshComponent;
class UMotionControllerComponent;

/*
  A Prebuilt Rig Modifier that will enable Poke Limiting on any valid objects that implement
  IsdkIPosedMesh

*/
UCLASS(Blueprintable, Category = InteractionSDK)
class OCULUSINTERACTIONPREBUILTS_API UIsdkPokeLimiterRigModifier : public UIsdkRigModifier
{
  GENERATED_BODY()

 public:
  UIsdkPokeLimiterRigModifier() {};

  void InitializeRigModifier_Implementation(UIsdkRigComponent* CallingRigComponent) override;
  void ShutdownRigModifier_Implementation(UIsdkRigComponent* CallingRigComponent) override;

 private:
  /* The handler for the state event delegate that the Interactors will be firing, used for
   * comparing requirements for triggering. */
  UFUNCTION()
  void HandleRelayedPointerEvent(const FIsdkInteractionPointerEvent& PointerEvent);

  UFUNCTION()
  bool ApplyRootPokeLimiting(const FTransform& RootPoseIn, FTransform& LimitedRootPose);

  /* The ConditionalPoseOverride for our Mesh that we use to convey poke limiting transforms*/
  UPROPERTY()
  UIsdkConditionalPoseOverride* ConditionalPoseOverride = nullptr;

  UPROPERTY()
  TScriptInterface<IIsdkIPosedMesh> ConnectedPoseMesh;

  UPROPERTY()
  UIsdkPokeInteractable* EventPokeInteractable{};

  UPROPERTY()
  UIsdkPokeInteractor* BoundPokeInteractor{};

  UPROPERTY()
  UMotionControllerComponent* ParentMotionController{};

  FVector LastIntersection = FVector::Zero();
  FVector OffsetForLastIntersection = FVector::Zero();
  FVector PokeInteractorOffset;
  float PokeLimitingReliefMeters = 0.5f;
  bool bPokeLimitingActive = false;
  bool bActuationTriggered = false;
  bool bIsBehindSurface = false;
};
