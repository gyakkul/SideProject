// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationGraph_generated_h
#error "NavigationGraph.generated.h already included, missing '#pragma once' in NavigationGraph.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraph_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavGraphEdge_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavGraphEdge>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavGraphNode_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavGraphNode>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationGraph(); \
	friend struct Z_Construct_UClass_ANavigationGraph_Statics; \
public: \
	DECLARE_CLASS(ANavigationGraph, ANavigationData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavigationGraph)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraph(); \
	friend struct Z_Construct_UClass_ANavigationGraph_Statics; \
public: \
	DECLARE_CLASS(ANavigationGraph, ANavigationData, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavigationGraph)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraph) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraph); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API ANavigationGraph(ANavigationGraph&&); \
	NAVIGATIONSYSTEM_API ANavigationGraph(const ANavigationGraph&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~ANavigationGraph();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationGraph(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVIGATIONSYSTEM_API ANavigationGraph(ANavigationGraph&&); \
	NAVIGATIONSYSTEM_API ANavigationGraph(const ANavigationGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraph); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraph) \
	NAVIGATIONSYSTEM_API virtual ~ANavigationGraph();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_58_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NavigationGraph."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavigationGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
