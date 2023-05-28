// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseRestoreCallbackProxy2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseRestoreCallbackProxy2;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseRestoreInfo2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h
#error "InAppPurchaseRestoreCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseRestoreCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseRestoreCallbackProxy2_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseRestoreInfo2>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_33_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FInAppPurchaseRestoreResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseRestoreResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseRestoreInfo2> const& InAppPurchaseRestoreInfo);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseRestore);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseRestoreCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseRestoreCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(UInAppPurchaseRestoreCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const UInAppPurchaseRestoreCallbackProxy2&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseRestoreCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(UInAppPurchaseRestoreCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseRestoreCallbackProxy2(const UInAppPurchaseRestoreCallbackProxy2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseRestoreCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseRestoreCallbackProxy2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseRestoreCallbackProxy2) \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseRestoreCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_35_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h_38_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseRestoreCallbackProxy2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseRestoreCallbackProxy2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseRestoreCallbackProxy2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
