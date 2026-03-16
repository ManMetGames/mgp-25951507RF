// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class mgp25951507RF : ModuleRules
{
	public mgp25951507RF(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"mgp25951507RF",
			"mgp25951507RF/Variant_Platforming",
			"mgp25951507RF/Variant_Platforming/Animation",
			"mgp25951507RF/Variant_Combat",
			"mgp25951507RF/Variant_Combat/AI",
			"mgp25951507RF/Variant_Combat/Animation",
			"mgp25951507RF/Variant_Combat/Gameplay",
			"mgp25951507RF/Variant_Combat/Interfaces",
			"mgp25951507RF/Variant_Combat/UI",
			"mgp25951507RF/Variant_SideScrolling",
			"mgp25951507RF/Variant_SideScrolling/AI",
			"mgp25951507RF/Variant_SideScrolling/Gameplay",
			"mgp25951507RF/Variant_SideScrolling/Interfaces",
			"mgp25951507RF/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
