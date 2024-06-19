// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_TestCharacter_generated_h
#error "TestCharacter.generated.h already included, missing '#pragma once' in TestCharacter.h"
#endif
#define QUESTSYSTEM_TestCharacter_generated_h

#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execStartQuest);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execStartQuest);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_ACCESSORS
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public: \
	NO_API virtual ~ATestCharacter();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestCharacter(ATestCharacter&&); \
	NO_API ATestCharacter(const ATestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCharacter) \
	NO_API virtual ~ATestCharacter();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_13_PROLOG
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_INCLASS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ATestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
