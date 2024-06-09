// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/ArchVizFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVizFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_UArchVizFunctionLibrary();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_UArchVizFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execStopAllAudio)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::StopAllAudio(Z_Param_AudioComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execPlayAudio)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_OBJECT(UAudioComponent,Z_Param_AudioComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::PlayAudio(Z_Param_Sound,Z_Param_AudioComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execTransitionToLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::TransitionToLevel(Z_Param_LevelName);
		P_NATIVE_END;
	}
	void UArchVizFunctionLibrary::StaticRegisterNativesUArchVizFunctionLibrary()
	{
		UClass* Class = UArchVizFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayAudio", &UArchVizFunctionLibrary::execPlayAudio },
			{ "StopAllAudio", &UArchVizFunctionLibrary::execStopAllAudio },
			{ "TransitionToLevel", &UArchVizFunctionLibrary::execTransitionToLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics
	{
		struct ArchVizFunctionLibrary_eventPlayAudio_Parms
		{
			USoundBase* Sound;
			UAudioComponent* AudioComponent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPlayAudio_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPlayAudio_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "PlayAudio", nullptr, nullptr, Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::ArchVizFunctionLibrary_eventPlayAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::ArchVizFunctionLibrary_eventPlayAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics
	{
		struct ArchVizFunctionLibrary_eventStopAllAudio_Parms
		{
			UAudioComponent* AudioComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStopAllAudio_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "StopAllAudio", nullptr, nullptr, Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::ArchVizFunctionLibrary_eventStopAllAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::ArchVizFunctionLibrary_eventStopAllAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics
	{
		struct ArchVizFunctionLibrary_eventTransitionToLevel_Parms
		{
			FString LevelName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ArchVizFunctionLibrary_eventTransitionToLevel_Parms, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName_MetaData), Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArchViz" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "TransitionToLevel", nullptr, nullptr, Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::ArchVizFunctionLibrary_eventTransitionToLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::ArchVizFunctionLibrary_eventTransitionToLevel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchVizFunctionLibrary);
	UClass* Z_Construct_UClass_UArchVizFunctionLibrary_NoRegister()
	{
		return UArchVizFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UArchVizFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchVizFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVizFunctionLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchVizFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio, "PlayAudio" }, // 2265056355
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio, "StopAllAudio" }, // 536069339
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel, "TransitionToLevel" }, // 3063109348
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVizFunctionLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ArchVizFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchVizFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchVizFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchVizFunctionLibrary_Statics::ClassParams = {
		&UArchVizFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UArchVizFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UArchVizFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchVizFunctionLibrary.OuterSingleton, Z_Construct_UClass_UArchVizFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchVizFunctionLibrary.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<UArchVizFunctionLibrary>()
	{
		return UArchVizFunctionLibrary::StaticClass();
	}
	UArchVizFunctionLibrary::UArchVizFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchVizFunctionLibrary);
	UArchVizFunctionLibrary::~UArchVizFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchVizFunctionLibrary, UArchVizFunctionLibrary::StaticClass, TEXT("UArchVizFunctionLibrary"), &Z_Registration_Info_UClass_UArchVizFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchVizFunctionLibrary), 864662789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_1154522775(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
