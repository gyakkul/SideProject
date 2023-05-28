// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AchievementWriteCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UAchievementWriteCallbackProxy;
class UObject;
#ifdef ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h
#error "AchievementWriteCallbackProxy.generated.h already included, missing '#pragma once' in AchievementWriteCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_10_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FAchievementWriteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementWriteDelegate, FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteAchievementProgress);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteAchievementProgress);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementWriteCallbackProxy(); \
	friend struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAchievementWriteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UAchievementWriteCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementWriteCallbackProxy(); \
	friend struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAchievementWriteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UAchievementWriteCallbackProxy)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementWriteCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementWriteCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementWriteCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(UAchievementWriteCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const UAchievementWriteCallbackProxy&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UAchievementWriteCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(UAchievementWriteCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const UAchievementWriteCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementWriteCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementWriteCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementWriteCallbackProxy) \
	ONLINESUBSYSTEMUTILS_API virtual ~UAchievementWriteCallbackProxy();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_12_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AchievementWriteCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UAchievementWriteCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
