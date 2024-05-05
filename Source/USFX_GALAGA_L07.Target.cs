// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class USFX_GALAGA_L07Target : TargetRules
{
	public USFX_GALAGA_L07Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("USFX_GALAGA_L07");
	}
}
