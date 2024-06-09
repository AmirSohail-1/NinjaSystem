// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/NinjaCombatCharacter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCombatCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_ANinjaCombatCharacter();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_ANinjaCombatCharacter_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UCombatComponent_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UStateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(ANinjaCombatCharacter::execUpdateCharacterState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCharacterState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execDashAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execHeavyAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeavyAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execAirAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AirAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execLightAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LightAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execLook)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaCombatCharacter::execMove)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void ANinjaCombatCharacter::StaticRegisterNativesANinjaCombatCharacter()
	{
		UClass* Class = ANinjaCombatCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AirAttack", &ANinjaCombatCharacter::execAirAttack },
			{ "DashAttack", &ANinjaCombatCharacter::execDashAttack },
			{ "HeavyAttack", &ANinjaCombatCharacter::execHeavyAttack },
			{ "LightAttack", &ANinjaCombatCharacter::execLightAttack },
			{ "Look", &ANinjaCombatCharacter::execLook },
			{ "Move", &ANinjaCombatCharacter::execMove },
			{ "UpdateCharacterState", &ANinjaCombatCharacter::execUpdateCharacterState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "AirAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "DashAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "HeavyAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Combat" },
		{ "Comment", "// Combat actions ---------------------------\n" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Combat actions ---------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "LightAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics
	{
		struct NinjaCombatCharacter_eventLook_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCombatCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::NinjaCombatCharacter_eventLook_Parms), Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics
	{
		struct NinjaCombatCharacter_eventMove_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaCombatCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "// Input handlers\n" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Input handlers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::NinjaCombatCharacter_eventMove_Parms), Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Character State" },
		{ "Comment", "//  character state ---------------------------\n" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "character state ---------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaCombatCharacter, nullptr, "UpdateCharacterState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANinjaCombatCharacter);
	UClass* Z_Construct_UClass_ANinjaCombatCharacter_NoRegister()
	{
		return ANinjaCombatCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaCombatCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StateComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NinjaMovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NinjaMovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LightAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AirAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeavyAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeavyAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DashAttackAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaCombatCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANinjaCombatCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_AirAttack, "AirAttack" }, // 2610847223
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_DashAttack, "DashAttack" }, // 380075825
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_HeavyAttack, "HeavyAttack" }, // 556167646
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_LightAttack, "LightAttack" }, // 732712122
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_Look, "Look" }, // 357970796
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_Move, "Move" }, // 3434184404
		{ &Z_Construct_UFunction_ANinjaCombatCharacter_UpdateCharacterState, "UpdateCharacterState" }, // 2128516739
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NinjaCombatCharacter.h" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CombatComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "// Combat component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Combat component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CombatComponent = { "CombatComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, CombatComponent), Z_Construct_UClass_UCombatComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CombatComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CombatComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_StateComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "Comment", "// State component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "State component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_StateComponent = { "StateComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, StateComponent), Z_Construct_UClass_UStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_StateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_StateComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_NinjaMovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_NinjaMovementComponent = { "NinjaMovementComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, NinjaMovementComponent), Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_NinjaMovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_NinjaMovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LightAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Light Attack Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Light Attack Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LightAttackAction = { "LightAttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, LightAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LightAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LightAttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_AirAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Air Attack Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Air Attack Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_AirAttackAction = { "AirAttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, AirAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_AirAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_AirAttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_HeavyAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Heavy Attack Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Heavy Attack Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_HeavyAttackAction = { "HeavyAttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, HeavyAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_HeavyAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_HeavyAttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DashAttackAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Dash Attack Input Action */" },
		{ "ModuleRelativePath", "Public/NinjaCombatCharacter.h" },
		{ "ToolTip", "Dash Attack Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DashAttackAction = { "DashAttackAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANinjaCombatCharacter, DashAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DashAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DashAttackAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaCombatCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CombatComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_StateComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_NinjaMovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_LightAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_AirAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_HeavyAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaCombatCharacter_Statics::NewProp_DashAttackAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaCombatCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaCombatCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANinjaCombatCharacter_Statics::ClassParams = {
		&ANinjaCombatCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANinjaCombatCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaCombatCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaCombatCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaCombatCharacter()
	{
		if (!Z_Registration_Info_UClass_ANinjaCombatCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANinjaCombatCharacter.OuterSingleton, Z_Construct_UClass_ANinjaCombatCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANinjaCombatCharacter.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<ANinjaCombatCharacter>()
	{
		return ANinjaCombatCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaCombatCharacter);
	ANinjaCombatCharacter::~ANinjaCombatCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANinjaCombatCharacter, ANinjaCombatCharacter::StaticClass, TEXT("ANinjaCombatCharacter"), &Z_Registration_Info_UClass_ANinjaCombatCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANinjaCombatCharacter), 729642464U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_702376703(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
