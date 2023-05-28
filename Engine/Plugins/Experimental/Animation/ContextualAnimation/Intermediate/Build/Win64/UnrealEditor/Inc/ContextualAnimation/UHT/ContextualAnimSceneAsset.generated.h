// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ContextualAnimSceneAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequenceBase;
enum class EContextualAnimCriterionToConsider : uint8;
enum class EContextualAnimPointType : uint8;
struct FContextualAnimPoint;
struct FContextualAnimQueryParams;
struct FContextualAnimQueryResult;
struct FContextualAnimSceneBindingContext;
#ifdef CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h
#error "ContextualAnimSceneAsset.generated.h already included, missing '#pragma once' in ContextualAnimSceneAsset.h"
#endif
#define CONTEXTUALANIMATION_ContextualAnimSceneAsset_generated_h

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimRolesAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimRolesAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimRolesAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimRolesAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimRolesAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimRolesAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimRolesAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimRolesAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimRolesAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimRolesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimRolesAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimRolesAsset(UContextualAnimRolesAsset&&); \
	NO_API UContextualAnimRolesAsset(const UContextualAnimRolesAsset&); \
public: \
	NO_API virtual ~UContextualAnimRolesAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimRolesAsset(UContextualAnimRolesAsset&&); \
	NO_API UContextualAnimRolesAsset(const UContextualAnimRolesAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimRolesAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimRolesAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimRolesAsset) \
	NO_API virtual ~UContextualAnimRolesAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimRolesAsset>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSet>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimSceneSection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimSceneSection>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_112_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimPoint_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimPoint>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FContextualAnimActorPreviewData_Statics; \
	CONTEXTUALANIMATION_API static class UScriptStruct* StaticStruct();


template<> CONTEXTUALANIMATION_API UScriptStruct* StaticStruct<struct FContextualAnimActorPreviewData>();

#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execBP_GetStartAndEndTimeForWarpSection); \
	DECLARE_FUNCTION(execBP_GetIKTargetTransformForRoleAtTime); \
	DECLARE_FUNCTION(execBP_GetAlignmentTransformForRoleRelativeToPivot); \
	DECLARE_FUNCTION(execBP_FindAnimSetIndexByAnimation); \
	DECLARE_FUNCTION(execBP_FindAnimationForRole); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRole); \
	DECLARE_FUNCTION(execGetRoles);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuery); \
	DECLARE_FUNCTION(execBP_GetStartAndEndTimeForWarpSection); \
	DECLARE_FUNCTION(execBP_GetIKTargetTransformForRoleAtTime); \
	DECLARE_FUNCTION(execBP_GetAlignmentTransformForRoleRelativeToPivot); \
	DECLARE_FUNCTION(execBP_FindAnimSetIndexByAnimation); \
	DECLARE_FUNCTION(execBP_FindAnimationForRole); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRoleConsideringSelectionCriteria); \
	DECLARE_FUNCTION(execGetAlignmentPointsForSecondaryRole); \
	DECLARE_FUNCTION(execGetRoles);


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUContextualAnimSceneAsset(); \
	friend struct Z_Construct_UClass_UContextualAnimSceneAsset_Statics; \
public: \
	DECLARE_CLASS(UContextualAnimSceneAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ContextualAnimation"), NO_API) \
	DECLARE_SERIALIZER(UContextualAnimSceneAsset)


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UContextualAnimSceneAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneAsset(UContextualAnimSceneAsset&&); \
	NO_API UContextualAnimSceneAsset(const UContextualAnimSceneAsset&); \
public: \
	NO_API virtual ~UContextualAnimSceneAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UContextualAnimSceneAsset(UContextualAnimSceneAsset&&); \
	NO_API UContextualAnimSceneAsset(const UContextualAnimSceneAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UContextualAnimSceneAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UContextualAnimSceneAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UContextualAnimSceneAsset) \
	NO_API virtual ~UContextualAnimSceneAsset();


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_187_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTEXTUALANIMATION_API UClass* StaticClass<class UContextualAnimSceneAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimSceneAsset_h


#define FOREACH_ENUM_ECONTEXTUALANIMPOINTTYPE(op) \
	op(EContextualAnimPointType::FirstFrame) \
	op(EContextualAnimPointType::SyncFrame) \
	op(EContextualAnimPointType::LastFrame) 

enum class EContextualAnimPointType : uint8;
template<> struct TIsUEnumClass<EContextualAnimPointType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimPointType>();

#define FOREACH_ENUM_ECONTEXTUALANIMCRITERIONTOCONSIDER(op) \
	op(EContextualAnimCriterionToConsider::All) \
	op(EContextualAnimCriterionToConsider::Spatial) \
	op(EContextualAnimCriterionToConsider::Other) 

enum class EContextualAnimCriterionToConsider : uint8;
template<> struct TIsUEnumClass<EContextualAnimCriterionToConsider> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimCriterionToConsider>();

#define FOREACH_ENUM_ECONTEXTUALANIMACTORPREVIEWTYPE(op) \
	op(EContextualAnimActorPreviewType::SkeletalMesh) \
	op(EContextualAnimActorPreviewType::StaticMesh) \
	op(EContextualAnimActorPreviewType::Actor) \
	op(EContextualAnimActorPreviewType::None) 

enum class EContextualAnimActorPreviewType : uint8;
template<> struct TIsUEnumClass<EContextualAnimActorPreviewType> { enum { Value = true }; };
template<> CONTEXTUALANIMATION_API UEnum* StaticEnum<EContextualAnimActorPreviewType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
