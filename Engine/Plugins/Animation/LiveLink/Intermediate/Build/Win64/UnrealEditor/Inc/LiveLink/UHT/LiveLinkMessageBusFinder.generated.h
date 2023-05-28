// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkMessageBusFinder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkMessageBusFinder;
class UObject;
struct FLatentActionInfo;
struct FLiveLinkSourceHandle;
struct FProviderPollResult;
#ifdef LIVELINK_LiveLinkMessageBusFinder_generated_h
#error "LiveLinkMessageBusFinder.generated.h already included, missing '#pragma once' in LiveLinkMessageBusFinder.h"
#endif
#define LIVELINK_LiveLinkMessageBusFinder_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProviderPollResult_Statics; \
	LIVELINK_API static class UScriptStruct* StaticStruct();


template<> LIVELINK_API UScriptStruct* StaticStruct<struct FProviderPollResult>();

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_SPARSE_DATA
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConstructMessageBusFinder); \
	DECLARE_FUNCTION(execConnectToProvider); \
	DECLARE_FUNCTION(execGetAvailableProviders);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_ACCESSORS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkMessageBusFinder(); \
	friend struct Z_Construct_UClass_ULiveLinkMessageBusFinder_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkMessageBusFinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkMessageBusFinder)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkMessageBusFinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public: \
	NO_API virtual ~ULiveLinkMessageBusFinder();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkMessageBusFinder(ULiveLinkMessageBusFinder&&); \
	NO_API ULiveLinkMessageBusFinder(const ULiveLinkMessageBusFinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkMessageBusFinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkMessageBusFinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkMessageBusFinder) \
	NO_API virtual ~ULiveLinkMessageBusFinder();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_67_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_INCLASS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkMessageBusFinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkMessageBusFinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
