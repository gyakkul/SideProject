// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OSCServer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOSCAddress;
struct FOSCBundle;
struct FOSCMessage;
#ifdef OSC_OSCServer_generated_h
#error "OSCServer.generated.h already included, missing '#pragma once' in OSCServer.h"
#endif
#define OSC_OSCServer_generated_h

#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_22_DELEGATE \
OSC_API void FOSCReceivedMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedMessageEvent, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_24_DELEGATE \
OSC_API void FOSCDispatchMessageEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCDispatchMessageEvent, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_25_DELEGATE \
OSC_API void FOSCReceivedBundleEvent_DelegateWrapper(const FMulticastScriptDelegate& OSCReceivedBundleEvent, FOSCBundle const& Bundle, const FString& IPAddress, int32 Port);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_27_DELEGATE \
OSC_API void FOSCDispatchMessageEventBP_DelegateWrapper(const FScriptDelegate& OSCDispatchMessageEventBP, FOSCAddress const& AddressPattern, FOSCMessage const& Message, const FString& IPAddress, int32 Port);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoundOSCAddressPatterns); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatching); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execUnbindEventFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execBindEventToOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execGetAllowlistedClients); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execGetIpAddress); \
	DECLARE_FUNCTION(execClearAllowlistedClients); \
	DECLARE_FUNCTION(execRemoveAllowlistedClient); \
	DECLARE_FUNCTION(execAddAllowlistedClient); \
	DECLARE_FUNCTION(execSetAllowlistClientsEnabled); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetMulticastLoopback); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execListen); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetMulticastLoopback);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoundOSCAddressPatterns); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatching); \
	DECLARE_FUNCTION(execUnbindAllEventsFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execUnbindEventFromOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execBindEventToOnOSCAddressPatternMatchesPath); \
	DECLARE_FUNCTION(execGetAllowlistedClients); \
	DECLARE_FUNCTION(execGetPort); \
	DECLARE_FUNCTION(execGetIpAddress); \
	DECLARE_FUNCTION(execClearAllowlistedClients); \
	DECLARE_FUNCTION(execRemoveAllowlistedClient); \
	DECLARE_FUNCTION(execAddAllowlistedClient); \
	DECLARE_FUNCTION(execSetAllowlistClientsEnabled); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execSetMulticastLoopback); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execListen); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execGetMulticastLoopback);


#if WITH_EDITOR
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTickInEditor);


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTickInEditor);


#else
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_ACCESSORS
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOSCServer(); \
	friend struct Z_Construct_UClass_UOSCServer_Statics; \
public: \
	DECLARE_CLASS(UOSCServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCServer)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUOSCServer(); \
	friend struct Z_Construct_UClass_UOSCServer_Statics; \
public: \
	DECLARE_CLASS(UOSCServer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOSCServer)


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCServer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCServer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCServer(UOSCServer&&); \
	NO_API UOSCServer(const UOSCServer&); \
public: \
	NO_API virtual ~UOSCServer();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOSCServer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOSCServer(UOSCServer&&); \
	NO_API UOSCServer(const UOSCServer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOSCServer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOSCServer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOSCServer) \
	NO_API virtual ~UOSCServer();


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_INCLASS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_ACCESSORS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OSCServer."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OSC_API UClass* StaticClass<class UOSCServer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCServer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
