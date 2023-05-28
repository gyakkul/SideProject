// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Account/IPortalUser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTALSERVICES_IPortalUser_generated_h
#error "IPortalUser.generated.h already included, missing '#pragma once' in IPortalUser.h"
#endif
#define PORTALSERVICES_IPortalUser_generated_h

#define FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPortalUserDetails_Statics; \
	PORTALSERVICES_API static class UScriptStruct* StaticStruct();


template<> PORTALSERVICES_API UScriptStruct* StaticStruct<struct FPortalUserDetails>();

#define FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPortalUserIsEntitledToItemResult_Statics; \
	PORTALSERVICES_API static class UScriptStruct* StaticStruct();


template<> PORTALSERVICES_API UScriptStruct* StaticStruct<struct FPortalUserIsEntitledToItemResult>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Portal_Services_Public_Account_IPortalUser_h


#define FOREACH_ENUM_EENTITLEMENTCACHELEVELREQUEST(op) \
	op(EEntitlementCacheLevelRequest::Memory) \
	op(EEntitlementCacheLevelRequest::Disk) 

enum class EEntitlementCacheLevelRequest : uint8;
template<> struct TIsUEnumClass<EEntitlementCacheLevelRequest> { enum { Value = true }; };
template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRequest>();

#define FOREACH_ENUM_EENTITLEMENTCACHELEVELRETRIEVED(op) \
	op(EEntitlementCacheLevelRetrieved::None) \
	op(EEntitlementCacheLevelRetrieved::Memory) \
	op(EEntitlementCacheLevelRetrieved::Disk) 

enum class EEntitlementCacheLevelRetrieved : uint8;
template<> struct TIsUEnumClass<EEntitlementCacheLevelRetrieved> { enum { Value = true }; };
template<> PORTALSERVICES_API UEnum* StaticEnum<EEntitlementCacheLevelRetrieved>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
