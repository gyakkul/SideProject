// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimPose.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimBlueprint;
class UAnimSequenceBase;
class USkeletalMesh;
class USkeleton;
enum class EAnimPoseSpaces : uint8;
struct FAnimPose;
struct FAnimPoseEvaluationOptions;
#ifdef ANIMATIONBLUEPRINTLIBRARY_AnimPose_generated_h
#error "AnimPose.generated.h already included, missing '#pragma once' in AnimPose.h"
#endif
#define ANIMATIONBLUEPRINTLIBRARY_AnimPose_generated_h

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* StaticStruct<struct FAnimPoseEvaluationOptions>();

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_83_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimPose_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* StaticStruct<struct FAnimPose>();

#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_SPARSE_DATA
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurveWeight); \
	DECLARE_FUNCTION(execGetCurveNames); \
	DECLARE_FUNCTION(execGetReferencePose); \
	DECLARE_FUNCTION(execEvaluateAnimationBlueprintWithInputPose); \
	DECLARE_FUNCTION(execGetAnimPoseAtFrame); \
	DECLARE_FUNCTION(execGetAnimPoseAtTime); \
	DECLARE_FUNCTION(execGetRefPoseRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeToRefPoseTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execGetRefBonePose); \
	DECLARE_FUNCTION(execSetBonePose); \
	DECLARE_FUNCTION(execGetBonePose); \
	DECLARE_FUNCTION(execGetBoneNames); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurveWeight); \
	DECLARE_FUNCTION(execGetCurveNames); \
	DECLARE_FUNCTION(execGetReferencePose); \
	DECLARE_FUNCTION(execEvaluateAnimationBlueprintWithInputPose); \
	DECLARE_FUNCTION(execGetAnimPoseAtFrame); \
	DECLARE_FUNCTION(execGetAnimPoseAtTime); \
	DECLARE_FUNCTION(execGetRefPoseRelativeTransform); \
	DECLARE_FUNCTION(execGetRelativeToRefPoseTransform); \
	DECLARE_FUNCTION(execGetRelativeTransform); \
	DECLARE_FUNCTION(execGetRefBonePose); \
	DECLARE_FUNCTION(execSetBonePose); \
	DECLARE_FUNCTION(execGetBonePose); \
	DECLARE_FUNCTION(execGetBoneNames); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_ACCESSORS
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimPoseExtensions(); \
	friend struct Z_Construct_UClass_UAnimPoseExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimPoseExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimPoseExtensions)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_INCLASS \
private: \
	static void StaticRegisterNativesUAnimPoseExtensions(); \
	friend struct Z_Construct_UClass_UAnimPoseExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimPoseExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationBlueprintLibrary"), NO_API) \
	DECLARE_SERIALIZER(UAnimPoseExtensions)


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPoseExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPoseExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPoseExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPoseExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPoseExtensions(UAnimPoseExtensions&&); \
	NO_API UAnimPoseExtensions(const UAnimPoseExtensions&); \
public: \
	NO_API virtual ~UAnimPoseExtensions();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimPoseExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimPoseExtensions(UAnimPoseExtensions&&); \
	NO_API UAnimPoseExtensions(const UAnimPoseExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimPoseExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimPoseExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimPoseExtensions) \
	NO_API virtual ~UAnimPoseExtensions();


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_142_PROLOG
#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_INCLASS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_SPARSE_DATA \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_ACCESSORS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<class UAnimPoseExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h


#define FOREACH_ENUM_EANIMPOSESPACES(op) \
	op(EAnimPoseSpaces::Local) \
	op(EAnimPoseSpaces::World) 

enum class EAnimPoseSpaces : uint8;
template<> struct TIsUEnumClass<EAnimPoseSpaces> { enum { Value = true }; };
template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<EAnimPoseSpaces>();

#define FOREACH_ENUM_EANIMDATAEVALTYPE(op) \
	op(EAnimDataEvalType::Source) \
	op(EAnimDataEvalType::Raw) \
	op(EAnimDataEvalType::Compressed) 

enum class EAnimDataEvalType : uint8;
template<> struct TIsUEnumClass<EAnimDataEvalType> { enum { Value = true }; };
template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<EAnimDataEvalType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
