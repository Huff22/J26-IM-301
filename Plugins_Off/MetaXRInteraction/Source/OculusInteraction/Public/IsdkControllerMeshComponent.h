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
#include "Components/SkeletalMeshComponent.h"
#include "Interaction/IsdkIPosedMesh.h"
#include "DataSources/IsdkIRootPose.h"
#include "IsdkControllerMeshComponent.generated.h"

class IIsdkIHandPointerPose;
class UIsdkConditionalPoseOverride;
UCLASS(ClassGroup = (InteractionSDK), meta = (BlueprintSpawnableComponent))
class OCULUSINTERACTION_API UIsdkControllerMeshComponent : public USkeletalMeshComponent,
                                                           public IIsdkIPosedMesh
{
  GENERATED_BODY()

 public:
  // Sets default values for this component's properties
  UIsdkControllerMeshComponent();

  virtual void TickComponent(
      float DeltaTime,
      ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;

  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIHandPointerPose> GetHandPointerPoseDataSource() const;

  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> GetRootPoseDataSource() const;

  UFUNCTION(BlueprintPure, BlueprintInternalUseOnly, Category = InteractionSDK)
  USceneComponent* GetPointerPoseComponent() const;

  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetHandPointerPoseDataSource(
      const TScriptInterface<IIsdkIHandPointerPose>& InHandPointerPoseDataSource);

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetMotionController(USceneComponent* MotionControllerIn)
  {
    ParentMotionController = MotionControllerIn;
  }

  UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, Category = InteractionSDK)
  void SetRootPoseDataSource(const TScriptInterface<IIsdkIRootPose>& InRootPoseDataSource);

  /*
   * @brief Returns the Pose Override conditional object associated with this hand mesh (from
   * IsdkIPosedMesh)
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  virtual UIsdkConditionalPoseOverride* GetPoseOverride_Implementation()
  {
    return PoseOverride;
  }

  /*
   * @brief Returns the root pose of this mesh before any overrides have been applied (from
   * IsdkIPosedMesh)
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  virtual FTransform GetCurrentRootPose_Implementation()
  {
    return IIsdkIRootPose::Execute_GetRootPose(RootPoseDataSource.GetObject());
    ;
  }

  /*
   * @brief Returns the root pose of this mesh after all overrides have been applied (from
   * IsdkIPosedMesh)
   */
  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  virtual FTransform GetFinalRootPose_Implementation()
  {
    return LastUpdatedRootPose;
  }

  /*
   * @brief Sets the follow behavior that this ControllerMeshComponent should assert on its
   * PointerPoseComponent, which will use the world transform of the given component at the given
   * socket for its location, while there is currently not an override
   */
  virtual void SetFollowBehavior(USceneComponent* FollowComponentIn, FName FollowBoneSocketIn)
  {
    SocketFollowComponent = FollowComponentIn;
    SocketFollowBoneName = FollowBoneSocketIn;
  }

 protected:
  // Implementations from IsdkIPosedMesh
  virtual bool HasJointPoses_Implementation() override
  {
    return false;
  }

  void UpdateController();

  UPROPERTY(
      BlueprintGetter = GetHandPointerPoseDataSource,
      BlueprintSetter = SetHandPointerPoseDataSource,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIHandPointerPose> HandPointerPoseDataSource;

  UPROPERTY(
      BlueprintGetter = GetRootPoseDataSource,
      BlueprintSetter = SetRootPoseDataSource,
      Category = InteractionSDK)
  TScriptInterface<IIsdkIRootPose> RootPoseDataSource;

  UPROPERTY(BlueprintGetter = GetPointerPoseComponent, Category = InteractionSDK)
  TObjectPtr<USceneComponent> PointerPoseComponent;

  UPROPERTY()
  UIsdkConditionalPoseOverride* PoseOverride{};

  UPROPERTY()
  USceneComponent* ParentMotionController{};

  UPROPERTY()
  USceneComponent* SocketFollowComponent{};

  FName SocketFollowBoneName;
  FTransform LastUpdatedRootPose;
};
