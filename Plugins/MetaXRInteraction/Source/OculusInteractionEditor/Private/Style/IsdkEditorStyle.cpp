// @lint-ignore-every LICENSELINT
// Copyright Epic Games, Inc. All Rights Reserved.

#include "IsdkEditorStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "Framework/Application/SlateApplication.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"

TSharedPtr<FSlateStyleSet> FIsdkEditorStyle::StyleInstance = nullptr;

void FIsdkEditorStyle::Initialize()
{
  if (!StyleInstance.IsValid())
  {
    StyleInstance = Create();
    FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
  }
}

void FIsdkEditorStyle::Shutdown()
{
  FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
  ensure(StyleInstance.IsUnique());
  StyleInstance.Reset();
}

FName FIsdkEditorStyle::GetStyleSetName()
{
  static FName StyleSetName(TEXT("IsdkEditorStyle"));
  return StyleSetName;
}

#define IMAGE_BRUSH(RelativePath, ...) \
  FSlateImageBrush(Style->RootToContentDir(RelativePath, TEXT(".png")), __VA_ARGS__)

TSharedRef<FSlateStyleSet> FIsdkEditorStyle::Create()
{
  TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("IsdkEditorStyle"));
  Style->SetContentRoot(
      IPluginManager::Get().FindPlugin("OculusInteraction")->GetBaseDir() / TEXT("Resources"));

  Style->Set("IsdkEditor.MetaLogo", new IMAGE_BRUSH(TEXT("ButtonIcon_80x"), FVector2D(80.f, 80.f)));

  return Style;
}

#undef IMAGE_BRUSH

void FIsdkEditorStyle::ReloadTextures()
{
  if (FSlateApplication::IsInitialized())
  {
    FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
  }
}

const ISlateStyle& FIsdkEditorStyle::Get()
{
  return *StyleInstance;
}
