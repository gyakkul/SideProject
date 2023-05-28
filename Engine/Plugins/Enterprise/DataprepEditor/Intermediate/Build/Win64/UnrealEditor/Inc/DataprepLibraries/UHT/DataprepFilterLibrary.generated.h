// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataprepFilterLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EDataprepSizeFilterMode : uint8;
enum class EDataprepSizeSource : uint8;
enum class EEditorScriptingStringMatchType : uint8;
#ifdef DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h
#error "DataprepFilterLibrary.generated.h already included, missing '#pragma once' in DataprepFilterLibrary.h"
#endif
#define DATAPREPLIBRARIES_DataprepFilterLibrary_generated_h

#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFilterByTag); \
	DECLARE_FUNCTION(execFilterBySize); \
	DECLARE_FUNCTION(execFilterByName); \
	DECLARE_FUNCTION(execFilterByClass);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFilterByTag); \
	DECLARE_FUNCTION(execFilterBySize); \
	DECLARE_FUNCTION(execFilterByName); \
	DECLARE_FUNCTION(execFilterByClass);


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ACCESSORS
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataprepFilterLibrary(); \
	friend struct Z_Construct_UClass_UDataprepFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFilterLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUDataprepFilterLibrary(); \
	friend struct Z_Construct_UClass_UDataprepFilterLibrary_Statics; \
public: \
	DECLARE_CLASS(UDataprepFilterLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataprepLibraries"), NO_API) \
	DECLARE_SERIALIZER(UDataprepFilterLibrary)


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFilterLibrary(UDataprepFilterLibrary&&); \
	NO_API UDataprepFilterLibrary(const UDataprepFilterLibrary&); \
public: \
	NO_API virtual ~UDataprepFilterLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataprepFilterLibrary(UDataprepFilterLibrary&&); \
	NO_API UDataprepFilterLibrary(const UDataprepFilterLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataprepFilterLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataprepFilterLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataprepFilterLibrary) \
	NO_API virtual ~UDataprepFilterLibrary();


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_24_PROLOG
#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ACCESSORS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAPREPLIBRARIES_API UClass* StaticClass<class UDataprepFilterLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h


#define FOREACH_ENUM_EDATAPREPSIZESOURCE(op) \
	op(EDataprepSizeSource::BoundingBoxVolume) 

enum class EDataprepSizeSource : uint8;
template<> struct TIsUEnumClass<EDataprepSizeSource> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeSource>();

#define FOREACH_ENUM_EDATAPREPSIZEFILTERMODE(op) \
	op(EDataprepSizeFilterMode::SmallerThan) \
	op(EDataprepSizeFilterMode::BiggerThan) 

enum class EDataprepSizeFilterMode : uint8;
template<> struct TIsUEnumClass<EDataprepSizeFilterMode> { enum { Value = true }; };
template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeFilterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
