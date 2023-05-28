// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReverbVolumeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FReverbSettings;
#ifdef AUDIOGAMEPLAYVOLUME_ReverbVolumeComponent_generated_h
#error "ReverbVolumeComponent.generated.h already included, missing '#pragma once' in ReverbVolumeComponent.h"
#endif
#define AUDIOGAMEPLAYVOLUME_ReverbVolumeComponent_generated_h

#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_SPARSE_DATA
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReverbSettings);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReverbSettings);


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_ACCESSORS
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReverbVolumeComponent(); \
	friend struct Z_Construct_UClass_UReverbVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UReverbVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(UReverbVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUReverbVolumeComponent(); \
	friend struct Z_Construct_UClass_UReverbVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UReverbVolumeComponent, UAudioGameplayVolumeMutator, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioGameplayVolume"), NO_API) \
	DECLARE_SERIALIZER(UReverbVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReverbVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReverbVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReverbVolumeComponent(UReverbVolumeComponent&&); \
	NO_API UReverbVolumeComponent(const UReverbVolumeComponent&); \
public:


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReverbVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReverbVolumeComponent(UReverbVolumeComponent&&); \
	NO_API UReverbVolumeComponent(const UReverbVolumeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReverbVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReverbVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReverbVolumeComponent)


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_32_PROLOG
#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_RPC_WRAPPERS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_ACCESSORS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_INCLASS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_SPARSE_DATA \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_ACCESSORS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReverbVolumeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOGAMEPLAYVOLUME_API UClass* StaticClass<class UReverbVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AudioGameplayVolume_Source_AudioGameplayVolume_Public_ReverbVolumeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
