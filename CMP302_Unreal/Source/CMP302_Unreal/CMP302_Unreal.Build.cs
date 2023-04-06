// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CMP302_Unreal : ModuleRules
{
	public CMP302_Unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
