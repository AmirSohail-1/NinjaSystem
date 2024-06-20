// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionModule/Public/LevelTransitionFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelTransitionFunction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ALevelTransitionFunction();
	INTERACTIONMODULE_API UClass* Z_Construct_UClass_ALevelTransitionFunction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractionModule();
// End Cross Module References
	DEFINE_FUNCTION(ALevelTransitionFunction::execTransitionToLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TransitionToLevel();
		P_NATIVE_END;
	}
	void ALevelTransitionFunction::StaticRegisterNativesALevelTransitionFunction()
	{
		UClass* Class = ALevelTransitionFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TransitionToLevel", &ALevelTransitionFunction::execTransitionToLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Transition" },
		{ "Comment", "// Function to transition to the level\n" },
		{ "ModuleRelativePath", "Public/LevelTransitionFunction.h" },
		{ "ToolTip", "Function to transition to the level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelTransitionFunction, nullptr, "TransitionToLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelTransitionFunction);
	UClass* Z_Construct_UClass_ALevelTransitionFunction_NoRegister()
	{
		return ALevelTransitionFunction::StaticClass();
	}
	struct Z_Construct_UClass_ALevelTransitionFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelNameToTransition_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNameToTransition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelTransitionFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractionModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelTransitionFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelTransitionFunction_TransitionToLevel, "TransitionToLevel" }, // 898425496
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelTransitionFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelTransitionFunction.h" },
		{ "ModuleRelativePath", "Public/LevelTransitionFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelTransitionFunction_Statics::NewProp_LevelNameToTransition_MetaData[] = {
		{ "Category", "Level Transition" },
		{ "Comment", "// Exposed parameter to set level name in Blueprint\n" },
		{ "ModuleRelativePath", "Public/LevelTransitionFunction.h" },
		{ "ToolTip", "Exposed parameter to set level name in Blueprint" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALevelTransitionFunction_Statics::NewProp_LevelNameToTransition = { "LevelNameToTransition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelTransitionFunction, LevelNameToTransition), METADATA_PARAMS(Z_Construct_UClass_ALevelTransitionFunction_Statics::NewProp_LevelNameToTransition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransitionFunction_Statics::NewProp_LevelNameToTransition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelTransitionFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelTransitionFunction_Statics::NewProp_LevelNameToTransition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelTransitionFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelTransitionFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelTransitionFunction_Statics::ClassParams = {
		&ALevelTransitionFunction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelTransitionFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransitionFunction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelTransitionFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelTransitionFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelTransitionFunction()
	{
		if (!Z_Registration_Info_UClass_ALevelTransitionFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelTransitionFunction.OuterSingleton, Z_Construct_UClass_ALevelTransitionFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelTransitionFunction.OuterSingleton;
	}
	template<> INTERACTIONMODULE_API UClass* StaticClass<ALevelTransitionFunction>()
	{
		return ALevelTransitionFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelTransitionFunction);
	ALevelTransitionFunction::~ALevelTransitionFunction() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelTransitionFunction, ALevelTransitionFunction::StaticClass, TEXT("ALevelTransitionFunction"), &Z_Registration_Info_UClass_ALevelTransitionFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelTransitionFunction), 1152097160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionFunction_h_1914516314(TEXT("/Script/InteractionModule"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_InteractionModule_Source_InteractionModule_Public_LevelTransitionFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
