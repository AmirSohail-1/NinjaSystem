// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueUserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDialogueWidgetController;
class UQuestComponent;
#ifdef NINJACOMBATSYSTEM_DialogueUserWidget_generated_h
#error "DialogueUserWidget.generated.h already included, missing '#pragma once' in DialogueUserWidget.h"
#endif
#define NINJACOMBATSYSTEM_DialogueUserWidget_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDialogueStarted); \
	DECLARE_FUNCTION(execSetDialogue); \
	DECLARE_FUNCTION(execSetDialogueManagerComponent); \
	DECLARE_FUNCTION(execSetDialogueWidgetController);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDialogueStarted); \
	DECLARE_FUNCTION(execSetDialogue); \
	DECLARE_FUNCTION(execSetDialogueManagerComponent); \
	DECLARE_FUNCTION(execSetDialogueWidgetController);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueUserWidget(); \
	friend struct Z_Construct_UClass_UDialogueUserWidget_Statics; \
public: \
	DECLARE_CLASS(UDialogueUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueUserWidget)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueUserWidget(UDialogueUserWidget&&); \
	NO_API UDialogueUserWidget(const UDialogueUserWidget&); \
public: \
	NO_API virtual ~UDialogueUserWidget();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueUserWidget(UDialogueUserWidget&&); \
	NO_API UDialogueUserWidget(const UDialogueUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueUserWidget) \
	NO_API virtual ~UDialogueUserWidget();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_16_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class UDialogueUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueUserWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
