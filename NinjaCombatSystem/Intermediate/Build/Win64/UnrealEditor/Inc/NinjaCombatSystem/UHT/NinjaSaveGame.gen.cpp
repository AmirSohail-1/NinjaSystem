// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/NinjaSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaSaveGame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaSaveGame();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	void UNinjaSaveGame::StaticRegisterNativesUNinjaSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaSaveGame);
	UClass* Z_Construct_UClass_UNinjaSaveGame_NoRegister()
	{
		return UNinjaSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NinjaSaveGame.h" },
		{ "ModuleRelativePath", "Public/NinjaSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerName_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/NinjaSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaSaveGame, PlayerName), METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLevel_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/NinjaSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLevel = { "PlayerLevel", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaSaveGame, PlayerLevel), METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLocation_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/NinjaSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLocation = { "PlayerLocation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaSaveGame, PlayerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerRotation_MetaData[] = {
		{ "Category", "SaveGameData" },
		{ "ModuleRelativePath", "Public/NinjaSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerRotation = { "PlayerRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaSaveGame, PlayerRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaSaveGame_Statics::NewProp_PlayerRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaSaveGame_Statics::ClassParams = {
		&UNinjaSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNinjaSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaSaveGame()
	{
		if (!Z_Registration_Info_UClass_UNinjaSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaSaveGame.OuterSingleton, Z_Construct_UClass_UNinjaSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNinjaSaveGame.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UNinjaSaveGame>()
	{
		return UNinjaSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaSaveGame);
	UNinjaSaveGame::~UNinjaSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaSaveGame, UNinjaSaveGame::StaticClass, TEXT("UNinjaSaveGame"), &Z_Registration_Info_UClass_UNinjaSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaSaveGame), 2482329147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveGame_h_166950013(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
