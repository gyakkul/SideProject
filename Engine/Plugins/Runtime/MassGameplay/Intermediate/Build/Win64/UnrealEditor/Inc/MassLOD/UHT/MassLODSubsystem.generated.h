// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MassLODSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MASSLOD_MassLODSubsystem_generated_h
#error "MassLODSubsystem.generated.h already included, missing '#pragma once' in MassLODSubsystem.h"
#endif
#define MASSLOD_MassLODSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMassViewerHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FIndexedHandleBase Super;


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FMassViewerHandle>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FViewerInfo_Statics; \
	MASSLOD_API static class UScriptStruct* StaticStruct();


template<> MASSLOD_API UScriptStruct* StaticStruct<struct FViewerInfo>();

#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerControllerEndPlay);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerControllerEndPlay);


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_ACCESSORS
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMassLODSubsystem(); \
	friend struct Z_Construct_UClass_UMassLODSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassLODSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassLOD"), NO_API) \
	DECLARE_SERIALIZER(UMassLODSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_INCLASS \
private: \
	static void StaticRegisterNativesUMassLODSubsystem(); \
	friend struct Z_Construct_UClass_UMassLODSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMassLODSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MassLOD"), NO_API) \
	DECLARE_SERIALIZER(UMassLODSubsystem)


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassLODSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMassLODSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassLODSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLODSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassLODSubsystem(UMassLODSubsystem&&); \
	NO_API UMassLODSubsystem(const UMassLODSubsystem&); \
public: \
	NO_API virtual ~UMassLODSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMassLODSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMassLODSubsystem(UMassLODSubsystem&&); \
	NO_API UMassLODSubsystem(const UMassLODSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMassLODSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMassLODSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMassLODSubsystem) \
	NO_API virtual ~UMassLODSubsystem();


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_57_PROLOG
#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_INCLASS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_ACCESSORS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MASSLOD_API UClass* StaticClass<class UMassLODSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
