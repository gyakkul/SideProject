// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeInfo.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeInfo_generated_h
#error "LandscapeInfo.generated.h already included, missing '#pragma once' in LandscapeInfo.h"
#endif
#define LANDSCAPE_LandscapeInfo_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeInfoLayerSettings>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_SPARSE_DATA
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ACCESSORS
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeInfo, NO_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend struct Z_Construct_UClass_ULandscapeInfo_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeInfo(); \
	friend struct Z_Construct_UClass_ULandscapeInfo_Statics; \
public: \
	DECLARE_CLASS(ULandscapeInfo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeInfo) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfo(ULandscapeInfo&&); \
	NO_API ULandscapeInfo(const ULandscapeInfo&); \
public: \
	NO_API virtual ~ULandscapeInfo();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeInfo(ULandscapeInfo&&); \
	NO_API ULandscapeInfo(const ULandscapeInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeInfo) \
	NO_API virtual ~ULandscapeInfo();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_121_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_SPARSE_DATA \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ACCESSORS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h_124_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LandscapeInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeInfo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
