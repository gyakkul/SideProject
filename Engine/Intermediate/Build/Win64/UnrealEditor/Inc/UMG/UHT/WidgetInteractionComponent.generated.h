// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/WidgetInteractionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
class UWidgetComponent;
struct FHitResult;
struct FKey;
#ifdef UMG_WidgetInteractionComponent_generated_h
#error "WidgetInteractionComponent.generated.h already included, missing '#pragma once' in WidgetInteractionComponent.h"
#endif
#define UMG_WidgetInteractionComponent_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_50_DELEGATE \
UMG_API void FOnHoveredWidgetChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHoveredWidgetChanged, UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execSetCustomHitResult); \
	DECLARE_FUNCTION(execGet2DHitLocation); \
	DECLARE_FUNCTION(execGetLastHitResult); \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget); \
	DECLARE_FUNCTION(execIsOverFocusableWidget); \
	DECLARE_FUNCTION(execIsOverInteractableWidget); \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent); \
	DECLARE_FUNCTION(execScrollWheel); \
	DECLARE_FUNCTION(execSendKeyChar); \
	DECLARE_FUNCTION(execPressAndReleaseKey); \
	DECLARE_FUNCTION(execReleaseKey); \
	DECLARE_FUNCTION(execPressKey); \
	DECLARE_FUNCTION(execReleasePointerKey); \
	DECLARE_FUNCTION(execPressPointerKey);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFocus); \
	DECLARE_FUNCTION(execSetCustomHitResult); \
	DECLARE_FUNCTION(execGet2DHitLocation); \
	DECLARE_FUNCTION(execGetLastHitResult); \
	DECLARE_FUNCTION(execIsOverHitTestVisibleWidget); \
	DECLARE_FUNCTION(execIsOverFocusableWidget); \
	DECLARE_FUNCTION(execIsOverInteractableWidget); \
	DECLARE_FUNCTION(execGetHoveredWidgetComponent); \
	DECLARE_FUNCTION(execScrollWheel); \
	DECLARE_FUNCTION(execSendKeyChar); \
	DECLARE_FUNCTION(execPressAndReleaseKey); \
	DECLARE_FUNCTION(execReleaseKey); \
	DECLARE_FUNCTION(execPressKey); \
	DECLARE_FUNCTION(execReleasePointerKey); \
	DECLARE_FUNCTION(execPressPointerKey);


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetInteractionComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetInteractionComponent(); \
	friend struct Z_Construct_UClass_UWidgetInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetInteractionComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetInteractionComponent)


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetInteractionComponent(UWidgetInteractionComponent&&); \
	NO_API UWidgetInteractionComponent(const UWidgetInteractionComponent&); \
public: \
	NO_API virtual ~UWidgetInteractionComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetInteractionComponent(UWidgetInteractionComponent&&); \
	NO_API UWidgetInteractionComponent(const UWidgetInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetInteractionComponent) \
	NO_API virtual ~UWidgetInteractionComponent();


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_58_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_WidgetInteractionComponent_h


#define FOREACH_ENUM_EWIDGETINTERACTIONSOURCE(op) \
	op(EWidgetInteractionSource::World) \
	op(EWidgetInteractionSource::Mouse) \
	op(EWidgetInteractionSource::CenterScreen) \
	op(EWidgetInteractionSource::Custom) 

enum class EWidgetInteractionSource : uint8;
template<> struct TIsUEnumClass<EWidgetInteractionSource> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EWidgetInteractionSource>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
