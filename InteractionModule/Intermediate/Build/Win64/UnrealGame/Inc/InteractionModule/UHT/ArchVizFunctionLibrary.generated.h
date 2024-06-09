// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ArchVizFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class USoundBase;
#ifdef INTERACTIONMODULE_ArchVizFunctionLibrary_generated_h
#error "ArchVizFunctionLibrary.generated.h already included, missing '#pragma once' in ArchVizFunctionLibrary.h"
#endif
#define INTERACTIONMODULE_ArchVizFunctionLibrary_generated_h

#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_SPARSE_DATA
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopAllAudio); \
	DECLARE_FUNCTION(execPlayAudio); \
	DECLARE_FUNCTION(execTransitionToLevel);


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_ACCESSORS
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUArchVizFunctionLibrary(); \
	friend struct Z_Construct_UClass_UArchVizFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UArchVizFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InteractionModule"), NO_API) \
	DECLARE_SERIALIZER(UArchVizFunctionLibrary)


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UArchVizFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UArchVizFunctionLibrary(UArchVizFunctionLibrary&&); \
	NO_API UArchVizFunctionLibrary(const UArchVizFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UArchVizFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArchVizFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArchVizFunctionLibrary) \
	NO_API virtual ~UArchVizFunctionLibrary();


#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_14_PROLOG
#define FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_SPARSE_DATA \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_ACCESSORS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIONMODULE_API UClass* StaticClass<class UArchVizFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestCpp_Plugins_InteractionModule_Source_InteractionModule_Public_ArchVizFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
