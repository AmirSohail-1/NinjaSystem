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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerExperience_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerExperience;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckpointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CheckpointName;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Player Data\n" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
		{ "ToolTip", "Player Data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerExperience_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerExperience = { "PlayerExperience", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, PlayerExperience), METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerExperience_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CheckpointName_MetaData[] = {
		{ "Category", "Basic" },
		{ "ModuleRelativePath", "Public/Save/QuestSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CheckpointName = { "CheckpointName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestSaveGame, CheckpointName), METADATA_PARAMS(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CheckpointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CheckpointName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_SavedQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CurrentQuestName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_bCanChangeQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_PlayerExperience,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestSaveGame_Statics::NewProp_CheckpointName,
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
		{ Z_Construct_UClass_UQuestSaveGame, UQuestSaveGame::StaticClass, TEXT("UQuestSaveGame"), &Z_Registration_Info_UClass_UQuestSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestSaveGame), 1583358399U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_3446412698(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Save_QuestSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
