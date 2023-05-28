// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InAppPurchaseQueryCallbackProxy2.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UInAppPurchaseQueryCallbackProxy2;
struct FOnlineProxyStoreOffer;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy2_generated_h
#error "InAppPurchaseQueryCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseQueryCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseQueryCallbackProxy2_generated_h

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FOnlineProxyStoreOffer>();

#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_73_DELEGATE \
ONLINESUBSYSTEMUTILS_API void FInAppPurchaseQuery2Result_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseQuery2Result, TArray<FOnlineProxyStoreOffer> const& InAppOfferInformation);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQuery);


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseQueryCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseQueryCallbackProxy2)


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(UInAppPurchaseQueryCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(const UInAppPurchaseQueryCallbackProxy2&); \
public: \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseQueryCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(UInAppPurchaseQueryCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseQueryCallbackProxy2(const UInAppPurchaseQueryCallbackProxy2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseQueryCallbackProxy2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseQueryCallbackProxy2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseQueryCallbackProxy2) \
	ONLINESUBSYSTEMUTILS_API virtual ~UInAppPurchaseQueryCallbackProxy2();


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_75_PROLOG
#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_INCLASS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h_78_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseQueryCallbackProxy2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseQueryCallbackProxy2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseQueryCallbackProxy2_h


#define FOREACH_ENUM_EONLINEPROXYSTOREOFFERDISCOUNTTYPE(op) \
	op(EOnlineProxyStoreOfferDiscountType::NotOnSale) \
	op(EOnlineProxyStoreOfferDiscountType::Percentage) \
	op(EOnlineProxyStoreOfferDiscountType::DiscountAmount) \
	op(EOnlineProxyStoreOfferDiscountType::PayAmount) 

enum class EOnlineProxyStoreOfferDiscountType : uint8;
template<> struct TIsUEnumClass<EOnlineProxyStoreOfferDiscountType> { enum { Value = true }; };
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineProxyStoreOfferDiscountType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
