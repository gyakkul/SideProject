// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GerstnerWaterWaves.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGerstnerWave;
#ifdef WATER_GerstnerWaterWaves_generated_h
#error "GerstnerWaterWaves.generated.h already included, missing '#pragma once' in GerstnerWaterWaves.h"
#endif
#define WATER_GerstnerWaterWaves_generated_h

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGerstnerWave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FGerstnerWave>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGerstnerWaveOctave_Statics; \
	WATER_API static class UScriptStruct* StaticStruct();


template<> WATER_API UScriptStruct* StaticStruct<struct FGerstnerWaveOctave>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS \
	virtual void GenerateGerstnerWaves_Implementation(TArray<FGerstnerWave>& OutWaves) const; \
 \
	DECLARE_FUNCTION(execGenerateGerstnerWaves);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateGerstnerWaves);


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorBase(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorBase)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorBase(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorBase_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorBase)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(UGerstnerWaterWaveGeneratorBase&&); \
	WATER_API UGerstnerWaterWaveGeneratorBase(const UGerstnerWaterWaveGeneratorBase&); \
public: \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorBase();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorBase(UGerstnerWaterWaveGeneratorBase&&); \
	WATER_API UGerstnerWaterWaveGeneratorBase(const UGerstnerWaterWaveGeneratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorBase) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorBase();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_80_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_83_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorBase>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSimple)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSimple(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSimple_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSimple, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSimple)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSimple) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSimple); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(UGerstnerWaterWaveGeneratorSimple&&); \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const UGerstnerWaterWaveGeneratorSimple&); \
public: \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSimple();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSimple(UGerstnerWaterWaveGeneratorSimple&&); \
	WATER_API UGerstnerWaterWaveGeneratorSimple(const UGerstnerWaterWaveGeneratorSimple&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSimple); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSimple) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSimple();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_95_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorSimple>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSpectrum)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaveGeneratorSpectrum(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaveGeneratorSpectrum_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaveGeneratorSpectrum, UGerstnerWaterWaveGeneratorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaveGeneratorSpectrum)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSpectrum) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSpectrum); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(UGerstnerWaterWaveGeneratorSpectrum&&); \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const UGerstnerWaterWaveGeneratorSpectrum&); \
public: \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSpectrum();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(UGerstnerWaterWaveGeneratorSpectrum&&); \
	WATER_API UGerstnerWaterWaveGeneratorSpectrum(const UGerstnerWaterWaveGeneratorSpectrum&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaveGeneratorSpectrum); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaveGeneratorSpectrum) \
	WATER_API virtual ~UGerstnerWaterWaveGeneratorSpectrum();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_150_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_153_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaveGeneratorSpectrum>();

#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_RPC_WRAPPERS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_ACCESSORS
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaves(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaves_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaves, UWaterWaves, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaves)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_INCLASS \
private: \
	static void StaticRegisterNativesUGerstnerWaterWaves(); \
	friend struct Z_Construct_UClass_UGerstnerWaterWaves_Statics; \
public: \
	DECLARE_CLASS(UGerstnerWaterWaves, UWaterWaves, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Water"), WATER_API) \
	DECLARE_SERIALIZER(UGerstnerWaterWaves)


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WATER_API UGerstnerWaterWaves(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGerstnerWaterWaves) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaves); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaves(UGerstnerWaterWaves&&); \
	WATER_API UGerstnerWaterWaves(const UGerstnerWaterWaves&); \
public: \
	WATER_API virtual ~UGerstnerWaterWaves();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WATER_API UGerstnerWaterWaves(UGerstnerWaterWaves&&); \
	WATER_API UGerstnerWaterWaves(const UGerstnerWaterWaves&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WATER_API, UGerstnerWaterWaves); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGerstnerWaterWaves); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGerstnerWaterWaves) \
	WATER_API virtual ~UGerstnerWaterWaves();


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_165_PROLOG
#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_INCLASS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_ACCESSORS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h_168_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WATER_API UClass* StaticClass<class UGerstnerWaterWaves>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_GerstnerWaterWaves_h


#define FOREACH_ENUM_EWAVESPECTRUMTYPE(op) \
	op(EWaveSpectrumType::Phillips) \
	op(EWaveSpectrumType::PiersonMoskowitz) \
	op(EWaveSpectrumType::JONSWAP) 

enum class EWaveSpectrumType : uint8;
template<> struct TIsUEnumClass<EWaveSpectrumType> { enum { Value = true }; };
template<> WATER_API UEnum* StaticEnum<EWaveSpectrumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
