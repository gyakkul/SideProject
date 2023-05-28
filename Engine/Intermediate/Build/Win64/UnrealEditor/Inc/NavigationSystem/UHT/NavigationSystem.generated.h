// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class ANavigationData;
class ANavMeshBoundsVolume;
class UNavArea;
class UNavigationPath;
class UNavigationQueryFilter;
class UNavigationSystemV1;
class UObject;
enum class ENavDataGatheringModeConfig : uint8;
#ifdef NAVIGATIONSYSTEM_NavigationSystem_generated_h
#error "NavigationSystem.generated.h already included, missing '#pragma once' in NavigationSystem.h"
#endif
#define NAVIGATIONSYSTEM_NavigationSystem_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_56_DELEGATE \
NAVIGATIONSYSTEM_API void FOnNavDataGenericEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenericEvent, ANavigationData* NavData);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated); \
	DECLARE_FUNCTION(execK2_ReplaceAreaInOctreeData); \
	DECLARE_FUNCTION(execSetGeometryGatheringMode); \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker); \
	DECLARE_FUNCTION(execRegisterNavigationInvoker); \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execNavigationRaycast); \
	DECLARE_FUNCTION(execFindPathToActorSynchronously); \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously); \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked); \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execK2_GetRandomLocationInNavigableRadius); \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation); \
	DECLARE_FUNCTION(execGetNavigationSystem);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated); \
	DECLARE_FUNCTION(execK2_ReplaceAreaInOctreeData); \
	DECLARE_FUNCTION(execSetGeometryGatheringMode); \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker); \
	DECLARE_FUNCTION(execRegisterNavigationInvoker); \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execNavigationRaycast); \
	DECLARE_FUNCTION(execFindPathToActorSynchronously); \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously); \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked); \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execK2_GetRandomLocationInNavigableRadius); \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation); \
	DECLARE_FUNCTION(execGetNavigationSystem);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemV1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public:


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_243_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_246_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemV1>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_SPARSE_DATA
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_ACCESSORS
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemModuleConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public: \
	NO_API virtual ~UNavigationSystemModuleConfig();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig) \
	NO_API virtual ~UNavigationSystemModuleConfig();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1331_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_SPARSE_DATA \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_ACCESSORS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1334_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemModuleConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
