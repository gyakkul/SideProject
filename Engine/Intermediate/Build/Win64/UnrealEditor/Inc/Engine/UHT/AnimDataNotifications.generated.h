// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/AnimData/AnimDataNotifications.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAnimationDataModel;
class UScriptStruct;
enum class EAnimDataModelNotifyType : uint8;
struct FAnimDataModelNotifPayload;
struct FEmptyPayload;
#ifdef ENGINE_AnimDataNotifications_generated_h
#error "AnimDataNotifications.generated.h already included, missing '#pragma once' in AnimDataNotifications.h"
#endif
#define ENGINE_AnimDataNotifications_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEmptyPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEmptyPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBracketPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBracketPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTrackPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTrackPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationTrackAddedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimationTrackPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimationTrackAddedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSequenceLengthChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSequenceLengthChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_174_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFrameRateChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFrameRateChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurvePayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurvePayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveScaledPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveScaledPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveRenamedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveRenamedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_222_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCurveFlagsChangedPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FCurvePayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCurveFlagsChangedPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttributePayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FEmptyPayload Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAttributePayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_246_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimDataModelNotifPayload_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimDataModelNotifPayload>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execCopyPayload);


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPayload); \
	DECLARE_FUNCTION(execCopyPayload);


#else
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataModelNotifiesExtensions(); \
	friend struct Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataModelNotifiesExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataModelNotifiesExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationDataModelNotifiesExtensions(); \
	friend struct Z_Construct_UClass_UAnimationDataModelNotifiesExtensions_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataModelNotifiesExtensions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataModelNotifiesExtensions)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataModelNotifiesExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModelNotifiesExtensions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataModelNotifiesExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModelNotifiesExtensions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataModelNotifiesExtensions(UAnimationDataModelNotifiesExtensions&&); \
	NO_API UAnimationDataModelNotifiesExtensions(const UAnimationDataModelNotifiesExtensions&); \
public: \
	NO_API virtual ~UAnimationDataModelNotifiesExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataModelNotifiesExtensions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataModelNotifiesExtensions(UAnimationDataModelNotifiesExtensions&&); \
	NO_API UAnimationDataModelNotifiesExtensions(const UAnimationDataModelNotifiesExtensions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataModelNotifiesExtensions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataModelNotifiesExtensions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataModelNotifiesExtensions) \
	NO_API virtual ~UAnimationDataModelNotifiesExtensions();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_270_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimationDataModelNotifiesExtensions>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h_294_DELEGATE \
ENGINE_API void FAnimDataModelModifiedDynamicEvent_DelegateWrapper(const FMulticastScriptDelegate& AnimDataModelModifiedDynamicEvent, EAnimDataModelNotifyType NotifType, const TScriptInterface<IAnimationDataModel>& Model, FAnimDataModelNotifPayload const& Payload);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_AnimDataNotifications_h


#define FOREACH_ENUM_EANIMDATAMODELNOTIFYTYPE(op) \
	op(EAnimDataModelNotifyType::BracketOpened) \
	op(EAnimDataModelNotifyType::BracketClosed) \
	op(EAnimDataModelNotifyType::TrackAdded) \
	op(EAnimDataModelNotifyType::TrackChanged) \
	op(EAnimDataModelNotifyType::TrackRemoved) \
	op(EAnimDataModelNotifyType::SequenceLengthChanged) \
	op(EAnimDataModelNotifyType::FrameRateChanged) \
	op(EAnimDataModelNotifyType::CurveAdded) \
	op(EAnimDataModelNotifyType::CurveChanged) \
	op(EAnimDataModelNotifyType::CurveRemoved) \
	op(EAnimDataModelNotifyType::CurveFlagsChanged) \
	op(EAnimDataModelNotifyType::CurveRenamed) \
	op(EAnimDataModelNotifyType::CurveScaled) \
	op(EAnimDataModelNotifyType::CurveColorChanged) \
	op(EAnimDataModelNotifyType::AttributeAdded) \
	op(EAnimDataModelNotifyType::AttributeRemoved) \
	op(EAnimDataModelNotifyType::AttributeChanged) \
	op(EAnimDataModelNotifyType::Populated) \
	op(EAnimDataModelNotifyType::Reset) \
	op(EAnimDataModelNotifyType::Invalid) 

enum class EAnimDataModelNotifyType : uint8;
template<> struct TIsUEnumClass<EAnimDataModelNotifyType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAnimDataModelNotifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
