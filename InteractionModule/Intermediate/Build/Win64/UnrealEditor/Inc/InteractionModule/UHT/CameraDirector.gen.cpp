// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/CameraDirector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraDirector();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraDirector);
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraTwo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTwo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "Public/CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "Public/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne = { "CameraOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraDirector, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "Public/CameraDirector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo = { "CameraTwo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraDirector, CameraTwo), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraTwo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		if (!Z_Registration_Info_UClass_ACameraDirector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraDirector.OuterSingleton, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraDirector.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
	ACameraDirector::~ACameraDirector() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraDirector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraDirector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraDirector, ACameraDirector::StaticClass, TEXT("ACameraDirector"), &Z_Registration_Info_UClass_ACameraDirector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraDirector), 3020963763U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraDirector_h_1715762338(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraDirector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraDirector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
