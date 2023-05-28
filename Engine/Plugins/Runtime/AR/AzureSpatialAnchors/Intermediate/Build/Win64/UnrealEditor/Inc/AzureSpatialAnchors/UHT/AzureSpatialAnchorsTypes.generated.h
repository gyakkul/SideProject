// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AzureSpatialAnchorsTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AZURESPATIALANCHORS_AzureSpatialAnchorsTypes_generated_h
#error "AzureSpatialAnchorsTypes.generated.h already included, missing '#pragma once' in AzureSpatialAnchorsTypes.h"
#endif
#define AZURESPATIALANCHORS_AzureSpatialAnchorsTypes_generated_h

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionConfiguration_Statics; \
	AZURESPATIALANCHORS_API static class UScriptStruct* StaticStruct();


template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<struct FAzureSpatialAnchorsSessionConfiguration>();

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoarseLocalizationSettings_Statics; \
	AZURESPATIALANCHORS_API static class UScriptStruct* StaticStruct();


template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<struct FCoarseLocalizationSettings>();

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsLocateCriteria_Statics; \
	AZURESPATIALANCHORS_API static class UScriptStruct* StaticStruct();


template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<struct FAzureSpatialAnchorsLocateCriteria>();

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_209_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsSessionStatus_Statics; \
	AZURESPATIALANCHORS_API static class UScriptStruct* StaticStruct();


template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<struct FAzureSpatialAnchorsSessionStatus>();

#define FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAzureSpatialAnchorsDiagnosticsConfig_Statics; \
	AZURESPATIALANCHORS_API static class UScriptStruct* StaticStruct();


template<> AZURESPATIALANCHORS_API UScriptStruct* StaticStruct<struct FAzureSpatialAnchorsDiagnosticsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsTypes_h


#define FOREACH_ENUM_EAZURESPATIALANCHORSLOGVERBOSITY(op) \
	op(EAzureSpatialAnchorsLogVerbosity::None) \
	op(EAzureSpatialAnchorsLogVerbosity::Error) \
	op(EAzureSpatialAnchorsLogVerbosity::Warning) \
	op(EAzureSpatialAnchorsLogVerbosity::Information) \
	op(EAzureSpatialAnchorsLogVerbosity::Debug) \
	op(EAzureSpatialAnchorsLogVerbosity::All) 

enum class EAzureSpatialAnchorsLogVerbosity : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorsLogVerbosity> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLogVerbosity>();

#define FOREACH_ENUM_EAZURESPATIALANCHORSRESULT(op) \
	op(EAzureSpatialAnchorsResult::Success) \
	op(EAzureSpatialAnchorsResult::NotStarted) \
	op(EAzureSpatialAnchorsResult::Started) \
	op(EAzureSpatialAnchorsResult::FailAlreadyStarted) \
	op(EAzureSpatialAnchorsResult::FailNoARPin) \
	op(EAzureSpatialAnchorsResult::FailBadLocalAnchorID) \
	op(EAzureSpatialAnchorsResult::FailBadCloudAnchorIdentifier) \
	op(EAzureSpatialAnchorsResult::FailAnchorIdAlreadyUsed) \
	op(EAzureSpatialAnchorsResult::FailAnchorDoesNotExist) \
	op(EAzureSpatialAnchorsResult::FailAnchorAlreadyTracked) \
	op(EAzureSpatialAnchorsResult::FailNoAnchor) \
	op(EAzureSpatialAnchorsResult::FailNoCloudAnchor) \
	op(EAzureSpatialAnchorsResult::FailNoLocalAnchor) \
	op(EAzureSpatialAnchorsResult::FailNoSession) \
	op(EAzureSpatialAnchorsResult::FailNoWatcher) \
	op(EAzureSpatialAnchorsResult::FailNotEnoughData) \
	op(EAzureSpatialAnchorsResult::FailBadLifetime) \
	op(EAzureSpatialAnchorsResult::FailSeeErrorString) \
	op(EAzureSpatialAnchorsResult::NotLocated) \
	op(EAzureSpatialAnchorsResult::Canceled) \
	op(EAzureSpatialAnchorsResult::FailUnknown) 

enum class EAzureSpatialAnchorsResult : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorsResult> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsResult>();

#define FOREACH_ENUM_EAZURESPATIALANCHORDATACATEGORY(op) \
	op(EAzureSpatialAnchorDataCategory::None) \
	op(EAzureSpatialAnchorDataCategory::Properties) \
	op(EAzureSpatialAnchorDataCategory::Spatial) 

enum class EAzureSpatialAnchorDataCategory : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorDataCategory> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorDataCategory>();

#define FOREACH_ENUM_EAZURESPATIALANCHORSLOCATESTRATEGY(op) \
	op(EAzureSpatialAnchorsLocateStrategy::AnyStrategy) \
	op(EAzureSpatialAnchorsLocateStrategy::VisualInformation) \
	op(EAzureSpatialAnchorsLocateStrategy::Relationship) 

enum class EAzureSpatialAnchorsLocateStrategy : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorsLocateStrategy> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLocateStrategy>();

#define FOREACH_ENUM_EAZURESPATIALANCHORSLOCATEANCHORSTATUS(op) \
	op(EAzureSpatialAnchorsLocateAnchorStatus::AlreadyTracked) \
	op(EAzureSpatialAnchorsLocateAnchorStatus::Located) \
	op(EAzureSpatialAnchorsLocateAnchorStatus::NotLocated) \
	op(EAzureSpatialAnchorsLocateAnchorStatus::NotLocatedAnchorDoesNotExist) 

enum class EAzureSpatialAnchorsLocateAnchorStatus : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorsLocateAnchorStatus> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsLocateAnchorStatus>();

#define FOREACH_ENUM_EAZURESPATIALANCHORSSESSIONUSERFEEDBACK(op) \
	op(EAzureSpatialAnchorsSessionUserFeedback::None) \
	op(EAzureSpatialAnchorsSessionUserFeedback::NotEnoughMotion) \
	op(EAzureSpatialAnchorsSessionUserFeedback::MotionTooQuick) \
	op(EAzureSpatialAnchorsSessionUserFeedback::NotEnoughFeatures) 

enum class EAzureSpatialAnchorsSessionUserFeedback : uint8;
template<> struct TIsUEnumClass<EAzureSpatialAnchorsSessionUserFeedback> { enum { Value = true }; };
template<> AZURESPATIALANCHORS_API UEnum* StaticEnum<EAzureSpatialAnchorsSessionUserFeedback>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
