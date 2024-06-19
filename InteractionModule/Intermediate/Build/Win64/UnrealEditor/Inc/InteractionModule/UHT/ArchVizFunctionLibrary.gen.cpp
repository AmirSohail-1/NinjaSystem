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
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execPause2TypewriterEffect)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_TextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::Pause2TypewriterEffect(Z_Param_TextBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execPauseTypewriterEffect)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_TextBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::PauseTypewriterEffect(Z_Param_TextBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execStopTypewriterEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::StopTypewriterEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArchVizFunctionLibrary::execStartTypewriterEffect)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_TextBlock);
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TypeSpeed);
		P_GET_OBJECT(USoundBase,Z_Param_TypeSound);
		P_GET_UBOOL(Z_Param_bPauseAtQuestionMark);
		P_FINISH;
		P_NATIVE_BEGIN;
		UArchVizFunctionLibrary::StartTypewriterEffect(Z_Param_TextBlock,Z_Param_Text,Z_Param_TypeSpeed,Z_Param_TypeSound,Z_Param_bPauseAtQuestionMark);
		P_NATIVE_END;
	}
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
			{ "Pause2TypewriterEffect", &UArchVizFunctionLibrary::execPause2TypewriterEffect },
			{ "PauseTypewriterEffect", &UArchVizFunctionLibrary::execPauseTypewriterEffect },
			{ "PlayAudio", &UArchVizFunctionLibrary::execPlayAudio },
			{ "StartTypewriterEffect", &UArchVizFunctionLibrary::execStartTypewriterEffect },
			{ "StopAllAudio", &UArchVizFunctionLibrary::execStopAllAudio },
			{ "StopTypewriterEffect", &UArchVizFunctionLibrary::execStopTypewriterEffect },
			{ "TransitionToLevel", &UArchVizFunctionLibrary::execTransitionToLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics
	{
		struct ArchVizFunctionLibrary_eventPause2TypewriterEffect_Parms
		{
			UTextBlock* TextBlock;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPause2TypewriterEffect_Parms, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::NewProp_TextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::NewProp_TextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "Pause2TypewriterEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::ArchVizFunctionLibrary_eventPause2TypewriterEffect_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics
	{
		struct ArchVizFunctionLibrary_eventPauseTypewriterEffect_Parms
		{
			UTextBlock* TextBlock;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPauseTypewriterEffect_Parms, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::NewProp_TextBlock_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::NewProp_TextBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "PauseTypewriterEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::ArchVizFunctionLibrary_eventPauseTypewriterEffect_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect_Statics::FuncParams);
		}
		return ReturnFunction;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPlayAudio_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventPlayAudio_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::NewProp_AudioComponent_MetaData)) };
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
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "PlayAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::ArchVizFunctionLibrary_eventPlayAudio_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics
	{
		struct ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms
		{
			UTextBlock* TextBlock;
			FString Text;
			float TypeSpeed;
			USoundBase* TypeSound;
			bool bPauseAtQuestionMark;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TypeSpeed;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TypeSound;
		static void NewProp_bPauseAtQuestionMark_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAtQuestionMark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TypeSpeed = { "TypeSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms, TypeSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TypeSound = { "TypeSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms, TypeSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_bPauseAtQuestionMark_SetBit(void* Obj)
	{
		((ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms*)Obj)->bPauseAtQuestionMark = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_bPauseAtQuestionMark = { "bPauseAtQuestionMark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms), &Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_bPauseAtQuestionMark_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TypeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_TypeSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::NewProp_bPauseAtQuestionMark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "Comment", "////////////////////\n// Function to start the typewriter effect\n" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
		{ "ToolTip", "Function to start the typewriter effect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "StartTypewriterEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::ArchVizFunctionLibrary_eventStartTypewriterEffect_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect_Statics::FuncParams);
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventStopAllAudio_Parms, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::NewProp_AudioComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "StopAllAudio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::ArchVizFunctionLibrary_eventStopAllAudio_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "StopTypewriterEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect_Statics::FuncParams);
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArchVizFunctionLibrary_eventTransitionToLevel_Parms, LevelName), METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ArchViz" },
		{ "ModuleRelativePath", "Public/ArchVizFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArchVizFunctionLibrary, nullptr, "TransitionToLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::ArchVizFunctionLibrary_eventTransitionToLevel_Parms), Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel_Statics::Function_MetaDataParams)) };
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
	const FClassFunctionLinkInfo Z_Construct_UClass_UArchVizFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_Pause2TypewriterEffect, "Pause2TypewriterEffect" }, // 2596628139
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_PauseTypewriterEffect, "PauseTypewriterEffect" }, // 1123302980
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_PlayAudio, "PlayAudio" }, // 2013499935
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_StartTypewriterEffect, "StartTypewriterEffect" }, // 2620134251
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_StopAllAudio, "StopAllAudio" }, // 1498408324
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_StopTypewriterEffect, "StopTypewriterEffect" }, // 4103329484
		{ &Z_Construct_UFunction_UArchVizFunctionLibrary_TransitionToLevel, "TransitionToLevel" }, // 1353602563
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
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
		METADATA_PARAMS(Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVizFunctionLibrary_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchVizFunctionLibrary);
	UArchVizFunctionLibrary::~UArchVizFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchVizFunctionLibrary, UArchVizFunctionLibrary::StaticClass, TEXT("UArchVizFunctionLibrary"), &Z_Registration_Info_UClass_UArchVizFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchVizFunctionLibrary), 1108601276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_2680515061(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
