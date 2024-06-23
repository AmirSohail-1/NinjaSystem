// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/QuestGameInstanceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGameInstanceBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestGameInstanceBase();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestGameInstanceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void UQuestGameInstanceBase::StaticRegisterNativesUQuestGameInstanceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGameInstanceBase);
	UClass* Z_Construct_UClass_UQuestGameInstanceBase_NoRegister()
	{
		return UQuestGameInstanceBase::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGameInstanceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGameInstanceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGameInstanceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestGameInstanceBase.h" },
		{ "ModuleRelativePath", "QuestGameInstanceBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGameInstanceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGameInstanceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGameInstanceBase_Statics::ClassParams = {
		&UQuestGameInstanceBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGameInstanceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGameInstanceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGameInstanceBase()
	{
		if (!Z_Registration_Info_UClass_UQuestGameInstanceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGameInstanceBase.OuterSingleton, Z_Construct_UClass_UQuestGameInstanceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGameInstanceBase.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestGameInstanceBase>()
	{
		return UQuestGameInstanceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGameInstanceBase);
	UQuestGameInstanceBase::~UQuestGameInstanceBase() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_QuestGameInstanceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_QuestGameInstanceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGameInstanceBase, UQuestGameInstanceBase::StaticClass, TEXT("UQuestGameInstanceBase"), &Z_Registration_Info_UClass_UQuestGameInstanceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGameInstanceBase), 2860884341U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_QuestGameInstanceBase_h_3664908348(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_QuestGameInstanceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_QuestGameInstanceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
