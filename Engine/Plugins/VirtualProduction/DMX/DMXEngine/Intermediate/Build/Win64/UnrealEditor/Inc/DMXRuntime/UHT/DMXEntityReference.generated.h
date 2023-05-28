// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/DMXEntityReference.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityController;
class UDMXEntityFixturePatch;
class UDMXEntityFixtureType;
struct FDMXEntityControllerRef;
struct FDMXEntityFixturePatchRef;
struct FDMXEntityFixtureTypeRef;
#ifdef DMXRUNTIME_DMXEntityReference_generated_h
#error "DMXEntityReference.generated.h already included, missing '#pragma once' in DMXEntityReference.h"
#endif
#define DMXRUNTIME_DMXEntityReference_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXEntityReference_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXEntityReference>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXEntityControllerRef>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXEntityFixtureTypeRef>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDMXEntityReference Super;


template<> DMXRUNTIME_API UScriptStruct* StaticStruct<struct FDMXEntityFixturePatchRef>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FixturePatchObjToRef); \
	DECLARE_FUNCTION(execConv_FixtureTypeObjToRef); \
	DECLARE_FUNCTION(execConv_ControllerObjToRef); \
	DECLARE_FUNCTION(execConv_FixturePatchRefToObj); \
	DECLARE_FUNCTION(execConv_FixtureTypeRefToObj); \
	DECLARE_FUNCTION(execConv_ControllerRefToObj);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FixturePatchObjToRef); \
	DECLARE_FUNCTION(execConv_FixtureTypeObjToRef); \
	DECLARE_FUNCTION(execConv_ControllerObjToRef); \
	DECLARE_FUNCTION(execConv_FixturePatchRefToObj); \
	DECLARE_FUNCTION(execConv_FixtureTypeRefToObj); \
	DECLARE_FUNCTION(execConv_ControllerRefToObj);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXEntityReferenceConversions(); \
	friend struct Z_Construct_UClass_UDMXEntityReferenceConversions_Statics; \
public: \
	DECLARE_CLASS(UDMXEntityReferenceConversions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXEntityReferenceConversions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_INCLASS \
private: \
	static void StaticRegisterNativesUDMXEntityReferenceConversions(); \
	friend struct Z_Construct_UClass_UDMXEntityReferenceConversions_Statics; \
public: \
	DECLARE_CLASS(UDMXEntityReferenceConversions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXEntityReferenceConversions)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXEntityReferenceConversions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXEntityReferenceConversions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityReferenceConversions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityReferenceConversions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXEntityReferenceConversions(UDMXEntityReferenceConversions&&); \
	NO_API UDMXEntityReferenceConversions(const UDMXEntityReferenceConversions&); \
public: \
	NO_API virtual ~UDMXEntityReferenceConversions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXEntityReferenceConversions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXEntityReferenceConversions(UDMXEntityReferenceConversions&&); \
	NO_API UDMXEntityReferenceConversions(const UDMXEntityReferenceConversions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXEntityReferenceConversions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXEntityReferenceConversions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXEntityReferenceConversions) \
	NO_API virtual ~UDMXEntityReferenceConversions();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_144_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_148_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UDMXEntityReferenceConversions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
