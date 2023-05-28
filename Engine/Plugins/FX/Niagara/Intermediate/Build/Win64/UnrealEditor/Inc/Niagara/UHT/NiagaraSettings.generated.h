// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraSettings_generated_h
#error "NiagaraSettings.generated.h already included, missing '#pragma once' in NiagaraSettings.h"
#endif
#define NIAGARA_NiagaraSettings_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_SPARSE_DATA
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_RPC_WRAPPERS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_ACCESSORS
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSettings(); \
	friend struct Z_Construct_UClass_UNiagaraSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraSettings(); \
	friend struct Z_Construct_UClass_UNiagaraSettings_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSettings(UNiagaraSettings&&); \
	NO_API UNiagaraSettings(const UNiagaraSettings&); \
public: \
	NO_API virtual ~UNiagaraSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraSettings(UNiagaraSettings&&); \
	NO_API UNiagaraSettings(const UNiagaraSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSettings) \
	NO_API virtual ~UNiagaraSettings();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_96_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_SPARSE_DATA \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_ACCESSORS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h_99_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraSettings_h


#define FOREACH_ENUM_ENDISKELMESH_GPUMAXINFLUENCES(op) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax4) \
	op(ENDISkelMesh_GpuMaxInfluences::AllowMax8) \
	op(ENDISkelMesh_GpuMaxInfluences::Unlimited) 

namespace ENDISkelMesh_GpuMaxInfluences { enum Type : int; }
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuMaxInfluences::Type>();

#define FOREACH_ENUM_ENDISKELMESH_GPUUNIFORMSAMPLINGFORMAT(op) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Full) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_24_8) \
	op(ENDISkelMesh_GpuUniformSamplingFormat::Limited_23_9) 

namespace ENDISkelMesh_GpuUniformSamplingFormat { enum Type : int; }
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_GpuUniformSamplingFormat::Type>();

#define FOREACH_ENUM_ENDISKELMESH_ADJACENCYTRIANGLEINDEXFORMAT(op) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Full) \
	op(ENDISkelMesh_AdjacencyTriangleIndexFormat::Half) 

namespace ENDISkelMesh_AdjacencyTriangleIndexFormat { enum Type : int; }
template<> NIAGARA_API UEnum* StaticEnum<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type>();

#define FOREACH_ENUM_ENIAGARADEFAULTRENDERERPIXELCOVERAGEMODE(op) \
	op(ENiagaraDefaultRendererPixelCoverageMode::Enabled) \
	op(ENiagaraDefaultRendererPixelCoverageMode::Disabled) 

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultRendererPixelCoverageMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultRendererPixelCoverageMode>();

#define FOREACH_ENUM_ENIAGARADEFAULTSORTPRECISION(op) \
	op(ENiagaraDefaultSortPrecision::Low) \
	op(ENiagaraDefaultSortPrecision::High) 

enum class ENiagaraDefaultSortPrecision : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultSortPrecision> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultSortPrecision>();

#define FOREACH_ENUM_ENIAGARADEFAULTGPUTRANSLUCENTLATENCY(op) \
	op(ENiagaraDefaultGpuTranslucentLatency::Immediate) \
	op(ENiagaraDefaultGpuTranslucentLatency::Latent) 

enum class ENiagaraDefaultGpuTranslucentLatency : uint8;
template<> struct TIsUEnumClass<ENiagaraDefaultGpuTranslucentLatency> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultGpuTranslucentLatency>();

#define FOREACH_ENUM_ENDICOLLISIONQUERY_ASYNCGPUTRACEPROVIDER(op) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::Default) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::HWRT) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::GSDF) \
	op(ENDICollisionQuery_AsyncGpuTraceProvider::None) 

namespace ENDICollisionQuery_AsyncGpuTraceProvider { enum Type : int; }
template<> NIAGARA_API UEnum* StaticEnum<ENDICollisionQuery_AsyncGpuTraceProvider::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
