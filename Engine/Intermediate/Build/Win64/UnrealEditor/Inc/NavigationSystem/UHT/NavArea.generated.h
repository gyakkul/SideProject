// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavArea.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavArea_generated_h
#error "NavArea.generated.h already included, missing '#pragma once' in NavArea.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavArea, NO_API)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavArea(); \
	friend struct Z_Construct_UClass_UNavArea_Statics; \
public: \
	DECLARE_CLASS(UNavArea, UNavAreaBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUNavArea(); \
	friend struct Z_Construct_UClass_UNavArea_Statics; \
public: \
	DECLARE_CLASS(UNavArea, UNavAreaBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavArea) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavArea(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavArea(UNavArea&&); \
	NO_API UNavArea(const UNavArea&); \
public: \
	NO_API virtual ~UNavArea();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavArea(UNavArea&&); \
	NO_API UNavArea(const UNavArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavArea); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea) \
	NO_API virtual ~UNavArea();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_14_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
