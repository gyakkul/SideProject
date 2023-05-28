// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UViewportInteractor;
class UViewportWorldInteraction;
enum class EHitResultGizmoFilterMode : uint8;
enum class EViewportInteractionDraggingMode : uint8;
struct FKey;
struct FViewportActionKeyInput;
#ifdef VIEWPORTINTERACTION_ViewportInteractor_generated_h
#error "ViewportInteractor.generated.h already included, missing '#pragma once' in ViewportInteractor.h"
#endif
#define VIEWPORTINTERACTION_ViewportInteractor_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_SPARSE_DATA
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_RPC_WRAPPERS \
	virtual void Tick_Implementation(const float DeltaTime); \
	virtual void Shutdown_Implementation(); \
 \
	DECLARE_FUNCTION(execCanCarry); \
	DECLARE_FUNCTION(execSetCanCarry); \
	DECLARE_FUNCTION(execGetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetDraggingMode); \
	DECLARE_FUNCTION(execIsHoveringOverGizmo); \
	DECLARE_FUNCTION(execGetHoverLocation); \
	DECLARE_FUNCTION(execGetTransformAndForwardVector); \
	DECLARE_FUNCTION(execGetLaserPointer); \
	DECLARE_FUNCTION(execGetDraggingMode); \
	DECLARE_FUNCTION(execGetLastRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetLastTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execGetOtherInteractor); \
	DECLARE_FUNCTION(execGetWorldInteraction);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Tick_Implementation(const float DeltaTime); \
	virtual void Shutdown_Implementation(); \
 \
	DECLARE_FUNCTION(execCanCarry); \
	DECLARE_FUNCTION(execSetCanCarry); \
	DECLARE_FUNCTION(execGetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetHitResultGizmoFilterMode); \
	DECLARE_FUNCTION(execSetDraggingMode); \
	DECLARE_FUNCTION(execIsHoveringOverGizmo); \
	DECLARE_FUNCTION(execGetHoverLocation); \
	DECLARE_FUNCTION(execGetTransformAndForwardVector); \
	DECLARE_FUNCTION(execGetLaserPointer); \
	DECLARE_FUNCTION(execGetDraggingMode); \
	DECLARE_FUNCTION(execGetLastRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetLastTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceTransform); \
	DECLARE_FUNCTION(execGetTransform); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execGetOtherInteractor); \
	DECLARE_FUNCTION(execGetWorldInteraction);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_ACCESSORS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_CALLBACK_WRAPPERS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportInteractor(); \
	friend struct Z_Construct_UClass_UViewportInteractor_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportInteractor)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUViewportInteractor(); \
	friend struct Z_Construct_UClass_UViewportInteractor_Statics; \
public: \
	DECLARE_CLASS(UViewportInteractor, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportInteractor)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportInteractor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportInteractor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportInteractor(UViewportInteractor&&); \
	NO_API UViewportInteractor(const UViewportInteractor&); \
public: \
	NO_API virtual ~UViewportInteractor();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportInteractor(UViewportInteractor&&); \
	NO_API UViewportInteractor(const UViewportInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportInteractor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UViewportInteractor) \
	NO_API virtual ~UViewportInteractor();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_29_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_INCLASS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_CALLBACK_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h


#define FOREACH_ENUM_EHITRESULTGIZMOFILTERMODE(op) \
	op(EHitResultGizmoFilterMode::All) \
	op(EHitResultGizmoFilterMode::NoGizmos) \
	op(EHitResultGizmoFilterMode::GizmosOnly) 

enum class EHitResultGizmoFilterMode : uint8;
template<> struct TIsUEnumClass<EHitResultGizmoFilterMode> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EHitResultGizmoFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
