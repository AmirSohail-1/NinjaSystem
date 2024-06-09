// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/LevelTransitionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelTransitionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ULevelTransitionInterface();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ULevelTransitionInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	void ULevelTransitionInterface::StaticRegisterNativesULevelTransitionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelTransitionInterface);
	UClass* Z_Construct_UClass_ULevelTransitionInterface_NoRegister()
	{
		return ULevelTransitionInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULevelTransitionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelTransitionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelTransitionInterface_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelTransitionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelTransitionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelTransitionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILevelTransitionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelTransitionInterface_Statics::ClassParams = {
		&ULevelTransitionInterface::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelTransitionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULevelTransitionInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULevelTransitionInterface()
	{
		if (!Z_Registration_Info_UClass_ULevelTransitionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelTransitionInterface.OuterSingleton, Z_Construct_UClass_ULevelTransitionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelTransitionInterface.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ULevelTransitionInterface>()
	{
		return ULevelTransitionInterface::StaticClass();
	}
	ULevelTransitionInterface::ULevelTransitionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelTransitionInterface);
	ULevelTransitionInterface::~ULevelTransitionInterface() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelTransitionInterface, ULevelTransitionInterface::StaticClass, TEXT("ULevelTransitionInterface"), &Z_Registration_Info_UClass_ULevelTransitionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelTransitionInterface), 1115125552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionInterface_h_4206708185(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
