// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/GeneralStateManagerComponent.h"
#include "GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneralStateManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UGeneralStateManagerComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UGeneralStateManagerComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UGeneralStateManagerComponent::execClearCombatStates)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCombatStates();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralStateManagerComponent::execAddCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCombatState(Z_Param_Out_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralStateManagerComponent::execHasCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StateToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasCombatState(Z_Param_Out_StateToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralStateManagerComponent::execRemoveCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_StateToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCombatState(Z_Param_Out_StateToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeneralStateManagerComponent::execSetCombatState)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCombatState(Z_Param_Out_NewState);
		P_NATIVE_END;
	}
	void UGeneralStateManagerComponent::StaticRegisterNativesUGeneralStateManagerComponent()
	{
		UClass* Class = UGeneralStateManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCombatState", &UGeneralStateManagerComponent::execAddCombatState },
			{ "ClearCombatStates", &UGeneralStateManagerComponent::execClearCombatStates },
			{ "HasCombatState", &UGeneralStateManagerComponent::execHasCombatState },
			{ "RemoveCombatState", &UGeneralStateManagerComponent::execRemoveCombatState },
			{ "SetCombatState", &UGeneralStateManagerComponent::execSetCombatState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics
	{
		struct GeneralStateManagerComponent_eventAddCombatState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralStateManagerComponent_eventAddCombatState_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::NewProp_NewState_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralStateManagerComponent, nullptr, "AddCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::GeneralStateManagerComponent_eventAddCombatState_Parms), Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralStateManagerComponent, nullptr, "ClearCombatStates", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics
	{
		struct GeneralStateManagerComponent_eventHasCombatState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_StateToCheck = { "StateToCheck", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralStateManagerComponent_eventHasCombatState_Parms, StateToCheck), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_StateToCheck_MetaData)) }; // 1225434376
	void Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GeneralStateManagerComponent_eventHasCombatState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeneralStateManagerComponent_eventHasCombatState_Parms), &Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_StateToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Management" },
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralStateManagerComponent, nullptr, "HasCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::GeneralStateManagerComponent_eventHasCombatState_Parms), Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics
	{
		struct GeneralStateManagerComponent_eventRemoveCombatState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::NewProp_StateToRemove = { "StateToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralStateManagerComponent_eventRemoveCombatState_Parms, StateToRemove), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::NewProp_StateToRemove_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::NewProp_StateToRemove,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Management" },
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralStateManagerComponent, nullptr, "RemoveCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::GeneralStateManagerComponent_eventRemoveCombatState_Parms), Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics
	{
		struct GeneralStateManagerComponent_eventSetCombatState_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeneralStateManagerComponent_eventSetCombatState_Parms, NewState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::NewProp_NewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::NewProp_NewState_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::Function_MetaDataParams[] = {
		{ "Category", "State Management" },
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeneralStateManagerComponent, nullptr, "SetCombatState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::GeneralStateManagerComponent_eventSetCombatState_Parms), Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneralStateManagerComponent);
	UClass* Z_Construct_UClass_UGeneralStateManagerComponent_NoRegister()
	{
		return UGeneralStateManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeneralStateManagerComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UGeneralStateManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeneralStateManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeneralStateManagerComponent_AddCombatState, "AddCombatState" }, // 1585744405
		{ &Z_Construct_UFunction_UGeneralStateManagerComponent_ClearCombatStates, "ClearCombatStates" }, // 718107938
		{ &Z_Construct_UFunction_UGeneralStateManagerComponent_HasCombatState, "HasCombatState" }, // 1533301426
		{ &Z_Construct_UFunction_UGeneralStateManagerComponent_RemoveCombatState, "RemoveCombatState" }, // 293296629
		{ &Z_Construct_UFunction_UGeneralStateManagerComponent_SetCombatState, "SetCombatState" }, // 623953359
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneralStateManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GeneralStateManagerComponent.h" },
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneralStateManagerComponent_Statics::NewProp_CombatStates_MetaData[] = {
		{ "Category", "State Management" },
		{ "ModuleRelativePath", "Public/GeneralStateManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGeneralStateManagerComponent_Statics::NewProp_CombatStates = { "CombatStates", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeneralStateManagerComponent, CombatStates), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UGeneralStateManagerComponent_Statics::NewProp_CombatStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralStateManagerComponent_Statics::NewProp_CombatStates_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeneralStateManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeneralStateManagerComponent_Statics::NewProp_CombatStates,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneralStateManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneralStateManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneralStateManagerComponent_Statics::ClassParams = {
		&UGeneralStateManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGeneralStateManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralStateManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeneralStateManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneralStateManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneralStateManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UGeneralStateManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneralStateManagerComponent.OuterSingleton, Z_Construct_UClass_UGeneralStateManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeneralStateManagerComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UGeneralStateManagerComponent>()
	{
		return UGeneralStateManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneralStateManagerComponent);
	UGeneralStateManagerComponent::~UGeneralStateManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeneralStateManagerComponent, UGeneralStateManagerComponent::StaticClass, TEXT("UGeneralStateManagerComponent"), &Z_Registration_Info_UClass_UGeneralStateManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneralStateManagerComponent), 2768958796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_3267055953(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
