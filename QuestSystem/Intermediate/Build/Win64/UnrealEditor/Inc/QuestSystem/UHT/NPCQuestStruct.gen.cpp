// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/NPCQuestStruct.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCQuestStruct() {}
// Cross Module References
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestHolder();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestStruct();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCQuestStruct;
class UScriptStruct* FNPCQuestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCQuestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCQuestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCQuestStruct, Z_Construct_UPackage__Script_QuestSystem(), TEXT("NPCQuestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_NPCQuestStruct.OuterSingleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FNPCQuestStruct>()
{
	return FNPCQuestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCQuestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NPCName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NPCQuestStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCQuestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_NPCName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "NPCQuestStruct.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_NPCName = { "NPCName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestStruct, NPCName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_NPCName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_NPCName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(nullptr, 0) }; // 1480036892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "NPCQuestStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestStruct, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests_MetaData)) }; // 1480036892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_NPCName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewProp_Quests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		nullptr,
		&NewStructOps,
		"NPCQuestStruct",
		sizeof(FNPCQuestStruct),
		alignof(FNPCQuestStruct),
		Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCQuestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCQuestStruct.InnerSingleton, Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCQuestStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCQuestHolder;
class UScriptStruct* FNPCQuestHolder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCQuestHolder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCQuestHolder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCQuestHolder, Z_Construct_UPackage__Script_QuestSystem(), TEXT("NPCQuestHolder"));
	}
	return Z_Registration_Info_UScriptStruct_NPCQuestHolder.OuterSingleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FNPCQuestHolder>()
{
	return FNPCQuestHolder::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCQuestHolder_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Quests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "NPCQuestStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCQuestHolder>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests_Inner = { "Quests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(nullptr, 0) }; // 1480036892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "NPCQuestStruct.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests = { "Quests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNPCQuestHolder, Quests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests_MetaData)) }; // 1480036892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewProp_Quests,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		nullptr,
		&NewStructOps,
		"NPCQuestHolder",
		sizeof(FNPCQuestHolder),
		alignof(FNPCQuestHolder),
		Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNPCQuestHolder()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCQuestHolder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCQuestHolder.InnerSingleton, Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCQuestHolder.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_NPCQuestStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_NPCQuestStruct_h_Statics::ScriptStructInfo[] = {
		{ FNPCQuestStruct::StaticStruct, Z_Construct_UScriptStruct_FNPCQuestStruct_Statics::NewStructOps, TEXT("NPCQuestStruct"), &Z_Registration_Info_UScriptStruct_NPCQuestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCQuestStruct), 236093646U) },
		{ FNPCQuestHolder::StaticStruct, Z_Construct_UScriptStruct_FNPCQuestHolder_Statics::NewStructOps, TEXT("NPCQuestHolder"), &Z_Registration_Info_UScriptStruct_NPCQuestHolder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCQuestHolder), 4256157027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_NPCQuestStruct_h_471667832(TEXT("/Script/QuestSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_NPCQuestStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_NPCQuestStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
