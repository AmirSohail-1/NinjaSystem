// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_QuestGameMode_generated_h
#error "QuestGameMode.generated.h already included, missing '#pragma once' in QuestGameMode.h"
#endif
#define QUESTSYSTEM_QuestGameMode_generated_h

#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_ACCESSORS
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestGameMode(); \
	friend struct Z_Construct_UClass_AQuestGameMode_Statics; \
public: \
	DECLARE_CLASS(AQuestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestGameMode)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAQuestGameMode(); \
	friend struct Z_Construct_UClass_AQuestGameMode_Statics; \
public: \
	DECLARE_CLASS(AQuestGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(AQuestGameMode)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestGameMode(AQuestGameMode&&); \
	NO_API AQuestGameMode(const AQuestGameMode&); \
public: \
	NO_API virtual ~AQuestGameMode();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestGameMode(AQuestGameMode&&); \
	NO_API AQuestGameMode(const AQuestGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestGameMode) \
	NO_API virtual ~AQuestGameMode();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_12_PROLOG
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_INCLASS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class AQuestGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_QuestGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
