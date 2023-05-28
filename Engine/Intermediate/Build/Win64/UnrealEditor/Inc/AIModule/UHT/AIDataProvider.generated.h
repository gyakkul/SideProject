// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataProviders/AIDataProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIDataProvider_generated_h
#error "AIDataProvider.generated.h already included, missing '#pragma once' in AIDataProvider.h"
#endif
#define AIMODULE_AIDataProvider_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderTypedValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderStructValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderIntValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderFloatValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAIDataProviderTypedValue Super;


template<> AIMODULE_API UScriptStruct* StaticStruct<struct FAIDataProviderBoolValue>();

#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_SPARSE_DATA
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_ACCESSORS
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend struct Z_Construct_UClass_UAIDataProvider_Statics; \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider)


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS \
private: \
	static void StaticRegisterNativesUAIDataProvider(); \
	friend struct Z_Construct_UClass_UAIDataProvider_Statics; \
public: \
	DECLARE_CLASS(UAIDataProvider, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UAIDataProvider)


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public: \
	NO_API virtual ~UAIDataProvider();


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIDataProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIDataProvider(UAIDataProvider&&); \
	NO_API UAIDataProvider(const UAIDataProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIDataProvider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIDataProvider); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIDataProvider) \
	NO_API virtual ~UAIDataProvider();


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_154_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_SPARSE_DATA \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_ACCESSORS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_157_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AIDataProvider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIDataProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
