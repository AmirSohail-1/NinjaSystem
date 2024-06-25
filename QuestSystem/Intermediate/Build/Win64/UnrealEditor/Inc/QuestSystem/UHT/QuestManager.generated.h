// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/QuestManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuestTable;
#ifdef QUESTSYSTEM_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define QUESTSYSTEM_QuestManager_generated_h

#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_13_DELEGATE \
struct _Script_QuestSystem_eventOnQuestUpdated_Parms \
{ \
	FQuestTable CurrentQuest; \
}; \
static inline void FOnQuestUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnQuestUpdated, FQuestTable const& CurrentQuest) \
{ \
	_Script_QuestSystem_eventOnQuestUpdated_Parms Parms; \
	Parms.CurrentQuest=CurrentQuest; \
	OnQuestUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_15_DELEGATE \
struct _Script_QuestSystem_eventTimedQuestTickDelegate_Parms \
{ \
	float RemainingTimeSeconds; \
}; \
static inline void FTimedQuestTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& TimedQuestTickDelegate, float RemainingTimeSeconds) \
{ \
	_Script_QuestSystem_eventTimedQuestTickDelegate_Parms Parms; \
	Parms.RemainingTimeSeconds=RemainingTimeSeconds; \
	TimedQuestTickDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_17_DELEGATE \
struct _Script_QuestSystem_eventOnQuestCompleted_Parms \
{ \
	FString QuestName; \
}; \
static inline void FOnQuestCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnQuestCompleted, const FString& QuestName) \
{ \
	_Script_QuestSystem_eventOnQuestCompleted_Parms Parms; \
	Parms.QuestName=QuestName; \
	OnQuestCompleted.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_SPARSE_DATA
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execLoadQuestProgress); \
	DECLARE_FUNCTION(execSaveQuestProgress); \
	DECLARE_FUNCTION(execStartTimedQuest); \
	DECLARE_FUNCTION(execAddAllQuestsFromDataTable); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execLoadQuestProgress); \
	DECLARE_FUNCTION(execSaveQuestProgress); \
	DECLARE_FUNCTION(execStartTimedQuest); \
	DECLARE_FUNCTION(execAddAllQuestsFromDataTable); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest);


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_ACCESSORS
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
public: \
	DECLARE_CLASS(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestManager)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUQuestManager(); \
	friend struct Z_Construct_UClass_UQuestManager_Statics; \
public: \
	DECLARE_CLASS(UQuestManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestManager)


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManager(UQuestManager&&); \
	NO_API UQuestManager(const UQuestManager&); \
public: \
	NO_API virtual ~UQuestManager();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManager(UQuestManager&&); \
	NO_API UQuestManager(const UQuestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManager) \
	NO_API virtual ~UQuestManager();


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_20_PROLOG
#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_RPC_WRAPPERS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_INCLASS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_SPARSE_DATA \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_ACCESSORS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_INCLASS_NO_PURE_DECLS \
	FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class UQuestManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectSystemTest_Plugins_QuestSystem_Source_QuestSystem_Public_Component_QuestManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
