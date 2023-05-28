// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/CurveIdentifier.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeleton;
enum class ERawCurveTrackTypes : uint8;
enum class ETransformCurveChannel : uint8;
enum class EVectorCurveChannel : uint8;
struct FAnimationCurveIdentifier;
#ifdef ENGINE_CurveIdentifier_generated_h
#error "CurveIdentifier.generated.h already included, missing '#pragma once' in CurveIdentifier.h"
#endif
#define ENGINE_CurveIdentifier_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationCurveIdentifier_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationCurveIdentifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execIsValid);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetType); \
	DECLARE_FUNCTION(execGetName); \
	DECLARE_FUNCTION(execIsValid);


#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTransformChildCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifiers); \
	DECLARE_FUNCTION(execFindCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifier);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTransformChildCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifiers); \
	DECLARE_FUNCTION(execFindCurveIdentifier); \
	DECLARE_FUNCTION(execGetCurveIdentifier);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationCurveIdentifierExtensions(); \
	friend struct Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationCurveIdentifierExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationCurveIdentifierExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationCurveIdentifierExtensions(); \
	friend struct Z_Construct_UClass_UAnimationCurveIdentifierExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationCurveIdentifierExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationCurveIdentifierExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationCurveIdentifierExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCurveIdentifierExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationCurveIdentifierExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCurveIdentifierExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationCurveIdentifierExtensions(UAnimationCurveIdentifierExtensions&&); \
	NO_API UAnimationCurveIdentifierExtensions(const UAnimationCurveIdentifierExtensions&); \
public: \
	NO_API virtual ~UAnimationCurveIdentifierExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationCurveIdentifierExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationCurveIdentifierExtensions(UAnimationCurveIdentifierExtensions&&); \
	NO_API UAnimationCurveIdentifierExtensions(const UAnimationCurveIdentifierExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationCurveIdentifierExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationCurveIdentifierExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationCurveIdentifierExtensions) \
	NO_API virtual ~UAnimationCurveIdentifierExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_102_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationCurveIdentifierExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_CurveIdentifier_h


#define FOREACH_ENUM_ETRANSFORMCURVECHANNEL(op) \
	op(ETransformCurveChannel::Position) \
	op(ETransformCurveChannel::Rotation) \
	op(ETransformCurveChannel::Scale) \
	op(ETransformCurveChannel::Invalid) 

enum class ETransformCurveChannel : uint8;
template<> struct TIsUEnumClass<ETransformCurveChannel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETransformCurveChannel>();

#define FOREACH_ENUM_EVECTORCURVECHANNEL(op) \
	op(EVectorCurveChannel::X) \
	op(EVectorCurveChannel::Y) \
	op(EVectorCurveChannel::Z) \
	op(EVectorCurveChannel::Invalid) 

enum class EVectorCurveChannel : uint8;
template<> struct TIsUEnumClass<EVectorCurveChannel> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVectorCurveChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
