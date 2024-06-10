// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/StateComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UStateComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UStateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UStateComponent::execClearCombatStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCombatStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateComponent::execAddCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCombatState(Z_Param_Out_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateComponent::execHasCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StateToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCombatState(Z_Param_Out_StateToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateComponent::execRemoveCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StateToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCombatState(Z_Param_Out_StateToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateComponent::execSetCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCombatState(Z_Param_Out_NewState);
		P_NATIVE_END;
	}
	void UStateComponent::StaticRegisterNativesUStateComponent()
	{
		UClass* Class = UStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCombatState", &UStateComponent::execAddCombatState },
			{ "ClearCombatStates", &UStateComponent::execClearCombatStates },
			{ "HasCombatState", &UStateComponent::execHasCombatState },
			{ "RemoveCombatState", &UStateComponent::execRemoveCombatState },
			{ "SetCombatState", &UStateComponent::execSetCombatState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateComponent_AddCombatState_Statics
	{
		struct StateComponent_eventAddCombatState_Parms
		{
			FGameplayTag NewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateComponent_eventAddCombatState_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::NewProp_NewState_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, nullptr, "AddCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::StateComponent_eventAddCombatState_Parms), Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_AddCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateComponent_AddCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, nullptr, "ClearCombatStates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_ClearCombatStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateComponent_ClearCombatStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_HasCombatState_Statics
	{
		struct StateComponent_eventHasCombatState_Parms
		{
			FGameplayTag StateToCheck;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateToCheck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_StateToCheck = { "StateToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateComponent_eventHasCombatState_Parms, StateToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateComponent_eventHasCombatState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StateComponent_eventHasCombatState_Parms), &Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_StateToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, nullptr, "HasCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::StateComponent_eventHasCombatState_Parms), Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_HasCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateComponent_HasCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics
	{
		struct StateComponent_eventRemoveCombatState_Parms
		{
			FGameplayTag StateToRemove;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateToRemove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::NewProp_StateToRemove = { "StateToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateComponent_eventRemoveCombatState_Parms, StateToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::NewProp_StateToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, nullptr, "RemoveCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::StateComponent_eventRemoveCombatState_Parms), Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_RemoveCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateComponent_RemoveCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateComponent_SetCombatState_Statics
	{
		struct StateComponent_eventSetCombatState_Parms
		{
			FGameplayTag NewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateComponent_eventSetCombatState_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::NewProp_NewState_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateComponent, nullptr, "SetCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::StateComponent_eventSetCombatState_Parms), Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateComponent_SetCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateComponent_SetCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateComponent);
	UClass* Z_Construct_UClass_UStateComponent_NoRegister()
	{
		return UStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatStates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CombatStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateComponent_AddCombatState, "AddCombatState" }, // 1084708828
		{ &Z_Construct_UFunction_UStateComponent_ClearCombatStates, "ClearCombatStates" }, // 3465904293
		{ &Z_Construct_UFunction_UStateComponent_HasCombatState, "HasCombatState" }, // 2111740110
		{ &Z_Construct_UFunction_UStateComponent_RemoveCombatState, "RemoveCombatState" }, // 2752296381
		{ &Z_Construct_UFunction_UStateComponent_SetCombatState, "SetCombatState" }, // 1821520105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "StateComponent.h" },
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateComponent_Statics::NewProp_CombatStates_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateComponent_Statics::NewProp_CombatStates = { "CombatStates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateComponent, CombatStates), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UStateComponent_Statics::NewProp_CombatStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::NewProp_CombatStates_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateComponent_Statics::NewProp_CombatStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateComponent_Statics::ClassParams = {
		&UStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateComponent()
	{
		if (!Z_Registration_Info_UClass_UStateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateComponent.OuterSingleton, Z_Construct_UClass_UStateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UStateComponent>()
	{
		return UStateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateComponent);
	UStateComponent::~UStateComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateComponent, UStateComponent::StaticClass, TEXT("UStateComponent"), &Z_Registration_Info_UClass_UStateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateComponent), 3923277988U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_3540680217(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
