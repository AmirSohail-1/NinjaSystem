// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/CameraGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraGameMode();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	void ACameraGameMode::StaticRegisterNativesACameraGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraGameMode);
	UClass* Z_Construct_UClass_ACameraGameMode_NoRegister()
	{
		return ACameraGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACameraGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CameraGameMode.h" },
		{ "ModuleRelativePath", "Public/CameraGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraGameMode_Statics::ClassParams = {
		&ACameraGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACameraGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACameraGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACameraGameMode()
	{
		if (!Z_Registration_Info_UClass_ACameraGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraGameMode.OuterSingleton, Z_Construct_UClass_ACameraGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraGameMode.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ACameraGameMode>()
	{
		return ACameraGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraGameMode);
	ACameraGameMode::~ACameraGameMode() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_CameraGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_CameraGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraGameMode, ACameraGameMode::StaticClass, TEXT("ACameraGameMode"), &Z_Registration_Info_UClass_ACameraGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraGameMode), 2963607809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_CameraGameMode_h_4038727092(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_CameraGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_CameraGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
