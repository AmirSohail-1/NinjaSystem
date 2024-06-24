// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/QuestInteractionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestInteractionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestInteractionInterface();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestInteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void UQuestInteractionInterface::StaticRegisterNativesUQuestInteractionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestInteractionInterface);
	UClass* Z_Construct_UClass_UQuestInteractionInterface_NoRegister()
	{
		return UQuestInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UQuestInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestInteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IQuestInteractionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestInteractionInterface_Statics::ClassParams = {
		&UQuestInteractionInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestInteractionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestInteractionInterface()
	{
		if (!Z_Registration_Info_UClass_UQuestInteractionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestInteractionInterface.OuterSingleton, Z_Construct_UClass_UQuestInteractionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestInteractionInterface.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestInteractionInterface>()
	{
		return UQuestInteractionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestInteractionInterface);
	UQuestInteractionInterface::~UQuestInteractionInterface() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestInteractionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestInteractionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestInteractionInterface, UQuestInteractionInterface::StaticClass, TEXT("UQuestInteractionInterface"), &Z_Registration_Info_UClass_UQuestInteractionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestInteractionInterface), 268302204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestInteractionInterface_h_1724412740(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestInteractionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_QuestInteractionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
