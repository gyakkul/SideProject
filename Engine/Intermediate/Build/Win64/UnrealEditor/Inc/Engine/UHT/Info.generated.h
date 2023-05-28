// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/Info.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Info_generated_h
#error "Info.generated.h already included, missing '#pragma once' in Info.h"
#endif
#define ENGINE_Info_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInfo(); \
	friend struct Z_Construct_UClass_AInfo_Statics; \
public: \
	DECLARE_CLASS(AInfo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AInfo)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAInfo(); \
	friend struct Z_Construct_UClass_AInfo_Statics; \
public: \
	DECLARE_CLASS(AInfo, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AInfo)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AInfo(AInfo&&); \
	ENGINE_API AInfo(const AInfo&); \
public: \
	ENGINE_API virtual ~AInfo();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API AInfo(AInfo&&); \
	ENGINE_API AInfo(const AInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInfo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInfo) \
	ENGINE_API virtual ~AInfo();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class Info."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
