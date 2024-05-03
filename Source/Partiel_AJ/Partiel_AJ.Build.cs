// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Partiel_AJ : ModuleRules
{
	public Partiel_AJ(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
