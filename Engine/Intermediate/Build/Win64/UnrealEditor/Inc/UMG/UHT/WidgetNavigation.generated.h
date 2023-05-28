// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/WidgetNavigation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWidget;
enum class EUINavigation : uint8;
#ifdef UMG_WidgetNavigation_generated_h
#error "WidgetNavigation.generated.h already included, missing '#pragma once' in WidgetNavigation.h"
#endif
#define UMG_WidgetNavigation_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_15_DELEGATE \
UMG_API UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UMG_API UScriptStruct* StaticStruct<struct FWidgetNavigationData>();

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_SPARSE_DATA
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ACCESSORS
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct Z_Construct_UClass_UWidgetNavigation_Statics; \
public: \
	DECLARE_CLASS(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetNavigation(); \
	friend struct Z_Construct_UClass_UWidgetNavigation_Statics; \
public: \
	DECLARE_CLASS(UWidgetNavigation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetNavigation)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetNavigation(UWidgetNavigation&&); \
	NO_API UWidgetNavigation(const UWidgetNavigation&); \
public: \
	NO_API virtual ~UWidgetNavigation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetNavigation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetNavigation(UWidgetNavigation&&); \
	NO_API UWidgetNavigation(const UWidgetNavigation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetNavigation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetNavigation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetNavigation) \
	NO_API virtual ~UWidgetNavigation();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_49_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_SPARSE_DATA \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_52_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetNavigation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetNavigation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
