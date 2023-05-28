// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineComponentVisualizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPONENTVISUALIZERS_SplineComponentVisualizer_generated_h
#error "SplineComponentVisualizer.generated.h already included, missing '#pragma once' in SplineComponentVisualizer.h"
#endif
#define COMPONENTVISUALIZERS_SplineComponentVisualizer_generated_h

#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_SPARSE_DATA
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_RPC_WRAPPERS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_ACCESSORS
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineComponentVisualizerSelectionState(); \
	friend struct Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics; \
public: \
	DECLARE_CLASS(USplineComponentVisualizerSelectionState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(USplineComponentVisualizerSelectionState)


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUSplineComponentVisualizerSelectionState(); \
	friend struct Z_Construct_UClass_USplineComponentVisualizerSelectionState_Statics; \
public: \
	DECLARE_CLASS(USplineComponentVisualizerSelectionState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ComponentVisualizers"), NO_API) \
	DECLARE_SERIALIZER(USplineComponentVisualizerSelectionState)


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponentVisualizerSelectionState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponentVisualizerSelectionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponentVisualizerSelectionState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponentVisualizerSelectionState(USplineComponentVisualizerSelectionState&&); \
	NO_API USplineComponentVisualizerSelectionState(const USplineComponentVisualizerSelectionState&); \
public: \
	NO_API virtual ~USplineComponentVisualizerSelectionState();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineComponentVisualizerSelectionState(USplineComponentVisualizerSelectionState&&); \
	NO_API USplineComponentVisualizerSelectionState(const USplineComponentVisualizerSelectionState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineComponentVisualizerSelectionState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineComponentVisualizerSelectionState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineComponentVisualizerSelectionState) \
	NO_API virtual ~USplineComponentVisualizerSelectionState();


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_60_PROLOG
#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_SPARSE_DATA \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_ACCESSORS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_INCLASS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_SPARSE_DATA \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_ACCESSORS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPONENTVISUALIZERS_API UClass* StaticClass<class USplineComponentVisualizerSelectionState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ComponentVisualizers_Public_SplineComponentVisualizer_h


#define FOREACH_ENUM_ESELECTEDTANGENTHANDLE(op) \
	op(ESelectedTangentHandle::None) \
	op(ESelectedTangentHandle::Leave) \
	op(ESelectedTangentHandle::Arrive) 

enum class ESelectedTangentHandle;
template<> struct TIsUEnumClass<ESelectedTangentHandle> { enum { Value = true }; };
template<> COMPONENTVISUALIZERS_API UEnum* StaticEnum<ESelectedTangentHandle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
