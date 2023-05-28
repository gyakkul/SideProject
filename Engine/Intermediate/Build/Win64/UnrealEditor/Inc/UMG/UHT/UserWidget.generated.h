// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/UserWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class APlayerCameraManager;
class APlayerController;
class UDragDropOperation;
class USoundBase;
class UUMGSequencePlayer;
class UUserWidgetExtension;
class UWidgetAnimation;
enum class ESlateVisibility : uint8;
enum class EWidgetAnimationEvent : uint8;
struct FAnalogInputEvent;
struct FAnchors;
struct FCharacterEvent;
struct FEventReply;
struct FFocusEvent;
struct FGeometry;
struct FKeyEvent;
struct FLinearColor;
struct FMargin;
struct FMotionEvent;
struct FPaintContext;
struct FPointerEvent;
struct FSlateColor;
#ifdef UMG_UserWidget_generated_h
#error "UserWidget.generated.h already included, missing '#pragma once' in UserWidget.h"
#endif
#define UMG_UserWidget_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationEventBinding_Statics; \
	UMG_API static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FAnimationEventBinding>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FPaintContext>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedSlotBinding_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FNamedSlotBinding>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_208_DELEGATE \
UMG_API void FOnConstructEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConstructEvent);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_210_DELEGATE \
UMG_API void FOnInputAction_DelegateWrapper(const FScriptDelegate& OnInputAction);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_212_DELEGATE \
UMG_API void FOnVisibilityChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVisibilityChangedEvent, ESlateVisibility InVisibility);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_RPC_WRAPPERS \
	virtual void OnAnimationFinished_Implementation(const UWidgetAnimation* Animation); \
	virtual void OnAnimationStarted_Implementation(const UWidgetAnimation* Animation); \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking); \
	DECLARE_FUNCTION(execSetInputActionPriority); \
	DECLARE_FUNCTION(execIsListeningForInputAction); \
	DECLARE_FUNCTION(execUnregisterInputComponent); \
	DECLARE_FUNCTION(execRegisterInputComponent); \
	DECLARE_FUNCTION(execStopListeningForAllInputActions); \
	DECLARE_FUNCTION(execStopListeningForInputAction); \
	DECLARE_FUNCTION(execListenForInputAction); \
	DECLARE_FUNCTION(execIsPlayingAnimation); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execRemoveExtensions); \
	DECLARE_FUNCTION(execRemoveExtension); \
	DECLARE_FUNCTION(execAddExtension); \
	DECLARE_FUNCTION(execGetExtensions); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execFlushAnimations); \
	DECLARE_FUNCTION(execIsAnimationPlayingForward); \
	DECLARE_FUNCTION(execReverseAnimation); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetNumLoopsToPlay); \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying); \
	DECLARE_FUNCTION(execIsAnimationPlaying); \
	DECLARE_FUNCTION(execSetAnimationCurrentTime); \
	DECLARE_FUNCTION(execGetAnimationCurrentTime); \
	DECLARE_FUNCTION(execPauseAnimation); \
	DECLARE_FUNCTION(execStopAllAnimations); \
	DECLARE_FUNCTION(execStopAnimation); \
	DECLARE_FUNCTION(execPlayAnimationReverse); \
	DECLARE_FUNCTION(execPlayAnimationForward); \
	DECLARE_FUNCTION(execPlayAnimationTimeRange); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execOnAnimationFinished); \
	DECLARE_FUNCTION(execOnAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationEvent); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions); \
	DECLARE_FUNCTION(execCancelLatentActions); \
	DECLARE_FUNCTION(execGetOwningPlayerCameraManager); \
	DECLARE_FUNCTION(execGetOwningPlayerPawn); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execGetIsVisible); \
	DECLARE_FUNCTION(execGetAlignmentInViewport); \
	DECLARE_FUNCTION(execGetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetAlignmentInViewport); \
	DECLARE_FUNCTION(execSetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport); \
	DECLARE_FUNCTION(execSetPositionInViewport); \
	DECLARE_FUNCTION(execRemoveFromViewport); \
	DECLARE_FUNCTION(execAddToPlayerScreen); \
	DECLARE_FUNCTION(execAddToViewport);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputActionBlocking); \
	DECLARE_FUNCTION(execSetInputActionPriority); \
	DECLARE_FUNCTION(execIsListeningForInputAction); \
	DECLARE_FUNCTION(execUnregisterInputComponent); \
	DECLARE_FUNCTION(execRegisterInputComponent); \
	DECLARE_FUNCTION(execStopListeningForAllInputActions); \
	DECLARE_FUNCTION(execStopListeningForInputAction); \
	DECLARE_FUNCTION(execListenForInputAction); \
	DECLARE_FUNCTION(execIsPlayingAnimation); \
	DECLARE_FUNCTION(execPlaySound); \
	DECLARE_FUNCTION(execRemoveExtensions); \
	DECLARE_FUNCTION(execRemoveExtension); \
	DECLARE_FUNCTION(execAddExtension); \
	DECLARE_FUNCTION(execGetExtensions); \
	DECLARE_FUNCTION(execGetExtension); \
	DECLARE_FUNCTION(execFlushAnimations); \
	DECLARE_FUNCTION(execIsAnimationPlayingForward); \
	DECLARE_FUNCTION(execReverseAnimation); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetNumLoopsToPlay); \
	DECLARE_FUNCTION(execIsAnyAnimationPlaying); \
	DECLARE_FUNCTION(execIsAnimationPlaying); \
	DECLARE_FUNCTION(execSetAnimationCurrentTime); \
	DECLARE_FUNCTION(execGetAnimationCurrentTime); \
	DECLARE_FUNCTION(execPauseAnimation); \
	DECLARE_FUNCTION(execStopAllAnimations); \
	DECLARE_FUNCTION(execStopAnimation); \
	DECLARE_FUNCTION(execPlayAnimationReverse); \
	DECLARE_FUNCTION(execPlayAnimationForward); \
	DECLARE_FUNCTION(execPlayAnimationTimeRange); \
	DECLARE_FUNCTION(execPlayAnimation); \
	DECLARE_FUNCTION(execSetPadding); \
	DECLARE_FUNCTION(execSetForegroundColor); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execOnAnimationFinished); \
	DECLARE_FUNCTION(execOnAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationEvent); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationFinished); \
	DECLARE_FUNCTION(execUnbindFromAnimationFinished); \
	DECLARE_FUNCTION(execBindToAnimationFinished); \
	DECLARE_FUNCTION(execUnbindAllFromAnimationStarted); \
	DECLARE_FUNCTION(execUnbindFromAnimationStarted); \
	DECLARE_FUNCTION(execBindToAnimationStarted); \
	DECLARE_FUNCTION(execStopAnimationsAndLatentActions); \
	DECLARE_FUNCTION(execCancelLatentActions); \
	DECLARE_FUNCTION(execGetOwningPlayerCameraManager); \
	DECLARE_FUNCTION(execGetOwningPlayerPawn); \
	DECLARE_FUNCTION(execSetOwningPlayer); \
	DECLARE_FUNCTION(execGetIsVisible); \
	DECLARE_FUNCTION(execGetAlignmentInViewport); \
	DECLARE_FUNCTION(execGetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetAlignmentInViewport); \
	DECLARE_FUNCTION(execSetAnchorsInViewport); \
	DECLARE_FUNCTION(execSetDesiredSizeInViewport); \
	DECLARE_FUNCTION(execSetPositionInViewport); \
	DECLARE_FUNCTION(execRemoveFromViewport); \
	DECLARE_FUNCTION(execAddToPlayerScreen); \
	DECLARE_FUNCTION(execAddToViewport);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_ACCESSORS \
