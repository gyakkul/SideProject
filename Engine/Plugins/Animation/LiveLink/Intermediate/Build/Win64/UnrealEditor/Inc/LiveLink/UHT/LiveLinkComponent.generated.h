// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSubjectFrameHandle;
struct FTimecode;
#ifdef LIVELINK_LiveLinkComponent_generated_h
#error "LiveLinkComponent.generated.h already included, missing '#pragma once' in LiveLinkComponent.h"
#endif
#define LIVELINK_LiveLinkComponent_generated_h

#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_12_DELEGATE \
LIVELINK_API void FLiveLinkTickSignature_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickSignature, float DeltaTime);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSubjectDataAtSceneTime); \
	DECLARE_FUNCTION(execGetSubjectDataAtWorldTime); \
	DECLARE_FUNCTION(execGetSubjectData); \
	DECLARE_FUNCTION(execGetAvailableSubjectNames);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSubjectDataAtSceneTime); \
	DECLARE_FUNCTION(execGetSubjectDataAtWorldTime); \
	DECLARE_FUNCTION(execGetSubjectData); \
	DECLARE_FUNCTION(execGetAvailableSubjectNames);


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ACCESSORS
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkComponent(); \
	friend struct Z_Construct_UClass_ULiveLinkComponent_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkComponent(); \
	friend struct Z_Construct_UClass_ULiveLinkComponent_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LiveLink"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkComponent)


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponent(ULiveLinkComponent&&); \
	NO_API ULiveLinkComponent(const ULiveLinkComponent&); \
public: \
	NO_API virtual ~ULiveLinkComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkComponent(ULiveLinkComponent&&); \
	NO_API ULiveLinkComponent(const ULiveLinkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULiveLinkComponent) \
	NO_API virtual ~ULiveLinkComponent();


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_17_PROLOG
#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_SPARSE_DATA \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ACCESSORS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINK_API UClass* StaticClass<class ULiveLinkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
