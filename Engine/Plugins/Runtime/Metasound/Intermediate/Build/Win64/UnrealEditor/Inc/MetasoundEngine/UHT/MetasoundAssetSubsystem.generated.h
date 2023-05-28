// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundAssetSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMetaSoundAssetDirectory;
#ifdef METASOUNDENGINE_MetasoundAssetSubsystem_generated_h
#error "MetasoundAssetSubsystem.generated.h already included, missing '#pragma once' in MetasoundAssetSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundAssetSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundAssetDirectory_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundAssetDirectory>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetaSoundAsyncAssetDependencies_Statics; \
	METASOUNDENGINE_API static class UScriptStruct* StaticStruct();


template<> METASOUNDENGINE_API UScriptStruct* StaticStruct<struct FMetaSoundAsyncAssetDependencies>();

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterAssetClassesInDirectories); \
	DECLARE_FUNCTION(execRegisterAssetClassesInDirectories);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterAssetClassesInDirectories); \
	DECLARE_FUNCTION(execRegisterAssetClassesInDirectories);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundAssetSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundAssetSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundAssetSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUMetaSoundAssetSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundAssetSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundAssetSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundAssetSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetaSoundAssetSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundAssetSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem&&); \
	NO_API UMetaSoundAssetSubsystem(const UMetaSoundAssetSubsystem&); \
public: \
	NO_API virtual ~UMetaSoundAssetSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundAssetSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem&&); \
	NO_API UMetaSoundAssetSubsystem(const UMetaSoundAssetSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundAssetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundAssetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundAssetSubsystem) \
	NO_API virtual ~UMetaSoundAssetSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_50_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundAssetSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundAssetSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