static void GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetForegroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetForegroundColor_WrapperImpl(void* Object, const void* InValue); \
static void GetPadding_WrapperImpl(const void* Object, void* OutValue); \
static void SetPadding_WrapperImpl(void* Object, const void* InValue); \
static void GetPriority_WrapperImpl(const void* Object, void* OutValue); \
static void SetPriority_WrapperImpl(void* Object, const void* InValue); \
static void GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue); \
static void SetbIsFocusable_WrapperImpl(void* Object, const void* InValue); \
static void GetbStopAction_WrapperImpl(const void* Object, void* OutValue); \
static void SetbStopAction_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_INCLASS \
private: \
	static void StaticRegisterNativesUUserWidget(); \
	friend struct Z_Construct_UClass_UUserWidget_Statics; \
public: \
	DECLARE_CLASS(UUserWidget, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UUserWidget*>(this); }


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public: \
	NO_API virtual ~UUserWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserWidget(UUserWidget&&); \
	NO_API UUserWidget(const UUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserWidget) \
	NO_API virtual ~UUserWidget();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_217_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h


#define FOREACH_ENUM_EWIDGETTICKFREQUENCY(op) \
	op(EWidgetTickFrequency::Never) \
	op(EWidgetTickFrequency::Auto) 

enum class EWidgetTickFrequency : uint8;
template<> struct TIsUEnumClass<EWidgetTickFrequency> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EWidgetTickFrequency>();

#define FOREACH_ENUM_EWIDGETANIMATIONEVENT(op) \
	op(EWidgetAnimationEvent::Started) \
	op(EWidgetAnimationEvent::Finished) 

enum class EWidgetAnimationEvent : uint8;
template<> struct TIsUEnumClass<EWidgetAnimationEvent> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EWidgetAnimationEvent>();

#define FOREACH_ENUM_EUMGSEQUENCEPLAYMODE(op) \
	op(EUMGSequencePlayMode::Forward) \
	op(EUMGSequencePlayMode::Reverse) \
	op(EUMGSequencePlayMode::PingPong) 

namespace EUMGSequencePlayMode { enum Type : int; }
template<> UMG_API UEnum* StaticEnum<EUMGSequencePlayMode::Type>();

#define FOREACH_ENUM_EDESIGNPREVIEWSIZEMODE(op) \
	op(EDesignPreviewSizeMode::FillScreen) \
	op(EDesignPreviewSizeMode::Custom) \
	op(EDesignPreviewSizeMode::CustomOnScreen) \
	op(EDesignPreviewSizeMode::Desired) \
	op(EDesignPreviewSizeMode::DesiredOnScreen) 

enum class EDesignPreviewSizeMode : uint8;
template<> struct TIsUEnumClass<EDesignPreviewSizeMode> { enum { Value = true }; };
template<> UMG_API UEnum* StaticEnum<EDesignPreviewSizeMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
