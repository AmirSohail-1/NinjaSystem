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
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent();
	NINJACOMBATSYSTEM_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
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
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
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
	void UQuestComponent::StaticRegisterNativesUQuestComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestComponent);
	UClass* Z_Construct_UClass_UQuestComponent_NoRegister()
	{
		return UQuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCombatSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestComponent.h" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestComponent_Statics::ClassParams = {
		&UQuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
		{ FQuestData::StaticStruct, Z_Construct_UScriptStruct_FQuestData_Statics::NewStructOps, TEXT("QuestData"), &Z_Registration_Info_UScriptStruct_QuestData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestData), 453249226U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestComponent, UQuestComponent::StaticClass, TEXT("UQuestComponent"), &Z_Registration_Info_UClass_UQuestComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestComponent), 2185893490U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_2461652444(TEXT("/Script/NinjaCombatSystem"),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
