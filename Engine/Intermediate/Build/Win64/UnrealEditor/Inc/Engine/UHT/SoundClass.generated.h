// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundClass_generated_h
#error "SoundClass.generated.h already included, missing '#pragma once' in SoundClass.h"
#endif
#define ENGINE_SoundClass_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassEditorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundClassProperties_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundClassProperties>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPassiveSoundMixModifier_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPassiveSoundMixModifier>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundClass, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend struct Z_Construct_UClass_USoundClass_Statics; \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundClass) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_INCLASS \
private: \
	static void StaticRegisterNativesUSoundClass(); \
	friend struct Z_Construct_UClass_USoundClass_Statics; \
public: \
	DECLARE_CLASS(USoundClass, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundClass) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundClass(USoundClass&&); \
	NO_API USoundClass(const USoundClass&); \
public: \
	NO_API virtual ~USoundClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundClass(USoundClass&&); \
	NO_API USoundClass(const USoundClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundClass) \
	NO_API virtual ~USoundClass();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_199_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h_202_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
