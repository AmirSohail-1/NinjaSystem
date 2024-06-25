// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/QuestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestGameMode();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_AQuestGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	DEFINE_FUNCTION(AQuestGameMode::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestGameMode::execSaveGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame();
		P_NATIVE_END;
	}
	void AQuestGameMode::StaticRegisterNativesAQuestGameMode()
	{
		UClass* Class = AQuestGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadGame", &AQuestGameMode::execLoadGame },
			{ "SaveGame", &AQuestGameMode::execSaveGame },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "QuestGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestGameMode, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestGameMode_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestGameMode_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Save" },
		{ "ModuleRelativePath", "QuestGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestGameMode, nullptr, "SaveGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestGameMode_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestGameMode_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestGameMode);
	UClass* Z_Construct_UClass_AQuestGameMode_NoRegister()
	{
		return AQuestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AQuestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCheckpointName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentCheckpointName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestGameMode_LoadGame, "LoadGame" }, // 347412889
		{ &Z_Construct_UFunction_AQuestGameMode_SaveGame, "SaveGame" }, // 1096434084
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QuestGameMode.h" },
		{ "ModuleRelativePath", "QuestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestGameMode_Statics::NewProp_CurrentCheckpointName_MetaData[] = {
		{ "Category", "Checkpoint" },
		{ "Comment", "// Track the current checkpoint name\n" },
		{ "ModuleRelativePath", "QuestGameMode.h" },
		{ "ToolTip", "Track the current checkpoint name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AQuestGameMode_Statics::NewProp_CurrentCheckpointName = { "CurrentCheckpointName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AQuestGameMode, CurrentCheckpointName), METADATA_PARAMS(Z_Construct_UClass_AQuestGameMode_Statics::NewProp_CurrentCheckpointName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestGameMode_Statics::NewProp_CurrentCheckpointName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestGameMode_Statics::NewProp_CurrentCheckpointName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestGameMode_Statics::ClassParams = {
		&AQuestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AQuestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestGameMode()
	{
		if (!Z_Registration_Info_UClass_AQuestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestGameMode.OuterSingleton, Z_Construct_UClass_AQuestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQuestGameMode.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<AQuestGameMode>()
	{
		return AQuestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestGameMode);
	AQuestGameMode::~AQuestGameMode() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQuestGameMode, AQuestGameMode::StaticClass, TEXT("AQuestGameMode"), &Z_Registration_Info_UClass_AQuestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestGameMode), 417243381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_3852049509(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
