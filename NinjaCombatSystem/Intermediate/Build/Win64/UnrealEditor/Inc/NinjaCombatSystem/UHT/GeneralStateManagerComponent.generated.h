// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeneralStateManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef NINJACOMBATSYSTEM_GeneralStateManagerComponent_generated_h
#error "GeneralStateManagerComponent.generated.h already included, missing '#pragma once' in GeneralStateManagerComponent.h"
#endif
#define NINJACOMBATSYSTEM_GeneralStateManagerComponent_generated_h

#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCombatStates); \
	DECLARE_FUNCTION(execAddCombatState); \
	DECLARE_FUNCTION(execHasCombatState); \
	DECLARE_FUNCTION(execRemoveCombatState); \
	DECLARE_FUNCTION(execSetCombatState);


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCombatStates); \
	DECLARE_FUNCTION(execAddCombatState); \
	DECLARE_FUNCTION(execHasCombatState); \
	DECLARE_FUNCTION(execRemoveCombatState); \
	DECLARE_FUNCTION(execSetCombatState);


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_ACCESSORS
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneralStateManagerComponent(); \
	friend struct Z_Construct_UClass_UGeneralStateManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGeneralStateManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UGeneralStateManagerComponent)


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUGeneralStateManagerComponent(); \
	friend struct Z_Construct_UClass_UGeneralStateManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UGeneralStateManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UGeneralStateManagerComponent)


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneralStateManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneralStateManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralStateManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralStateManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralStateManagerComponent(UGeneralStateManagerComponent&&); \
	NO_API UGeneralStateManagerComponent(const UGeneralStateManagerComponent&); \
public: \
	NO_API virtual ~UGeneralStateManagerComponent();


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneralStateManagerComponent(UGeneralStateManagerComponent&&); \
	NO_API UGeneralStateManagerComponent(const UGeneralStateManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneralStateManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneralStateManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneralStateManagerComponent) \
	NO_API virtual ~UGeneralStateManagerComponent();


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_10_PROLOG
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_ACCESSORS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_INCLASS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_ACCESSORS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class UGeneralStateManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_GeneralStateManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
