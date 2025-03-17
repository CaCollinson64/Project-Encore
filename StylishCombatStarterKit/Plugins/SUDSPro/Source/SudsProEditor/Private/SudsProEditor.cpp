#include "SudsProEditor.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "SudsProSettings.h"

#define LOCTEXT_NAMESPACE "FSudsProEditorModule"

void FSudsProEditorModule::StartupModule()
{
	// Need to duplicate this from SUDS Editor Module, since it can't find the SUDS plugin in this case
	auto SudsProPlugin = IPluginManager::Get().FindPlugin(TEXT("SudsPro"));
	if (SudsProPlugin.IsValid())
	{
		const FString IconDir = SudsProPlugin->GetBaseDir() + "/Content/Editor/Slate/Icons";
		const FVector2D Sz16 = FVector2D(16.0f, 16.0f);
		const FVector2D Sz64 = FVector2D(64.0f, 64.0f);

		StyleSet = MakeShared<FSlateStyleSet>("SUDSStyleSet");
		StyleSet->Set(TEXT("ClassIcon.SUDSScript"), new FSlateImageBrush(IconDir / TEXT("SUDSScript_16x.png"), Sz16));
		StyleSet->Set(TEXT("ClassThumbnail.SUDSScript"), new FSlateImageBrush(IconDir / TEXT("SUDSScript_64x.png"), Sz64));

		FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
	}

	// register settings
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");

	if (SettingsModule)
	{
		ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings("Project", "Plugins", "SudsPro",
			LOCTEXT("SudsProSettingsName", "SUDS Pro"),
			LOCTEXT("SudsProSettingsDescription", "Configure the SUDS Pro plug-in."),
			GetMutableDefault<USudsProSettings>()
		);
	}
	
	UE_LOG(LogSudsProEditor, Log, TEXT("SudsPro Editor Module Started"))
}

void FSudsProEditorModule::ShutdownModule()
{
	if (StyleSet.IsValid())
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSet.Get());
	}
	UE_LOG(LogSudsProEditor, Log, TEXT("SudsPro Editor Module Shut Down"))	
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FSudsProEditorModule, SudsProEditor)
DEFINE_LOG_CATEGORY(LogSudsProEditor);
