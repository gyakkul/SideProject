// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "XRCreativeAvatar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ALevelSequenceActor;
class UActorComponent;
class UHapticFeedbackEffect_Base;
class UInputMappingContext;
class ULevelSequence;
class UObject;
enum class EControllerHand : uint8;
#ifdef XRCREATIVE_XRCreativeAvatar_generated_h
#error "XRCreativeAvatar.generated.h already included, missing '#pragma once' in XRCreativeAvatar.h"
#endif
#define XRCREATIVE_XRCreativeAvatar_generated_h

#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenLevelSequence); \
	DECLARE_FUNCTION(execSpawnTransientActor); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execRemoveInputMappingContext); \
	DECLARE_FUNCTION(execAddInputMappingContext); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execSetComponentTickInEditor); \
	DECLARE_FUNCTION(execGetHeadTransformRoomSpace); \
	DECLARE_FUNCTION(execGetHeadTransform);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenLevelSequence); \
	DECLARE_FUNCTION(execSpawnTransientActor); \
	DECLARE_FUNCTION(execStopHapticEffect); \
	DECLARE_FUNCTION(execPlayHapticEffect); \
	DECLARE_FUNCTION(execRemoveInputMappingContext); \
	DECLARE_FUNCTION(execAddInputMappingContext); \
	DECLARE_FUNCTION(execUnregisterObjectForInput); \
	DECLARE_FUNCTION(execRegisterObjectForInput); \
	DECLARE_FUNCTION(execSetComponentTickInEditor); \
	DECLARE_FUNCTION(execGetHeadTransformRoomSpace); \
	DECLARE_FUNCTION(execGetHeadTransform);


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_ACCESSORS
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAXRCreativeAvatar(); \
	friend struct Z_Construct_UClass_AXRCreativeAvatar_Statics; \
public: \
	DECLARE_CLASS(AXRCreativeAvatar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(AXRCreativeAvatar)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAXRCreativeAvatar(); \
	friend struct Z_Construct_UClass_AXRCreativeAvatar_Statics; \
public: \
	DECLARE_CLASS(AXRCreativeAvatar, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/XRCreative"), NO_API) \
	DECLARE_SERIALIZER(AXRCreativeAvatar)


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AXRCreativeAvatar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRCreativeAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXRCreativeAvatar(AXRCreativeAvatar&&); \
	NO_API AXRCreativeAvatar(const AXRCreativeAvatar&); \
public: \
	NO_API virtual ~AXRCreativeAvatar();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AXRCreativeAvatar(AXRCreativeAvatar&&); \
	NO_API AXRCreativeAvatar(const AXRCreativeAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AXRCreativeAvatar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AXRCreativeAvatar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AXRCreativeAvatar) \
	NO_API virtual ~AXRCreativeAvatar();


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_32_PROLOG
#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_INCLASS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_ACCESSORS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> XRCREATIVE_API UClass* StaticClass<class AXRCreativeAvatar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeAvatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
