// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/Save/QuestSaveGame.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSaveGame();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSaveGame_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void UQuestSaveGame::StaticRegisterNativesUQuestSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestSaveGame);
	UClass* Z_Construct_UClass_UQuestSaveGame_NoRegister()
	{
		return UQuestSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UQuestSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedQuests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQuestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentQuestName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanChangeQuest_MetaData[];
#endif
		static void NewProp_bCanChangeQuest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanChangeQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Save/QuestSaveGame.h" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_Inner = { "SavedQuests", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(nullptr, 0) }; // 1480036892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests = { "SavedQuests", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, SavedQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_MetaData)) }; // 1480036892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName = { "CurrentQuestName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, CurrentQuestName), METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest_SetBit(void* Obj)
	{
		((UQuestSaveGame*)Obj)->bCanChangeQuest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest = { "bCanChangeQuest", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UQuestSaveGame), &Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestSaveGame_Statics::ClassParams = {
		&UQuestSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestSaveGame()
	{
		if (!Z_Registration_Info_UClass_UQuestSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestSaveGame.OuterSingleton, Z_Construct_UClass_UQuestSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestSaveGame.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestSaveGame>()
	{
		return UQuestSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestSaveGame);
	UQuestSaveGame::~UQuestSaveGame() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestSaveGame, UQuestSaveGame::StaticClass, TEXT("UQuestSaveGame"), &Z_Registration_Info_UClass_UQuestSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSaveGame), 3321042382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_2991922898(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
