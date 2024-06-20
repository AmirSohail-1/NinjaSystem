// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuestSystem/QuestManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FQuest;
#ifdef NINJACOMBATSYSTEM_QuestManagerComponent_generated_h
#error "QuestManagerComponent.generated.h already included, missing '#pragma once' in QuestManagerComponent.h"
#endif
#define NINJACOMBATSYSTEM_QuestManagerComponent_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_13_DELEGATE \
struct _Script_NinjaCombatSystem_eventOnQuestUpdated_Parms \
{ \
	FQuest Quest; \
}; \
static inline void FOnQuestUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnQuestUpdated, FQuest const& Quest) \
{ \
	_Script_NinjaCombatSystem_eventOnQuestUpdated_Parms Parms; \
	Parms.Quest=Quest; \
	OnQuestUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCurrentQuest); \
	DECLARE_FUNCTION(execAddAllQuestsFromDataTable); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCurrentQuest); \
	DECLARE_FUNCTION(execAddAllQuestsFromDataTable); \
	DECLARE_FUNCTION(execCompleteQuest); \
	DECLARE_FUNCTION(execAddQuest);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestManagerComponent(); \
	friend struct Z_Construct_UClass_UQuestManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerComponent)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUQuestManagerComponent(); \
	friend struct Z_Construct_UClass_UQuestManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestManagerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UQuestManagerComponent)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestManagerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestManagerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManagerComponent(UQuestManagerComponent&&); \
	NO_API UQuestManagerComponent(const UQuestManagerComponent&); \
public: \
	NO_API virtual ~UQuestManagerComponent();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestManagerComponent(UQuestManagerComponent&&); \
	NO_API UQuestManagerComponent(const UQuestManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestManagerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestManagerComponent) \
	NO_API virtual ~UQuestManagerComponent();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_15_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class UQuestManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_QuestSystem_QuestManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
