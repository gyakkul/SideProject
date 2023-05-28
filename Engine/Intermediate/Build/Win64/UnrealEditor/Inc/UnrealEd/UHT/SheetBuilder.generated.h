// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/SheetBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALED_SheetBuilder_generated_h
#error "SheetBuilder.generated.h already included, missing '#pragma once' in SheetBuilder.h"
#endif
#define UNREALED_SheetBuilder_generated_h

#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_SPARSE_DATA
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_RPC_WRAPPERS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ACCESSORS
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSheetBuilder(); \
	friend struct Z_Construct_UClass_USheetBuilder_Statics; \
public: \
	DECLARE_CLASS(USheetBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USheetBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUSheetBuilder(); \
	friend struct Z_Construct_UClass_USheetBuilder_Statics; \
public: \
	DECLARE_CLASS(USheetBuilder, UEditorBrushBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealEd"), UNREALED_API) \
	DECLARE_SERIALIZER(USheetBuilder)


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UNREALED_API USheetBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheetBuilder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USheetBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheetBuilder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API USheetBuilder(USheetBuilder&&); \
	UNREALED_API USheetBuilder(const USheetBuilder&); \
public: \
	UNREALED_API virtual ~USheetBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNREALED_API USheetBuilder(USheetBuilder&&); \
	UNREALED_API USheetBuilder(const USheetBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UNREALED_API, USheetBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USheetBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USheetBuilder) \
	UNREALED_API virtual ~USheetBuilder();


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_26_PROLOG
#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_RPC_WRAPPERS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_SPARSE_DATA \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ACCESSORS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_30_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNREALED_API UClass* StaticClass<class USheetBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h


#define FOREACH_ENUM_ESHEETAXIS(op) \
	op(AX_Horizontal) \
	op(AX_XAxis) \
	op(AX_YAxis) 

enum ESheetAxis : int;
template<> UNREALED_API UEnum* StaticEnum<ESheetAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
