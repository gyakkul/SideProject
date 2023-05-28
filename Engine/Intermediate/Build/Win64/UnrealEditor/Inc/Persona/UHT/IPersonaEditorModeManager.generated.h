// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IPersonaEditorModeManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PERSONA_IPersonaEditorModeManager_generated_h
#error "IPersonaEditorModeManager.generated.h already included, missing '#pragma once' in IPersonaEditorModeManager.h"
#endif
#define PERSONA_IPersonaEditorModeManager_generated_h

#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_SPARSE_DATA
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_ACCESSORS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaManagerContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaManagerContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PERSONA_API UPersonaManagerContext(UPersonaManagerContext&&); \
	PERSONA_API UPersonaManagerContext(const UPersonaManagerContext&); \
public: \
	PERSONA_API virtual ~UPersonaManagerContext();


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PERSONA_API UPersonaManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	PERSONA_API UPersonaManagerContext(UPersonaManagerContext&&); \
	PERSONA_API UPersonaManagerContext(const UPersonaManagerContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PERSONA_API, UPersonaManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaManagerContext); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaManagerContext) \
	PERSONA_API virtual ~UPersonaManagerContext();


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPersonaManagerContext(); \
	friend struct Z_Construct_UClass_UPersonaManagerContext_Statics; \
public: \
	DECLARE_CLASS(UPersonaManagerContext, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Persona"), PERSONA_API) \
	DECLARE_SERIALIZER(UPersonaManagerContext)


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPersonaManagerContext() {} \
public: \
	typedef UPersonaManagerContext UClassType; \
	typedef IPersonaManagerContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPersonaManagerContext() {} \
public: \
	typedef UPersonaManagerContext UClassType; \
	typedef IPersonaManagerContext ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_10_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONA_API UClass* StaticClass<class UPersonaManagerContext>();

#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_SPARSE_DATA
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_RPC_WRAPPERS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_ACCESSORS
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPersonaEditorModeManagerContext(); \
	friend struct Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics; \
public: \
	DECLARE_CLASS(UPersonaEditorModeManagerContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), NO_API) \
	DECLARE_SERIALIZER(UPersonaEditorModeManagerContext) \
	virtual UObject* _getUObject() const override { return const_cast<UPersonaEditorModeManagerContext*>(this); }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUPersonaEditorModeManagerContext(); \
	friend struct Z_Construct_UClass_UPersonaEditorModeManagerContext_Statics; \
public: \
	DECLARE_CLASS(UPersonaEditorModeManagerContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Persona"), NO_API) \
	DECLARE_SERIALIZER(UPersonaEditorModeManagerContext) \
	virtual UObject* _getUObject() const override { return const_cast<UPersonaEditorModeManagerContext*>(this); }


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaEditorModeManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaEditorModeManagerContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaEditorModeManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaEditorModeManagerContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaEditorModeManagerContext(UPersonaEditorModeManagerContext&&); \
	NO_API UPersonaEditorModeManagerContext(const UPersonaEditorModeManagerContext&); \
public: \
	NO_API virtual ~UPersonaEditorModeManagerContext();


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPersonaEditorModeManagerContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPersonaEditorModeManagerContext(UPersonaEditorModeManagerContext&&); \
	NO_API UPersonaEditorModeManagerContext(const UPersonaEditorModeManagerContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPersonaEditorModeManagerContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPersonaEditorModeManagerContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPersonaEditorModeManagerContext) \
	NO_API virtual ~UPersonaEditorModeManagerContext();


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_37_PROLOG
#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_RPC_WRAPPERS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_INCLASS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_SPARSE_DATA \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_ACCESSORS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PERSONA_API UClass* StaticClass<class UPersonaEditorModeManagerContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_Persona_Public_IPersonaEditorModeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
