// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestSystem/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuest() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FQuest>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuest cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Quest;
class UScriptStruct* FQuest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Quest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Quest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuest, Z_Construct_UPackage__Script_NinjaCombatSystem(), TEXT("Quest"));
	}
	return Z_Registration_Info_UScriptStruct_Quest.OuterSingleton;
}
template<> NINJACOMBATSYSTEM_API UScriptStruct* StaticStruct<FQuest>()
{
	return FQuest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuest_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/Quest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// The name of the quest\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/Quest.h" },
		{ "ToolTip", "The name of the quest" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// A description of the quest\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/Quest.h" },
		{ "ToolTip", "A description of the quest" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// Whether the quest is completed\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/Quest.h" },
		{ "ToolTip", "Whether the quest is completed" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit(void* Obj)
	{
		((FQuest*)Obj)->bIsCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted = { "bIsCompleted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FQuest), &Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// The list of objectives for the quest\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/Quest.h" },
		{ "ToolTip", "The list of objectives for the quest" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQuest, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_bIsCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuest_Statics::NewProp_Objectives,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Quest",
		sizeof(FQuest),
		alignof(FQuest),
		Z_Construct_UScriptStruct_FQuest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuest()
	{
		if (!Z_Registration_Info_UScriptStruct_Quest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Quest.InnerSingleton, Z_Construct_UScriptStruct_FQuest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Quest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_Quest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_Quest_h_Statics::ScriptStructInfo[] = {
		{ FQuest::StaticStruct, Z_Construct_UScriptStruct_FQuest_Statics::NewStructOps, TEXT("Quest"), &Z_Registration_Info_UScriptStruct_Quest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuest), 1864122079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_Quest_h_285700088(TEXT("/Script/NinjaCombatSystem"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_Quest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_Quest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
