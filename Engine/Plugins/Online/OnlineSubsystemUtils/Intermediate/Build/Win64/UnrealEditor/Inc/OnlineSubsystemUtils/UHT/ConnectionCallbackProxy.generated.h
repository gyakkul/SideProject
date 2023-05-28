// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConnectionCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UConnectionCallbackProxy;
class UObject;
#ifdef ONLINESUBSYSTEMUTILS_ConnectionCallbackProxy_generated_h
#error "ConnectionCallbackProxy.generated.h already included, missing '#pragma once' in ConnectionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_ConnectionCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_12_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FOnlineConnectionResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineConnectionResult, int32 ErrorCode);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnectToService);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectToService);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectionCallbackProxy(); \
	friend struct Z_Construct_UClass_UConnectionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UConnectionCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUConnectionCallbackProxy(); \
	friend struct Z_Construct_UClass_UConnectionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UConnectionCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UConnectionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(UConnectionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const UConnectionCallbackProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UConnectionCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(UConnectionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const UConnectionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UConnectionCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionCallbackProxy) \
	ONLINESUBSYSTEMUTILS_API virtual ~UConnectionCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConnectionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UConnectionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
