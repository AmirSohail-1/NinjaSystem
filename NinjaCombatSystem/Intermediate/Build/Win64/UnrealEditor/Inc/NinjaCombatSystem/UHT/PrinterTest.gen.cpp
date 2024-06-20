// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCombatSystem/Public/PrinterTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrinterTest() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_APrinterTest();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_APrinterTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NinjaCombatSystem();
// End Cross Module References
	DEFINE_FUNCTION(APrinterTest::execPrintFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintFunction();
		P_NATIVE_END;
	}
	void APrinterTest::StaticRegisterNativesAPrinterTest()
	{
		UClass* Class = APrinterTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PrintFunction", &APrinterTest::execPrintFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APrinterTest_PrintFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APrinterTest_PrintFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Printer" },
		{ "DisplayName", "Print Function" },
		{ "Keywords", "Print" },
		{ "ModuleRelativePath", "Public/PrinterTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APrinterTest_PrintFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APrinterTest, nullptr, "PrintFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APrinterTest_PrintFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APrinterTest_PrintFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APrinterTest_PrintFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APrinterTest_PrintFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrinterTest);
	UClass* Z_Construct_UClass_APrinterTest_NoRegister()
	{
		return APrinterTest::StaticClass();
	}
	struct Z_Construct_UClass_APrinterTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrinterTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APrinterTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APrinterTest_PrintFunction, "PrintFunction" }, // 1345251222
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrinterTest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PrinterTest.h" },
		{ "ModuleRelativePath", "Public/PrinterTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrinterTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrinterTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrinterTest_Statics::ClassParams = {
		&APrinterTest::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APrinterTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APrinterTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APrinterTest()
	{
		if (!Z_Registration_Info_UClass_APrinterTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrinterTest.OuterSingleton, Z_Construct_UClass_APrinterTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrinterTest.OuterSingleton;
	}
	template<> NINJACOMBATSYSTEM_API UClass* StaticClass<APrinterTest>()
	{
		return APrinterTest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrinterTest);
	APrinterTest::~APrinterTest() {}
	struct Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_PrinterTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_PrinterTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrinterTest, APrinterTest::StaticClass, TEXT("APrinterTest"), &Z_Registration_Info_UClass_APrinterTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrinterTest), 1037579130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_PrinterTest_h_1823743458(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_PrinterTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_PrinterTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
