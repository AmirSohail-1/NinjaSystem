// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DialogueWidgetController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NINJACOMBATSYSTEM_DialogueWidgetController_generated_h
#error "DialogueWidgetController.generated.h already included, missing '#pragma once' in DialogueWidgetController.h"
#endif
#define NINJACOMBATSYSTEM_DialogueWidgetController_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_9_DELEGATE \
struct _Script_NinjaCombatSystem_eventDialogueStartedSignature_Parms \
{ \
	int32 DialogueID; \
}; \
static inline void FDialogueStartedSignature_DelegateWrapper(const FMulticastScriptDelegate& DialogueStartedSignature, int32 DialogueID) \
{ \
	_Script_NinjaCombatSystem_eventDialogueStartedSignature_Parms Parms; \
	Parms.DialogueID=DialogueID; \
	DialogueStartedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartDialogue);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDialogueWidgetController(); \
	friend struct Z_Construct_UClass_UDialogueWidgetController_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidgetController)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueWidgetController(); \
	friend struct Z_Construct_UClass_UDialogueWidgetController_Statics; \
public: \
	DECLARE_CLASS(UDialogueWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NinjaCombatSystem"), NO_API) \
	DECLARE_SERIALIZER(UDialogueWidgetController)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidgetController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidgetController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidgetController(UDialogueWidgetController&&); \
	NO_API UDialogueWidgetController(const UDialogueWidgetController&); \
public: \
	NO_API virtual ~UDialogueWidgetController();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDialogueWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDialogueWidgetController(UDialogueWidgetController&&); \
	NO_API UDialogueWidgetController(const UDialogueWidgetController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDialogueWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueWidgetController) \
	NO_API virtual ~UDialogueWidgetController();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_15_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACOMBATSYSTEM_API UClass* StaticClass<class UDialogueWidgetController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_NinjaCombatSystem_Source_NinjaCombatSystem_Public_DialogueWidgetController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
