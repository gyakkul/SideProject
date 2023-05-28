// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AI/NavigationSystemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationSystemBase_generated_h
#error "NavigationSystemBase.generated.h already included, missing '#pragma once' in NavigationSystemBase.h"
#endif
#define ENGINE_NavigationSystemBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase)


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_220_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h


#define FOREACH_ENUM_FNAVIGATIONSYSTEMRUNMODE(op) \
	op(FNavigationSystemRunMode::InvalidMode) \
	op(FNavigationSystemRunMode::GameMode) \
	op(FNavigationSystemRunMode::EditorMode) \
	op(FNavigationSystemRunMode::SimulationMode) \
	op(FNavigationSystemRunMode::PIEMode) \
	op(FNavigationSystemRunMode::InferFromWorldMode) \
	op(FNavigationSystemRunMode::EditorWorldPartitionBuildMode) 

enum class FNavigationSystemRunMode : uint8;
template<> struct TIsUEnumClass<FNavigationSystemRunMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
