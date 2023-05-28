// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCClient.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOSCBundle;
struct FOSCMessage;
#ifdef OSC_OSCClient_generated_h
#error "OSCClient.generated.h already included, missing '#pragma once' in OSCClient.h"
#endif
#define OSC_OSCClient_generated_h

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendOSCBundle); \
	DECLARE_FUNCTION(execSendOSCMessage); \
	DECLARE_FUNCTION(execSetSendIPAddress); \
	DECLARE_FUNCTION(execGetSendIPAddress);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendOSCBundle); \
	DECLARE_FUNCTION(execSendOSCMessage); \
	DECLARE_FUNCTION(execSetSendIPAddress); \
	DECLARE_FUNCTION(execGetSendIPAddress);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_ACCESSORS
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCClient(); \
	friend struct Z_Construct_UClass_UOSCClient_Statics; \
public: \
	DECLARE_CLASS(UOSCClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCClient)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUOSCClient(); \
	friend struct Z_Construct_UClass_UOSCClient_Statics; \
public: \
	DECLARE_CLASS(UOSCClient, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCClient)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCClient(UOSCClient&&); \
	NO_API UOSCClient(const UOSCClient&); \
public: \
	NO_API virtual ~UOSCClient();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCClient(UOSCClient&&); \
	NO_API UOSCClient(const UOSCClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCClient); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCClient) \
	NO_API virtual ~UOSCClient();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_INCLASS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h_34_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OSCClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class UOSCClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
