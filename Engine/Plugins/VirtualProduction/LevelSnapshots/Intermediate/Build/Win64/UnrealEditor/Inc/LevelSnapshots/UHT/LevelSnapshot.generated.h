// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/LevelSnapshot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
struct FSoftObjectPath;
#ifdef LEVELSNAPSHOTS_LevelSnapshot_generated_h
#error "LevelSnapshot.generated.h already included, missing '#pragma once' in LevelSnapshot.h"
#endif
#define LEVELSNAPSHOTS_LevelSnapshot_generated_h

#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSnapshotDescription); \
	DECLARE_FUNCTION(execGetSnapshotName); \
	DECLARE_FUNCTION(execGetCaptureTime); \
	DECLARE_FUNCTION(execGetMapPath); \
	DECLARE_FUNCTION(execSetSnapshotDescription); \
	DECLARE_FUNCTION(execSetSnapshotName);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSnapshotDescription); \
	DECLARE_FUNCTION(execGetSnapshotName); \
	DECLARE_FUNCTION(execGetCaptureTime); \
	DECLARE_FUNCTION(execGetMapPath); \
	DECLARE_FUNCTION(execSetSnapshotDescription); \
	DECLARE_FUNCTION(execSetSnapshotName);


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSnapshot(); \
	friend struct Z_Construct_UClass_ULevelSnapshot_Statics; \
public: \
	DECLARE_CLASS(ULevelSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), NO_API) \
	DECLARE_SERIALIZER(ULevelSnapshot)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS \
private: \
	static void StaticRegisterNativesULevelSnapshot(); \
	friend struct Z_Construct_UClass_ULevelSnapshot_Statics; \
public: \
	DECLARE_CLASS(ULevelSnapshot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSnapshots"), NO_API) \
	DECLARE_SERIALIZER(ULevelSnapshot)


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSnapshot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSnapshot(ULevelSnapshot&&); \
	NO_API ULevelSnapshot(const ULevelSnapshot&); \
public: \
	NO_API virtual ~ULevelSnapshot();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSnapshot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSnapshot(ULevelSnapshot&&); \
	NO_API ULevelSnapshot(const ULevelSnapshot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSnapshot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSnapshot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSnapshot) \
	NO_API virtual ~ULevelSnapshot();


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_25_PROLOG
#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSNAPSHOTS_API UClass* StaticClass<class ULevelSnapshot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h


#define FOREACH_ENUM_ECACHEDDIFFRESULT(op) \
	op(ECachedDiffResult::NotInitialized) \
	op(ECachedDiffResult::HadChanges) \
	op(ECachedDiffResult::HadNoChanges) 

enum class ECachedDiffResult : uint8;
template<> struct TIsUEnumClass<ECachedDiffResult> { enum { Value = true }; };
template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ECachedDiffResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
