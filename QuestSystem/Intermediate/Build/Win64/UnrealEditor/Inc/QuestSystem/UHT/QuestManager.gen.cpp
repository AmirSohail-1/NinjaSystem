// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuestSystem/Public/Component/QuestManager.h"
#include "QuestSystem/Public/QuestTable/QuestTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestManager_NoRegister();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestSaveGame_NoRegister();
	QUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics
	{
		struct _Script_QuestSystem_eventOnQuestUpdated_Parms
		{
			FQuestTable CurrentQuest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentQuest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_CurrentQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_CurrentQuest = { "CurrentQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_QuestSystem_eventOnQuestUpdated_Parms, CurrentQuest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_CurrentQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_CurrentQuest_MetaData)) }; // 4046486730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_CurrentQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QuestSystem, nullptr, "OnQuestUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::_Script_QuestSystem_eventOnQuestUpdated_Parms), Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UQuestManager::execLoadQuestProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadQuestProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManager::execSaveQuestProgress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveQuestProgress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManager::execStartTimedQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimedQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManager::execAddAllQuestsFromDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllQuestsFromDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManager::execCompleteQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManager::execAddQuest)
	{
		P_GET_STRUCT_REF(FQuestTable,Z_Param_Out_NewQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuest(Z_Param_Out_NewQuest);
		P_NATIVE_END;
	}
	void UQuestManager::StaticRegisterNativesUQuestManager()
	{
		UClass* Class = UQuestManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllQuestsFromDataTable", &UQuestManager::execAddAllQuestsFromDataTable },
			{ "AddQuest", &UQuestManager::execAddQuest },
			{ "CompleteQuest", &UQuestManager::execCompleteQuest },
			{ "LoadQuestProgress", &UQuestManager::execLoadQuestProgress },
			{ "SaveQuestProgress", &UQuestManager::execSaveQuestProgress },
			{ "StartTimedQuest", &UQuestManager::execStartTimedQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AddAllQuestsFromDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManager_AddQuest_Statics
	{
		struct QuestManager_eventAddQuest_Parms
		{
			FQuestTable NewQuest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewQuest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewQuest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_AddQuest_Statics::NewProp_NewQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManager_AddQuest_Statics::NewProp_NewQuest = { "NewQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestManager_eventAddQuest_Parms, NewQuest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::NewProp_NewQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::NewProp_NewQuest_MetaData)) }; // 4046486730
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_AddQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_AddQuest_Statics::NewProp_NewQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_AddQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_AddQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "AddQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::QuestManager_eventAddQuest_Parms), Z_Construct_UFunction_UQuestManager_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_AddQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_AddQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_AddQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics
	{
		struct QuestManager_eventCompleteQuest_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestManager_eventCompleteQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "CompleteQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::QuestManager_eventCompleteQuest_Parms), Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_CompleteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_CompleteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "LoadQuestProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_LoadQuestProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_LoadQuestProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "SaveQuestProgress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_SaveQuestProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_SaveQuestProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics
	{
		struct QuestManager_eventStartTimedQuest_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestManager_eventStartTimedQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManager, nullptr, "StartTimedQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::QuestManager_eventStartTimedQuest_Parms), Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManager_StartTimedQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManager_StartTimedQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestManager);
	UClass* Z_Construct_UClass_UQuestManager_NoRegister()
	{
		return UQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_UQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnQuestUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnQuestUpdated;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveQuests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveQuests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveQuests;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestSaveGame_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestSaveGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManager_AddAllQuestsFromDataTable, "AddAllQuestsFromDataTable" }, // 275133110
		{ &Z_Construct_UFunction_UQuestManager_AddQuest, "AddQuest" }, // 2012638739
		{ &Z_Construct_UFunction_UQuestManager_CompleteQuest, "CompleteQuest" }, // 1092773254
		{ &Z_Construct_UFunction_UQuestManager_LoadQuestProgress, "LoadQuestProgress" }, // 850461122
		{ &Z_Construct_UFunction_UQuestManager_SaveQuestProgress, "SaveQuestProgress" }, // 1326283406
		{ &Z_Construct_UFunction_UQuestManager_StartTimedQuest, "StartTimedQuest" }, // 3993003913
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/QuestManager.h" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestUpdated_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestUpdated = { "OnQuestUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManager, OnQuestUpdated), Z_Construct_UDelegateFunction_QuestSystem_OnQuestUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestUpdated_MetaData)) }; // 1218412486
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Inner = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(nullptr, 0) }; // 4046486730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManager, ActiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_MetaData)) }; // 4046486730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManager, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManager, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestSaveGame_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Component/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestSaveGame = { "QuestSaveGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManager, QuestSaveGame), Z_Construct_UClass_UQuestSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestSaveGame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_OnQuestUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_ActiveQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManager_Statics::NewProp_QuestSaveGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManager_Statics::ClassParams = {
		&UQuestManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestManager()
	{
		if (!Z_Registration_Info_UClass_UQuestManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManager.OuterSingleton, Z_Construct_UClass_UQuestManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestManager.OuterSingleton;
	}
	template<> QUESTSYSTEM_API UClass* StaticClass<UQuestManager>()
	{
		return UQuestManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManager);
	UQuestManager::~UQuestManager() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManager, UQuestManager::StaticClass, TEXT("UQuestManager"), &Z_Registration_Info_UClass_UQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManager), 4155225162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_321850813(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
