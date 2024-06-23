// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/NinjaSaveSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaSaveSystemComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaSaveGame_NoRegister();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaSaveSystemComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaSaveSystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UNinjaSaveSystemComponent::execSaveGameData)
	{
		P_GET_OBJECT(UNinjaSaveGame,Z_Param_SaveGameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveGameData(Z_Param_SaveGameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaSaveSystemComponent::execCreateSaveGameObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNinjaSaveGame**)Z_Param__Result=P_THIS->CreateSaveGameObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaSaveSystemComponent::execLoadGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNinjaSaveGame**)Z_Param__Result=P_THIS->LoadGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaSaveSystemComponent::execSaveGame)
	{
		P_GET_OBJECT(UNinjaSaveGame,Z_Param_SaveGameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGame(Z_Param_SaveGameData);
		P_NATIVE_END;
	}
	void UNinjaSaveSystemComponent::StaticRegisterNativesUNinjaSaveSystemComponent()
	{
		UClass* Class = UNinjaSaveSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSaveGameObject", &UNinjaSaveSystemComponent::execCreateSaveGameObject },
			{ "LoadGame", &UNinjaSaveSystemComponent::execLoadGame },
			{ "SaveGame", &UNinjaSaveSystemComponent::execSaveGame },
			{ "SaveGameData", &UNinjaSaveSystemComponent::execSaveGameData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics
	{
		struct NinjaSaveSystemComponent_eventCreateSaveGameObject_Parms
		{
			UNinjaSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaSaveSystemComponent_eventCreateSaveGameObject_Parms, ReturnValue), Z_Construct_UClass_UNinjaSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystemComp" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaSaveSystemComponent, nullptr, "CreateSaveGameObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::NinjaSaveSystemComponent_eventCreateSaveGameObject_Parms), Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics
	{
		struct NinjaSaveSystemComponent_eventLoadGame_Parms
		{
			UNinjaSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaSaveSystemComponent_eventLoadGame_Parms, ReturnValue), Z_Construct_UClass_UNinjaSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystemComp" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaSaveSystemComponent, nullptr, "LoadGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::NinjaSaveSystemComponent_eventLoadGame_Parms), Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics
	{
		struct NinjaSaveSystemComponent_eventSaveGame_Parms
		{
			UNinjaSaveGame* SaveGameData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaSaveSystemComponent_eventSaveGame_Parms, SaveGameData), Z_Construct_UClass_UNinjaSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::NewProp_SaveGameData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystemComp" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaSaveSystemComponent, nullptr, "SaveGame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::NinjaSaveSystemComponent_eventSaveGame_Parms), Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics
	{
		struct NinjaSaveSystemComponent_eventSaveGameData_Parms
		{
			UNinjaSaveGame* SaveGameData;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NinjaSaveSystemComponent_eventSaveGameData_Parms, SaveGameData), Z_Construct_UClass_UNinjaSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NinjaSaveSystemComponent_eventSaveGameData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NinjaSaveSystemComponent_eventSaveGameData_Parms), &Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_SaveGameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SaveSystemComp" },
		{ "Comment", "// Define a variable to hold the save slot name\n" },
		{ "DisplayName", "Save Game Data" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
		{ "ToolTip", "Define a variable to hold the save slot name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaSaveSystemComponent, nullptr, "SaveGameData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::NinjaSaveSystemComponent_eventSaveGameData_Parms), Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaSaveSystemComponent);
	UClass* Z_Construct_UClass_UNinjaSaveSystemComponent_NoRegister()
	{
		return UNinjaSaveSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaSaveSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaSaveSystemComponent_CreateSaveGameObject, "CreateSaveGameObject" }, // 312324345
		{ &Z_Construct_UFunction_UNinjaSaveSystemComponent_LoadGame, "LoadGame" }, // 3519865977
		{ &Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGame, "SaveGame" }, // 2607232848
		{ &Z_Construct_UFunction_UNinjaSaveSystemComponent_SaveGameData, "SaveGameData" }, // 1356238426
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NinjaSaveSystemComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SaveSystemComp" },
		{ "ModuleRelativePath", "Public/NinjaSaveSystemComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNinjaSaveSystemComponent, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::NewProp_SaveSlotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::NewProp_SaveSlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaSaveSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::ClassParams = {
		&UNinjaSaveSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaSaveSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UNinjaSaveSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaSaveSystemComponent.OuterSingleton, Z_Construct_UClass_UNinjaSaveSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNinjaSaveSystemComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UNinjaSaveSystemComponent>()
	{
		return UNinjaSaveSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaSaveSystemComponent);
	UNinjaSaveSystemComponent::~UNinjaSaveSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveSystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaSaveSystemComponent, UNinjaSaveSystemComponent::StaticClass, TEXT("UNinjaSaveSystemComponent"), &Z_Registration_Info_UClass_UNinjaSaveSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaSaveSystemComponent), 215572611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveSystemComponent_h_2597689820(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaSaveSystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
