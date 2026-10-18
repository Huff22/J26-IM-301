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
#include "IsdkConditional.h"
#include "Interaction/IsdkIPosedMesh.h"
#include "IsdkConditionalPoseOverride.generated.h"

/**
 * Conditional that stores if the associated object that implements IsdkIPosedMesh is currently
 * being overridden or not, as well as the overriding pose information
 * @addtogroup InteractionSDK
 */
UCLASS(Blueprintable, DefaultToInstanced, Category = InteractionSDK)
class OCULUSINTERACTION_API UIsdkConditionalPoseOverride : public UIsdkConditional
{
  GENERATED_BODY()

 public:
  UIsdkConditionalPoseOverride();

  /*
   * @brief Sets an override of the root pose with a given transform
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetRootOverride(FTransform RootOverride)
  {
    RootPoseOverride = RootOverride;
    CalculateResolvedValue();
  }

  /*
   * @brief Returns a boolean representing if a root pose override is currently active, passing a
   * Transform by reference of the current override
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool GetRootOverride(FTransform& TransformOut)
  {
    TransformOut = RootPoseOverride;
    return IsRootOverrideActive();
  }

  /*
   * @brief Resets the current root pose override, completely losing the previous state
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void ResetRootOverride()
  {
    RootPoseOverride = FTransform::Identity;
    CalculateResolvedValue();
  }

  /*
   * @brief Sets an override of the joint poses with the given array of transforms. Will overwrite
   * any previous override in place
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetJointsOverride(TArray<FTransform>& JointsOverride)
  {
    JointPoseOverrides = JointsOverride;
    CalculateResolvedValue();
  }

  /*
   * @brief Returns a boolean representing if a joint override is currently active, passing an array
   * of Transforms by reference of the current override
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool GetJointsOverride(TArray<FTransform>& JointsOverriddenOut)
  {
    JointsOverriddenOut = JointPoseOverrides;
    return IsJointsOverrideActive();
  }

  /*
   * @brief Resets the current joint pose override, completely losing the previous state
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void ResetJointsOverride()
  {
    JointPoseOverrides.Empty();
    CalculateResolvedValue();
  }

  /*
   * @brief Returns whether or not there is an active joint override
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool IsJointsOverrideActive()
  {
    return JointPoseOverrides.Num() > 0;
  }

  /*
   * @brief Returns whether or not there is an active root pose override
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  bool IsRootOverrideActive()
  {
    return !RootPoseOverride.Equals(FTransform::Identity, 0.0f);
  }

  /*
   * @brief From IsdkConditional, sets the final resolved value of this conditional (and broadcasts
   * changes)
   */
  void CalculateResolvedValue()
  {
    SetResolvedValue(IsJointsOverrideActive() && IsRootOverrideActive());
  }

 private:
  TScriptInterface<IIsdkIPosedMesh> ConnectedPosedMesh;
  FTransform RootPoseOverride;
  TArray<FTransform> JointPoseOverrides;
};
