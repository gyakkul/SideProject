// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/FontFace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_FontFace_generated_h
#error "FontFace.generated.h already included, missing '#pragma once' in FontFace.h"
#endif
#define ENGINE_FontFace_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UFontFace, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFontFace(); \
	friend struct Z_Construct_UClass_UFontFace_Statics; \
public: \
	DECLARE_CLASS(UFontFace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontFace) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFontFace*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFontFace(); \
	friend struct Z_Construct_UClass_UFontFace_Statics; \
public: \
	DECLARE_CLASS(UFontFace, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UFontFace) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UFontFace*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UFontFace(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFontFace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontFace(UFontFace&&); \
	ENGINE_API UFontFace(const UFontFace&); \
public: \
	ENGINE_API virtual ~UFontFace();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UFontFace(UFontFace&&); \
	ENGINE_API UFontFace(const UFontFace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UFontFace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFontFace); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFontFace) \
	ENGINE_API virtual ~UFontFace();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_18_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UFontFace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_FontFace_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
