// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ClassSnapshotData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEVELSNAPSHOTS_ClassSnapshotData_generated_h
#error "ClassSnapshotData.generated.h already included, missing '#pragma once' in ClassSnapshotData.h"
#endif
#define LEVELSNAPSHOTS_ClassSnapshotData_generated_h

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassSnapshotData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FObjectSnapshotData Super;


template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<struct FClassSnapshotData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h


#define FOREACH_ENUM_ESNAPSHOTCLASSFLAGS(op) \
	op(ESnapshotClassFlags::NoFlags) \
	op(ESnapshotClassFlags::SerializationSkippedArchetypeData) 

enum class ESnapshotClassFlags : uint8;
template<> struct TIsUEnumClass<ESnapshotClassFlags> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotClassFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
