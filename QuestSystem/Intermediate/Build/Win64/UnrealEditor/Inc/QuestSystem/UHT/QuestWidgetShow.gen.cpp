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
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestWidgetShow();
	QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestWidgetShow_NoRegister();
	QUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTable();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QuestSystem();
// End Cross Module References
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
			{ "UpdateQuestList", &UQuestWidgetShow::execUpdateQuestList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(QuestWidgetShow_eventUpdateQuestList_Parms, Quest), Z_Construct_UScriptStruct_FQuestTable, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList_Statics::NewProp_Quest_MetaData)) }; // 4046486730
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestWidgetShow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QuestSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestWidgetShow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestWidgetShow_UpdateQuestList, "UpdateQuestList" }, // 3190886893
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestWidgetShow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidgetShow_Statics::NewProp_QuestScrollBox,
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
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestWidgetShow, UQuestWidgetShow::StaticClass, TEXT("UQuestWidgetShow"), &Z_Registration_Info_UClass_UQuestWidgetShow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestWidgetShow), 99846310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_2991700498(TEXT("/Script/QuestSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_Public_UI_QuestWidgetShow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
