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
#include "Templates/SharedPointer.h"
#include "Engine/EngineTypes.h"

DECLARE_LOG_CATEGORY_EXTERN(LogOculusInteractionEditorTelemetry, Log, All);

/**
 * Generic class that handles setting up delegates for ISDK-specific telemetry, and leveraging the
 * EngineTelemetry DLL as needed
 */

class OCULUSINTERACTIONEDITOR_API FIsdkEditorTelemetry
{
 public:
  FIsdkEditorTelemetry() {};
  ~FIsdkEditorTelemetry() {};

  static FIsdkEditorTelemetry& Get();

  void StartSession(bool bMetaXRPresent);
  void EndSession();
  void HandleConsentEssentialClicked();
  void HandleConsentAdditionalClicked();
  bool GetTelemetryReady()
  {
    return bTelemetryWrapperReady;
  }

 private:
  bool bTelemetryWrapperReady = false;
};
