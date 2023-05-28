// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ViewportWorldInteraction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ABaseTransformGizmo;
class UViewportInteractor;
#ifdef VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h
#error "ViewportWorldInteraction.generated.h already included, missing '#pragma once' in ViewportWorldInteraction.h"
#endif
#define VIEWPORTINTERACTION_ViewportWorldInteraction_generated_h

#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_SPARSE_DATA
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractors); \
	DECLARE_FUNCTION(execGetTransformGizmoActor); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetWorldScaleFactor); \
	DECLARE_FUNCTION(execSetRoomTransformForNextFrame); \
	DECLARE_FUNCTION(execSetHeadTransform); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceHeadTransform); \
	DECLARE_FUNCTION(execGetRoomTransform); \
	DECLARE_FUNCTION(execAddActorToExcludeFromHitTests); \
	DECLARE_FUNCTION(execRemoveInteractor); \
	DECLARE_FUNCTION(execAddInteractor);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractors); \
	DECLARE_FUNCTION(execGetTransformGizmoActor); \
	DECLARE_FUNCTION(execSetWorldToMetersScale); \
	DECLARE_FUNCTION(execGetWorldScaleFactor); \
	DECLARE_FUNCTION(execSetRoomTransformForNextFrame); \
	DECLARE_FUNCTION(execSetHeadTransform); \
	DECLARE_FUNCTION(execGetHeadTransform); \
	DECLARE_FUNCTION(execGetRoomSpaceHeadTransform); \
	DECLARE_FUNCTION(execGetRoomTransform); \
	DECLARE_FUNCTION(execAddActorToExcludeFromHitTests); \
	DECLARE_FUNCTION(execRemoveInteractor); \
	DECLARE_FUNCTION(execAddInteractor);


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ACCESSORS
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUViewportWorldInteraction(); \
	friend struct Z_Construct_UClass_UViewportWorldInteraction_Statics; \
public: \
	DECLARE_CLASS(UViewportWorldInteraction, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportWorldInteraction)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUViewportWorldInteraction(); \
	friend struct Z_Construct_UClass_UViewportWorldInteraction_Statics; \
public: \
	DECLARE_CLASS(UViewportWorldInteraction, UEditorWorldExtension, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ViewportInteraction"), NO_API) \
	DECLARE_SERIALIZER(UViewportWorldInteraction)


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UViewportWorldInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UViewportWorldInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportWorldInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportWorldInteraction(UViewportWorldInteraction&&); \
	NO_API UViewportWorldInteraction(const UViewportWorldInteraction&); \
public: \
	NO_API virtual ~UViewportWorldInteraction();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UViewportWorldInteraction(UViewportWorldInteraction&&); \
	NO_API UViewportWorldInteraction(const UViewportWorldInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UViewportWorldInteraction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UViewportWorldInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UViewportWorldInteraction) \
	NO_API virtual ~UViewportWorldInteraction();


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_46_PROLOG
#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_SPARSE_DATA \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ACCESSORS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIEWPORTINTERACTION_API UClass* StaticClass<class UViewportWorldInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h


#define FOREACH_ENUM_EVIEWPORTWORLDINTERACTIONTYPE(op) \
	op(EViewportWorldInteractionType::VR) \
	op(EViewportWorldInteractionType::Legacy) 

enum class EViewportWorldInteractionType : uint8;
template<> struct TIsUEnumClass<EViewportWorldInteractionType> { enum { Value = true }; };
template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportWorldInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
