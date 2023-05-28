// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConcertWorkspaceData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONCERTSYNCCORE_ConcertWorkspaceData_generated_h
#error "ConcertWorkspaceData.generated.h already included, missing '#pragma once' in ConcertWorkspaceData.h"
#endif
#define CONCERTSYNCCORE_ConcertWorkspaceData_generated_h

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertPackageInfo_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertPackageInfo>();

#define FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConcertPackage_Statics; \
	CONCERTSYNCCORE_API static class UScriptStruct* StaticStruct();


template<> CONCERTSYNCCORE_API UScriptStruct* StaticStruct<struct FConcertPackage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncCore_Source_ConcertSyncCore_Public_ConcertWorkspaceData_h


#define FOREACH_ENUM_ECONCERTPACKAGEUPDATETYPE(op) \
	op(EConcertPackageUpdateType::Dummy) \
	op(EConcertPackageUpdateType::Added) \
	op(EConcertPackageUpdateType::Saved) \
	op(EConcertPackageUpdateType::Renamed) \
	op(EConcertPackageUpdateType::Deleted) \
	op(EConcertPackageUpdateType::Count) 

enum class EConcertPackageUpdateType : uint8;
template<> struct TIsUEnumClass<EConcertPackageUpdateType> { enum { Value = true }; };
template<> CONCERTSYNCCORE_API UEnum* StaticEnum<EConcertPackageUpdateType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
