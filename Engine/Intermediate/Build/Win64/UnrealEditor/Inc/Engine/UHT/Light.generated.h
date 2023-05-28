// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Light.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInterface;
struct FLinearColor;
#ifdef ENGINE_Light_generated_h
#error "Light.generated.h already included, missing '#pragma once' in Light.h"
#endif
#define ENGINE_Light_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetCastShadows); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execGetLightColor); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execToggleEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAffectTranslucentLighting); \
	DECLARE_FUNCTION(execSetCastShadows); \
	DECLARE_FUNCTION(execSetLightFunctionFadeDistance); \
	DECLARE_FUNCTION(execSetLightFunctionScale); \
	DECLARE_FUNCTION(execSetLightFunctionMaterial); \
	DECLARE_FUNCTION(execGetLightColor); \
	DECLARE_FUNCTION(execSetLightColor); \
	DECLARE_FUNCTION(execGetBrightness); \
	DECLARE_FUNCTION(execSetBrightness); \
	DECLARE_FUNCTION(execToggleEnabled); \
	DECLARE_FUNCTION(execIsEnabled); \
	DECLARE_FUNCTION(execSetEnabled); \
	DECLARE_FUNCTION(execOnRep_bEnabled);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALight(); \
	friend struct Z_Construct_UClass_ALight_Statics; \
public: \
	DECLARE_CLASS(ALight, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALight) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALight(); \
	friend struct Z_Construct_UClass_ALight_Statics; \
public: \
	DECLARE_CLASS(ALight, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ALight) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bEnabled=NETFIELD_REP_START, \
		NETFIELD_REP_END=bEnabled	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight(ALight&&); \
	NO_API ALight(const ALight&); \
public: \
	NO_API virtual ~ALight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALight(ALight&&); \
	NO_API ALight(const ALight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALight); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALight) \
	NO_API virtual ~ALight();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Light."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
