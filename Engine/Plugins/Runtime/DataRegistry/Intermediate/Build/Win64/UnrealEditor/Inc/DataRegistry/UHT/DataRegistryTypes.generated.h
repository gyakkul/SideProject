// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistryTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataRegistryAcquireStatus : uint8;
struct FDataRegistryId;
struct FDataRegistryLookup;
#ifdef DATAREGISTRY_DataRegistryTypes_generated_h
#error "DataRegistryTypes.generated.h already included, missing '#pragma once' in DataRegistryTypes.h"
#endif
#define DATAREGISTRY_DataRegistryTypes_generated_h

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataRegistryIdFormat_Statics; \
	DATAREGISTRY_API static class UScriptStruct* StaticStruct();


template<> DATAREGISTRY_API UScriptStruct* StaticStruct<struct FDataRegistryIdFormat>();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataRegistryCachePolicy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAREGISTRY_API UScriptStruct* StaticStruct<struct FDataRegistryCachePolicy>();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataRegistryLookup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAREGISTRY_API UScriptStruct* StaticStruct<struct FDataRegistryLookup>();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDataRegistrySourceItemId_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DATAREGISTRY_API UScriptStruct* StaticStruct<struct FDataRegistrySourceItemId>();

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h_499_DELEGATE \
DATAREGISTRY_API void FDataRegistryItemAcquiredBPCallback_DelegateWrapper(const FScriptDelegate& DataRegistryItemAcquiredBPCallback, FDataRegistryId ItemId, FDataRegistryLookup ResolvedLookup, EDataRegistryAcquireStatus Status);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistryTypes_h


#define FOREACH_ENUM_EDATAREGISTRYAVAILABILITY(op) \
	op(EDataRegistryAvailability::DoesNotExist) \
	op(EDataRegistryAvailability::Unknown) \
	op(EDataRegistryAvailability::Remote) \
	op(EDataRegistryAvailability::OnDisk) \
	op(EDataRegistryAvailability::LocalAsset) \
	op(EDataRegistryAvailability::PreCached) 

enum class EDataRegistryAvailability : uint8;
template<> struct TIsUEnumClass<EDataRegistryAvailability> { enum { Value = true }; };
template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistryAvailability>();

#define FOREACH_ENUM_EDATAREGISTRYACQUIRESTATUS(op) \
	op(EDataRegistryAcquireStatus::NotStarted) \
	op(EDataRegistryAcquireStatus::WaitingForInitialAcquire) \
	op(EDataRegistryAcquireStatus::InitialAcquireFinished) \
	op(EDataRegistryAcquireStatus::WaitingForResources) \
	op(EDataRegistryAcquireStatus::AcquireFinished) \
	op(EDataRegistryAcquireStatus::AcquireError) \
	op(EDataRegistryAcquireStatus::DoesNotExist) 

enum class EDataRegistryAcquireStatus : uint8;
template<> struct TIsUEnumClass<EDataRegistryAcquireStatus> { enum { Value = true }; };
template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistryAcquireStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
