using UnrealBuildTool;

public class StylishCombatStarterKitEditorTarget : TargetRules
{
	public StylishCombatStarterKitEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("StylishCombatStarterKit");
	}
}
