using UnrealBuildTool;

public class StylishCombatStarterKitClientTarget : TargetRules
{
	public StylishCombatStarterKitClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("StylishCombatStarterKit");
	}
}
