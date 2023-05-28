// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaCapture.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMediaOutput;
class UTextureRenderTarget2D;
enum class EMediaCaptureState : uint8;
struct FMediaCaptureOptions;
#ifdef MEDIAIOCORE_MediaCapture_generated_h
#error "MediaCapture.generated.h already included, missing '#pragma once' in MediaCapture.h"
#endif
#define MEDIAIOCORE_MediaCapture_generated_h

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaCaptureOptions>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_217_DELEGATE \
MEDIAIOCORE_API void FMediaCaptureStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MediaCaptureStateChangedSignature);


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_SPARSE_DATA
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDesiredPixelFormat); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetMediaOutput); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execUpdateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureActiveSceneViewport);


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDesiredPixelFormat); \
	DECLARE_FUNCTION(execGetDesiredSize); \
	DECLARE_FUNCTION(execSetMediaOutput); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execUpdateTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureTextureRenderTarget2D); \
	DECLARE_FUNCTION(execCaptureActiveSceneViewport);


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_ACCESSORS
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaCapture(); \
	friend struct Z_Construct_UClass_UMediaCapture_Statics; \
public: \
	DECLARE_CLASS(UMediaCapture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_INCLASS \
private: \
	static void StaticRegisterNativesUMediaCapture(); \
	friend struct Z_Construct_UClass_UMediaCapture_Statics; \
public: \
	DECLARE_CLASS(UMediaCapture, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaIOCore"), NO_API) \
	DECLARE_SERIALIZER(UMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMediaCapture(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaCapture) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaCapture); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaCapture(UMediaCapture&&); \
	NO_API UMediaCapture(const UMediaCapture&); \
public:


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMediaCapture(UMediaCapture&&); \
	NO_API UMediaCapture(const UMediaCapture&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMediaCapture); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaCapture); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMediaCapture)


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_226_PROLOG
#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_RPC_WRAPPERS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_INCLASS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_SPARSE_DATA \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_ACCESSORS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAIOCORE_API UClass* StaticClass<class UMediaCapture>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h


#define FOREACH_ENUM_EMEDIACAPTURESTATE(op) \
	op(EMediaCaptureState::Error) \
	op(EMediaCaptureState::Capturing) \
	op(EMediaCaptureState::Preparing) \
	op(EMediaCaptureState::StopRequested) \
	op(EMediaCaptureState::Stopped) 

enum class EMediaCaptureState : uint8;
template<> struct TIsUEnumClass<EMediaCaptureState> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureState>();

#define FOREACH_ENUM_EMEDIACAPTURERESOURCETYPE(op) \
	op(EMediaCaptureResourceType::Texture) \
	op(EMediaCaptureResourceType::Buffer) 

enum class EMediaCaptureResourceType : uint8;
template<> struct TIsUEnumClass<EMediaCaptureResourceType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureResourceType>();

#define FOREACH_ENUM_EMEDIACAPTURECROPPINGTYPE(op) \
	op(EMediaCaptureCroppingType::None) \
	op(EMediaCaptureCroppingType::Center) \
	op(EMediaCaptureCroppingType::TopLeft) \
	op(EMediaCaptureCroppingType::Custom) 

enum class EMediaCaptureCroppingType : uint8;
template<> struct TIsUEnumClass<EMediaCaptureCroppingType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureCroppingType>();

#define FOREACH_ENUM_EMEDIACAPTUREOVERRUNACTION(op) \
	op(EMediaCaptureOverrunAction::Flush) \
	op(EMediaCaptureOverrunAction::Skip) 

enum class EMediaCaptureOverrunAction : uint8;
template<> struct TIsUEnumClass<EMediaCaptureOverrunAction> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureOverrunAction>();

#define FOREACH_ENUM_EMEDIACAPTUREPHASE(op) \
	op(EMediaCapturePhase::BeforePostProcessing) \
	op(EMediaCapturePhase::AfterMotionBlur) \
	op(EMediaCapturePhase::AfterToneMap) \
	op(EMediaCapturePhase::AfterFXAA) \
	op(EMediaCapturePhase::EndFrame) 

enum class EMediaCapturePhase : uint8;
template<> struct TIsUEnumClass<EMediaCapturePhase> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCapturePhase>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
