// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SunPosition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSunPositionData;
#ifdef SUNPOSITION_SunPosition_generated_h
#error "SunPosition.generated.h already included, missing '#pragma once' in SunPosition.h"
#endif
#define SUNPOSITION_SunPosition_generated_h

#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSunPositionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SUNPOSITION_API UScriptStruct* StaticStruct<struct FSunPositionData>();

#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSunPosition);


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSunPosition);


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ACCESSORS
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSunPositionFunctionLibrary(); \
	friend struct Z_Construct_UClass_USunPositionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USunPositionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SunPosition"), NO_API) \
	DECLARE_SERIALIZER(USunPositionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUSunPositionFunctionLibrary(); \
	friend struct Z_Construct_UClass_USunPositionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USunPositionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SunPosition"), NO_API) \
	DECLARE_SERIALIZER(USunPositionFunctionLibrary)


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USunPositionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USunPositionFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USunPositionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USunPositionFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USunPositionFunctionLibrary(USunPositionFunctionLibrary&&); \
	NO_API USunPositionFunctionLibrary(const USunPositionFunctionLibrary&); \
public: \
	NO_API virtual ~USunPositionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USunPositionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USunPositionFunctionLibrary(USunPositionFunctionLibrary&&); \
	NO_API USunPositionFunctionLibrary(const USunPositionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USunPositionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USunPositionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USunPositionFunctionLibrary) \
	NO_API virtual ~USunPositionFunctionLibrary();


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_46_PROLOG
#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ACCESSORS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ACCESSORS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUNPOSITION_API UClass* StaticClass<class USunPositionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SunPosition_Source_SunPosition_Public_SunPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
