// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSimulationSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSSIMULATION_MassSimulationSubsystem_generated_h
#error "MassSimulationSubsystem.generated.h already included, missing '#pragma once' in MassSimulationSubsystem.h"
#endif
#define MASSSIMULATION_MassSimulationSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimulationSubsystem(); \
	friend struct Z_Construct_UClass_UMassSimulationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassSimulationSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSimulation"), NO_API) \
	DECLARE_SERIALIZER(UMassSimulationSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMassSimulationSubsystem(); \
	friend struct Z_Construct_UClass_UMassSimulationSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassSimulationSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/MassSimulation"), NO_API) \
	DECLARE_SERIALIZER(UMassSimulationSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassSimulationSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSimulationSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSimulationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSimulationSubsystem(UMassSimulationSubsystem&&); \
	NO_API UMassSimulationSubsystem(const UMassSimulationSubsystem&); \
public: \
	NO_API virtual ~UMassSimulationSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSimulationSubsystem(UMassSimulationSubsystem&&); \
	NO_API UMassSimulationSubsystem(const UMassSimulationSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSimulationSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationSubsystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSimulationSubsystem) \
	NO_API virtual ~UMassSimulationSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSSIMULATION_API UClass* StaticClass<class UMassSimulationSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSimulation_Public_MassSimulationSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
