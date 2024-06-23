// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PickupActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUESTSYSTEM_PickupActor_generated_h
#error "PickupActor.generated.h already included, missing '#pragma once' in PickupActor.h"
#endif
#define QUESTSYSTEM_PickupActor_generated_h

#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_SPARSE_DATA
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_RPC_WRAPPERS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_ACCESSORS
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickupActor(); \
	friend struct Z_Construct_UClass_APickupActor_Statics; \
public: \
	DECLARE_CLASS(APickupActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuestSystem"), NO_API) \
	DECLARE_SERIALIZER(APickupActor) \
	virtual UObject* _getUObject() const override { return const_cast<APickupActor*>(this); }


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	NO_API virtual ~APickupActor();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupActor(APickupActor&&); \
	NO_API APickupActor(const APickupActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupActor) \
	NO_API virtual ~APickupActor();


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_12_PROLOG
#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_RPC_WRAPPERS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_INCLASS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_SPARSE_DATA \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_ACCESSORS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUESTSYSTEM_API UClass* StaticClass<class APickupActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_99026_Unreal_CPP_Ninja_Plugins_QuestSystem_Source_QuestSystem_PickupActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
