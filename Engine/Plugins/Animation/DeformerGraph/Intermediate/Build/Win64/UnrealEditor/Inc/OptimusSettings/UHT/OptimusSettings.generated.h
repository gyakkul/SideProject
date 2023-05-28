// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OptimusSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPTIMUSSETTINGS_OptimusSettings_generated_h
#error "OptimusSettings.generated.h already included, missing '#pragma once' in OptimusSettings.h"
#endif
#define OPTIMUSSETTINGS_OptimusSettings_generated_h

#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_SPARSE_DATA
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_RPC_WRAPPERS
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_ACCESSORS
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOptimusSettings(); \
	friend struct Z_Construct_UClass_UOptimusSettings_Statics; \
public: \
	DECLARE_CLASS(UOptimusSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OptimusSettings"), NO_API) \
	DECLARE_SERIALIZER(UOptimusSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DeformerGraph");} \



#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUOptimusSettings(); \
	friend struct Z_Construct_UClass_UOptimusSettings_Statics; \
public: \
	DECLARE_CLASS(UOptimusSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OptimusSettings"), NO_API) \
	DECLARE_SERIALIZER(UOptimusSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DeformerGraph");} \



#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusSettings(UOptimusSettings&&); \
	NO_API UOptimusSettings(const UOptimusSettings&); \
public: \
	NO_API virtual ~UOptimusSettings();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOptimusSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOptimusSettings(UOptimusSettings&&); \
	NO_API UOptimusSettings(const UOptimusSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOptimusSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOptimusSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOptimusSettings) \
	NO_API virtual ~UOptimusSettings();


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_26_PROLOG
#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_INCLASS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_SPARSE_DATA \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_ACCESSORS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OptimusSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPTIMUSSETTINGS_API UClass* StaticClass<class UOptimusSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusSettings_Public_OptimusSettings_h


#define FOREACH_ENUM_EOPTIMUSDEFAULTDEFORMERMODE(op) \
	op(EOptimusDefaultDeformerMode::Never) \
	op(EOptimusDefaultDeformerMode::SkinCacheOnly) \
	op(EOptimusDefaultDeformerMode::Always) 

enum class EOptimusDefaultDeformerMode : uint8;
template<> struct TIsUEnumClass<EOptimusDefaultDeformerMode> { enum { Value = true }; };
template<> OPTIMUSSETTINGS_API UEnum* StaticEnum<EOptimusDefaultDeformerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
