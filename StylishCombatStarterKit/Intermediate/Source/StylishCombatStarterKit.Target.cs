using UnrealBuildTool;

public class StylishCombatStarterKitTarget : TargetRules
{
	public StylishCombatStarterKitTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("StylishCombatStarterKit");
	}
}
