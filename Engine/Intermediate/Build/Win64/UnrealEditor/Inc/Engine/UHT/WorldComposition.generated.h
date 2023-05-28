// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/WorldComposition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldComposition_generated_h
#error "WorldComposition.generated.h already included, missing '#pragma once' in WorldComposition.h"
#endif
#define ENGINE_WorldComposition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorldComposition, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldComposition(); \
	friend struct Z_Construct_UClass_UWorldComposition_Statics; \
public: \
	DECLARE_CLASS(UWorldComposition, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldComposition) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_INCLASS \
private: \
	static void StaticRegisterNativesUWorldComposition(); \
	friend struct Z_Construct_UClass_UWorldComposition_Statics; \
public: \
	DECLARE_CLASS(UWorldComposition, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorldComposition) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldComposition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldComposition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldComposition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldComposition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldComposition(UWorldComposition&&); \
	NO_API UWorldComposition(const UWorldComposition&); \
public: \
	NO_API virtual ~UWorldComposition();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldComposition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldComposition(UWorldComposition&&); \
	NO_API UWorldComposition(const UWorldComposition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldComposition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldComposition); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldComposition) \
	NO_API virtual ~UWorldComposition();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_71_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h_74_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorldComposition."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldComposition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_WorldComposition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
