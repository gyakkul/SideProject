// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LiveLinkInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULiveLinkRetargetAsset;
struct FLiveLinkSubjectName;
#ifdef LIVELINKANIMATIONCORE_LiveLinkInstance_generated_h
#error "LiveLinkInstance.generated.h already included, missing '#pragma once' in LiveLinkInstance.h"
#endif
#define LIVELINKANIMATIONCORE_LiveLinkInstance_generated_h

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLiveLinkInstanceProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> LIVELINKANIMATIONCORE_API UScriptStruct* StaticStruct<struct FLiveLinkInstanceProxy>();

#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetSubject);


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRetargetAsset); \
	DECLARE_FUNCTION(execSetSubject);


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULiveLinkInstance(); \
	friend struct Z_Construct_UClass_ULiveLinkInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLinkAnimationCore"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkInstance)


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS \
private: \
	static void StaticRegisterNativesULiveLinkInstance(); \
	friend struct Z_Construct_UClass_ULiveLinkInstance_Statics; \
public: \
	DECLARE_CLASS(ULiveLinkInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/LiveLinkAnimationCore"), NO_API) \
	DECLARE_SERIALIZER(ULiveLinkInstance)


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkInstance(ULiveLinkInstance&&); \
	NO_API ULiveLinkInstance(const ULiveLinkInstance&); \
public: \
	NO_API virtual ~ULiveLinkInstance();


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULiveLinkInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULiveLinkInstance(ULiveLinkInstance&&); \
	NO_API ULiveLinkInstance(const ULiveLinkInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULiveLinkInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULiveLinkInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULiveLinkInstance) \
	NO_API virtual ~ULiveLinkInstance();


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_40_PROLOG
#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LIVELINKANIMATIONCORE_API UClass* StaticClass<class ULiveLinkInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_LiveLinkAnimationCore_Public_LiveLinkInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
