// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFieldNodeBase;
class UFieldSystemMetaData;
class UGeometryCollection;
class UGeometryCollectionComponent;
enum class EGeometryCollectionPhysicsTypeEnum : uint8;
struct FChaosBreakEvent;
struct FChaosCrumblingEvent;
struct FChaosPhysicsCollisionInfo;
struct FChaosRemovalEvent;
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h
#error "GeometryCollectionComponent.generated.h already included, missing '#pragma once' in GeometryCollectionComponent.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_58_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_60_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosRemovalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvent, FChaosRemovalEvent const& RemovalEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_62_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosCrumblingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCrumblingEvent, FChaosCrumblingEvent const& CrumbleEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeomComponentCacheParameters>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_385_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRepData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_837_DELEGATE \
static void FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_844_DELEGATE \
static void FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_SPARSE_DATA
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetNotifyCrumblings); \
	DECLARE_FUNCTION(execSetNotifyRemovals); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField); \
	DECLARE_FUNCTION(execSetEnableDamageFromCollision); \
	DECLARE_FUNCTION(execGetDebugInfo); \
	DECLARE_FUNCTION(execSetRestCollection); \
	DECLARE_FUNCTION(execGetMassAndExtents); \
	DECLARE_FUNCTION(execGetRootIndex); \
	DECLARE_FUNCTION(execGetInitialLevel); \
	DECLARE_FUNCTION(execApplyAngularVelocity); \
	DECLARE_FUNCTION(execApplyLinearVelocity); \
	DECLARE_FUNCTION(execApplyBreakingAngularVelocity); \
	DECLARE_FUNCTION(execApplyBreakingLinearVelocity); \
	DECLARE_FUNCTION(execRemoveAllAnchors); \
	DECLARE_FUNCTION(execSetAnchoredByTransformedBox); \
	DECLARE_FUNCTION(execSetAnchoredByBox); \
	DECLARE_FUNCTION(execSetAnchoredByIndex); \
	DECLARE_FUNCTION(execCrumbleActiveClusters); \
	DECLARE_FUNCTION(execCrumbleCluster); \
	DECLARE_FUNCTION(execApplyInternalStrain); \
	DECLARE_FUNCTION(execApplyExternalStrain); \
	DECLARE_FUNCTION(execGetLocalBounds);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetNotifyCrumblings); \
	DECLARE_FUNCTION(execSetNotifyRemovals); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField); \
	DECLARE_FUNCTION(execSetEnableDamageFromCollision); \
	DECLARE_FUNCTION(execGetDebugInfo); \
	DECLARE_FUNCTION(execSetRestCollection); \
	DECLARE_FUNCTION(execGetMassAndExtents); \
	DECLARE_FUNCTION(execGetRootIndex); \
	DECLARE_FUNCTION(execGetInitialLevel); \
	DECLARE_FUNCTION(execApplyAngularVelocity); \
	DECLARE_FUNCTION(execApplyLinearVelocity); \
	DECLARE_FUNCTION(execApplyBreakingAngularVelocity); \
	DECLARE_FUNCTION(execApplyBreakingLinearVelocity); \
	DECLARE_FUNCTION(execRemoveAllAnchors); \
	DECLARE_FUNCTION(execSetAnchoredByTransformedBox); \
	DECLARE_FUNCTION(execSetAnchoredByBox); \
	DECLARE_FUNCTION(execSetAnchoredByIndex); \
	DECLARE_FUNCTION(execCrumbleActiveClusters); \
	DECLARE_FUNCTION(execCrumbleCluster); \
	DECLARE_FUNCTION(execApplyInternalStrain); \
	DECLARE_FUNCTION(execApplyExternalStrain); \
	DECLARE_FUNCTION(execGetLocalBounds);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_ACCESSORS
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), NO_API) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		NETFIELD_REP_END=RepData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollectionComponent(UGeometryCollectionComponent&&); \
	NO_API UGeometryCollectionComponent(const UGeometryCollectionComponent&); \
public: \
	NO_API virtual ~UGeometryCollectionComponent();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeometryCollectionComponent(UGeometryCollectionComponent&&); \
	NO_API UGeometryCollectionComponent(const UGeometryCollectionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometryCollectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent) \
	NO_API virtual ~UGeometryCollectionComponent();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_431_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_SPARSE_DATA \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_ACCESSORS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_434_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GeometryCollectionComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UGeometryCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
