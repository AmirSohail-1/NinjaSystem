// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/PickupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_APickupActor();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_APickupActor_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestInteractionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	void APickupActor::StaticRegisterNativesAPickupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickupActor);
	UClass* Z_Construct_UClass_APickupActor_NoRegister()
	{
		return APickupActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupActor.h" },
		{ "ModuleRelativePath", "PickupActor.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickupActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UQuestInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(APickupActor, IQuestInteractionInterface), false },  // 268302204
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickupActor_Statics::ClassParams = {
		&APickupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupActor()
	{
		if (!Z_Registration_Info_UClass_APickupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickupActor.OuterSingleton, Z_Construct_UClass_APickupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickupActor.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<APickupActor>()
	{
		return APickupActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupActor);
	APickupActor::~APickupActor() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickupActor, APickupActor::StaticClass, TEXT("APickupActor"), &Z_Registration_Info_UClass_APickupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickupActor), 2635390013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_858188701(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
