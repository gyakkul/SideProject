// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkPreset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FLatentActionInfo;
#ifdef LIVELINK_LiveLinkPreset_generated_h
#error "LiveLinkPreset.generated.h already included, missing '#pragma once' in LiveLinkPreset.h"
#endif
#define LIVELINK_LiveLinkPreset_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuildFromClient); \
	DECLARE_FUNCTION(execAddToClient); \
	DECLARE_FUNCTION(execApplyToClientLatent); \
	DECLARE_FUNCTION(execApplyToClient);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuildFromClient); \
	DECLARE_FUNCTION(execAddToClient); \
	DECLARE_FUNCTION(execApplyToClientLatent); \
	DECLARE_FUNCTION(execApplyToClient);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ACCESSORS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkPreset(); \
	friend struct Z_Construct_UClass_ULiveLinkPreset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkPreset)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkPreset(); \
	friend struct Z_Construct_UClass_ULiveLinkPreset_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkPreset, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkPreset)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkPreset(ULiveLinkPreset&&); \
	NO_API ULiveLinkPreset(const ULiveLinkPreset&); \
public:


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkPreset(ULiveLinkPreset&&); \
	NO_API ULiveLinkPreset(const ULiveLinkPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkPreset)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_12_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
