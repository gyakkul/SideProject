// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationData_generated_h
#error "NavigationData.generated.h already included, missing '#pragma once' in NavigationData.h"
#endif
#define NAVIGATIONSYSTEM_NavigationData_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportedAreaData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FSupportedAreaData>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationData(); \
	friend struct Z_Construct_UClass_ANavigationData_Statics; \
public: \
	DECLARE_CLASS(ANavigationData, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavigationData) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationData*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_INCLASS \
private: \
	static void StaticRegisterNativesANavigationData(); \
	friend struct Z_Construct_UClass_ANavigationData_Statics; \
public: \
	DECLARE_CLASS(ANavigationData, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavigationData) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationData*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavigationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationData(ANavigationData&&); \
	NO_API ANavigationData(const ANavigationData&); \
public: \
	NO_API virtual ~ANavigationData();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavigationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationData(ANavigationData&&); \
	NO_API ANavigationData(const ANavigationData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationData); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationData) \
	NO_API virtual ~ANavigationData();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_495_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_498_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationData."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavigationData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h


#define FOREACH_ENUM_ERUNTIMEGENERATIONTYPE(op) \
	op(ERuntimeGenerationType::Static) \
	op(ERuntimeGenerationType::DynamicModifiersOnly) \
	op(ERuntimeGenerationType::Dynamic) \
	op(ERuntimeGenerationType::LegacyGeneration) 

enum class ERuntimeGenerationType : uint8;
template<> struct TIsUEnumClass<ERuntimeGenerationType> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERuntimeGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
