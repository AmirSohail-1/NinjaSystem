// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/NinjaCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCharacterMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execCustomFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CustomFunction();
		P_NATIVE_END;
	}
	void UNinjaCharacterMovementComponent::StaticRegisterNativesUNinjaCharacterMovementComponent()
	{
		UClass* Class = UNinjaCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomFunction", &UNinjaCharacterMovementComponent::execCustomFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaMovement" },
		{ "Comment", "// Example custom function, make it BlueprintCallable\n" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Example custom function, make it BlueprintCallable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "CustomFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNinjaCharacterMovementComponent);
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_CustomFunction, "CustomFunction" }, // 2505565762
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NinjaCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCharacterMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams = {
		&UNinjaCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNinjaCharacterMovementComponent.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<UNinjaCharacterMovementComponent>()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCharacterMovementComponent);
	UNinjaCharacterMovementComponent::~UNinjaCharacterMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCharacterMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNinjaCharacterMovementComponent, UNinjaCharacterMovementComponent::StaticClass, TEXT("UNinjaCharacterMovementComponent"), &Z_Registration_Info_UClass_UNinjaCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNinjaCharacterMovementComponent), 432320523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCharacterMovementComponent_h_3092609442(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCharacterMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
