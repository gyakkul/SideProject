// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sessions/MLAdapterLocalDataCollectionSession.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class APawn;
#ifdef MLADAPTER_MLAdapterLocalDataCollectionSession_generated_h
#error "MLAdapterLocalDataCollectionSession.generated.h already included, missing '#pragma once' in MLAdapterLocalDataCollectionSession.h"
#endif
#define MLADAPTER_MLAdapterLocalDataCollectionSession_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_SPARSE_DATA
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnControllerChanged);


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnControllerChanged);


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_ACCESSORS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterLocalDataCollectionSession(); \
	friend struct Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterLocalDataCollectionSession, UMLAdapterSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterLocalDataCollectionSession)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMLAdapterLocalDataCollectionSession(); \
	friend struct Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterLocalDataCollectionSession, UMLAdapterSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterLocalDataCollectionSession)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterLocalDataCollectionSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterLocalDataCollectionSession) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterLocalDataCollectionSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterLocalDataCollectionSession); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterLocalDataCollectionSession(UMLAdapterLocalDataCollectionSession&&); \
	NO_API UMLAdapterLocalDataCollectionSession(const UMLAdapterLocalDataCollectionSession&); \
public: \
	NO_API virtual ~UMLAdapterLocalDataCollectionSession();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterLocalDataCollectionSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterLocalDataCollectionSession(UMLAdapterLocalDataCollectionSession&&); \
	NO_API UMLAdapterLocalDataCollectionSession(const UMLAdapterLocalDataCollectionSession&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterLocalDataCollectionSession); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterLocalDataCollectionSession); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterLocalDataCollectionSession) \
	NO_API virtual ~UMLAdapterLocalDataCollectionSession();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_16_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_INCLASS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterLocalDataCollectionSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
