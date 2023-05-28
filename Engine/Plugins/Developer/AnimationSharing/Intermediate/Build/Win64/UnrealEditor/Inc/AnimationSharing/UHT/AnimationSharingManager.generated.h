// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSharingManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAnimationSharingManager;
class UAnimationSharingSetup;
class UObject;
class USkeleton;
#ifdef ANIMATIONSHARING_AnimationSharingManager_generated_h
#error "AnimationSharingManager.generated.h already included, missing '#pragma once' in AnimationSharingManager.h"
#endif
#define ANIMATIONSHARING_AnimationSharingManager_generated_h

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_SPARSE_DATA
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_RPC_WRAPPERS
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_ACCESSORS
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimSharingInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingInstance)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_INCLASS \
private: \
	static void StaticRegisterNativesUAnimSharingInstance(); \
	friend struct Z_Construct_UClass_UAnimSharingInstance_Statics; \
public: \
	DECLARE_CLASS(UAnimSharingInstance, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimSharingInstance)


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingInstance(UAnimSharingInstance&&); \
	NO_API UAnimSharingInstance(const UAnimSharingInstance&); \
public: \
	NO_API virtual ~UAnimSharingInstance();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimSharingInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimSharingInstance(UAnimSharingInstance&&); \
	NO_API UAnimSharingInstance(const UAnimSharingInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimSharingInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimSharingInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimSharingInstance) \
	NO_API virtual ~UAnimSharingInstance();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_275_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_SPARSE_DATA \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_ACCESSORS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_INCLASS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_SPARSE_DATA \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_ACCESSORS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_278_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimSharingInstance>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_459_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FTickAnimationSharingFunction>();

#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_SPARSE_DATA
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimationSharingEnabled); \
	DECLARE_FUNCTION(execRegisterActorWithSkeletonBP); \
	DECLARE_FUNCTION(execCreateAnimationSharingManager); \
	DECLARE_FUNCTION(execGetAnimationSharingManager);


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimationSharingEnabled); \
	DECLARE_FUNCTION(execRegisterActorWithSkeletonBP); \
	DECLARE_FUNCTION(execCreateAnimationSharingManager); \
	DECLARE_FUNCTION(execGetAnimationSharingManager);


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_ACCESSORS
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingManager(); \
	friend struct Z_Construct_UClass_UAnimationSharingManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingManager(); \
	friend struct Z_Construct_UClass_UAnimationSharingManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingManager(UAnimationSharingManager&&); \
	NO_API UAnimationSharingManager(const UAnimationSharingManager&); \
public: \
	NO_API virtual ~UAnimationSharingManager();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingManager(UAnimationSharingManager&&); \
	NO_API UAnimationSharingManager(const UAnimationSharingManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingManager) \
	NO_API virtual ~UAnimationSharingManager();


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_482_PROLOG
#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_SPARSE_DATA \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_RPC_WRAPPERS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_ACCESSORS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_INCLASS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_SPARSE_DATA \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_ACCESSORS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h_485_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimationSharingManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
