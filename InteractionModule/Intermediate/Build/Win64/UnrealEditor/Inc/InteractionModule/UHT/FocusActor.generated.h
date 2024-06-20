// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FocusActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIONMODULE_FocusActor_generated_h
#error "FocusActor.generated.h already included, missing '#pragma once' in FocusActor.h"
#endif
#define INTERACTIONMODULE_FocusActor_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_7_DELEGATE \
static inline void FOnFocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFocusDelegate) \
{ \
	OnFocusDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_8_DELEGATE \
static inline void FOnUnfocusDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnUnfocusDelegate) \
{ \
	OnUnfocusDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_RPC_WRAPPERS \
	virtual bool ShouldBeFocused_Implementation() const; \
 \
	DECLARE_FUNCTION(execReturnFromFocus); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execShouldBeFocused);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnFromFocus); \
	DECLARE_FUNCTION(execFocus); \
	DECLARE_FUNCTION(execShouldBeFocused);


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_CALLBACK_WRAPPERS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFocusActor(); \
	friend struct Z_Construct_UClass_AFocusActor_Statics; \
public: \
	DECLARE_CLASS(AFocusActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionModule"), NO_API) \
	DECLARE_SERIALIZER(AFocusActor)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFocusActor(); \
	friend struct Z_Construct_UClass_AFocusActor_Statics; \
public: \
	DECLARE_CLASS(AFocusActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionModule"), NO_API) \
	DECLARE_SERIALIZER(AFocusActor)


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFocusActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFocusActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFocusActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFocusActor(AFocusActor&&); \
	NO_API AFocusActor(const AFocusActor&); \
public: \
	NO_API virtual ~AFocusActor();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFocusActor(AFocusActor&&); \
	NO_API AFocusActor(const AFocusActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFocusActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFocusActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFocusActor) \
	NO_API virtual ~AFocusActor();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_10_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_CALLBACK_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_CALLBACK_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONMODULE_API UClass* StaticClass<class AFocusActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_InteractionModule_Source_InteractionModule_Public_FocusActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
