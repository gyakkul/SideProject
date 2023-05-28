// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphTestingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZONEGRAPHDEBUG_ZoneGraphTestingActor_generated_h
#error "ZoneGraphTestingActor.generated.h already included, missing '#pragma once' in ZoneGraphTestingActor.h"
#endif
#define ZONEGRAPHDEBUG_ZoneGraphTestingActor_generated_h

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_ACCESSORS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneLaneTest(); \
	friend struct Z_Construct_UClass_UZoneLaneTest_Statics; \
public: \
	DECLARE_CLASS(UZoneLaneTest, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(UZoneLaneTest)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUZoneLaneTest(); \
	friend struct Z_Construct_UClass_UZoneLaneTest_Statics; \
public: \
	DECLARE_CLASS(UZoneLaneTest, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(UZoneLaneTest)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneLaneTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneLaneTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneLaneTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneLaneTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneLaneTest(UZoneLaneTest&&); \
	NO_API UZoneLaneTest(const UZoneLaneTest&); \
public: \
	NO_API virtual ~UZoneLaneTest();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneLaneTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneLaneTest(UZoneLaneTest&&); \
	NO_API UZoneLaneTest(const UZoneLaneTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneLaneTest); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneLaneTest); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneLaneTest) \
	NO_API virtual ~UZoneLaneTest();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_18_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_INCLASS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZONEGRAPHDEBUG_API UClass* StaticClass<class UZoneLaneTest>();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_ACCESSORS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneGraphTestingComponent(); \
	friend struct Z_Construct_UClass_UZoneGraphTestingComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneGraphTestingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(UZoneGraphTestingComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUZoneGraphTestingComponent(); \
	friend struct Z_Construct_UClass_UZoneGraphTestingComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneGraphTestingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(UZoneGraphTestingComponent)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneGraphTestingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphTestingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneGraphTestingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphTestingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneGraphTestingComponent(UZoneGraphTestingComponent&&); \
	NO_API UZoneGraphTestingComponent(const UZoneGraphTestingComponent&); \
public: \
	NO_API virtual ~UZoneGraphTestingComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneGraphTestingComponent(UZoneGraphTestingComponent&&); \
	NO_API UZoneGraphTestingComponent(const UZoneGraphTestingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneGraphTestingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneGraphTestingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneGraphTestingComponent) \
	NO_API virtual ~UZoneGraphTestingComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_38_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_INCLASS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZONEGRAPHDEBUG_API UClass* StaticClass<class UZoneGraphTestingComponent>();

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableCustomTests); \
	DECLARE_FUNCTION(execEnableCustomTests);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_ACCESSORS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZoneGraphTestingActor(); \
	friend struct Z_Construct_UClass_AZoneGraphTestingActor_Statics; \
public: \
	DECLARE_CLASS(AZoneGraphTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(AZoneGraphTestingActor)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_INCLASS \
private: \
	static void StaticRegisterNativesAZoneGraphTestingActor(); \
	friend struct Z_Construct_UClass_AZoneGraphTestingActor_Statics; \
public: \
	DECLARE_CLASS(AZoneGraphTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraphDebug"), NO_API) \
	DECLARE_SERIALIZER(AZoneGraphTestingActor)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZoneGraphTestingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneGraphTestingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZoneGraphTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneGraphTestingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZoneGraphTestingActor(AZoneGraphTestingActor&&); \
	NO_API AZoneGraphTestingActor(const AZoneGraphTestingActor&); \
public: \
	NO_API virtual ~AZoneGraphTestingActor();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZoneGraphTestingActor(AZoneGraphTestingActor&&); \
	NO_API AZoneGraphTestingActor(const AZoneGraphTestingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZoneGraphTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZoneGraphTestingActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZoneGraphTestingActor) \
	NO_API virtual ~AZoneGraphTestingActor();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_143_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_INCLASS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZONEGRAPHDEBUG_API UClass* StaticClass<class AZoneGraphTestingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraphDebug_Public_ZoneGraphTestingActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
