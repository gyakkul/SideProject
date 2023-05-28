// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/IAnimationDataController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAnimationDataModel;
class USkeleton;
enum class ERawCurveTrackTypes : uint8;
struct FAnimationAttributeIdentifier;
struct FAnimationCurveIdentifier;
struct FFrameNumber;
struct FFrameRate;
struct FLinearColor;
struct FRichCurveKey;
#ifdef ENGINE_IAnimationDataController_generated_h
#error "IAnimationDataController.generated.h already included, missing '#pragma once' in IAnimationDataController.h"
#endif
#define ENGINE_IAnimationDataController_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDuplicateAttribute); \
	DECLARE_FUNCTION(execRemoveAttributeKey); \
	DECLARE_FUNCTION(execRemoveAllAttributes); \
	DECLARE_FUNCTION(execRemoveAllAttributesForBone); \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execAddAttribute); \
	DECLARE_FUNCTION(execFindOrAddCurveNamesOnSkeleton); \
	DECLARE_FUNCTION(execUpdateCurveNamesFromSkeleton); \
	DECLARE_FUNCTION(execSetCurveKeys); \
	DECLARE_FUNCTION(execRemoveCurveKey); \
	DECLARE_FUNCTION(execSetCurveKey); \
	DECLARE_FUNCTION(execScaleCurve); \
	DECLARE_FUNCTION(execSetCurveColor); \
	DECLARE_FUNCTION(execRenameCurve); \
	DECLARE_FUNCTION(execRemoveTransformCurveKey); \
	DECLARE_FUNCTION(execSetTransformCurveKey); \
	DECLARE_FUNCTION(execSetTransformCurveKeys); \
	DECLARE_FUNCTION(execSetCurveFlags); \
	DECLARE_FUNCTION(execSetCurveFlag); \
	DECLARE_FUNCTION(execRemoveAllCurvesOfType); \
	DECLARE_FUNCTION(execRemoveCurve); \
	DECLARE_FUNCTION(execDuplicateCurve); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execSetBoneTrackKeys); \
	DECLARE_FUNCTION(execRemoveAllBoneTracks); \
	DECLARE_FUNCTION(execRemoveBoneTrack); \
	DECLARE_FUNCTION(execInsertBoneTrack); \
	DECLARE_FUNCTION(execAddBoneCurve); \
	DECLARE_FUNCTION(execAddBoneTrack); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execResize); \
	DECLARE_FUNCTION(execResizeInFrames); \
	DECLARE_FUNCTION(execResizePlayLength); \
	DECLARE_FUNCTION(execResizeNumberOfFrames); \
	DECLARE_FUNCTION(execSetPlayLength); \
	DECLARE_FUNCTION(execSetNumberOfFrames); \
	DECLARE_FUNCTION(execCloseBracket); \
	DECLARE_FUNCTION(execOpenBracket); \
	DECLARE_FUNCTION(execGetModelInterface); \
	DECLARE_FUNCTION(execSetModel);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDuplicateAttribute); \
	DECLARE_FUNCTION(execRemoveAttributeKey); \
	DECLARE_FUNCTION(execRemoveAllAttributes); \
	DECLARE_FUNCTION(execRemoveAllAttributesForBone); \
	DECLARE_FUNCTION(execRemoveAttribute); \
	DECLARE_FUNCTION(execAddAttribute); \
	DECLARE_FUNCTION(execFindOrAddCurveNamesOnSkeleton); \
	DECLARE_FUNCTION(execUpdateCurveNamesFromSkeleton); \
	DECLARE_FUNCTION(execSetCurveKeys); \
	DECLARE_FUNCTION(execRemoveCurveKey); \
	DECLARE_FUNCTION(execSetCurveKey); \
	DECLARE_FUNCTION(execScaleCurve); \
	DECLARE_FUNCTION(execSetCurveColor); \
	DECLARE_FUNCTION(execRenameCurve); \
	DECLARE_FUNCTION(execRemoveTransformCurveKey); \
	DECLARE_FUNCTION(execSetTransformCurveKey); \
	DECLARE_FUNCTION(execSetTransformCurveKeys); \
	DECLARE_FUNCTION(execSetCurveFlags); \
	DECLARE_FUNCTION(execSetCurveFlag); \
	DECLARE_FUNCTION(execRemoveAllCurvesOfType); \
	DECLARE_FUNCTION(execRemoveCurve); \
	DECLARE_FUNCTION(execDuplicateCurve); \
	DECLARE_FUNCTION(execAddCurve); \
	DECLARE_FUNCTION(execSetBoneTrackKeys); \
	DECLARE_FUNCTION(execRemoveAllBoneTracks); \
	DECLARE_FUNCTION(execRemoveBoneTrack); \
	DECLARE_FUNCTION(execInsertBoneTrack); \
	DECLARE_FUNCTION(execAddBoneCurve); \
	DECLARE_FUNCTION(execAddBoneTrack); \
	DECLARE_FUNCTION(execSetFrameRate); \
	DECLARE_FUNCTION(execResize); \
	DECLARE_FUNCTION(execResizeInFrames); \
	DECLARE_FUNCTION(execResizePlayLength); \
	DECLARE_FUNCTION(execResizeNumberOfFrames); \
	DECLARE_FUNCTION(execSetPlayLength); \
	DECLARE_FUNCTION(execSetNumberOfFrames); \
	DECLARE_FUNCTION(execCloseBracket); \
	DECLARE_FUNCTION(execOpenBracket); \
	DECLARE_FUNCTION(execGetModelInterface); \
	DECLARE_FUNCTION(execSetModel);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataController(UAnimationDataController&&); \
	NO_API UAnimationDataController(const UAnimationDataController&); \
public: \
	NO_API virtual ~UAnimationDataController();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataController(UAnimationDataController&&); \
	NO_API UAnimationDataController(const UAnimationDataController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataController) \
	NO_API virtual ~UAnimationDataController();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimationDataController(); \
	friend struct Z_Construct_UClass_UAnimationDataController_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataController, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataController)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimationDataController() {} \
public: \
	typedef UAnimationDataController UClassType; \
	typedef IAnimationDataController ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimationDataController() {} \
public: \
	typedef UAnimationDataController UClassType; \
	typedef IAnimationDataController ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_43_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationDataController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
