// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundGeneratorHandle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMetasoundGeneratorHandle;
class UMetasoundParameterPack;
#ifdef METASOUNDENGINE_MetasoundGeneratorHandle_generated_h
#error "MetasoundGeneratorHandle.generated.h already included, missing '#pragma once' in MetasoundGeneratorHandle.h"
#endif
#define METASOUNDENGINE_MetasoundGeneratorHandle_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyParameterPack); \
	DECLARE_FUNCTION(execCreateMetaSoundGeneratorHandle);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyParameterPack); \
	DECLARE_FUNCTION(execCreateMetaSoundGeneratorHandle);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_ACCESSORS
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetasoundGeneratorHandle(); \
	friend struct Z_Construct_UClass_UMetasoundGeneratorHandle_Statics; \
public: \
	DECLARE_CLASS(UMetasoundGeneratorHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetasoundGeneratorHandle)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUMetasoundGeneratorHandle(); \
	friend struct Z_Construct_UClass_UMetasoundGeneratorHandle_Statics; \
public: \
	DECLARE_CLASS(UMetasoundGeneratorHandle, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetasoundGeneratorHandle)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundGeneratorHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundGeneratorHandle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundGeneratorHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundGeneratorHandle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetasoundGeneratorHandle(UMetasoundGeneratorHandle&&); \
	NO_API UMetasoundGeneratorHandle(const UMetasoundGeneratorHandle&); \
public: \
	NO_API virtual ~UMetasoundGeneratorHandle();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetasoundGeneratorHandle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMetasoundGeneratorHandle(UMetasoundGeneratorHandle&&); \
	NO_API UMetasoundGeneratorHandle(const UMetasoundGeneratorHandle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetasoundGeneratorHandle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetasoundGeneratorHandle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMetasoundGeneratorHandle) \
	NO_API virtual ~UMetasoundGeneratorHandle();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_17_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_INCLASS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_ACCESSORS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetasoundGeneratorHandle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
