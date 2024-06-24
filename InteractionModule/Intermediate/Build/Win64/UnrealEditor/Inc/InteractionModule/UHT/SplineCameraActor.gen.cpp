// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/SplineCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineCameraActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ASplineCameraActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ASplineCameraActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(ASplineCameraActor::execSetCameraAsViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraAsViewTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASplineCameraActor::execIsAtEndOfSpline)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAtEndOfSpline_Implementation();
		P_NATIVE_END;
	}
	struct SplineCameraActor_eventIsAtEndOfSpline_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		SplineCameraActor_eventIsAtEndOfSpline_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_ASplineCameraActor_IsAtEndOfSpline = FName(TEXT("IsAtEndOfSpline"));
	bool ASplineCameraActor::IsAtEndOfSpline() const
	{
		SplineCameraActor_eventIsAtEndOfSpline_Parms Parms;
		const_cast<ASplineCameraActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_ASplineCameraActor_IsAtEndOfSpline),&Parms);
		return !!Parms.ReturnValue;
	}
	void ASplineCameraActor::StaticRegisterNativesASplineCameraActor()
	{
		UClass* Class = ASplineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAtEndOfSpline", &ASplineCameraActor::execIsAtEndOfSpline },
			{ "SetCameraAsViewTarget", &ASplineCameraActor::execSetCameraAsViewTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineCameraActor_eventIsAtEndOfSpline_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SplineCameraActor_eventIsAtEndOfSpline_Parms), &Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline" },
		{ "Comment", "// BlueprintNativeEvent for checking if the camera is at the end of the spline\n" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
		{ "ToolTip", "BlueprintNativeEvent for checking if the camera is at the end of the spline" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineCameraActor, nullptr, "IsAtEndOfSpline", nullptr, nullptr, sizeof(SplineCameraActor_eventIsAtEndOfSpline_Parms), Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spline Camera" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineCameraActor, nullptr, "SetCameraAsViewTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineCameraActor);
	UClass* Z_Construct_UClass_ASplineCameraActor_NoRegister()
	{
		return ASplineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NextLevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineCameraActor_IsAtEndOfSpline, "IsAtEndOfSpline" }, // 3885656190
		{ &Z_Construct_UFunction_ASplineCameraActor_SetCameraAsViewTarget, "SetCameraAsViewTarget" }, // 2301568421
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineCameraActor.h" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_NextLevelName_MetaData[] = {
		{ "Category", "Level Transition" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_NextLevelName = { "NextLevelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineCameraActor, NextLevelName), METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_NextLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_NextLevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_InitialDelay_MetaData[] = {
		{ "Category", "Spline Camera" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_InitialDelay = { "InitialDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineCameraActor, InitialDelay), METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_InitialDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_InitialDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "SplineCameraActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineCameraActor, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_SplineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera_ Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineCameraActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraSpeed_MetaData[] = {
		{ "Category", "SplineCameraActor" },
		{ "ModuleRelativePath", "Public/SplineCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraSpeed = { "CameraSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineCameraActor, CameraSpeed), METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_NextLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_InitialDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_SplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineCameraActor_Statics::NewProp_CameraSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineCameraActor_Statics::ClassParams = {
		&ASplineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineCameraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineCameraActor()
	{
		if (!Z_Registration_Info_UClass_ASplineCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineCameraActor.OuterSingleton, Z_Construct_UClass_ASplineCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASplineCameraActor.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ASplineCameraActor>()
	{
		return ASplineCameraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineCameraActor);
	ASplineCameraActor::~ASplineCameraActor() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASplineCameraActor, ASplineCameraActor::StaticClass, TEXT("ASplineCameraActor"), &Z_Registration_Info_UClass_ASplineCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineCameraActor), 1472759771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_1068210511(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_SplineCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
