// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/InteractActorPrinter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractActorPrinter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AInteractActorPrinter();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AInteractActorPrinter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(AInteractActorPrinter::execGetNumPlayerPawns)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=AInteractActorPrinter::GetNumPlayerPawns(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AInteractActorPrinter::execPrintMessageWithColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintMessageWithColor(Z_Param_Message,Z_Param_TextColor);
		P_NATIVE_END;
	}
	void AInteractActorPrinter::StaticRegisterNativesAInteractActorPrinter()
	{
		UClass* Class = AInteractActorPrinter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumPlayerPawns", &AInteractActorPrinter::execGetNumPlayerPawns },
			{ "PrintMessageWithColor", &AInteractActorPrinter::execPrintMessageWithColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics
	{
		struct InteractActorPrinter_eventGetNumPlayerPawns_Parms
		{
			const UObject* WorldContextObject;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractActorPrinter_eventGetNumPlayerPawns_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractActorPrinter_eventGetNumPlayerPawns_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay Utilities" },
		{ "Comment", "// Get the number of player pawns from the game state\n" },
		{ "ModuleRelativePath", "Public/InteractActorPrinter.h" },
		{ "ToolTip", "Get the number of player pawns from the game state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractActorPrinter, nullptr, "GetNumPlayerPawns", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::InteractActorPrinter_eventGetNumPlayerPawns_Parms), Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics
	{
		struct InteractActorPrinter_eventPrintMessageWithColor_Parms
		{
			FString Message;
			FLinearColor TextColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractActorPrinter_eventPrintMessageWithColor_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InteractActorPrinter_eventPrintMessageWithColor_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction Printer BP and C++" },
		{ "Comment", "// Function to print a message with a specified color\n" },
		{ "ModuleRelativePath", "Public/InteractActorPrinter.h" },
		{ "ToolTip", "Function to print a message with a specified color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractActorPrinter, nullptr, "PrintMessageWithColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::InteractActorPrinter_eventPrintMessageWithColor_Parms), Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractActorPrinter);
	UClass* Z_Construct_UClass_AInteractActorPrinter_NoRegister()
	{
		return AInteractActorPrinter::StaticClass();
	}
	struct Z_Construct_UClass_AInteractActorPrinter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveAudio_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveAudio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractActorPrinter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractActorPrinter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractActorPrinter_GetNumPlayerPawns, "GetNumPlayerPawns" }, // 2471226786
		{ &Z_Construct_UFunction_AInteractActorPrinter_PrintMessageWithColor, "PrintMessageWithColor" }, // 2312271269
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractActorPrinter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractActorPrinter.h" },
		{ "ModuleRelativePath", "Public/InteractActorPrinter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractActorPrinter_Statics::NewProp_WaveAudio_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/InteractActorPrinter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractActorPrinter_Statics::NewProp_WaveAudio = { "WaveAudio", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInteractActorPrinter, WaveAudio), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractActorPrinter_Statics::NewProp_WaveAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractActorPrinter_Statics::NewProp_WaveAudio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractActorPrinter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractActorPrinter_Statics::NewProp_WaveAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractActorPrinter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractActorPrinter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractActorPrinter_Statics::ClassParams = {
		&AInteractActorPrinter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractActorPrinter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractActorPrinter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractActorPrinter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractActorPrinter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractActorPrinter()
	{
		if (!Z_Registration_Info_UClass_AInteractActorPrinter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractActorPrinter.OuterSingleton, Z_Construct_UClass_AInteractActorPrinter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractActorPrinter.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<AInteractActorPrinter>()
	{
		return AInteractActorPrinter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractActorPrinter);
	AInteractActorPrinter::~AInteractActorPrinter() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_InteractActorPrinter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_InteractActorPrinter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractActorPrinter, AInteractActorPrinter::StaticClass, TEXT("AInteractActorPrinter"), &Z_Registration_Info_UClass_AInteractActorPrinter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractActorPrinter), 2008689107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_InteractActorPrinter_h_2718772593(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_InteractActorPrinter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_InteractActorPrinter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
