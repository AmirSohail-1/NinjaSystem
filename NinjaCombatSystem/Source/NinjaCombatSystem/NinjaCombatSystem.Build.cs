// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NinjaCombatSystem : ModuleRules
{
	public NinjaCombatSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		// Adjust the path to QuestSystem/Public relative to NinjaCombatSystem module
		// string QuestSystemPath = "../../../../Plugins/QuestSystem/Source/QuestSystem/Public";
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				// QuestSystemPath
				 
				
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"EnhancedInput",
				"GameplayTags",
				"UMG", 
				// "QuestSystem",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// "CoreUObject",
				// "Engine",
				// "Slate",
				// "SlateCore",
				// "EnhancedInput",
				// "GameplayTags",
				// "UMG",  
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
	