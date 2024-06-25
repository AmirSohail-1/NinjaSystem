// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CheckpointBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef QUESTSYSTEM_CheckpointBase_generated_h
#error "CheckpointBase.generated.h already included, missing '#pragma once' in CheckpointBase.h"
#endif
#define QUESTSYSTEM_CheckpointBase_generated_h

#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_ACCESSORS
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACheckpointBase(); \
	friend struct Z_Construct_UClass_ACheckpointBase_Statics; \
public: \
	DECLARE_CLASS(ACheckpointBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ACheckpointBase)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACheckpointBase(); \
	friend struct Z_Construct_UClass_ACheckpointBase_Statics; \
public: \
	DECLARE_CLASS(ACheckpointBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(ACheckpointBase)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACheckpointBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACheckpointBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpointBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpointBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpointBase(ACheckpointBase&&); \
	NO_API ACheckpointBase(const ACheckpointBase&); \
public: \
	NO_API virtual ~ACheckpointBase();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACheckpointBase(ACheckpointBase&&); \
	NO_API ACheckpointBase(const ACheckpointBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACheckpointBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACheckpointBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACheckpointBase) \
	NO_API virtual ~ACheckpointBase();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_9_PROLOG
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_INCLASS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class ACheckpointBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_CheckpointBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
