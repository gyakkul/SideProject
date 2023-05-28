// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseCallbackProxy2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseCallbackProxy2;
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseProductRequest2;
struct FInAppPurchaseReceiptInfo2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h
#error "InAppPurchaseCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductRequest2>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductInfo2>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseReceiptInfo2>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_122_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FInAppPurchaseResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwned); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseUnprocessedPurchases); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwned); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseUnprocessedPurchases); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const UInAppPurchaseCallbackProxy2&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const UInAppPurchaseCallbackProxy2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy2) \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_124_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_127_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseCallbackProxy2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseCallbackProxy2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h


#define FOREACH_ENUM_EINAPPPURCHASESTATUS(op) \
	op(EInAppPurchaseStatus::Invalid) \
	op(EInAppPurchaseStatus::Failed) \
	op(EInAppPurchaseStatus::Deferred) \
	op(EInAppPurchaseStatus::Canceled) \
	op(EInAppPurchaseStatus::Purchased) \
	op(EInAppPurchaseStatus::Restored) 

enum class EInAppPurchaseStatus : uint8;
template<> struct TIsUEnumClass<EInAppPurchaseStatus> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EInAppPurchaseStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
