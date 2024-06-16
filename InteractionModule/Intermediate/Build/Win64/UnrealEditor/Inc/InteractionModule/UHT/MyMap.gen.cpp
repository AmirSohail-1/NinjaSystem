// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/MyMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMap() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AMyMap();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AMyMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	void AMyMap::StaticRegisterNativesAMyMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMap);
	UClass* Z_Construct_UClass_AMyMap_NoRegister()
	{
		return AMyMap::StaticClass();
	}
	struct Z_Construct_UClass_AMyMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyMap.h" },
		{ "ModuleRelativePath", "Public/MyMap.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMap_Statics::ClassParams = {
		&AMyMap::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMap()
	{
		if (!Z_Registration_Info_UClass_AMyMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMap.OuterSingleton, Z_Construct_UClass_AMyMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMap.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<AMyMap>()
	{
		return AMyMap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMap);
	AMyMap::~AMyMap() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_MyMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_MyMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMap, AMyMap::StaticClass, TEXT("AMyMap"), &Z_Registration_Info_UClass_AMyMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMap), 3745858320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_MyMap_h_2496493015(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_MyMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_MyMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
