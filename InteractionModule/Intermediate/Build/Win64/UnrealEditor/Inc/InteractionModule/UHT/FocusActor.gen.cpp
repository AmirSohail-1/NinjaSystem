// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/FocusActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocusActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AFocusActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_AFocusActor_NoRegister();
	INTERACTIONMODULE_API UFunction* Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature();
	INTERACTIONMODULE_API UFunction* Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionModule, nullptr, "OnFocusDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_InteractionModule, nullptr, "OnUnfocusDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AFocusActor::execReturnFromFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnFromFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFocusActor::execFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Focus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFocusActor::execShouldBeFocused)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldBeFocused_Implementation();
		P_NATIVE_END;
	}
	struct FocusActor_eventShouldBeFocused_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		FocusActor_eventShouldBeFocused_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AFocusActor_ShouldBeFocused = FName(TEXT("ShouldBeFocused"));
	bool AFocusActor::ShouldBeFocused() const
	{
		FocusActor_eventShouldBeFocused_Parms Parms;
		const_cast<AFocusActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AFocusActor_ShouldBeFocused),&Parms);
		return !!Parms.ReturnValue;
	}
	void AFocusActor::StaticRegisterNativesAFocusActor()
	{
		UClass* Class = AFocusActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Focus", &AFocusActor::execFocus },
			{ "ReturnFromFocus", &AFocusActor::execReturnFromFocus },
			{ "ShouldBeFocused", &AFocusActor::execShouldBeFocused },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFocusActor_Focus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_Focus_Statics::Function_MetaDataParams[] = {
		{ "Category", "FocusActor" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_Focus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "Focus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFocusActor_Focus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_Focus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFocusActor_Focus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_Focus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "FocusActor" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "ReturnFromFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFocusActor_ReturnFromFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_ReturnFromFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FocusActor_eventShouldBeFocused_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FocusActor_eventShouldBeFocused_Parms), &Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::Function_MetaDataParams[] = {
		{ "Category", "FocusActor" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFocusActor, nullptr, "ShouldBeFocused", nullptr, nullptr, sizeof(FocusActor_eventShouldBeFocused_Parms), Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFocusActor_ShouldBeFocused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFocusActor_ShouldBeFocused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFocusActor);
	UClass* Z_Construct_UClass_AFocusActor_NoRegister()
	{
		return AFocusActor::StaticClass();
	}
	struct Z_Construct_UClass_AFocusActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUnfocus_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUnfocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFocusActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFocusActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFocusActor_Focus, "Focus" }, // 596011137
		{ &Z_Construct_UFunction_AFocusActor_ReturnFromFocus, "ReturnFromFocus" }, // 4211263985
		{ &Z_Construct_UFunction_AFocusActor_ShouldBeFocused, "ShouldBeFocused" }, // 838009428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FocusActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusActor_Statics::NewProp_OnFocus_MetaData[] = {
		{ "Category", "FocusActor" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFocusActor_Statics::NewProp_OnFocus = { "OnFocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFocusActor, OnFocus), Z_Construct_UDelegateFunction_InteractionModule_OnFocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFocusActor_Statics::NewProp_OnFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::NewProp_OnFocus_MetaData)) }; // 1094633205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFocusActor_Statics::NewProp_OnUnfocus_MetaData[] = {
		{ "Category", "FocusActor" },
		{ "ModuleRelativePath", "Public/FocusActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFocusActor_Statics::NewProp_OnUnfocus = { "OnUnfocus", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFocusActor, OnUnfocus), Z_Construct_UDelegateFunction_InteractionModule_OnUnfocusDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AFocusActor_Statics::NewProp_OnUnfocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::NewProp_OnUnfocus_MetaData)) }; // 597563163
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFocusActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFocusActor_Statics::NewProp_OnFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFocusActor_Statics::NewProp_OnUnfocus,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFocusActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFocusActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFocusActor_Statics::ClassParams = {
		&AFocusActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFocusActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFocusActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFocusActor()
	{
		if (!Z_Registration_Info_UClass_AFocusActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFocusActor.OuterSingleton, Z_Construct_UClass_AFocusActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFocusActor.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<AFocusActor>()
	{
		return AFocusActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFocusActor);
	AFocusActor::~AFocusActor() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFocusActor, AFocusActor::StaticClass, TEXT("AFocusActor"), &Z_Registration_Info_UClass_AFocusActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFocusActor), 3522549034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_2945222318(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
