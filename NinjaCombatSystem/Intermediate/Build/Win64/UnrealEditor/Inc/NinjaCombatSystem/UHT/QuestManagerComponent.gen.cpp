// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestSystem/QuestManagerComponent.h"
#include "NinjaCombatSystem/Public/QuestSystem/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManagerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestManagerComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister();
	NINJACOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics
	{
		struct _Script_NinjaCombatSystem_eventOnQuestUpdated_Parms
		{
			FQuest Quest;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCombatSystem_eventOnQuestUpdated_Parms, Quest), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_Quest_MetaData)) }; // 1864122079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// single quest purpose only update\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
		{ "ToolTip", "single quest purpose only update" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombatSystem, nullptr, "OnQuestUpdated__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::_Script_NinjaCombatSystem_eventOnQuestUpdated_Parms), Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execUpdateCurrentQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCurrentQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execAddAllQuestsFromDataTable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAllQuestsFromDataTable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execCompleteQuest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_QuestName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuest(Z_Param_QuestName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestManagerComponent::execAddQuest)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_NewQuest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuest(Z_Param_Out_NewQuest);
		P_NATIVE_END;
	}
	void UQuestManagerComponent::StaticRegisterNativesUQuestManagerComponent()
	{
		UClass* Class = UQuestManagerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAllQuestsFromDataTable", &UQuestManagerComponent::execAddAllQuestsFromDataTable },
			{ "AddQuest", &UQuestManagerComponent::execAddQuest },
			{ "CompleteQuest", &UQuestManagerComponent::execCompleteQuest },
			{ "UpdateCurrentQuest", &UQuestManagerComponent::execUpdateCurrentQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "AddAllQuestsFromDataTable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics
	{
		struct QuestManagerComponent_eventAddQuest_Parms
		{
			FQuest NewQuest;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::NewProp_NewQuest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::NewProp_NewQuest = { "NewQuest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestManagerComponent_eventAddQuest_Parms, NewQuest), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::NewProp_NewQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::NewProp_NewQuest_MetaData)) }; // 1864122079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::NewProp_NewQuest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "AddQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::QuestManagerComponent_eventAddQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_AddQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_AddQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics
	{
		struct QuestManagerComponent_eventCompleteQuest_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::NewProp_QuestName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestManagerComponent_eventCompleteQuest_Parms, QuestName), METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::NewProp_QuestName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::NewProp_QuestName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "CompleteQuest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::QuestManagerComponent_eventCompleteQuest_Parms), Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestManagerComponent, nullptr, "UpdateCurrentQuest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestManagerComponent);
	UClass* Z_Construct_UClass_UQuestManagerComponent_NoRegister()
	{
		return UQuestManagerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestManagerComponent_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestManagerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestManagerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestManagerComponent_AddAllQuestsFromDataTable, "AddAllQuestsFromDataTable" }, // 3553781821
		{ &Z_Construct_UFunction_UQuestManagerComponent_AddQuest, "AddQuest" }, // 961249404
		{ &Z_Construct_UFunction_UQuestManagerComponent_CompleteQuest, "CompleteQuest" }, // 3312095602
		{ &Z_Construct_UFunction_UQuestManagerComponent_UpdateCurrentQuest, "UpdateCurrentQuest" }, // 955676397
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestSystem/QuestManagerComponent.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestUpdated_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestUpdated = { "OnQuestUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManagerComponent, OnQuestUpdated), Z_Construct_UDelegateFunction_NinjaCombatSystem_OnQuestUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestUpdated_MetaData)) }; // 206697468
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests_Inner = { "ActiveQuests", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(nullptr, 0) }; // 1864122079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests = { "ActiveQuests", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManagerComponent, ActiveQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests_MetaData)) }; // 1864122079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestManagerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestManagerComponent, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_OnQuestUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_ActiveQuests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestManagerComponent_Statics::NewProp_QuestDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestManagerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestManagerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams = {
		&UQuestManagerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestManagerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestManagerComponent()
	{
		if (!Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton, Z_Construct_UClass_UQuestManagerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestManagerComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UQuestManagerComponent>()
	{
		return UQuestManagerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestManagerComponent);
	UQuestManagerComponent::~UQuestManagerComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestManagerComponent, UQuestManagerComponent::StaticClass, TEXT("UQuestManagerComponent"), &Z_Registration_Info_UClass_UQuestManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestManagerComponent), 1009274646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_3330995655(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
