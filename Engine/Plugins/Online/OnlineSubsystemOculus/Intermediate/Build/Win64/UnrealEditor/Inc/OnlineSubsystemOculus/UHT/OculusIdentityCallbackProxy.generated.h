// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusIdentityCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UOculusIdentityCallbackProxy;
#ifdef ONLINESUBSYSTEMOCULUS_OculusIdentityCallbackProxy_generated_h
#error "OculusIdentityCallbackProxy.generated.h already included, missing '#pragma once' in OculusIdentityCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMOCULUS_OculusIdentityCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMOCULUS_API void FOculusIdentitySuccessResult_DelegateWrapper(const FMulticastScriptDelegate& OculusIdentitySuccessResult, const FString& OculusId, const FString& OculusName);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_11_DELEGATE \
ONLINESUBSYSTEMOCULUS_API void FOculusIdentityFailureResult_DelegateWrapper(const FMulticastScriptDelegate& OculusIdentityFailureResult);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOculusIdentity);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOculusIdentity);


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusIdentityCallbackProxy(); \
	friend struct Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOculusIdentityCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemOculus"), ONLINESUBSYSTEMOCULUS_API) \
	DECLARE_SERIALIZER(UOculusIdentityCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUOculusIdentityCallbackProxy(); \
	friend struct Z_Construct_UClass_UOculusIdentityCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UOculusIdentityCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemOculus"), ONLINESUBSYSTEMOCULUS_API) \
	DECLARE_SERIALIZER(UOculusIdentityCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusIdentityCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMOCULUS_API, UOculusIdentityCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusIdentityCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(UOculusIdentityCallbackProxy&&); \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(const UOculusIdentityCallbackProxy&); \
public: \
	ONLINESUBSYSTEMOCULUS_API virtual ~UOculusIdentityCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(UOculusIdentityCallbackProxy&&); \
	ONLINESUBSYSTEMOCULUS_API UOculusIdentityCallbackProxy(const UOculusIdentityCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMOCULUS_API, UOculusIdentityCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusIdentityCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusIdentityCallbackProxy) \
	ONLINESUBSYSTEMOCULUS_API virtual ~UOculusIdentityCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_16_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusIdentityCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMOCULUS_API UClass* StaticClass<class UOculusIdentityCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemOculus_Source_Classes_OculusIdentityCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
