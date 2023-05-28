// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRawAnimSequenceTrack;
#ifdef ENGINE_AnimTypes_generated_h
#error "AnimTypes.generated.h already included, missing '#pragma once' in AnimTypes.h"
#endif
#define ENGINE_AnimTypes_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeight>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPerBoneBlendWeights>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_290_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimLinkableElement Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyEvent>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_490_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimSyncMarker>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_551_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimNotifyTrack>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_645_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMarkerSyncData>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_829_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTrackToSkeletonMap>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_860_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRawAnimSequenceTrack>();

#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetScaleKeys); \
	DECLARE_FUNCTION(execGetRotationalKeys); \
	DECLARE_FUNCTION(execGetPositionalKeys);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetScaleKeys); \
	DECLARE_FUNCTION(execGetRotationalKeys); \
	DECLARE_FUNCTION(execGetPositionalKeys);


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURawAnimSequenceTrackExtensions(); \
	friend struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(URawAnimSequenceTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_INCLASS \
private: \
	static void StaticRegisterNativesURawAnimSequenceTrackExtensions(); \
	friend struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics; \
public: \
	DECLARE_CLASS(URawAnimSequenceTrackExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URawAnimSequenceTrackExtensions)


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawAnimSequenceTrackExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawAnimSequenceTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawAnimSequenceTrackExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawAnimSequenceTrackExtensions(URawAnimSequenceTrackExtensions&&); \
	NO_API URawAnimSequenceTrackExtensions(const URawAnimSequenceTrackExtensions&); \
public: \
	NO_API virtual ~URawAnimSequenceTrackExtensions();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URawAnimSequenceTrackExtensions(URawAnimSequenceTrackExtensions&&); \
	NO_API URawAnimSequenceTrackExtensions(const URawAnimSequenceTrackExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URawAnimSequenceTrackExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URawAnimSequenceTrackExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URawAnimSequenceTrackExtensions) \
	NO_API virtual ~URawAnimSequenceTrackExtensions();


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_938_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_941_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URawAnimSequenceTrackExtensions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h


#define FOREACH_ENUM_EBONEAXIS(op) \
	op(BA_X) \
	op(BA_Y) \
	op(BA_Z) 

enum EBoneAxis : int;
template<> ENGINE_API UEnum* StaticEnum<EBoneAxis>();

#define FOREACH_ENUM_EBONECONTROLSPACE(op) \
	op(BCS_WorldSpace) \
	op(BCS_ComponentSpace) \
	op(BCS_ParentBoneSpace) \
	op(BCS_BoneSpace) 

enum EBoneControlSpace : int;
template<> ENGINE_API UEnum* StaticEnum<EBoneControlSpace>();

#define FOREACH_ENUM_EBONEROTATIONSOURCE(op) \
	op(BRS_KeepComponentSpaceRotation) \
	op(BRS_KeepLocalSpaceRotation) \
	op(BRS_CopyFromTarget) 

enum EBoneRotationSource : int;
template<> ENGINE_API UEnum* StaticEnum<EBoneRotationSource>();

#define FOREACH_ENUM_EMONTAGENOTIFYTICKTYPE(op) \
	op(EMontageNotifyTickType::Queued) \
	op(EMontageNotifyTickType::BranchingPoint) 

namespace EMontageNotifyTickType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EMontageNotifyTickType::Type>();

#define FOREACH_ENUM_ENOTIFYFILTERTYPE(op) \
	op(ENotifyFilterType::NoFiltering) \
	op(ENotifyFilterType::LOD) 

namespace ENotifyFilterType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ENotifyFilterType::Type>();

#define FOREACH_ENUM_EADDITIVEANIMATIONTYPE(op) \
	op(AAT_None) \
	op(AAT_LocalSpaceBase) \
	op(AAT_RotationOffsetMeshSpace) 

enum EAdditiveAnimationType : int;
template<> ENGINE_API UEnum* StaticEnum<EAdditiveAnimationType>();

#define FOREACH_ENUM_ECURVEBLENDOPTION(op) \
	op(ECurveBlendOption::Override) \
	op(ECurveBlendOption::DoNotOverride) \
	op(ECurveBlendOption::NormalizeByWeight) \
	op(ECurveBlendOption::BlendByWeight) \
	op(ECurveBlendOption::UseBasePose) \
	op(ECurveBlendOption::UseMaxValue) \
	op(ECurveBlendOption::UseMinValue) 

namespace ECurveBlendOption { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ECurveBlendOption::Type>();

#define FOREACH_ENUM_EANIMINTERPOLATIONTYPE(op) \
	op(EAnimInterpolationType::Linear) \
	op(EAnimInterpolationType::Step) 

enum class EAnimInterpolationType : uint8;
template<> struct TIsUEnumClass<EAnimInterpolationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimInterpolationType>();

#define FOREACH_ENUM_EAXISOPTION(op) \
	op(EAxisOption::X) \
	op(EAxisOption::Y) \
	op(EAxisOption::Z) \
	op(EAxisOption::X_Neg) \
	op(EAxisOption::Y_Neg) \
	op(EAxisOption::Z_Neg) \
	op(EAxisOption::Custom) 

namespace EAxisOption { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EAxisOption::Type>();

#define FOREACH_ENUM_ECOMPONENTTYPE(op) \
	op(EComponentType::None) \
	op(EComponentType::TranslationX) \
	op(EComponentType::TranslationY) \
	op(EComponentType::TranslationZ) \
	op(EComponentType::RotationX) \
	op(EComponentType::RotationY) \
	op(EComponentType::RotationZ) \
	op(EComponentType::Scale) \
	op(EComponentType::ScaleX) \
	op(EComponentType::ScaleY) \
	op(EComponentType::ScaleZ) 

namespace EComponentType { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<EComponentType::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
