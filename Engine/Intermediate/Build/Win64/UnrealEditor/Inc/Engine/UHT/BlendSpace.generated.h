// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/BlendSpace.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BlendSpace_generated_h
#error "BlendSpace.generated.h already included, missing '#pragma once' in BlendSpace.h"
#endif
#define ENGINE_BlendSpace_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnalysisProperties(); \
	friend struct Z_Construct_UClass_UAnalysisProperties_Statics; \
public: \
	DECLARE_CLASS(UAnalysisProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnalysisProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUAnalysisProperties(); \
	friend struct Z_Construct_UClass_UAnalysisProperties_Statics; \
public: \
	DECLARE_CLASS(UAnalysisProperties, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnalysisProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalysisProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalysisProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnalysisProperties(UAnalysisProperties&&); \
	ENGINE_API UAnalysisProperties(const UAnalysisProperties&); \
public: \
	ENGINE_API virtual ~UAnalysisProperties();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnalysisProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnalysisProperties(UAnalysisProperties&&); \
	ENGINE_API UAnalysisProperties(const UAnalysisProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnalysisProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnalysisProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnalysisProperties) \
	ENGINE_API virtual ~UAnalysisProperties();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnalysisProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_69_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceBlendProfile_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSpaceBlendProfile>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterpolationParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FInterpolationParameter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendParameter_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendParameter>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSample>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceSegment_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSpaceSegment>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_241_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceTriangleEdgeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSpaceTriangleEdgeInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_273_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceTriangle_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSpaceTriangle>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWeightedBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWeightedBlendSample>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_317_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlendSpaceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBlendSpaceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_362_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEditorElement_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEditorElement>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_388_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridBlendSample_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGridBlendSample>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_406_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneInterpolation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneInterpolation>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBlendSpace, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlendSpace(); \
	friend struct Z_Construct_UClass_UBlendSpace_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_INCLASS \
private: \
	static void StaticRegisterNativesUBlendSpace(); \
	friend struct Z_Construct_UClass_UBlendSpace_Statics; \
public: \
	DECLARE_CLASS(UBlendSpace, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UBlendSpace) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace(UBlendSpace&&); \
	ENGINE_API UBlendSpace(const UBlendSpace&); \
public: \
	ENGINE_API virtual ~UBlendSpace();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UBlendSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UBlendSpace(UBlendSpace&&); \
	ENGINE_API UBlendSpace(const UBlendSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UBlendSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlendSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlendSpace) \
	ENGINE_API virtual ~UBlendSpace();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_449_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h_452_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlendSpace."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UBlendSpace>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_BlendSpace_h


#define FOREACH_ENUM_EBLENDSPACEAXIS(op) \
	op(BSA_None) \
	op(BSA_X) \
	op(BSA_Y) 

enum EBlendSpaceAxis : int;
template<> ENGINE_API UEnum* StaticEnum<EBlendSpaceAxis>();

#define FOREACH_ENUM_EPREFERREDTRIANGULATIONDIRECTION(op) \
	op(EPreferredTriangulationDirection::None) \
	op(EPreferredTriangulationDirection::Tangential) \
	op(EPreferredTriangulationDirection::Radial) 

enum class EPreferredTriangulationDirection : uint8;
template<> struct TIsUEnumClass<EPreferredTriangulationDirection> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPreferredTriangulationDirection>();

#define FOREACH_ENUM_EBLENDSPACEPERBONEBLENDMODE(op) \
	op(EBlendSpacePerBoneBlendMode::ManualPerBoneOverride) \
	op(EBlendSpacePerBoneBlendMode::BlendProfile) 

enum class EBlendSpacePerBoneBlendMode : uint8;
template<> struct TIsUEnumClass<EBlendSpacePerBoneBlendMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EBlendSpacePerBoneBlendMode>();

#define FOREACH_ENUM_ENOTIFYTRIGGERMODE(op) \
	op(ENotifyTriggerMode::AllAnimations) \
	op(ENotifyTriggerMode::HighestWeightedAnimation) \
	op(ENotifyTriggerMode::None) 

namespace ENotifyTriggerMode { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENotifyTriggerMode::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
