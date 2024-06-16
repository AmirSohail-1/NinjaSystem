// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NinjaCombatCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef NINJACOMBATSYSTEM_NinjaCombatCharacter_generated_h
#error "NinjaCombatCharacter.generated.h already included, missing '#pragma once' in NinjaCombatCharacter.h"
#endif
#define NINJACOMBATSYSTEM_NinjaCombatCharacter_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddQuestsFromDataTable); \
	DECLARE_FUNCTION(execHandleQuestCompleted); \
	DECLARE_FUNCTION(execLoadGameData); \
	DECLARE_FUNCTION(execSaveGameData); \
	DECLARE_FUNCTION(execUpdateCharacterState); \
	DECLARE_FUNCTION(execDashAttack); \
	DECLARE_FUNCTION(execHeavyAttack); \
	DECLARE_FUNCTION(execAirAttack); \
	DECLARE_FUNCTION(execLightAttack); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddQuestsFromDataTable); \
	DECLARE_FUNCTION(execHandleQuestCompleted); \
	DECLARE_FUNCTION(execLoadGameData); \
	DECLARE_FUNCTION(execSaveGameData); \
	DECLARE_FUNCTION(execUpdateCharacterState); \
	DECLARE_FUNCTION(execDashAttack); \
	DECLARE_FUNCTION(execHeavyAttack); \
	DECLARE_FUNCTION(execAirAttack); \
	DECLARE_FUNCTION(execLightAttack); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCombatCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCombatCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatCharacter)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_INCLASS \
private: \
	static void StaticRegisterNativesANinjaCombatCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCombatCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCombatCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCombatCharacter)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANinjaCombatCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCombatCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCombatCharacter(ANinjaCombatCharacter&&); \
	NO_API ANinjaCombatCharacter(const ANinjaCombatCharacter&); \
public: \
	NO_API virtual ~ANinjaCombatCharacter();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCombatCharacter(ANinjaCombatCharacter&&); \
	NO_API ANinjaCombatCharacter(const ANinjaCombatCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCombatCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCombatCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANinjaCombatCharacter) \
	NO_API virtual ~ANinjaCombatCharacter();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_30_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class ANinjaCombatCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_NinjaCombatCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
