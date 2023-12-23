// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SKGAnimationBudgetAllocatorHelper : ModuleRules
{
	public SKGAnimationBudgetAllocatorHelper(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"AnimationBudgetAllocator"
			}
			);
        
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine"
			}
			);
	}
}
