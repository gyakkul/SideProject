// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CSVtoSVGArguments.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CSVTOSVG_CSVtoSVGArguments_generated_h
#error "CSVtoSVGArguments.generated.h already included, missing '#pragma once' in CSVtoSVGArguments.h"
#endif
#define CSVTOSVG_CSVtoSVGArguments_generated_h

#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_SPARSE_DATA
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_RPC_WRAPPERS
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_ACCESSORS
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSVtoSVGArugments(); \
	friend struct Z_Construct_UClass_UCSVtoSVGArugments_Statics; \
public: \
	DECLARE_CLASS(UCSVtoSVGArugments, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CSVtoSVG"), NO_API) \
	DECLARE_SERIALIZER(UCSVtoSVGArugments)


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCSVtoSVGArugments(); \
	friend struct Z_Construct_UClass_UCSVtoSVGArugments_Statics; \
public: \
	DECLARE_CLASS(UCSVtoSVGArugments, UEditorConfigBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CSVtoSVG"), NO_API) \
	DECLARE_SERIALIZER(UCSVtoSVGArugments)


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVtoSVGArugments(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVtoSVGArugments) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVtoSVGArugments); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVtoSVGArugments); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVtoSVGArugments(UCSVtoSVGArugments&&); \
	NO_API UCSVtoSVGArugments(const UCSVtoSVGArugments&); \
public: \
	NO_API virtual ~UCSVtoSVGArugments();


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSVtoSVGArugments(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSVtoSVGArugments(UCSVtoSVGArugments&&); \
	NO_API UCSVtoSVGArugments(const UCSVtoSVGArugments&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSVtoSVGArugments); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSVtoSVGArugments); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSVtoSVGArugments) \
	NO_API virtual ~UCSVtoSVGArugments();


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_29_PROLOG
#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_RPC_WRAPPERS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_ACCESSORS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_SPARSE_DATA \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_ACCESSORS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CSVtoSVGArugments."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CSVTOSVG_API UClass* StaticClass<class UCSVtoSVGArugments>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h


#define FOREACH_ENUM_ESVGTHEME(op) \
	op(ESVGTheme::Dark) \
	op(ESVGTheme::Light) 

enum class ESVGTheme;
template<> struct TIsUEnumClass<ESVGTheme> { enum { Value = true }; };
template<> CSVTOSVG_API UEnum* StaticEnum<ESVGTheme>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
