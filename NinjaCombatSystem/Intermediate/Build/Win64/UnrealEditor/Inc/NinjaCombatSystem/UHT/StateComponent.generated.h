// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
#ifdef NINJACOMBATSYSTEM_StateComponent_generated_h
#error "StateComponent.generated.h already included, missing '#pragma once' in StateComponent.h"
#endif
#define NINJACOMBATSYSTEM_StateComponent_generated_h

#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCombatStates); \
	DECLARE_FUNCTION(execAddCombatState); \
	DECLARE_FUNCTION(execHasCombatState); \
	DECLARE_FUNCTION(execRemoveCombatState); \
	DECLARE_FUNCTION(execSetCombatState);


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCombatStates); \
	DECLARE_FUNCTION(execAddCombatState); \
	DECLARE_FUNCTION(execHasCombatState); \
	DECLARE_FUNCTION(execRemoveCombatState); \
	DECLARE_FUNCTION(execSetCombatState);


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_ACCESSORS
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateComponent(); \
	friend struct Z_Construct_UClass_UStateComponent_Statics; \
public: \
	DECLARE_CLASS(UStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UStateComponent)


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStateComponent(); \
	friend struct Z_Construct_UClass_UStateComponent_Statics; \
public: \
	DECLARE_CLASS(UStateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UStateComponent)


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateComponent(UStateComponent&&); \
	NO_API UStateComponent(const UStateComponent&); \
public: \
	NO_API virtual ~UStateComponent();


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateComponent(UStateComponent&&); \
	NO_API UStateComponent(const UStateComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateComponent) \
	NO_API virtual ~UStateComponent();


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_11_PROLOG
#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_ACCESSORS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_INCLASS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_ACCESSORS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class UStateComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_StateComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
