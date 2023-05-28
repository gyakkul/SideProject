// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetDefinition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETDEFINITION_AssetDefinition_generated_h
#error "AssetDefinition.generated.h already included, missing '#pragma once' in AssetDefinition.h"
#endif
#define ASSETDEFINITION_AssetDefinition_generated_h

#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_184_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRevisionInfo_Statics; \
	ASSETDEFINITION_API static class UScriptStruct* StaticStruct();


template<> ASSETDEFINITION_API UScriptStruct* StaticStruct<struct FRevisionInfo>();

#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_SPARSE_DATA
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_RPC_WRAPPERS
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_ACCESSORS
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetDefinition(); \
	friend struct Z_Construct_UClass_UAssetDefinition_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AssetDefinition"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition)


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_INCLASS \
private: \
	static void StaticRegisterNativesUAssetDefinition(); \
	friend struct Z_Construct_UClass_UAssetDefinition_Statics; \
public: \
	DECLARE_CLASS(UAssetDefinition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AssetDefinition"), NO_API) \
	DECLARE_SERIALIZER(UAssetDefinition)


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetDefinition(UAssetDefinition&&); \
	NO_API UAssetDefinition(const UAssetDefinition&); \
public: \
	NO_API virtual ~UAssetDefinition();


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetDefinition(UAssetDefinition&&); \
	NO_API UAssetDefinition(const UAssetDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetDefinition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetDefinition); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAssetDefinition) \
	NO_API virtual ~UAssetDefinition();


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_377_PROLOG
#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_SPARSE_DATA \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_RPC_WRAPPERS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_ACCESSORS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_INCLASS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_SPARSE_DATA \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_ACCESSORS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h_380_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETDEFINITION_API UClass* StaticClass<class UAssetDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_AssetDefinition_Public_AssetDefinition_h


#define FOREACH_ENUM_EASSETACTIVATIONMETHOD(op) \
	op(EAssetActivationMethod::DoubleClicked) \
	op(EAssetActivationMethod::Opened) \
	op(EAssetActivationMethod::Previewed) 

enum class EAssetActivationMethod : uint8;
template<> struct TIsUEnumClass<EAssetActivationMethod> { enum { Value = true }; };
template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetActivationMethod>();

#define FOREACH_ENUM_EASSETCOMMANDRESULT(op) \
	op(EAssetCommandResult::Handled) \
	op(EAssetCommandResult::Unhandled) 

enum class EAssetCommandResult : uint8;
template<> struct TIsUEnumClass<EAssetCommandResult> { enum { Value = true }; };
template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetCommandResult>();

#define FOREACH_ENUM_EASSETOPENMETHOD(op) \
	op(EAssetOpenMethod::Edit) \
	op(EAssetOpenMethod::View) 

enum class EAssetOpenMethod : uint8;
template<> struct TIsUEnumClass<EAssetOpenMethod> { enum { Value = true }; };
template<> ASSETDEFINITION_API UEnum* StaticEnum<EAssetOpenMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
