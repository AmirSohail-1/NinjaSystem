// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSystem_init() {}
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature();
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_TimedQuestTickDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_QuestSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_QuestSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_QuestSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QuestSystem_TimedQuestTickDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/QuestSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3F7C7A4B,
				0x94B56CF7,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_QuestSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_QuestSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_QuestSystem(Z_Construct_UPackage__Script_QuestSystem, TEXT("/Script/QuestSystem"), Z_Registration_Info_UPackage__Script_QuestSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F7C7A4B, 0x94B56CF7));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
