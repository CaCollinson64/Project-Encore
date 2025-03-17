// Copyright Old Doorways Ltd 2023
// All rights  reserved
using UnrealBuildTool;

public class SudsProEditor : ModuleRules
{
    public SudsProEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "UnrealEd",
                "Projects", // So that we can use the IPluginManager, required for our custom style
                "EditorStyle", 
                "SudsPro",
                "Settings"
            }
        );
    }
}