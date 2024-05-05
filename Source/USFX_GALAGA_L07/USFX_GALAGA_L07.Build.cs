// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class USFX_GALAGA_L07 : ModuleRules
{
	public USFX_GALAGA_L07(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
