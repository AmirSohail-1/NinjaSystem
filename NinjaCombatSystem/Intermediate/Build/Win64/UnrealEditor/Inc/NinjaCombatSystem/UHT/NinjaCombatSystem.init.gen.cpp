// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatSystem_init() {}
	NINJACOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature();
	NINJACOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_NinjaCombatSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_NinjaCombatSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/NinjaCombatSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x73757B82,
				0x3F911FDE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_NinjaCombatSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_NinjaCombatSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_NinjaCombatSystem(Z_Construct_UPackage__Script_NinjaCombatSystem, TEXT("/Script/NinjaCombatSystem"), Z_Registration_Info_UPackage__Script_NinjaCombatSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x73757B82, 0x3F911FDE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
