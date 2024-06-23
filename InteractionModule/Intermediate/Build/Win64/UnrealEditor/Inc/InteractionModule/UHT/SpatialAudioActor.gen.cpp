// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/SpatialAudioActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpatialAudioActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundAttenuation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ASpatialAudioActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ASpatialAudioActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(ASpatialAudioActor::execSetPitchController)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPitchController(Z_Param_PitchValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialAudioActor::execSetSoundWave)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundWave);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoundWave(Z_Param_SoundWave);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpatialAudioActor::execPlaySound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_OBJECT(USoundAttenuation,Z_Param_AttenuationSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound(Z_Param_SoundToPlay,Z_Param_PitchMultiplier,Z_Param_StartTime,Z_Param_AttenuationSettings);
		P_NATIVE_END;
	}
	void ASpatialAudioActor::StaticRegisterNativesASpatialAudioActor()
	{
		UClass* Class = ASpatialAudioActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlaySound", &ASpatialAudioActor::execPlaySound },
			{ "SetPitchController", &ASpatialAudioActor::execSetPitchController },
			{ "SetSoundWave", &ASpatialAudioActor::execSetSoundWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics
	{
		struct SpatialAudioActor_eventPlaySound_Parms
		{
			USoundBase* SoundToPlay;
			float PitchMultiplier;
			float StartTime;
			USoundAttenuation* AttenuationSettings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttenuationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventPlaySound_Parms, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventPlaySound_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventPlaySound_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_AttenuationSettings = { "AttenuationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventPlaySound_Parms, AttenuationSettings), Z_Construct_UClass_USoundAttenuation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_SoundToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_PitchMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::NewProp_AttenuationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialAudioActor, nullptr, "PlaySound", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::SpatialAudioActor_eventPlaySound_Parms), Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialAudioActor_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialAudioActor_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics
	{
		struct SpatialAudioActor_eventSetPitchController_Parms
		{
			float PitchValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::NewProp_PitchValue = { "PitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventSetPitchController_Parms, PitchValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::NewProp_PitchValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialAudioActor, nullptr, "SetPitchController", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::SpatialAudioActor_eventSetPitchController_Parms), Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialAudioActor_SetPitchController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialAudioActor_SetPitchController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics
	{
		struct SpatialAudioActor_eventSetSoundWave_Parms
		{
			USoundBase* SoundWave;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpatialAudioActor_eventSetSoundWave_Parms, SoundWave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::NewProp_SoundWave,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpatialAudioActor, nullptr, "SetSoundWave", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::SpatialAudioActor_eventSetSoundWave_Parms), Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpatialAudioActor);
	UClass* Z_Construct_UClass_ASpatialAudioActor_NoRegister()
	{
		return ASpatialAudioActor::StaticClass();
	}
	struct Z_Construct_UClass_ASpatialAudioActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchController_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpatialAudioActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpatialAudioActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpatialAudioActor_PlaySound, "PlaySound" }, // 300709330
		{ &Z_Construct_UFunction_ASpatialAudioActor_SetPitchController, "SetPitchController" }, // 1501191566
		{ &Z_Construct_UFunction_ASpatialAudioActor_SetSoundWave, "SetSoundWave" }, // 4058604603
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialAudioActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpatialAudioActor.h" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpatialAudioActor, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_SoundWave_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_SoundWave = { "SoundWave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpatialAudioActor, SoundWave), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_SoundWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_SoundWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_PitchController_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/SpatialAudioActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_PitchController = { "PitchController", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASpatialAudioActor, PitchController), METADATA_PARAMS(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_PitchController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_PitchController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpatialAudioActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_SoundWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpatialAudioActor_Statics::NewProp_PitchController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpatialAudioActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpatialAudioActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpatialAudioActor_Statics::ClassParams = {
		&ASpatialAudioActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpatialAudioActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialAudioActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpatialAudioActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpatialAudioActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpatialAudioActor()
	{
		if (!Z_Registration_Info_UClass_ASpatialAudioActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpatialAudioActor.OuterSingleton, Z_Construct_UClass_ASpatialAudioActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpatialAudioActor.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ASpatialAudioActor>()
	{
		return ASpatialAudioActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpatialAudioActor);
	ASpatialAudioActor::~ASpatialAudioActor() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_SpatialAudioActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_SpatialAudioActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpatialAudioActor, ASpatialAudioActor::StaticClass, TEXT("ASpatialAudioActor"), &Z_Registration_Info_UClass_ASpatialAudioActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpatialAudioActor), 2264897306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_SpatialAudioActor_h_3561794215(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_SpatialAudioActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_SpatialAudioActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
