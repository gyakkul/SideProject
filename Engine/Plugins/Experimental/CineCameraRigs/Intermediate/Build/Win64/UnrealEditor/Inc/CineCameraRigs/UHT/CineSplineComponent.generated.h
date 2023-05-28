// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineSplineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCineSplinePointData;
#ifdef CINECAMERARIGS_CineSplineComponent_generated_h
#error "CineSplineComponent.generated.h already included, missing '#pragma once' in CineSplineComponent.h"
#endif
#define CINECAMERARIGS_CineSplineComponent_generated_h

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_105_DELEGATE \
static void FOnSplineEdited_BP_DelegateWrapper(const FMulticastScriptDelegate& OnSplineEdited_BP);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPointRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetPositionAtInputKey); \
	DECLARE_FUNCTION(execGetInputKeyAtPosition); \
	DECLARE_FUNCTION(execGetSplineDataAtPosition); \
	DECLARE_FUNCTION(execAddSplineDataAtPosition); \
	DECLARE_FUNCTION(execUpdateSplineDataAtIndex); \
	DECLARE_FUNCTION(execFindSplineDataAtPosition); \
	DECLARE_FUNCTION(execSetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetAbsolutePositionAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocusDistanceAtSplinePoint); \
	DECLARE_FUNCTION(execSetApertureAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocalLengthAtSplinePoint);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPointRotationAtSplineInputKey); \
	DECLARE_FUNCTION(execGetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execGetPositionAtInputKey); \
	DECLARE_FUNCTION(execGetInputKeyAtPosition); \
	DECLARE_FUNCTION(execGetSplineDataAtPosition); \
	DECLARE_FUNCTION(execAddSplineDataAtPosition); \
	DECLARE_FUNCTION(execUpdateSplineDataAtIndex); \
	DECLARE_FUNCTION(execFindSplineDataAtPosition); \
	DECLARE_FUNCTION(execSetPointRotationAtSplinePoint); \
	DECLARE_FUNCTION(execSetAbsolutePositionAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocusDistanceAtSplinePoint); \
	DECLARE_FUNCTION(execSetApertureAtSplinePoint); \
	DECLARE_FUNCTION(execSetFocalLengthAtSplinePoint);


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_ACCESSORS
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineSplineComponent(); \
	friend struct Z_Construct_UClass_UCineSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UCineSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(UCineSplineComponent)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCineSplineComponent(); \
	friend struct Z_Construct_UClass_UCineSplineComponent_Statics; \
public: \
	DECLARE_CLASS(UCineSplineComponent, USplineComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CineCameraRigs"), NO_API) \
	DECLARE_SERIALIZER(UCineSplineComponent)


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineSplineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineSplineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineSplineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineSplineComponent(UCineSplineComponent&&); \
	NO_API UCineSplineComponent(const UCineSplineComponent&); \
public: \
	NO_API virtual ~UCineSplineComponent();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineSplineComponent(UCineSplineComponent&&); \
	NO_API UCineSplineComponent(const UCineSplineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineSplineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineSplineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineSplineComponent) \
	NO_API virtual ~UCineSplineComponent();


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_16_PROLOG
#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_INCLASS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_ACCESSORS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINECAMERARIGS_API UClass* StaticClass<class UCineSplineComponent>();

#define FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCineSplineInstanceData_Statics; \
	CINECAMERARIGS_API static class UScriptStruct* StaticStruct(); \
	typedef FSplineInstanceData Super;


template<> CINECAMERARIGS_API UScriptStruct* StaticStruct<struct FCineSplineInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineSplineComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
