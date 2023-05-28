// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EndMatchCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ITurnBasedMatchInterface;
class UEndMatchCallbackProxy;
class UObject;
#ifdef ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h
#error "EndMatchCallbackProxy.generated.h already included, missing '#pragma once' in EndMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_EndMatchCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndMatch);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndMatch);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndMatchCallbackProxy(); \
	friend struct Z_Construct_UClass_UEndMatchCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UEndMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUEndMatchCallbackProxy(); \
	friend struct Z_Construct_UClass_UEndMatchCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UEndMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UEndMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndMatchCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndMatchCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(UEndMatchCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const UEndMatchCallbackProxy&); \
public:


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(UEndMatchCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UEndMatchCallbackProxy(const UEndMatchCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UEndMatchCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndMatchCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndMatchCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_15_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EndMatchCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UEndMatchCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_EndMatchCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
