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
#include "Engine/ImportantToggleSettingInterface.h"
#include "IsdkTelemetryPrivacySettings.generated.h"

/*
 * Privacy settings interface for ISDK telemetry, only utilized if Meta XR isn't installed
 */
UCLASS(MinimalAPI, hidecategories = Object, config = EditorSettings)
class UIsdkTelemetryPrivacySettings : public UObject, public IImportantToggleSettingInterface
{
  GENERATED_UCLASS_BODY()

  UPROPERTY(EditAnywhere, Category = Options)
  bool bIsEnabled = false;

 public:
  // Begin IImportantToggleSettingInterface
  virtual void GetToggleCategoryAndPropertyNames(FName& OutCategory, FName& OutProperty)
      const override;
  virtual FText GetFalseStateLabel() const override;
  virtual FText GetFalseStateTooltip() const override;
  virtual FText GetFalseStateDescription() const override;
  virtual FText GetTrueStateLabel() const override;
  virtual FText GetTrueStateTooltip() const override;
  virtual FText GetTrueStateDescription() const override;
  virtual FString GetAdditionalInfoUrl() const override;
  virtual FText GetAdditionalInfoUrlLabel() const override;
  // End IImportantToggleSettingInterface

#if WITH_EDITOR
  //~ Begin UObject Interface
  virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
  //~ End UObject Interface
#endif // WITH_EDITOR

 private:
  FText Description;
  TMap<FString, FString> Links;
};
