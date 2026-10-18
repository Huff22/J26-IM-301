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
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "IsdkInfoCardComponent.generated.h"

enum class EIsdkWidgetBlendMode : uint8;

#define LOCTEXT_NAMESPACE "UIsdkInfoCardComponent"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class OCULUSINTERACTIONPREBUILTS_API UIsdkInfoCardComponent : public UWidgetComponent
{
  GENERATED_BODY()

 public:
  UIsdkInfoCardComponent();

  virtual void TickComponent(
      float DeltaTime,
      enum ELevelTick TickType,
      FActorComponentTickFunction* ThisTickFunction) override;
  virtual void OnRegister() override;
  virtual void BeginPlay() override;

  UFUNCTION(BlueprintCallable, Category = InteractionSDK)
  void SetRoundedMaterialProperties();

  void SetLabelText(FText Text)
  {
    LabelText = Text;
    UpdateChildWidget();
  }

  void SetBodyText(FText Text)
  {
    BodyText = Text;
    UpdateChildWidget();
  }

 protected:
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  FText LabelText = LOCTEXT("DefaultLabelText", "Label");

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = InteractionSDK)
  FText BodyText = LOCTEXT("DefaultBodyText", "Body");

  float CornerRadius = 100.f;

  UPROPERTY()
  TObjectPtr<UMaterialInterface> RoundedBoxMaterial;

  bool EditingSize = false;
  FVector2D PreviousDrawSize = FVector2D::ZeroVector;

#if WITH_EDITOR
  virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

  void UpdateChildWidget();
};

#undef LOCTEXT_NAMESPACE
