// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TexAligner/TexAligner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_TexAligner_generated_h
#error "TexAligner.generated.h already included, missing '#pragma once' in TexAligner.h"
#endif
#define UNREALED_TexAligner_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTexAligner(); \
	friend struct Z_Construct_UClass_UTexAligner_Statics; \
public: \
	DECLARE_CLASS(UTexAligner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTexAligner)


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUTexAligner(); \
	friend struct Z_Construct_UClass_UTexAligner_Statics; \
public: \
	DECLARE_CLASS(UTexAligner, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), NO_API) \
	DECLARE_SERIALIZER(UTexAligner)


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAligner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAligner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAligner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAligner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTexAligner(UTexAligner&&); \
	NO_API UTexAligner(const UTexAligner&); \
public: \
	NO_API virtual ~UTexAligner();


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTexAligner(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTexAligner(UTexAligner&&); \
	NO_API UTexAligner(const UTexAligner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTexAligner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTexAligner); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTexAligner) \
	NO_API virtual ~UTexAligner();


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_43_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TexAligner."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class UTexAligner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h


#define FOREACH_ENUM_ETEXALIGN(op) \
	op(TEXALIGN_None) \
	op(TEXALIGN_Default) \
	op(TEXALIGN_Box) \
	op(TEXALIGN_Planar) \
	op(TEXALIGN_Fit) \
	op(TEXALIGN_PlanarAuto) \
	op(TEXALIGN_PlanarWall) \
	op(TEXALIGN_PlanarFloor) 

enum ETexAlign : int;
template<> UNREALED_API UEnum* StaticEnum<ETexAlign>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
