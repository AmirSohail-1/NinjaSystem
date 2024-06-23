// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/DialogueUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UDialogueUserWidget();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UDialogueWidgetController_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UDialogueUserWidget::execOnDialogueStarted)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDialogueStarted(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueUserWidget::execSetDialogue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogue(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueUserWidget::execSetDialogueManagerComponent)
	{
		P_GET_OBJECT(UQuestComponent,Z_Param_InDialogueManagerComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueManagerComponent(Z_Param_InDialogueManagerComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueUserWidget::execSetDialogueWidgetController)
	{
		P_GET_OBJECT(UDialogueWidgetController,Z_Param_InDialogueWidgetController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDialogueWidgetController(Z_Param_InDialogueWidgetController);
		P_NATIVE_END;
	}
	void UDialogueUserWidget::StaticRegisterNativesUDialogueUserWidget()
	{
		UClass* Class = UDialogueUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDialogueStarted", &UDialogueUserWidget::execOnDialogueStarted },
			{ "SetDialogue", &UDialogueUserWidget::execSetDialogue },
			{ "SetDialogueManagerComponent", &UDialogueUserWidget::execSetDialogueManagerComponent },
			{ "SetDialogueWidgetController", &UDialogueUserWidget::execSetDialogueWidgetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics
	{
		struct DialogueUserWidget_eventOnDialogueStarted_Parms
		{
			int32 DialogueID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventOnDialogueStarted_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event handler for when dialogue starts\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Event handler for when dialogue starts" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "OnDialogueStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::DialogueUserWidget_eventOnDialogueStarted_Parms), Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics
	{
		struct DialogueUserWidget_eventSetDialogue_Parms
		{
			int32 DialogueID;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventSetDialogue_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Sets the dialogue ID and displays the dialogue text\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Sets the dialogue ID and displays the dialogue text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "SetDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::DialogueUserWidget_eventSetDialogue_Parms), Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_SetDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_SetDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics
	{
		struct DialogueUserWidget_eventSetDialogueManagerComponent_Parms
		{
			UQuestComponent* InDialogueManagerComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDialogueManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogueManagerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::NewProp_InDialogueManagerComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::NewProp_InDialogueManagerComponent = { "InDialogueManagerComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventSetDialogueManagerComponent_Parms, InDialogueManagerComponent), Z_Construct_UClass_UQuestComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::NewProp_InDialogueManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::NewProp_InDialogueManagerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::NewProp_InDialogueManagerComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Sets the reference to the QuestComponent acting as the dialogue manager\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Sets the reference to the QuestComponent acting as the dialogue manager" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "SetDialogueManagerComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::DialogueUserWidget_eventSetDialogueManagerComponent_Parms), Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics
	{
		struct DialogueUserWidget_eventSetDialogueWidgetController_Parms
		{
			UDialogueWidgetController* InDialogueWidgetController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDialogueWidgetController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::NewProp_InDialogueWidgetController = { "InDialogueWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueUserWidget_eventSetDialogueWidgetController_Parms, InDialogueWidgetController), Z_Construct_UClass_UDialogueWidgetController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::NewProp_InDialogueWidgetController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Sets the reference to the DialogueWidgetController\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Sets the reference to the DialogueWidgetController" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueUserWidget, nullptr, "SetDialogueWidgetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::DialogueUserWidget_eventSetDialogueWidgetController_Parms), Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueUserWidget);
	UClass* Z_Construct_UClass_UDialogueUserWidget_NoRegister()
	{
		return UDialogueUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidgetController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManagerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueManagerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueTextBlock_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueTextBlock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueOptionWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionsBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOptionsBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueUserWidget_OnDialogueStarted, "OnDialogueStarted" }, // 3874247559
		{ &Z_Construct_UFunction_UDialogueUserWidget_SetDialogue, "SetDialogue" }, // 3123334387
		{ &Z_Construct_UFunction_UDialogueUserWidget_SetDialogueManagerComponent, "SetDialogueManagerComponent" }, // 1433669366
		{ &Z_Construct_UFunction_UDialogueUserWidget_SetDialogueWidgetController, "SetDialogueWidgetController" }, // 679437713
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueUserWidget.h" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueWidgetController_MetaData[] = {
		{ "Comment", "// Reference to the Dialogue Widget Controller\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Reference to the Dialogue Widget Controller" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueWidgetController = { "DialogueWidgetController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueUserWidget, DialogueWidgetController), Z_Construct_UClass_UDialogueWidgetController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueWidgetController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueWidgetController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueManagerComponent_MetaData[] = {
		{ "Comment", "// Reference to the QuestComponent acting as the dialogue manager\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Reference to the QuestComponent acting as the dialogue manager" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueManagerComponent = { "DialogueManagerComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueUserWidget, DialogueManagerComponent), Z_Construct_UClass_UQuestComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueManagerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueManagerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// The text block widget to display dialogue text\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "The text block widget to display dialogue text" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueTextBlock = { "DialogueTextBlock", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueUserWidget, DialogueTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueTextBlock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionWidgetClass_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// The class of the widget used for dialogue options\n" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "The class of the widget used for dialogue options" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionWidgetClass = { "DialogueOptionWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueUserWidget, DialogueOptionWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionsBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Vertical box widget to hold dialogue options\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DialogueUserWidget.h" },
		{ "ToolTip", "Vertical box widget to hold dialogue options" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionsBox = { "DialogueOptionsBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueUserWidget, DialogueOptionsBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionsBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionsBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueWidgetController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueManagerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueTextBlock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueUserWidget_Statics::NewProp_DialogueOptionsBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueUserWidget_Statics::ClassParams = {
		&UDialogueUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueUserWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueUserWidget.OuterSingleton, Z_Construct_UClass_UDialogueUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueUserWidget.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UDialogueUserWidget>()
	{
		return UDialogueUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueUserWidget);
	UDialogueUserWidget::~UDialogueUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueUserWidget, UDialogueUserWidget::StaticClass, TEXT("UDialogueUserWidget"), &Z_Registration_Info_UClass_UDialogueUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueUserWidget), 1349633152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_2935921360(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
