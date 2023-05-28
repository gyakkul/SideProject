// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/Skeleton.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBlendProfile;
class USkeleton;
#ifdef ENGINE_Skeleton_generated_h
#error "Skeleton.generated.h already included, missing '#pragma once' in Skeleton.h"
#endif
#define ENGINE_Skeleton_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletonToMeshLinkup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletonToMeshLinkup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneNode_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneNode>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReferencePose_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReferencePose>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneReductionSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneReductionSetting>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNameMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNameMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigConfiguration_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRigConfiguration>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSlotGroup_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSlotGroup>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVirtualBone_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVirtualBone>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCompatibleSkeleton); \
	DECLARE_FUNCTION(execGetBlendProfile);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCompatibleSkeleton); \
	DECLARE_FUNCTION(execGetBlendProfile);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USkeleton, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend struct Z_Construct_UClass_USkeleton_Statics; \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_INCLASS \
private: \
	static void StaticRegisterNativesUSkeleton(); \
	friend struct Z_Construct_UClass_USkeleton_Statics; \
public: \
	DECLARE_CLASS(USkeleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeleton) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USkeleton*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public: \
	ENGINE_API virtual ~USkeleton();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USkeleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USkeleton(USkeleton&&); \
	ENGINE_API USkeleton(const USkeleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeleton); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkeleton) \
	ENGINE_API virtual ~USkeleton();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_296_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h_302_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Skeleton."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeleton>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_Skeleton_h


#define FOREACH_ENUM_EBONETRANSLATIONRETARGETINGMODE(op) \
	op(EBoneTranslationRetargetingMode::Animation) \
	op(EBoneTranslationRetargetingMode::Skeleton) \
	op(EBoneTranslationRetargetingMode::AnimationScaled) \
	op(EBoneTranslationRetargetingMode::AnimationRelative) \
	op(EBoneTranslationRetargetingMode::OrientAndScale) 

namespace EBoneTranslationRetargetingMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EBoneTranslationRetargetingMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
