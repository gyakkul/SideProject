// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Filters/SBasicFilterBar.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOOLWIDGETS_SBasicFilterBar_generated_h
#error "SBasicFilterBar.generated.h already included, missing '#pragma once' in SBasicFilterBar.h"
#endif
#define TOOLWIDGETS_SBasicFilterBar_generated_h

#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_SPARSE_DATA
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_RPC_WRAPPERS
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_ACCESSORS
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilterBarContext(); \
	friend struct Z_Construct_UClass_UFilterBarContext_Statics; \
public: \
	DECLARE_CLASS(UFilterBarContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolWidgets"), NO_API) \
	DECLARE_SERIALIZER(UFilterBarContext)


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUFilterBarContext(); \
	friend struct Z_Construct_UClass_UFilterBarContext_Statics; \
public: \
	DECLARE_CLASS(UFilterBarContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ToolWidgets"), NO_API) \
	DECLARE_SERIALIZER(UFilterBarContext)


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilterBarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterBarContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilterBarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterBarContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilterBarContext(UFilterBarContext&&); \
	NO_API UFilterBarContext(const UFilterBarContext&); \
public: \
	NO_API virtual ~UFilterBarContext();


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilterBarContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilterBarContext(UFilterBarContext&&); \
	NO_API UFilterBarContext(const UFilterBarContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilterBarContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilterBarContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilterBarContext) \
	NO_API virtual ~UFilterBarContext();


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_38_PROLOG
#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_RPC_WRAPPERS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_ACCESSORS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_INCLASS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_SPARSE_DATA \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_ACCESSORS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOOLWIDGETS_API UClass* StaticClass<class UFilterBarContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_ToolWidgets_Public_Filters_SBasicFilterBar_h


#define FOREACH_ENUM_EFILTERBARLAYOUT(op) \
	op(EFilterBarLayout::Horizontal) \
	op(EFilterBarLayout::Vertical) 

enum class EFilterBarLayout : uint8;
template<> struct TIsUEnumClass<EFilterBarLayout> { enum { Value = true }; };
template<> TOOLWIDGETS_API UEnum* StaticEnum<EFilterBarLayout>();

#define FOREACH_ENUM_EFILTERPILLSTYLE(op) \
	op(EFilterPillStyle::Default) \
	op(EFilterPillStyle::Basic) 

enum class EFilterPillStyle : uint8;
template<> struct TIsUEnumClass<EFilterPillStyle> { enum { Value = true }; };
template<> TOOLWIDGETS_API UEnum* StaticEnum<EFilterPillStyle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
