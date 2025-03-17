#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSudsProEditor, Verbose, All);

class FSudsProEditorModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
protected:
	TSharedPtr<FSlateStyleSet> StyleSet;
};
