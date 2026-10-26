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
#include "UObject/Interface.h"
#include "IsdkIPosedMesh.generated.h"

class UIsdkConditionalPoseOverride;

UINTERFACE()
class OCULUSINTERACTION_API UIsdkIPosedMesh : public UInterface
{
  GENERATED_BODY()
};

/* Interface to be implemented by static and skeletal meshes whose root and joint poses will either
 * be queried for recognition, or overridden by external forces (typically hand grab poses and poke
 * limiting)*/
class OCULUSINTERACTION_API IIsdkIPosedMesh
{
  GENERATED_BODY()

 public:
  /**
   * @brief Whether or not the implementing class has joint poses
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const bool HasJointPoses();
  virtual bool HasJointPoses_Implementation()
      PURE_VIRTUAL(IIsdkIPosedMesh::HasJointPoses, return false;);

  /**
   * @brief Gets the current Pose Override Conditional, which contains the current override state
   * and the actual override transforms for root and joint poses
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const UIsdkConditionalPoseOverride* GetPoseOverride();
  virtual UIsdkConditionalPoseOverride* GetPoseOverride_Implementation()
      PURE_VIRTUAL(IIsdkIPosedMesh::GetPoseOverride, return nullptr;);

  /*
   * @brief Gets the final root pose for the implementing class, after all overrides have been
   * applied
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const FTransform GetFinalRootPose();
  virtual FTransform GetFinalRootPose_Implementation()
      PURE_VIRTUAL(IIsdkIPosedMesh::GetRootPose, return FTransform::Identity;);

  /*
   * @brief Gets the root pose for the implementing class, before overrides are applied (typically
   * via the IsdkIRootPose interface)
   */
  UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = InteractionSDK)
  const FTransform GetCurrentRootPose();
  virtual FTransform GetCurrentRootPose_Implementation()
      PURE_VIRTUAL(IIsdkIPosedMesh::GetRootPose, return FTransform::Identity;);
};
