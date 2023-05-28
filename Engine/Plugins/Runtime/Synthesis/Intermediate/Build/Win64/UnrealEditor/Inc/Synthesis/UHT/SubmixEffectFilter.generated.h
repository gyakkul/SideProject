// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SubmixEffects/SubmixEffectFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubmixFilterAlgorithm : uint8;
enum class ESubmixFilterType : uint8;
struct FSubmixEffectFilterSettings;
#ifdef SYNTHESIS_SubmixEffectFilter_generated_h
#error "SubmixEffectFilter.generated.h already included, missing '#pragma once' in SubmixEffectFilter.h"
#endif
#define SYNTHESIS_SubmixEffectFilter_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSubmixEffectFilterSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequency); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequency); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_ACCESSORS
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectFilterPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectFilterPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFilterPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFilterPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectFilterPreset(USubmixEffectFilterPreset&&); \
	NO_API USubmixEffectFilterPreset(const USubmixEffectFilterPreset&); \
public: \
	NO_API virtual ~USubmixEffectFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectFilterPreset(USubmixEffectFilterPreset&&); \
	NO_API USubmixEffectFilterPreset(const USubmixEffectFilterPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFilterPreset) \
	NO_API virtual ~USubmixEffectFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_129_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_INCLASS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_ACCESSORS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_132_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USubmixEffectFilterPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h


#define FOREACH_ENUM_ESUBMIXFILTERTYPE(op) \
	op(ESubmixFilterType::LowPass) \
	op(ESubmixFilterType::HighPass) \
	op(ESubmixFilterType::BandPass) \
	op(ESubmixFilterType::BandStop) \
	op(ESubmixFilterType::Count) 

enum class ESubmixFilterType : uint8;
template<> struct TIsUEnumClass<ESubmixFilterType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterType>();

#define FOREACH_ENUM_ESUBMIXFILTERALGORITHM(op) \
	op(ESubmixFilterAlgorithm::OnePole) \
	op(ESubmixFilterAlgorithm::StateVariable) \
	op(ESubmixFilterAlgorithm::Ladder) \
	op(ESubmixFilterAlgorithm::Count) 

enum class ESubmixFilterAlgorithm : uint8;
template<> struct TIsUEnumClass<ESubmixFilterAlgorithm> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterAlgorithm>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
