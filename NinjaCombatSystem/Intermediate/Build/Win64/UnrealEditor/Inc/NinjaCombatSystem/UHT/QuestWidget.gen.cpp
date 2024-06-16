// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/QuestSystem/QuestWidget.h"
#include "NinjaCombatSystem/Public/QuestSystem/Quest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestWidget() {}
// Cross Module References
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestWidget();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestWidget_NoRegister();
	NINJACOMBATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuest();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UQuestWidget::execUpdateQuestList)
	{
		P_GET_STRUCT_REF(FQuest,Z_Param_Out_Quest);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateQuestList(Z_Param_Out_Quest);
		P_NATIVE_END;
	}
	void UQuestWidget::StaticRegisterNativesUQuestWidget()
	{
		UClass* Class = UQuestWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateQuestList", &UQuestWidget::execUpdateQuestList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics
	{
		struct QuestWidget_eventUpdateQuestList_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::NewProp_Quest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidget_eventUpdateQuestList_Parms, Quest), Z_Construct_UScriptStruct_FQuest, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::NewProp_Quest_MetaData)) }; // 1864122079
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "Comment", "// Updates the quest list in the UI\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestWidget.h" },
		{ "ToolTip", "Updates the quest list in the UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "UpdateQuestList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::QuestWidget_eventUpdateQuestList_Parms), Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_UpdateQuestList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuestWidget_UpdateQuestList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestWidget);
	UClass* Z_Construct_UClass_UQuestWidget_NoRegister()
	{
		return UQuestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestWidget_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestWidget_UpdateQuestList, "UpdateQuestList" }, // 3369423861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/QuestWidget.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::NewProp_QuestScrollBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "// Reference to the scroll box in the widget\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestWidget.h" },
		{ "ToolTip", "Reference to the scroll box in the widget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidget_Statics::NewProp_QuestScrollBox = { "QuestScrollBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UQuestWidget, QuestScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::NewProp_QuestScrollBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::NewProp_QuestScrollBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidget_Statics::NewProp_QuestScrollBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestWidget_Statics::ClassParams = {
		&UQuestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestWidget()
	{
		if (!Z_Registration_Info_UClass_UQuestWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestWidget.OuterSingleton, Z_Construct_UClass_UQuestWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestWidget.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UQuestWidget>()
	{
		return UQuestWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestWidget);
	UQuestWidget::~UQuestWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestWidget, UQuestWidget::StaticClass, TEXT("UQuestWidget"), &Z_Registration_Info_UClass_UQuestWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestWidget), 749168249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestWidget_h_3018580926(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
