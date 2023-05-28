// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/DMXPixelMappingSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXPixelMapping;
class UDMXPixelMappingFixtureGroupComponent;
class UDMXPixelMappingMatrixComponent;
class UDMXPixelMappingOutputDMXComponent;
class UDMXPixelMappingRendererComponent;
class UDMXPixelMappingSubsystem;
#ifdef DMXPIXELMAPPINGRUNTIME_DMXPixelMappingSubsystem_generated_h
#error "DMXPixelMappingSubsystem.generated.h already included, missing '#pragma once' in DMXPixelMappingSubsystem.h"
#endif
#define DMXPIXELMAPPINGRUNTIME_DMXPixelMappingSubsystem_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMatrixComponent); \
	DECLARE_FUNCTION(execGetFixtureGroupComponent); \
	DECLARE_FUNCTION(execGetOutputDMXComponent); \
	DECLARE_FUNCTION(execGetRendererComponent); \
	DECLARE_FUNCTION(execGetDMXPixelMapping); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Pure);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMatrixComponent); \
	DECLARE_FUNCTION(execGetFixtureGroupComponent); \
	DECLARE_FUNCTION(execGetOutputDMXComponent); \
	DECLARE_FUNCTION(execGetRendererComponent); \
	DECLARE_FUNCTION(execGetDMXPixelMapping); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Callable); \
	DECLARE_FUNCTION(execGetDMXPixelMappingSubsystem_Pure);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingSubsystem(); \
	friend struct Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDMXPixelMappingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXPixelMappingSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDMXPixelMappingSubsystem(); \
	friend struct Z_Construct_UClass_UDMXPixelMappingSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDMXPixelMappingSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXPixelMappingRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXPixelMappingSubsystem)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXPixelMappingSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXPixelMappingSubsystem(UDMXPixelMappingSubsystem&&); \
	NO_API UDMXPixelMappingSubsystem(const UDMXPixelMappingSubsystem&); \
public: \
	NO_API virtual ~UDMXPixelMappingSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXPixelMappingSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXPixelMappingSubsystem(UDMXPixelMappingSubsystem&&); \
	NO_API UDMXPixelMappingSubsystem(const UDMXPixelMappingSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXPixelMappingSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXPixelMappingSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXPixelMappingSubsystem) \
	NO_API virtual ~UDMXPixelMappingSubsystem();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_9_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<class UDMXPixelMappingSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Blueprint_DMXPixelMappingSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
