// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/IAnimationDataModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
struct FBoneAnimationTrack;
struct FFrameRate;
#ifdef ENGINE_IAnimationDataModel_generated_h
#error "IAnimationDataModel.generated.h already included, missing '#pragma once' in IAnimationDataModel.h"
#endif
#define ENGINE_IAnimationDataModel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBoneAnimationTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationCurveData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationCurveData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimatedBoneAttribute>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAnimationSequence); \
	DECLARE_FUNCTION(execGetNumberOfFloatCurves); \
	DECLARE_FUNCTION(execGetNumberOfTransformCurves); \
	DECLARE_FUNCTION(execGetBoneTrackNames); \
	DECLARE_FUNCTION(execGetNumBoneTracks); \
	DECLARE_FUNCTION(execIsValidBoneTrackName); \
	DECLARE_FUNCTION(execIsValidBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackIndexByName); \
	DECLARE_FUNCTION(execGetBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackByName); \
	DECLARE_FUNCTION(execGetBoneTrackByIndex); \
	DECLARE_FUNCTION(execGetBoneAnimationTracks); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetNumberOfKeys); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetPlayLength);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationSequence); \
	DECLARE_FUNCTION(execGetNumberOfFloatCurves); \
	DECLARE_FUNCTION(execGetNumberOfTransformCurves); \
	DECLARE_FUNCTION(execGetBoneTrackNames); \
	DECLARE_FUNCTION(execGetNumBoneTracks); \
	DECLARE_FUNCTION(execIsValidBoneTrackName); \
	DECLARE_FUNCTION(execIsValidBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackIndexByName); \
	DECLARE_FUNCTION(execGetBoneTrackIndex); \
	DECLARE_FUNCTION(execGetBoneTrackByName); \
	DECLARE_FUNCTION(execGetBoneTrackByIndex); \
	DECLARE_FUNCTION(execGetBoneAnimationTracks); \
	DECLARE_FUNCTION(execGetFrameRate); \
	DECLARE_FUNCTION(execGetNumberOfKeys); \
	DECLARE_FUNCTION(execGetNumberOfFrames); \
	DECLARE_FUNCTION(execGetPlayLength);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataModel(UAnimationDataModel&&); \
	NO_API UAnimationDataModel(const UAnimationDataModel&); \
public: \
	NO_API virtual ~UAnimationDataModel();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataModel(UAnimationDataModel&&); \
	NO_API UAnimationDataModel(const UAnimationDataModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModel); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModel) \
	NO_API virtual ~UAnimationDataModel();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimationDataModel(); \
	friend struct Z_Construct_UClass_UAnimationDataModel_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataModel, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataModel)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimationDataModel() {} \
public: \
	typedef UAnimationDataModel UClassType; \
	typedef IAnimationDataModel ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimationDataModel() {} \
public: \
	typedef UAnimationDataModel UClassType; \
	typedef IAnimationDataModel ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_120_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_123_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationDataModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
