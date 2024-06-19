// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogue();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueData();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestData();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References

static_assert(std::is_polymorphic<FQuestData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestData;
class UScriptStruct* FQuestData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestData, Z_Construct_UPackage__Script_NinjaCombatSystem(), TEXT("QuestData"));
	}
	return Z_Registration_Info_UScriptStruct_QuestData.OuterSingleton;
}
template<> NINJACOMBATSYSTEM_API UScriptStruct* StaticStruct<FQuestData>()
{
	return FQuestData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Forward declaration of UDataTable\n" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
		{ "ToolTip", "Forward declaration of UDataTable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestData",
		sizeof(FQuestData),
		alignof(FQuestData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestData()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton, Z_Construct_UScriptStruct_FQuestData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialogue>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogue cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Dialogue;
class UScriptStruct* FDialogue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogue, Z_Construct_UPackage__Script_NinjaCombatSystem(), TEXT("Dialogue"));
	}
	return Z_Registration_Info_UScriptStruct_Dialogue.OuterSingleton;
}
template<> NINJACOMBATSYSTEM_API UScriptStruct* StaticStruct<FDialogue>()
{
	return FDialogue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogue, DialogueText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions_Inner = { "DialogueOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions = { "DialogueOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogue, DialogueOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogue_Statics::NewProp_DialogueOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Dialogue",
		sizeof(FDialogue),
		alignof(FDialogue),
		Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogue()
	{
		if (!Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton, Z_Construct_UScriptStruct_FDialogue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Dialogue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDialogueData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueData;
class UScriptStruct* FDialogueData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueData, Z_Construct_UPackage__Script_NinjaCombatSystem(), TEXT("DialogueData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueData.OuterSingleton;
}
template<> NINJACOMBATSYSTEM_API UScriptStruct* StaticStruct<FDialogueData>()
{
	return FDialogueData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Dialogue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dialogue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Define the FDialgoue struct\n// USTRUCT(BlueprintType)\n// struct FDialogue\n// {\n// \x09GENERATED_BODY()\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09int32 DialogueID;\n//\n// \x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n// \x09""FString DialogueText;\n// };\n" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
		{ "ToolTip", "Define the FDialgoue struct\nUSTRUCT(BlueprintType)\nstruct FDialogue\n{\n      GENERATED_BODY()\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      int32 DialogueID;\n\n      UPROPERTY(EditAnywhere, BlueprintReadWrite)\n      FString DialogueText;\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData[] = {
		{ "Category", "DA Dialogue" },
		{ "DisplayName", "Dialogue" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue = { "Dialogue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueData, Dialogue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue_MetaData)) }; // 2709382139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueData_Statics::NewProp_Dialogue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DialogueData",
		sizeof(FDialogueData),
		alignof(FDialogueData),
		Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueData()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueData.InnerSingleton;
	}
	DEFINE_FUNCTION(UQuestComponent::execSetDialogueTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_NewDialogueTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueTable(Z_Param_NewDialogueTable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execGetDialogue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDialogue*)Z_Param__Result=P_THIS->GetDialogue(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	void UQuestComponent::StaticRegisterNativesUQuestComponent()
	{
		UClass* Class = UQuestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDialogue", &UQuestComponent::execGetDialogue },
			{ "SetDialogueTable", &UQuestComponent::execSetDialogueTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics
	{
		struct QuestComponent_eventGetDialogue_Parms
		{
			int32 DialogueID;
			FDialogue ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestComponent_eventGetDialogue_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestComponent_eventGetDialogue_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogue, METADATA_PARAMS(nullptr, 0) }; // 2709382139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::NewProp_DialogueID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Fetches the dialogue with the specified ID\n" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
		{ "ToolTip", "Fetches the dialogue with the specified ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "GetDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::QuestComponent_eventGetDialogue_Parms), Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_GetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestComponent_GetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics
	{
		struct QuestComponent_eventSetDialogueTable_Parms
		{
			UDataTable* NewDialogueTable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable = { "NewDialogueTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestComponent_eventSetDialogueTable_Parms, NewDialogueTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::NewProp_NewDialogueTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Sets the dialogue table (can be called dynamically at runtime)\n" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
		{ "ToolTip", "Sets the dialogue table (can be called dynamically at runtime)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "SetDialogueTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::QuestComponent_eventSetDialogueTable_Parms), Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_SetDialogueTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestComponent_SetDialogueTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestComponent);
	UClass* Z_Construct_UClass_UQuestComponent_NoRegister()
	{
		return UQuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestComponent_GetDialogue, "GetDialogue" }, // 3254830705
		{ &Z_Construct_UFunction_UQuestComponent_SetDialogueTable, "SetDialogueTable" }, // 139115428
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestComponent.h" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_DialogueDataTable_MetaData[] = {
		{ "Category", "QuestComponent" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_DialogueDataTable = { "DialogueDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestComponent, DialogueDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_DialogueDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_DialogueDataTable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_DialogueDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestComponent_Statics::ClassParams = {
		&UQuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestComponent()
	{
		if (!Z_Registration_Info_UClass_UQuestComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestComponent.OuterSingleton, Z_Construct_UClass_UQuestComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UQuestComponent>()
	{
		return UQuestComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestComponent);
	UQuestComponent::~UQuestComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ScriptStructInfo[] = {
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 2861308547U) },
		{ FDialogue::StaticStruct, Z_Construct_UScriptStruct_FDialogue_Statics::NewStructOps, TEXT("Dialogue"), &Z_Registration_Info_UScriptStruct_Dialogue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogue), 2709382139U) },
		{ FDialogueData::StaticStruct, Z_Construct_UScriptStruct_FDialogueData_Statics::NewStructOps, TEXT("DialogueData"), &Z_Registration_Info_UScriptStruct_DialogueData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueData), 3534440670U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestComponent, UQuestComponent::StaticClass, TEXT("UQuestComponent"), &Z_Registration_Info_UClass_UQuestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestComponent), 4156249049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_3512611587(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
