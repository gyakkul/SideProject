// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class ULiveLinkRole;
struct FGuid;
struct FLiveLinkAnimationFrameData;
struct FLiveLinkBaseBlueprintData;
struct FLiveLinkBasicBlueprintData;
struct FLiveLinkSkeletonStaticData;
struct FLiveLinkSourceHandle;
struct FLiveLinkSubjectKey;
struct FLiveLinkSubjectName;
struct FLiveLinkSubjectRepresentation;
struct FLiveLinkTransform;
struct FSubjectFrameHandle;
struct FSubjectMetadata;
struct FTimecode;
#ifdef LIVELINK_LiveLinkBlueprintLibrary_generated_h
#error "LiveLinkBlueprintLibrary.generated.h already included, missing '#pragma once' in LiveLinkBlueprintLibrary.h"
#endif
#define LIVELINK_LiveLinkBlueprintLibrary_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execGetSpecificLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execSetLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execIsLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execIsSpecificLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execGetLiveLinkSubjects); \
	DECLARE_FUNCTION(execGetLiveLinkEnabledSubjectNames); \
	DECLARE_FUNCTION(execGetSourceTypeFromGuid); \
	DECLARE_FUNCTION(execGetSourceMachineName); \
	DECLARE_FUNCTION(execGetSourceType); \
	DECLARE_FUNCTION(execGetSourceStatus); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execIsSourceStillValid); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execChildCount); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execHasParent); \
	DECLARE_FUNCTION(execComponentSpaceTransform); \
	DECLARE_FUNCTION(execParentBoneSpaceTransform); \
	DECLARE_FUNCTION(execTransformName); \
	DECLARE_FUNCTION(execGetAnimationFrameData); \
	DECLARE_FUNCTION(execGetAnimationStaticData); \
	DECLARE_FUNCTION(execGetBasicData); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetTransformByName); \
	DECLARE_FUNCTION(execGetTransformByIndex); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execTransformNames); \
	DECLARE_FUNCTION(execNumberOfTransforms); \
	DECLARE_FUNCTION(execGetCurves); \
	DECLARE_FUNCTION(execGetPropertyValue);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execGetSpecificLiveLinkSubjectRole); \
	DECLARE_FUNCTION(execSetLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execIsLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execIsSpecificLiveLinkSubjectEnabled); \
	DECLARE_FUNCTION(execGetLiveLinkSubjects); \
	DECLARE_FUNCTION(execGetLiveLinkEnabledSubjectNames); \
	DECLARE_FUNCTION(execGetSourceTypeFromGuid); \
	DECLARE_FUNCTION(execGetSourceMachineName); \
	DECLARE_FUNCTION(execGetSourceType); \
	DECLARE_FUNCTION(execGetSourceStatus); \
	DECLARE_FUNCTION(execRemoveSource); \
	DECLARE_FUNCTION(execIsSourceStillValid); \
	DECLARE_FUNCTION(execGetChildren); \
	DECLARE_FUNCTION(execChildCount); \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execHasParent); \
	DECLARE_FUNCTION(execComponentSpaceTransform); \
	DECLARE_FUNCTION(execParentBoneSpaceTransform); \
	DECLARE_FUNCTION(execTransformName); \
	DECLARE_FUNCTION(execGetAnimationFrameData); \
	DECLARE_FUNCTION(execGetAnimationStaticData); \
	DECLARE_FUNCTION(execGetBasicData); \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execGetTransformByName); \
	DECLARE_FUNCTION(execGetTransformByIndex); \
	DECLARE_FUNCTION(execGetRootTransform); \
	DECLARE_FUNCTION(execTransformNames); \
	DECLARE_FUNCTION(execNumberOfTransforms); \
	DECLARE_FUNCTION(execGetCurves); \
	DECLARE_FUNCTION(execGetPropertyValue);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_ACCESSORS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintLibrary)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULiveLinkBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkBlueprintLibrary)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary&&); \
	NO_API ULiveLinkBlueprintLibrary(const ULiveLinkBlueprintLibrary&); \
public: \
	NO_API virtual ~ULiveLinkBlueprintLibrary();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkBlueprintLibrary(ULiveLinkBlueprintLibrary&&); \
	NO_API ULiveLinkBlueprintLibrary(const ULiveLinkBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkBlueprintLibrary) \
	NO_API virtual ~ULiveLinkBlueprintLibrary();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_25_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_INCLASS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
