// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/UI/QuestWidgetShow.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestWidgetShow() {}
// Cross Module References
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestWidgetShow();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestWidgetShow_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	DEFINE_FUNCTION(UQuestWidgetShow::execHideMissionCompleteText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideMissionCompleteText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execOnQuestCompleted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestCompleted(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execOnQuestUpdated)
	{
		P_GET_STRUCT_REF(FQuestTable,Z_Param_Out_UpdatedQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuestUpdated(Z_Param_Out_UpdatedQuest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execUpdateTimerDisplay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RemainingTimeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTimerDisplay(Z_Param_RemainingTimeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execClearQuestDetails)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearQuestDetails();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execShowMissionComplete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowMissionComplete(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execOnTimedQuestTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RemainingTimeSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTimedQuestTick(Z_Param_RemainingTimeSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidgetShow::execUpdateQuestList)
	{
		P_GET_STRUCT_REF(FQuestTable,Z_Param_Out_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQuestList(Z_Param_Out_Quest);
		P_NATIVE_END;
	}
	void UQuestWidgetShow::StaticRegisterNativesUQuestWidgetShow()
	{
		UClass* Class = UQuestWidgetShow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearQuestDetails", &UQuestWidgetShow::execClearQuestDetails },
			{ "HideMissionCompleteText", &UQuestWidgetShow::execHideMissionCompleteText },
			{ "OnQuestCompleted", &UQuestWidgetShow::execOnQuestCompleted },
			{ "OnQuestUpdated", &UQuestWidgetShow::execOnQuestUpdated },
			{ "OnTimedQuestTick", &UQuestWidgetShow::execOnTimedQuestTick },
			{ "ShowMissionComplete", &UQuestWidgetShow::execShowMissionComplete },
			{ "UpdateQuestList", &UQuestWidgetShow::execUpdateQuestList },
			{ "UpdateTimerDisplay", &UQuestWidgetShow::execUpdateTimerDisplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "ClearQuestDetails", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "HideMissionCompleteText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics
	{
		struct QuestWidgetShow_eventOnQuestCompleted_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventOnQuestCompleted_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "OnQuestCompleted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::QuestWidgetShow_eventOnQuestCompleted_Parms), Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics
	{
		struct QuestWidgetShow_eventOnQuestUpdated_Parms
		{
			FQuestTable UpdatedQuest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedQuest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdatedQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::NewProp_UpdatedQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::NewProp_UpdatedQuest = { "UpdatedQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventOnQuestUpdated_Parms, UpdatedQuest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::NewProp_UpdatedQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::NewProp_UpdatedQuest_MetaData)) }; // 1480036892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::NewProp_UpdatedQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "OnQuestUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::QuestWidgetShow_eventOnQuestUpdated_Parms), Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics
	{
		struct QuestWidgetShow_eventOnTimedQuestTick_Parms
		{
			float RemainingTimeSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::NewProp_RemainingTimeSeconds = { "RemainingTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventOnTimedQuestTick_Parms, RemainingTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::NewProp_RemainingTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "OnTimedQuestTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::QuestWidgetShow_eventOnTimedQuestTick_Parms), Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics
	{
		struct QuestWidgetShow_eventShowMissionComplete_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventShowMissionComplete_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Delegate callback function // of DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedQuestTickDelegate, float, RemainingTimeSeconds);\n" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
		{ "ToolTip", "Delegate callback function  of DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimedQuestTickDelegate, float, RemainingTimeSeconds);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "ShowMissionComplete", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::QuestWidgetShow_eventShowMissionComplete_Parms), Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics
	{
		struct QuestWidgetShow_eventUpdateQuestList_Parms
		{
			FQuestTable Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventUpdateQuestList_Parms, Quest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest_MetaData)) }; // 1480036892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "UpdateQuestList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::QuestWidgetShow_eventUpdateQuestList_Parms), Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics
	{
		struct QuestWidgetShow_eventUpdateTimerDisplay_Parms
		{
			float RemainingTimeSeconds;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RemainingTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::NewProp_RemainingTimeSeconds = { "RemainingTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventUpdateTimerDisplay_Parms, RemainingTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::NewProp_RemainingTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function to update the timer display\n" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
		{ "ToolTip", "Function to update the timer display" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidgetShow, nullptr, "UpdateTimerDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::QuestWidgetShow_eventUpdateTimerDisplay_Parms), Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestWidgetShow);
	UClass* Z_Construct_UClass_UQuestWidgetShow_NoRegister()
	{
		return UQuestWidgetShow::StaticClass();
	}
	struct Z_Construct_UClass_UQuestWidgetShow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionCompleteAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionCompleteAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MissionCompleteText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionCompleteText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestWidgetShow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestWidgetShow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestWidgetShow_ClearQuestDetails, "ClearQuestDetails" }, // 248522546
		{ &Z_Construct_UFunction_UQuestWidgetShow_HideMissionCompleteText, "HideMissionCompleteText" }, // 663001164
		{ &Z_Construct_UFunction_UQuestWidgetShow_OnQuestCompleted, "OnQuestCompleted" }, // 1716099136
		{ &Z_Construct_UFunction_UQuestWidgetShow_OnQuestUpdated, "OnQuestUpdated" }, // 2952911664
		{ &Z_Construct_UFunction_UQuestWidgetShow_OnTimedQuestTick, "OnTimedQuestTick" }, // 54282345
		{ &Z_Construct_UFunction_UQuestWidgetShow_ShowMissionComplete, "ShowMissionComplete" }, // 2986317147
		{ &Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList, "UpdateQuestList" }, // 776198653
		{ &Z_Construct_UFunction_UQuestWidgetShow_UpdateTimerDisplay, "UpdateTimerDisplay" }, // 2618538191
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidgetShow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/QuestWidgetShow.h" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox = { "QuestScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestWidgetShow, QuestScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestManager_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// Make the QuestManager a UPROPERTY to ensure it is not garbage collected\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
		{ "ToolTip", "Make the QuestManager a UPROPERTY to ensure it is not garbage collected" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestManager = { "QuestManager", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestWidgetShow, QuestManager), Z_Construct_UClass_UQuestManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteAnimation = { "MissionCompleteAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestWidgetShow, MissionCompleteAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "QuestWidgetShow" },
		{ "Comment", "// Complete Mission Animation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/QuestWidgetShow.h" },
		{ "ToolTip", "Complete Mission Animation" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteText = { "MissionCompleteText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestWidgetShow, MissionCompleteText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestWidgetShow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_MissionCompleteText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestWidgetShow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestWidgetShow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestWidgetShow_Statics::ClassParams = {
		&UQuestWidgetShow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestWidgetShow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestWidgetShow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidgetShow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestWidgetShow()
	{
		if (!Z_Registration_Info_UClass_UQuestWidgetShow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestWidgetShow.OuterSingleton, Z_Construct_UClass_UQuestWidgetShow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestWidgetShow.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestWidgetShow>()
	{
		return UQuestWidgetShow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestWidgetShow);
	UQuestWidgetShow::~UQuestWidgetShow() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestWidgetShow, UQuestWidgetShow::StaticClass, TEXT("UQuestWidgetShow"), &Z_Registration_Info_UClass_UQuestWidgetShow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestWidgetShow), 727543438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_2273763949(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
