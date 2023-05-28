// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioMotorModelComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IAudioMotorSim;
class IAudioMotorSimOutput;
struct FAudioMotorSimInputContext;
struct FAudioMotorSimRuntimeContext;
#ifdef AUDIOMOTORSIM_AudioMotorModelComponent_generated_h
#error "AudioMotorModelComponent.generated.h already included, missing '#pragma once' in AudioMotorModelComponent.h"
#endif
#define AUDIOMOTORSIM_AudioMotorModelComponent_generated_h

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotorSimEntry_Statics; \
	AUDIOMOTORSIM_API static class UScriptStruct* StaticStruct();


template<> AUDIOMOTORSIM_API UScriptStruct* StaticStruct<struct FMotorSimEntry>();

#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCachedInputData); \
	DECLARE_FUNCTION(execGetRuntimeInfo); \
	DECLARE_FUNCTION(execGetGear); \
	DECLARE_FUNCTION(execGetRpm); \
	DECLARE_FUNCTION(execRemoveMotorSimComponent); \
	DECLARE_FUNCTION(execAddMotorSimComponent); \
	DECLARE_FUNCTION(execRemoveMotorAudioComponent); \
	DECLARE_FUNCTION(execAddMotorAudioComponent); \
	DECLARE_FUNCTION(execStopOutput); \
	DECLARE_FUNCTION(execStartOutput); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUpdate);


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCachedInputData); \
	DECLARE_FUNCTION(execGetRuntimeInfo); \
	DECLARE_FUNCTION(execGetGear); \
	DECLARE_FUNCTION(execGetRpm); \
	DECLARE_FUNCTION(execRemoveMotorSimComponent); \
	DECLARE_FUNCTION(execAddMotorSimComponent); \
	DECLARE_FUNCTION(execRemoveMotorAudioComponent); \
	DECLARE_FUNCTION(execAddMotorAudioComponent); \
	DECLARE_FUNCTION(execStopOutput); \
	DECLARE_FUNCTION(execStartOutput); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execUpdate);


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_ACCESSORS
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioMotorModelComponent(); \
	friend struct Z_Construct_UClass_UAudioMotorModelComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioMotorModelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), NO_API) \
	DECLARE_SERIALIZER(UAudioMotorModelComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUAudioMotorModelComponent(); \
	friend struct Z_Construct_UClass_UAudioMotorModelComponent_Statics; \
public: \
	DECLARE_CLASS(UAudioMotorModelComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AudioMotorSim"), NO_API) \
	DECLARE_SERIALIZER(UAudioMotorModelComponent)


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMotorModelComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorModelComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorModelComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorModelComponent(UAudioMotorModelComponent&&); \
	NO_API UAudioMotorModelComponent(const UAudioMotorModelComponent&); \
public: \
	NO_API virtual ~UAudioMotorModelComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioMotorModelComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioMotorModelComponent(UAudioMotorModelComponent&&); \
	NO_API UAudioMotorModelComponent(const UAudioMotorModelComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioMotorModelComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioMotorModelComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioMotorModelComponent) \
	NO_API virtual ~UAudioMotorModelComponent();


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_20_PROLOG
#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_INCLASS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_ACCESSORS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOMOTORSIM_API UClass* StaticClass<class UAudioMotorModelComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioMotorSim_Source_AudioMotorSim_Public_AudioMotorModelComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
