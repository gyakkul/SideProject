// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetPushModelHelpers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef ENGINE_NetPushModelHelpers_generated_h
#error "NetPushModelHelpers.generated.h already included, missing '#pragma once' in NetPushModelHelpers.h"
#endif
#define ENGINE_NetPushModelHelpers_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkPropertyDirtyFromRepIndex); \
	DECLARE_FUNCTION(execMarkPropertyDirty);


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkPropertyDirtyFromRepIndex); \
	DECLARE_FUNCTION(execMarkPropertyDirty);


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetPushModelHelpers(); \
	friend struct Z_Construct_UClass_UNetPushModelHelpers_Statics; \
public: \
	DECLARE_CLASS(UNetPushModelHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetPushModelHelpers)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUNetPushModelHelpers(); \
	friend struct Z_Construct_UClass_UNetPushModelHelpers_Statics; \
public: \
	DECLARE_CLASS(UNetPushModelHelpers, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetPushModelHelpers)


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetPushModelHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetPushModelHelpers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetPushModelHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetPushModelHelpers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetPushModelHelpers(UNetPushModelHelpers&&); \
	NO_API UNetPushModelHelpers(const UNetPushModelHelpers&); \
public: \
	NO_API virtual ~UNetPushModelHelpers();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetPushModelHelpers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetPushModelHelpers(UNetPushModelHelpers&&); \
	NO_API UNetPushModelHelpers(const UNetPushModelHelpers&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetPushModelHelpers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetPushModelHelpers); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetPushModelHelpers) \
	NO_API virtual ~UNetPushModelHelpers();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_8_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetPushModelHelpers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetPushModelHelpers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
