// Copyright Old Doorways Ltd 2023
// All rights  reserved
#include "SudsProSettings.h"

#include "Extensions/SudsProExtCameraTools.h"
#include "Extensions/SudsProExtCharacterTools.h"
#include "Extensions/SudsProExtSequenceTools.h"
#include "Extensions/SudsProExtWait.h"
#include "SudsProUiLink.h"

USudsProSettings::USudsProSettings()
{
	// Set up extension defaults

	// NO LONGER setting up defaults that pull in BPs here
	// This gets called during CDO construction, and if the widget link causes a casscade load into
	// other plugins, such as CommonUI, this can cause fragility in the loading process. If CommonUI
	// isn't loaded already it will fail, and mark CommonUI as a bad case and all user BPs referencing it
	// won't work! And randomly as well, since it depends on timing.
	// Instead, we'll leave DefaultUiClass blank, and detect that in the widget link and default it there.
	
	// FindObject works if you do it later, just not now! Need LoadObject
	// DefaultUiClass = LoadObject<UClass>(nullptr,
	//                                     TEXT("/SudsPro/Blueprints/BP_SudsProUiWidgetLink.BP_SudsProUiWidgetLink_C"));
	// CameraShakes.Add(FName("Default"),
	//                  LoadObject<UClass>(nullptr,
	//                                     TEXT(
	// 	                                    "/SudsPro/Blueprints/BP_SudsProDefaultCameraShake.BP_SudsProDefaultCameraShake_C")));
	ExtensionClasses.Add(USudsProExtCameraTools::StaticClass());
	ExtensionClasses.Add(USudsProExtCharacterTools::StaticClass());
	ExtensionClasses.Add(USudsProExtSequenceTools::StaticClass());
	ExtensionClasses.Add(USudsProExtWait::StaticClass());
}
