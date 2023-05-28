// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetDriver_generated_h
#error "NetDriver.generated.h already included, missing '#pragma once' in NetDriver.h"
#endif
#define ENGINE_NetDriver_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_413_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPacketSimulationSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_623_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChannelDefinition_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChannelDefinition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct Z_Construct_UClass_UNetDriver_Statics; \
public: \
	DECLARE_CLASS(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_INCLASS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct Z_Construct_UClass_UNetDriver_Statics; \
public: \
	DECLARE_CLASS(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetDriver(UNetDriver&&); \
	ENGINE_API UNetDriver(const UNetDriver&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UNetDriver(UNetDriver&&); \
	ENGINE_API UNetDriver(const UNetDriver&); \
public: \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_692_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_695_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NetDriver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
