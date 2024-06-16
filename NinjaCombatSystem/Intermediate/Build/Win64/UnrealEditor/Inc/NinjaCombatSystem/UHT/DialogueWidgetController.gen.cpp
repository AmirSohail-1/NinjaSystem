// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/DialogueWidgetController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidgetController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UDialogueWidgetController();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UDialogueWidgetController_NoRegister();
	NINJACOMBATSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics
	{
		struct _Script_NinjaCombatSystem_eventDialogueStartedSignature_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_NinjaCombatSystem_eventDialogueStartedSignature_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DialogueWidgetController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NinjaCombatSystem, nullptr, "DialogueStartedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::_Script_NinjaCombatSystem_eventDialogueStartedSignature_Parms), Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDialogueWidgetController::execStartDialogue)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DialogueID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartDialogue(Z_Param_DialogueID);
		P_NATIVE_END;
	}
	void UDialogueWidgetController::StaticRegisterNativesUDialogueWidgetController()
	{
		UClass* Class = UDialogueWidgetController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartDialogue", &UDialogueWidgetController::execStartDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics
	{
		struct DialogueWidgetController_eventStartDialogue_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::NewProp_DialogueID = { "DialogueID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DialogueWidgetController_eventStartDialogue_Parms, DialogueID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::NewProp_DialogueID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue" },
		{ "Comment", "// Start dialogue with the specified ID\n" },
		{ "ModuleRelativePath", "Public/DialogueWidgetController.h" },
		{ "ToolTip", "Start dialogue with the specified ID" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidgetController, nullptr, "StartDialogue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::DialogueWidgetController_eventStartDialogue_Parms), Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDialogueWidgetController_StartDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidgetController_StartDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidgetController);
	UClass* Z_Construct_UClass_UDialogueWidgetController_NoRegister()
	{
		return UDialogueWidgetController::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWidgetController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWidgetController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWidgetController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidgetController_StartDialogue, "StartDialogue" }, // 1477714325
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidgetController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DialogueWidgetController.h" },
		{ "ModuleRelativePath", "Public/DialogueWidgetController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidgetController_Statics::NewProp_OnDialogueStarted_MetaData[] = {
		{ "Category", "Dialogue Events" },
		{ "Comment", "// Event broadcasted when a dialogue starts\n" },
		{ "ModuleRelativePath", "Public/DialogueWidgetController.h" },
		{ "ToolTip", "Event broadcasted when a dialogue starts" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDialogueWidgetController_Statics::NewProp_OnDialogueStarted = { "OnDialogueStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDialogueWidgetController, OnDialogueStarted), Z_Construct_UDelegateFunction_NinjaCombatSystem_DialogueStartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDialogueWidgetController_Statics::NewProp_OnDialogueStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetController_Statics::NewProp_OnDialogueStarted_MetaData)) }; // 166302428
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidgetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidgetController_Statics::NewProp_OnDialogueStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWidgetController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidgetController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidgetController_Statics::ClassParams = {
		&UDialogueWidgetController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWidgetController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDialogueWidgetController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidgetController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDialogueWidgetController()
	{
		if (!Z_Registration_Info_UClass_UDialogueWidgetController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidgetController.OuterSingleton, Z_Construct_UClass_UDialogueWidgetController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWidgetController.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UDialogueWidgetController>()
	{
		return UDialogueWidgetController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidgetController);
	UDialogueWidgetController::~UDialogueWidgetController() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidgetController, UDialogueWidgetController::StaticClass, TEXT("UDialogueWidgetController"), &Z_Registration_Info_UClass_UDialogueWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidgetController), 3030870448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_1707980376(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
