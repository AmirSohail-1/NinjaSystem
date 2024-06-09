// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/NativeAndTimer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeAndTimer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ANativeAndTimer();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ANativeAndTimer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(ANativeAndTimer::execCountdownHasFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CountdownHasFinished_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ANativeAndTimer_CountdownHasFinished = FName(TEXT("CountdownHasFinished"));
	void ANativeAndTimer::CountdownHasFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_ANativeAndTimer_CountdownHasFinished),NULL);
	}
	void ANativeAndTimer::StaticRegisterNativesANativeAndTimer()
	{
		UClass* Class = ANativeAndTimer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CountdownHasFinished", &ANativeAndTimer::execCountdownHasFinished },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "NativeAndTimer" },
		{ "ModuleRelativePath", "Public/NativeAndTimer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANativeAndTimer, nullptr, "CountdownHasFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANativeAndTimer);
	UClass* Z_Construct_UClass_ANativeAndTimer_NoRegister()
	{
		return ANativeAndTimer::StaticClass();
	}
	struct Z_Construct_UClass_ANativeAndTimer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CountdownTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANativeAndTimer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANativeAndTimer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANativeAndTimer_CountdownHasFinished, "CountdownHasFinished" }, // 3577537413
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANativeAndTimer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NativeAndTimer.h" },
		{ "ModuleRelativePath", "Public/NativeAndTimer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANativeAndTimer_Statics::NewProp_CountdownTime_MetaData[] = {
		{ "Category", "NativeAndTimer" },
		{ "Comment", "//How long, in seconds, the countdown will run\n" },
		{ "ModuleRelativePath", "Public/NativeAndTimer.h" },
		{ "ToolTip", "How long, in seconds, the countdown will run" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANativeAndTimer_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANativeAndTimer, CountdownTime), METADATA_PARAMS(Z_Construct_UClass_ANativeAndTimer_Statics::NewProp_CountdownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANativeAndTimer_Statics::NewProp_CountdownTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANativeAndTimer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANativeAndTimer_Statics::NewProp_CountdownTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANativeAndTimer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANativeAndTimer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANativeAndTimer_Statics::ClassParams = {
		&ANativeAndTimer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANativeAndTimer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANativeAndTimer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANativeAndTimer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANativeAndTimer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANativeAndTimer()
	{
		if (!Z_Registration_Info_UClass_ANativeAndTimer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANativeAndTimer.OuterSingleton, Z_Construct_UClass_ANativeAndTimer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANativeAndTimer.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ANativeAndTimer>()
	{
		return ANativeAndTimer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANativeAndTimer);
	ANativeAndTimer::~ANativeAndTimer() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_NativeAndTimer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_NativeAndTimer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANativeAndTimer, ANativeAndTimer::StaticClass, TEXT("ANativeAndTimer"), &Z_Registration_Info_UClass_ANativeAndTimer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANativeAndTimer), 2723590254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_NativeAndTimer_h_1047593362(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_NativeAndTimer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_NativeAndTimer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
