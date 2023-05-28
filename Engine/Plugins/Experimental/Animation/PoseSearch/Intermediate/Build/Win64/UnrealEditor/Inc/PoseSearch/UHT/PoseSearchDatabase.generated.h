// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchDatabase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchDatabase_generated_h
#error "PoseSearchDatabase.generated.h already included, missing '#pragma once' in PoseSearchDatabase.h"
#endif
#define POSESEARCH_PoseSearchDatabase_generated_h

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchExcludeFromDatabaseParameters_Statics; \
	POSESEARCH_API static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchExcludeFromDatabaseParameters>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAssetBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseAnimationAssetBase>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseSequence>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseBlendSpace_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseBlendSpace>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchDatabaseAnimationAssetBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchDatabaseAnimComposite>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNormalizationSetAsset(); \
	friend struct Z_Construct_UClass_UNormalizationSetAsset_Statics; \
public: \
	DECLARE_CLASS(UNormalizationSetAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UNormalizationSetAsset)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_INCLASS \
private: \
	static void StaticRegisterNativesUNormalizationSetAsset(); \
	friend struct Z_Construct_UClass_UNormalizationSetAsset_Statics; \
public: \
	DECLARE_CLASS(UNormalizationSetAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UNormalizationSetAsset)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNormalizationSetAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNormalizationSetAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNormalizationSetAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNormalizationSetAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNormalizationSetAsset(UNormalizationSetAsset&&); \
	NO_API UNormalizationSetAsset(const UNormalizationSetAsset&); \
public: \
	NO_API virtual ~UNormalizationSetAsset();


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNormalizationSetAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNormalizationSetAsset(UNormalizationSetAsset&&); \
	NO_API UNormalizationSetAsset(const UNormalizationSetAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNormalizationSetAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNormalizationSetAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNormalizationSetAsset) \
	NO_API virtual ~UNormalizationSetAsset();


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_170_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UNormalizationSetAsset>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ACCESSORS
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseSearchDatabase, NO_API)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabase(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabase_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchDatabase, UPoseSearchSearchableAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchDatabase) \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_INCLASS \
private: \
	static void StaticRegisterNativesUPoseSearchDatabase(); \
	friend struct Z_Construct_UClass_UPoseSearchDatabase_Statics; \
public: \
	DECLARE_CLASS(UPoseSearchDatabase, UPoseSearchSearchableAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PoseSearch"), NO_API) \
	DECLARE_SERIALIZER(UPoseSearchDatabase) \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchDatabase(UPoseSearchDatabase&&); \
	NO_API UPoseSearchDatabase(const UPoseSearchDatabase&); \
public:


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPoseSearchDatabase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPoseSearchDatabase(UPoseSearchDatabase&&); \
	NO_API UPoseSearchDatabase(const UPoseSearchDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoseSearchDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseSearchDatabase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseSearchDatabase)


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_181_PROLOG
#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_INCLASS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ACCESSORS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> POSESEARCH_API UClass* StaticClass<class UPoseSearchDatabase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchDatabase_h


#define FOREACH_ENUM_EPOSESEARCHMODE(op) \
	op(EPoseSearchMode::BruteForce) \
	op(EPoseSearchMode::PCAKDTree) \
	op(EPoseSearchMode::PCAKDTree_Validate) \
	op(EPoseSearchMode::PCAKDTree_Compare) \
	op(EPoseSearchMode::Num) \
	op(EPoseSearchMode::Invalid) 

enum class EPoseSearchMode : int32;
template<> struct TIsUEnumClass<EPoseSearchMode> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMode>();

#define FOREACH_ENUM_EPOSESEARCHMIRROROPTION(op) \
	op(EPoseSearchMirrorOption::UnmirroredOnly) \
	op(EPoseSearchMirrorOption::MirroredOnly) \
	op(EPoseSearchMirrorOption::UnmirroredAndMirrored) \
	op(EPoseSearchMirrorOption::Num) \
	op(EPoseSearchMirrorOption::Invalid) 

enum class EPoseSearchMirrorOption : int32;
template<> struct TIsUEnumClass<EPoseSearchMirrorOption> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchMirrorOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
