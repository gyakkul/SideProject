// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FractureToolProximity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FRACTUREEDITOR_FractureToolProximity_generated_h
#error "FractureToolProximity.generated.h already included, missing '#pragma once' in FractureToolProximity.h"
#endif
#define FRACTUREEDITOR_FractureToolProximity_generated_h

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureProximitySettings(); \
	friend struct Z_Construct_UClass_UFractureProximitySettings_Statics; \
public: \
	DECLARE_CLASS(UFractureProximitySettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureProximitySettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUFractureProximitySettings(); \
	friend struct Z_Construct_UClass_UFractureProximitySettings_Statics; \
public: \
	DECLARE_CLASS(UFractureProximitySettings, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureProximitySettings)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureProximitySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureProximitySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureProximitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureProximitySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureProximitySettings(UFractureProximitySettings&&); \
	NO_API UFractureProximitySettings(const UFractureProximitySettings&); \
public: \
	NO_API virtual ~UFractureProximitySettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureProximitySettings(UFractureProximitySettings&&); \
	NO_API UFractureProximitySettings(const UFractureProximitySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureProximitySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureProximitySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureProximitySettings) \
	NO_API virtual ~UFractureProximitySettings();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_14_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureProximitySettings>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFromDefaults); \
	DECLARE_FUNCTION(execSaveAsDefaults);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFromDefaults); \
	DECLARE_FUNCTION(execSaveAsDefaults);


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureProximityActions(); \
	friend struct Z_Construct_UClass_UFractureProximityActions_Statics; \
public: \
	DECLARE_CLASS(UFractureProximityActions, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureProximityActions)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUFractureProximityActions(); \
	friend struct Z_Construct_UClass_UFractureProximityActions_Statics; \
public: \
	DECLARE_CLASS(UFractureProximityActions, UFractureToolSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureProximityActions)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureProximityActions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureProximityActions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureProximityActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureProximityActions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureProximityActions(UFractureProximityActions&&); \
	NO_API UFractureProximityActions(const UFractureProximityActions&); \
public: \
	NO_API virtual ~UFractureProximityActions();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureProximityActions(UFractureProximityActions&&); \
	NO_API UFractureProximityActions(const UFractureProximityActions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureProximityActions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureProximityActions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureProximityActions) \
	NO_API virtual ~UFractureProximityActions();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_59_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_64_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureProximityActions>();

#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFractureToolProximity(); \
	friend struct Z_Construct_UClass_UFractureToolProximity_Statics; \
public: \
	DECLARE_CLASS(UFractureToolProximity, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolProximity)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUFractureToolProximity(); \
	friend struct Z_Construct_UClass_UFractureToolProximity_Statics; \
public: \
	DECLARE_CLASS(UFractureToolProximity, UFractureModalTool, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FractureEditor"), NO_API) \
	DECLARE_SERIALIZER(UFractureToolProximity)


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFractureToolProximity(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolProximity) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolProximity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolProximity); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureToolProximity(UFractureToolProximity&&); \
	NO_API UFractureToolProximity(const UFractureToolProximity&); \
public: \
	NO_API virtual ~UFractureToolProximity();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFractureToolProximity(UFractureToolProximity&&); \
	NO_API UFractureToolProximity(const UFractureToolProximity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFractureToolProximity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFractureToolProximity); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFractureToolProximity) \
	NO_API virtual ~UFractureToolProximity();


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_81_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h_85_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FRACTUREEDITOR_API UClass* StaticClass<class UFractureToolProximity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolProximity_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
