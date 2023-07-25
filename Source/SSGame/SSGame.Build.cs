// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SSGame : ModuleRules
{
	public SSGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"SSGame/Public/Component",
			}
		);

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay"  });
	}
}
