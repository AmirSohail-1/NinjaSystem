// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestSystem/NinjaPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_ANinjaPlayerController();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_ANinjaPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	void ANinjaPlayerController::StaticRegisterNativesANinjaPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaPlayerController);
	UClass* Z_Construct_UClass_ANinjaPlayerController_NoRegister()
	{
		return ANinjaPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "QuestSystem/NinjaPlayerController.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/NinjaPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPlayerController_Statics::ClassParams = {
		&ANinjaPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPlayerController()
	{
		if (!Z_Registration_Info_UClass_ANinjaPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaPlayerController.OuterSingleton, Z_Construct_UClass_ANinjaPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANinjaPlayerController.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<ANinjaPlayerController>()
	{
		return ANinjaPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPlayerController);
	ANinjaPlayerController::~ANinjaPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_NinjaPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_NinjaPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaPlayerController, ANinjaPlayerController::StaticClass, TEXT("ANinjaPlayerController"), &Z_Registration_Info_UClass_ANinjaPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaPlayerController), 1503832104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_NinjaPlayerController_h_2165897539(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_NinjaPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_NinjaPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
