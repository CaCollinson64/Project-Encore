using UnrealBuildTool;

public class StylishCombatStarterKitServerTarget : TargetRules
{
	public StylishCombatStarterKitServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("StylishCombatStarterKit");
	}
}
