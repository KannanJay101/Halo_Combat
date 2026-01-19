// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Halo_Combat : ModuleRules
{
	public Halo_Combat(ReadOnlyTargetRules Target) : base(Target)
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
			"Halo_Combat",
			"Halo_Combat/Variant_Horror",
			"Halo_Combat/Variant_Horror/UI",
			"Halo_Combat/Variant_Shooter",
			"Halo_Combat/Variant_Shooter/AI",
			"Halo_Combat/Variant_Shooter/UI",
			"Halo_Combat/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
