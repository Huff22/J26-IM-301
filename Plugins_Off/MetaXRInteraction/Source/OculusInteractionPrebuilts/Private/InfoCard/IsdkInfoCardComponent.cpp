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

#include "InfoCard/IsdkInfoCardComponent.h"

#include "IsdkContentAssetPaths.h"
#include "IsdkInteractableWidgetComponent.h"
#include "InfoCard/IsdkInfoCardWidget.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/MaterialInstanceDynamic.h"

UIsdkInfoCardComponent::UIsdkInfoCardComponent()
{
  PrimaryComponentTick.bCanEverTick = true;

  static ConstructorHelpers::FObjectFinder<UMaterialInterface> WidgetMaterialMasked(
      IsdkContentAssetPaths::Materials::Widget3DRoundedBox_Masked);
  if (ensureMsgf(
          WidgetMaterialMasked.Succeeded(), TEXT("Could not find Widget3DRoundedBox_Masked")))
  {
    RoundedBoxMaterial = WidgetMaterialMasked.Object;
  }
  BackgroundColor = FLinearColor(0.020289, 0.020289, 0.020289, 1.0);

  WidgetClass = ConstructorHelpers::FClassFinder<UUserWidget>(
                    TEXT("/OculusInteractionSamples/Widgets/InfoCardWidget"))
                    .Class;
  bDrawAtDesiredSize = true;
}

void UIsdkInfoCardComponent::TickComponent(
    float DeltaTime,
    enum ELevelTick TickType,
    FActorComponentTickFunction* ThisTickFunction)
{
  Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
  SetRoundedMaterialProperties();
}

#if WITH_EDITOR

void UIsdkInfoCardComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
  FProperty* Property = PropertyChangedEvent.MemberProperty;
  if (!Property)
  {
    Super::PostEditChangeProperty(PropertyChangedEvent);
    return;
  }

  auto PropertyName = Property->GetFName();
  if (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(UIsdkInfoCardComponent, DrawSize))
  {
    if (PropertyChangedEvent.ChangeType == EPropertyChangeType::Interactive)
    {
      EditingSize = true;
    }
    else if (PropertyChangedEvent.ChangeType == EPropertyChangeType::ValueSet)
    {
      EditingSize = false;
    }
  }
  Super::PostEditChangeProperty(PropertyChangedEvent);
}

#endif

void UIsdkInfoCardComponent::SetRoundedMaterialProperties()
{
  const FString MaterialName = TEXT("");
  SetMaterial(0, RoundedBoxMaterial);
  UMaterialInstanceDynamic* DynamicMaterial = GetMaterialInstance();
  if (!DynamicMaterial)
  {
    return;
  }

  const auto _Widget = GetWidget();
  auto DesiredSize = _Widget ? _Widget->GetDesiredSize() : DrawSize;

  DynamicMaterial->SetVectorParameterValue(
      FName("Dimensions"), FVector4(DesiredSize.X, DesiredSize.Y, 0.0, 0.0));

  DynamicMaterial->SetVectorParameterValue(
      FName("Radii"), FVector4(CornerRadius, CornerRadius, CornerRadius, CornerRadius));
  SetBackgroundColor(BackgroundColor);
  UpdateMaterialInstanceParameters();
  DynamicMaterial->SetVectorParameterValue(FName("BackColor"), BackgroundColor);
}

void UIsdkInfoCardComponent::OnRegister()
{
  Super::OnRegister();
  if (!EditingSize)
  {
    PreviousDrawSize = DrawSize;
  }
  SetRoundedMaterialProperties();
  UpdateChildWidget();
}

void UIsdkInfoCardComponent::BeginPlay()
{
  Super::BeginPlay();
  UpdateChildWidget();
}

void UIsdkInfoCardComponent::UpdateChildWidget()
{
  auto InfoCardWidget = Cast<UIsdkInfoCardWidget>(GetWidget());
  if (!InfoCardWidget)
  {
    return;
  }

  InfoCardWidget->LabelText = LabelText;
  InfoCardWidget->BodyText = BodyText;
  InfoCardWidget->PreConstruct(true);

  if (IsInGameThread())
  {
    UpdateWidget();
  }
}
