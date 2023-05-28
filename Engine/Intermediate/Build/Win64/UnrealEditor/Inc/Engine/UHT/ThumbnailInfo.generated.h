// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorFramework/ThumbnailInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ThumbnailInfo_generated_h
#error "ThumbnailInfo.generated.h already included, missing '#pragma once' in ThumbnailInfo.h"
#endif
#define ENGINE_ThumbnailInfo_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThumbnailInfo(); \
	friend struct Z_Construct_UClass_UThumbnailInfo_Statics; \
public: \
	DECLARE_CLASS(UThumbnailInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UThumbnailInfo)


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUThumbnailInfo(); \
	friend struct Z_Construct_UClass_UThumbnailInfo_Statics; \
public: \
	DECLARE_CLASS(UThumbnailInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UThumbnailInfo)


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UThumbnailInfo(UThumbnailInfo&&); \
	ENGINE_API UThumbnailInfo(const UThumbnailInfo&); \
public: \
	ENGINE_API virtual ~UThumbnailInfo();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UThumbnailInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UThumbnailInfo(UThumbnailInfo&&); \
	ENGINE_API UThumbnailInfo(const UThumbnailInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UThumbnailInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThumbnailInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThumbnailInfo) \
	ENGINE_API virtual ~UThumbnailInfo();


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ThumbnailInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UThumbnailInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_EditorFramework_ThumbnailInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
