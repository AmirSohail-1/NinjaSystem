// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestGiverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestGiverComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestGiverComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestGiverComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	void UQuestGiverComponent::StaticRegisterNativesUQuestGiverComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestGiverComponent);
	UClass* Z_Construct_UClass_UQuestGiverComponent_NoRegister()
	{
		return UQuestGiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestGiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestGiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestGiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestGiverComponent.h" },
		{ "ModuleRelativePath", "Public/QuestGiverComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestGiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestGiverComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestGiverComponent_Statics::ClassParams = {
		&UQuestGiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestGiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestGiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestGiverComponent()
	{
		if (!Z_Registration_Info_UClass_UQuestGiverComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestGiverComponent.OuterSingleton, Z_Construct_UClass_UQuestGiverComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestGiverComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UQuestGiverComponent>()
	{
		return UQuestGiverComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestGiverComponent);
	UQuestGiverComponent::~UQuestGiverComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestGiverComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestGiverComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestGiverComponent, UQuestGiverComponent::StaticClass, TEXT("UQuestGiverComponent"), &Z_Registration_Info_UClass_UQuestGiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestGiverComponent), 3663231768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestGiverComponent_h_587442522(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestGiverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestGiverComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
