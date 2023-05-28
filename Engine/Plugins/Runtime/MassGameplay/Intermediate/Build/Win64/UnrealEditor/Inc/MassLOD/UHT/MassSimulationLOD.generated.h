// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassSimulationLOD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MASSLOD_MassSimulationLOD_generated_h
#error "MassSimulationLOD.generated.h already included, missing '#pragma once' in MassSimulationLOD.h"
#endif
#define MASSLOD_MassSimulationLOD_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationLODFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationLODFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationVariableTickFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationVariableTickFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationVariableTickChunkFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassVariableTickChunkFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationVariableTickChunkFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationLODParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationLODParameters>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationVariableTickParameters_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationVariableTickParameters>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationLODSharedFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationLODSharedFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassSimulationVariableTickSharedFragment_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FMassSharedFragment Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassSimulationVariableTickSharedFragment>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassSimulationLODProcessor(); \
	friend struct Z_Construct_UClass_UMassSimulationLODProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassSimulationLODProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), NO_API) \
	DECLARE_SERIALIZER(UMassSimulationLODProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_INCLASS \
private: \
	static void StaticRegisterNativesUMassSimulationLODProcessor(); \
	friend struct Z_Construct_UClass_UMassSimulationLODProcessor_Statics; \
public: \
	DECLARE_CLASS(UMassSimulationLODProcessor, UMassProcessor, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MassLOD"), NO_API) \
	DECLARE_SERIALIZER(UMassSimulationLODProcessor)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassSimulationLODProcessor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassSimulationLODProcessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSimulationLODProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationLODProcessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSimulationLODProcessor(UMassSimulationLODProcessor&&); \
	NO_API UMassSimulationLODProcessor(const UMassSimulationLODProcessor&); \
public: \
	NO_API virtual ~UMassSimulationLODProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassSimulationLODProcessor(UMassSimulationLODProcessor&&); \
	NO_API UMassSimulationLODProcessor(const UMassSimulationLODProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassSimulationLODProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassSimulationLODProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassSimulationLODProcessor) \
	NO_API virtual ~UMassSimulationLODProcessor();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_164_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSLOD_API UClass* StaticClass<class UMassSimulationLODProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassSimulationLOD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
