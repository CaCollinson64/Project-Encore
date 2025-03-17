// Copyright Old Doorways Ltd 2023
// All rights  reserved

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Camera/CameraShakeBase.h"
#include "SudsProUiLink.h"
#include "Blueprint/UserWidget.h"
#include "SudsProSettings.generated.h"

class USudsProDialogueExtension;
/**
 * 
 */
UCLASS(config = SudsPro, defaultconfig, meta=(DisplayName="SUDS Pro"))
class SUDSPRO_API USudsProSettings : public UObject
{
	GENERATED_BODY()

public:
	/// Which extensions to automatically load
	UPROPERTY(config, EditAnywhere, AdvancedDisplay, Category = SudsPro, meta = (Tooltip = "Extension classes to load automatically"))
	TArray<TSubclassOf<USudsProDialogueExtension>> ExtensionClasses;

	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (ToolTip = "Whether to transition smoothly from player to dialogue cameras when starting a dialogue"))
	bool bEnterDialogueViaSmoothCameraTransition = false;

	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (ToolTip = "Whether to transition smoothly from dialogue cameras back to player camera at dialogue end"))
	bool bExitDialogueViaSmoothCameraTransition = false;

	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (ToolTip = "If smoothly transitioning from player to dialogue cameras, the time to spend doing that"))
	float EnterDialogueSmoothCameraDuration = 0.5f;

	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (ToolTip = "If smoothly transitioning from dialogue back to player camera, the time to spend doing that"))
	float ExitDialogueSmoothCameraDuration = 0.5f;
	
	/// List of camera shake assets we can use in CameraShake
	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (DisplayName = "Camera shake assets", ToolTip ="Assets that we can reference by name in the CameraShake event"))
	TMap<FName, TSubclassOf<UCameraShakeBase>> CameraShakes;
	
	/// Ui class to use to display dialogue
	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (DisplayName = "Default UI class", ToolTip = "The default UI class to use to display dialogue UI"))
	TSubclassOf<USudsProUiLink> DefaultUiClass;

	/// Widget to use to display dialogue, for use if UI class references it 
	UPROPERTY(config, EditAnywhere, Category = SudsPro, meta = (ToolTip = "The widget to display dialogue with, if using a UI class which references this setting, such as the built-in one"))
	TSoftClassPtr<UUserWidget> WidgetClass;

	USudsProSettings();
	
};
