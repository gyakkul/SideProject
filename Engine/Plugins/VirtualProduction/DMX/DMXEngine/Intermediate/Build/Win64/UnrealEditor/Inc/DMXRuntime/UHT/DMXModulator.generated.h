// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modulators/DMXModulator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXAttributeName; 
struct FDMXNormalizedAttributeValueMap;
#ifdef DMXRUNTIME_DMXModulator_generated_h
#error "DMXModulator.generated.h already included, missing '#pragma once' in DMXModulator.h"
#endif
#define DMXRUNTIME_DMXModulator_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_RPC_WRAPPERS \
	virtual void ModulateMatrix_Implementation(UDMXEntityFixturePatch* FixturePatch, TArray<FDMXNormalizedAttributeValueMap> const& InNormalizedMatrixAttributeValues, TArray<FDMXNormalizedAttributeValueMap>& OutNormalizedMatrixAttributeValues); \
	virtual void Modulate_Implementation(UDMXEntityFixturePatch* FixturePatch, TMap<FDMXAttributeName,float> const& InNormalizedAttributeValues, TMap<FDMXAttributeName,float>& OutNormalizedAttributeValues); \
 \
	DECLARE_FUNCTION(execModulateMatrix); \
	DECLARE_FUNCTION(execModulate);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execModulateMatrix); \
	DECLARE_FUNCTION(execModulate);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXModulator(); \
	friend struct Z_Construct_UClass_UDMXModulator_Statics; \
public: \
	DECLARE_CLASS(UDMXModulator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXModulator)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUDMXModulator(); \
	friend struct Z_Construct_UClass_UDMXModulator_Statics; \
public: \
	DECLARE_CLASS(UDMXModulator, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXModulator)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXModulator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXModulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXModulator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXModulator(UDMXModulator&&); \
	NO_API UDMXModulator(const UDMXModulator&); \
public: \
	NO_API virtual ~UDMXModulator();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXModulator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXModulator(UDMXModulator&&); \
	NO_API UDMXModulator(const UDMXModulator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXModulator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXModulator); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXModulator) \
	NO_API virtual ~UDMXModulator();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_19_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UDMXModulator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Modulators_DMXModulator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
