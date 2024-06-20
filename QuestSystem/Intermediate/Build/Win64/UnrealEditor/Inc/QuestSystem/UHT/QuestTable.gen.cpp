// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestTable() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestTable;
class UScriptStruct* FQuestTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTable, Z_Construct_UPackage__Script_QuestSystem(), TEXT("QuestTable"));
	}
	return Z_Registration_Info_UScriptStruct_QuestTable.OuterSingleton;
}
template<> QUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestTable>()
{
	return FQuestTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompleted_MetaData[];
#endif
		static void NewProp_bIsCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompleted;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objectives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTimed_MetaData[];
#endif
		static void NewProp_bIsTimed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTimed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTable, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
	{
		((FQuestTable*)Obj)->bIsCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQuestTable), &Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTable, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// New properties for timed quests\n" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
		{ "ToolTip", "New properties for timed quests" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed_SetBit(void* Obj)
	{
		((FQuestTable*)Obj)->bIsTimed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed = { "bIsTimed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQuestTable), &Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestTable/QuestTable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuestTable, TimeLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TimeLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_Objectives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_bIsTimed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTable_Statics::NewProp_TimeLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestTable",
		sizeof(FQuestTable),
		alignof(FQuestTable),
		Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTable()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton, Z_Construct_UScriptStruct_FQuestTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTable_QuestTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTable_QuestTable_h_Statics::ScriptStructInfo[] = {
		{ FQuestTable::StaticStruct, Z_Construct_UScriptStruct_FQuestTable_Statics::NewStructOps, TEXT("QuestTable"), &Z_Registration_Info_UScriptStruct_QuestTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestTable), 4046486730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTable_QuestTable_h_1431200518(TEXT("/Script/QuestSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTable_QuestTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestTable_QuestTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
