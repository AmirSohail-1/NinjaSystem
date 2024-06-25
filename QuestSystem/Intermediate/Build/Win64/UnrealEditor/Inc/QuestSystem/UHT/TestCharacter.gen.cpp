// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/TestCharacter.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ATestCharacter();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestWidgetShow_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	DEFINE_FUNCTION(ATestCharacter::execSetExperience)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExperience(Z_Param_NewExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execGetExperience)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExperience();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execSetHealth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewHealth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHealth(Z_Param_NewHealth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execOnQuestCompleted)
	{
		P_GET_STRUCT_REF(FQuestTable,Z_Param_Out_CompletedQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestCompleted(Z_Param_Out_CompletedQuest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execCompleteQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATestCharacter::execStartQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	void ATestCharacter::StaticRegisterNativesATestCharacter()
	{
		UClass* Class = ATestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteQuest", &ATestCharacter::execCompleteQuest },
			{ "GetExperience", &ATestCharacter::execGetExperience },
			{ "GetHealth", &ATestCharacter::execGetHealth },
			{ "Interact", &ATestCharacter::execInteract },
			{ "MoveForward", &ATestCharacter::execMoveForward },
			{ "MoveRight", &ATestCharacter::execMoveRight },
			{ "OnQuestCompleted", &ATestCharacter::execOnQuestCompleted },
			{ "SetExperience", &ATestCharacter::execSetExperience },
			{ "SetHealth", &ATestCharacter::execSetHealth },
			{ "StartQuest", &ATestCharacter::execStartQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics
	{
		struct TestCharacter_eventCompleteQuest_Parms
		{
			FString QuestName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventCompleteQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "CompleteQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::TestCharacter_eventCompleteQuest_Parms), Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_CompleteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_CompleteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_GetExperience_Statics
	{
		struct TestCharacter_eventGetExperience_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventGetExperience_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "GetExperience", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::TestCharacter_eventGetExperience_Parms), Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_GetExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_GetExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_GetHealth_Statics
	{
		struct TestCharacter_eventGetHealth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "GetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::TestCharacter_eventGetHealth_Parms), Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_MoveForward_Statics
	{
		struct TestCharacter_eventMoveForward_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::TestCharacter_eventMoveForward_Parms), Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_MoveRight_Statics
	{
		struct TestCharacter_eventMoveRight_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::TestCharacter_eventMoveRight_Parms), Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics
	{
		struct TestCharacter_eventOnQuestCompleted_Parms
		{
			FQuestTable CompletedQuest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompletedQuest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompletedQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::NewProp_CompletedQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::NewProp_CompletedQuest = { "CompletedQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventOnQuestCompleted_Parms, CompletedQuest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::NewProp_CompletedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::NewProp_CompletedQuest_MetaData)) }; // 1480036892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::NewProp_CompletedQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "OnQuestCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::TestCharacter_eventOnQuestCompleted_Parms), Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_OnQuestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_OnQuestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_SetExperience_Statics
	{
		struct TestCharacter_eventSetExperience_Parms
		{
			int32 NewExperience;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewExperience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::NewProp_NewExperience = { "NewExperience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventSetExperience_Parms, NewExperience), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::NewProp_NewExperience,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "SetExperience", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::TestCharacter_eventSetExperience_Parms), Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_SetExperience()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_SetExperience_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_SetHealth_Statics
	{
		struct TestCharacter_eventSetHealth_Parms
		{
			int32 NewHealth;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventSetHealth_Parms, NewHealth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::NewProp_NewHealth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "SetHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::TestCharacter_eventSetHealth_Parms), Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_SetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_SetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATestCharacter_StartQuest_Statics
	{
		struct TestCharacter_eventStartQuest_Parms
		{
			FString QuestName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_QuestName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TestCharacter_eventStartQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATestCharacter, nullptr, "StartQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::TestCharacter_eventStartQuest_Parms), Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATestCharacter_StartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATestCharacter_StartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
	UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
	{
		return ATestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QuestWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Experience;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATestCharacter_CompleteQuest, "CompleteQuest" }, // 1605984589
		{ &Z_Construct_UFunction_ATestCharacter_GetExperience, "GetExperience" }, // 2133248722
		{ &Z_Construct_UFunction_ATestCharacter_GetHealth, "GetHealth" }, // 1735202456
		{ &Z_Construct_UFunction_ATestCharacter_Interact, "Interact" }, // 3151869290
		{ &Z_Construct_UFunction_ATestCharacter_MoveForward, "MoveForward" }, // 3718427898
		{ &Z_Construct_UFunction_ATestCharacter_MoveRight, "MoveRight" }, // 342393883
		{ &Z_Construct_UFunction_ATestCharacter_OnQuestCompleted, "OnQuestCompleted" }, // 3609085497
		{ &Z_Construct_UFunction_ATestCharacter_SetExperience, "SetExperience" }, // 2490306439
		{ &Z_Construct_UFunction_ATestCharacter_SetHealth, "SetHealth" }, // 821155806
		{ &Z_Construct_UFunction_ATestCharacter_StartQuest, "StartQuest" }, // 2851887232
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TestCharacter.h" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "Quest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestCharacter, QuestManager), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidgetClass = { "QuestWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestCharacter, QuestWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UQuestWidgetShow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidget = { "QuestWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestCharacter, QuestWidget), Z_Construct_UClass_UQuestWidgetShow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// Player Save Date Getter , Setter\n" },
		{ "ModuleRelativePath", "TestCharacter.h" },
		{ "ToolTip", "Player Save Date Getter , Setter" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::NewProp_Experience_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "TestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATestCharacter_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATestCharacter, Experience), METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::NewProp_Experience_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::NewProp_Experience_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATestCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_QuestWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATestCharacter_Statics::NewProp_Experience,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
		&ATestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestCharacter()
	{
		if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<ATestCharacter>()
	{
		return ATestCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
	ATestCharacter::~ATestCharacter() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 3856152346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_3999714492(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
