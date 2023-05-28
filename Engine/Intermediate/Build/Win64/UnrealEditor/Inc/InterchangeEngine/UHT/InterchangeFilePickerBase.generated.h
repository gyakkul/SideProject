// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeFilePickerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeTranslatorAssetType : uint8;
enum class EInterchangeTranslatorType : uint8;
struct FInterchangeFilePickerParameters;
#ifdef INTERCHANGEENGINE_InterchangeFilePickerBase_generated_h
#error "InterchangeFilePickerBase.generated.h already included, missing '#pragma once' in InterchangeFilePickerBase.h"
#endif
#define INTERCHANGEENGINE_InterchangeFilePickerBase_generated_h

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeFilePickerParameters_Statics; \
	INTERCHANGEENGINE_API static class UScriptStruct* StaticStruct();


template<> INTERCHANGEENGINE_API UScriptStruct* StaticStruct<struct FInterchangeFilePickerParameters>();

#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_SPARSE_DATA
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS \
	virtual bool ScriptedFilePickerForTranslatorType_Implementation(const EInterchangeTranslatorType TranslatorType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); \
	virtual bool ScriptedFilePickerForTranslatorAssetType_Implementation(const EInterchangeTranslatorAssetType TranslatorAssetType, FInterchangeFilePickerParameters& Parameters, TArray<FString>& OutFilenames); \
 \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorType); \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorAssetType);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorType); \
	DECLARE_FUNCTION(execScriptedFilePickerForTranslatorAssetType);


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ACCESSORS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFilePickerBase(); \
	friend struct Z_Construct_UClass_UInterchangeFilePickerBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFilePickerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeFilePickerBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeFilePickerBase(); \
	friend struct Z_Construct_UClass_UInterchangeFilePickerBase_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFilePickerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeEngine"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeFilePickerBase)


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeFilePickerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFilePickerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeFilePickerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFilePickerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeFilePickerBase(UInterchangeFilePickerBase&&); \
	NO_API UInterchangeFilePickerBase(const UInterchangeFilePickerBase&); \
public: \
	NO_API virtual ~UInterchangeFilePickerBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeFilePickerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeFilePickerBase(UInterchangeFilePickerBase&&); \
	NO_API UInterchangeFilePickerBase(const UInterchangeFilePickerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeFilePickerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFilePickerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFilePickerBase) \
	NO_API virtual ~UInterchangeFilePickerBase();


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_30_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_SPARSE_DATA \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ACCESSORS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEENGINE_API UClass* StaticClass<class UInterchangeFilePickerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Engine_Public_InterchangeFilePickerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
