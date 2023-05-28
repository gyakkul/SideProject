// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/Subsystems/NetworkSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetworkSubsystem_generated_h
#error "NetworkSubsystem.generated.h already included, missing '#pragma once' in NetworkSubsystem.h"
#endif
#define ENGINE_NetworkSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetworkSubsystem, NO_API)


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkSubsystem(); \
	friend struct Z_Construct_UClass_UNetworkSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNetworkSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkSubsystem) \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUNetworkSubsystem(); \
	friend struct Z_Construct_UClass_UNetworkSubsystem_Statics; \
public: \
	DECLARE_CLASS(UNetworkSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkSubsystem) \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkSubsystem(UNetworkSubsystem&&); \
	NO_API UNetworkSubsystem(const UNetworkSubsystem&); \
public: \
	NO_API virtual ~UNetworkSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNetworkSubsystem(UNetworkSubsystem&&); \
	NO_API UNetworkSubsystem(const UNetworkSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkSubsystem) \
	NO_API virtual ~UNetworkSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_Subsystems_NetworkSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
