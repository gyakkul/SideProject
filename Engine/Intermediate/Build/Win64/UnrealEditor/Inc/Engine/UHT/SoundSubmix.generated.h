// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSubmix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundWave;
enum class EAudioRecordingExportType : uint8;
enum class EAudioSpectrumType : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTSize : uint8;
enum class EFFTWindowType : uint8;
struct FSoundSubmixSpectralAnalysisBandSettings;
#ifdef ENGINE_SoundSubmix_generated_h
#error "SoundSubmix.generated.h already included, missing '#pragma once' in SoundSubmix.h"
#endif
#define ENGINE_SoundSubmix_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_33_DELEGATE \
ENGINE_API void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_38_DELEGATE \
ENGINE_API void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_40_DELEGATE \
ENGINE_API void FOnSubmixSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixSpectralAnalysis, TArray<float> const& Magnitudes);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct Z_Construct_UClass_USoundSubmixBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct Z_Construct_UClass_USoundSubmixBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixBase(USoundSubmixBase&&); \
	NO_API USoundSubmixBase(const USoundSubmixBase&); \
public: \
	NO_API virtual ~USoundSubmixBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixBase(USoundSubmixBase&&); \
	NO_API USoundSubmixBase(const USoundSubmixBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase) \
	NO_API virtual ~USoundSubmixBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_162_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_165_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmixBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixWithParentBase(USoundSubmixWithParentBase&&); \
	NO_API USoundSubmixWithParentBase(const USoundSubmixWithParentBase&); \
public: \
	NO_API virtual ~USoundSubmixWithParentBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmixWithParentBase(USoundSubmixWithParentBase&&); \
	NO_API USoundSubmixWithParentBase(const USoundSubmixWithParentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmixWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase) \
	NO_API virtual ~USoundSubmixWithParentBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_225_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_228_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmixWithParentBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixWithParentBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSubmixDryLevel); \
	DECLARE_FUNCTION(execSetSubmixWetLevel); \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execStopSpectralAnalysis); \
	DECLARE_FUNCTION(execStartSpectralAnalysis); \
	DECLARE_FUNCTION(execRemoveSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubmixDryLevel); \
	DECLARE_FUNCTION(execSetSubmixWetLevel); \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execStopSpectralAnalysis); \
	DECLARE_FUNCTION(execStartSpectralAnalysis); \
	DECLARE_FUNCTION(execRemoveSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSubmix, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundSubmix) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public: \
	NO_API virtual ~USoundSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundSubmix(USoundSubmix&&); \
	NO_API USoundSubmix(const USoundSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	NO_API virtual ~USoundSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_260_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_263_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldSubmix(USoundfieldSubmix&&); \
	NO_API USoundfieldSubmix(const USoundfieldSubmix&); \
public: \
	NO_API virtual ~USoundfieldSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldSubmix(USoundfieldSubmix&&); \
	NO_API USoundfieldSubmix(const USoundfieldSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix) \
	NO_API virtual ~USoundfieldSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_419_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_422_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundfieldSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct Z_Construct_UClass_UEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_INCLASS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct Z_Construct_UClass_UEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndpointSubmix(UEndpointSubmix&&); \
	NO_API UEndpointSubmix(const UEndpointSubmix&); \
public: \
	NO_API virtual ~UEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEndpointSubmix(UEndpointSubmix&&); \
	NO_API UEndpointSubmix(const UEndpointSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix) \
	NO_API virtual ~UEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_464_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_467_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class EndpointSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEndpointSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&); \
	NO_API USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&); \
public: \
	NO_API virtual ~USoundfieldEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&); \
	NO_API USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundfieldEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix) \
	NO_API virtual ~USoundfieldEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_489_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_492_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundfieldEndpointSubmix."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldEndpointSubmix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h


#define FOREACH_ENUM_EFFTSIZE(op) \
	op(EFFTSize::DefaultSize) \
	op(EFFTSize::Min) \
	op(EFFTSize::Small) \
	op(EFFTSize::Medium) \
	op(EFFTSize::Large) \
	op(EFFTSize::VeryLarge) \
	op(EFFTSize::Max) 

enum class EFFTSize : uint8;
template<> struct TIsUEnumClass<EFFTSize> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTSize>();

#define FOREACH_ENUM_EFFTPEAKINTERPOLATIONMETHOD(op) \
	op(EFFTPeakInterpolationMethod::NearestNeighbor) \
	op(EFFTPeakInterpolationMethod::Linear) \
	op(EFFTPeakInterpolationMethod::Quadratic) \
	op(EFFTPeakInterpolationMethod::ConstantQ) 

enum class EFFTPeakInterpolationMethod : uint8;
template<> struct TIsUEnumClass<EFFTPeakInterpolationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>();

#define FOREACH_ENUM_EFFTWINDOWTYPE(op) \
	op(EFFTWindowType::None) \
	op(EFFTWindowType::Hamming) \
	op(EFFTWindowType::Hann) \
	op(EFFTWindowType::Blackman) 

enum class EFFTWindowType : uint8;
template<> struct TIsUEnumClass<EFFTWindowType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTWindowType>();

#define FOREACH_ENUM_EAUDIOSPECTRUMTYPE(op) \
	op(EAudioSpectrumType::MagnitudeSpectrum) \
	op(EAudioSpectrumType::PowerSpectrum) \
	op(EAudioSpectrumType::Decibel) 

enum class EAudioSpectrumType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumType>();

#define FOREACH_ENUM_EGAINPARAMMODE(op) \
	op(EGainParamMode::Linear) \
	op(EGainParamMode::Decibels) 

enum class EGainParamMode : uint8;
template<> struct TIsUEnumClass<EGainParamMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EGainParamMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
