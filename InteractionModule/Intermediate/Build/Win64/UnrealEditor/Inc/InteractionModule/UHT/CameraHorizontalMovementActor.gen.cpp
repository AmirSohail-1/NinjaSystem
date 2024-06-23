// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/CameraHorizontalMovementActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraHorizontalMovementActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraHorizontalMovementActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ACameraHorizontalMovementActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	void ACameraHorizontalMovementActor::StaticRegisterNativesACameraHorizontalMovementActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraHorizontalMovementActor);
	UClass* Z_Construct_UClass_ACameraHorizontalMovementActor_NoRegister()
	{
		return ACameraHorizontalMovementActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraHorizontalMovementActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraHorizontalMovementActor.h" },
		{ "ModuleRelativePath", "Public/CameraHorizontalMovementActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "CameraMoveHorizontal" },
		{ "ModuleRelativePath", "Public/CameraHorizontalMovementActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraHorizontalMovementActor, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_LeftLimit_MetaData[] = {
		{ "Category", "CameraMoveHorizontal" },
		{ "ModuleRelativePath", "Public/CameraHorizontalMovementActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_LeftLimit = { "LeftLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraHorizontalMovementActor, LeftLimit), METADATA_PARAMS(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_LeftLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_LeftLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_RightLimit_MetaData[] = {
		{ "Category", "CameraMoveHorizontal" },
		{ "ModuleRelativePath", "Public/CameraHorizontalMovementActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_RightLimit = { "RightLimit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraHorizontalMovementActor, RightLimit), METADATA_PARAMS(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_RightLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_RightLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraHorizontalMovementActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraHorizontalMovementActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_LeftLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_RightLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraHorizontalMovementActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::ClassParams = {
		&ACameraHorizontalMovementActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraHorizontalMovementActor()
	{
		if (!Z_Registration_Info_UClass_ACameraHorizontalMovementActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraHorizontalMovementActor.OuterSingleton, Z_Construct_UClass_ACameraHorizontalMovementActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraHorizontalMovementActor.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ACameraHorizontalMovementActor>()
	{
		return ACameraHorizontalMovementActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraHorizontalMovementActor);
	ACameraHorizontalMovementActor::~ACameraHorizontalMovementActor() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraHorizontalMovementActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraHorizontalMovementActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraHorizontalMovementActor, ACameraHorizontalMovementActor::StaticClass, TEXT("ACameraHorizontalMovementActor"), &Z_Registration_Info_UClass_ACameraHorizontalMovementActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraHorizontalMovementActor), 4215668185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraHorizontalMovementActor_h_348255306(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraHorizontalMovementActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_CameraHorizontalMovementActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
