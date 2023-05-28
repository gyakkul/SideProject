// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/TimelineComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UCurveLinearColor;
class UCurveVector;
struct FLinearColor;
struct FTimeline;
#ifdef ENGINE_TimelineComponent_generated_h
#error "TimelineComponent.generated.h already included, missing '#pragma once' in TimelineComponent.h"
#endif
#define ENGINE_TimelineComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_15_DELEGATE \
ENGINE_API void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_17_DELEGATE \
ENGINE_API void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_19_DELEGATE \
ENGINE_API void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_21_DELEGATE \
ENGINE_API void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineEventEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineVectorTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineFloatTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineLinearColorTrack>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeline_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeline>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline); \
	DECLARE_FUNCTION(execSetLinearColorCurve); \
	DECLARE_FUNCTION(execSetVectorCurve); \
	DECLARE_FUNCTION(execSetFloatCurve); \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetTimelineLengthMode); \
	DECLARE_FUNCTION(execSetTimelineLength); \
	DECLARE_FUNCTION(execGetScaledTimelineLength); \
	DECLARE_FUNCTION(execGetTimelineLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline); \
	DECLARE_FUNCTION(execSetLinearColorCurve); \
	DECLARE_FUNCTION(execSetVectorCurve); \
	DECLARE_FUNCTION(execSetFloatCurve); \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetTimelineLengthMode); \
	DECLARE_FUNCTION(execSetTimelineLength); \
	DECLARE_FUNCTION(execGetScaledTimelineLength); \
	DECLARE_FUNCTION(execGetTimelineLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TheTimeline=NETFIELD_REP_START, \
		NETFIELD_REP_END=TheTimeline	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TheTimeline=NETFIELD_REP_START, \
		NETFIELD_REP_END=TheTimeline	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public: \
	ENGINE_API virtual ~UTimelineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent) \
	ENGINE_API virtual ~UTimelineComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_392_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimelineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimelineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h


#define FOREACH_ENUM_ETIMELINELENGTHMODE(op) \
	op(TL_TimelineLength) \
	op(TL_LastKeyFrame) 

enum ETimelineLengthMode : int;
template<> ENGINE_API UEnum* StaticEnum<ETimelineLengthMode>();

#define FOREACH_ENUM_ETIMELINEDIRECTION(op) \
	op(ETimelineDirection::Forward) \
	op(ETimelineDirection::Backward) 

namespace ETimelineDirection { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ETimelineDirection::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
