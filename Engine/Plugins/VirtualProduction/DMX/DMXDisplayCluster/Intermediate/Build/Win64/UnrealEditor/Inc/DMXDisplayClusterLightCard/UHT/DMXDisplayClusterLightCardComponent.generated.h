// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXDisplayClusterLightCardComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXNormalizedAttributeValueMap;
#ifdef DMXDISPLAYCLUSTERLIGHTCARD_DMXDisplayClusterLightCardComponent_generated_h
#error "DMXDisplayClusterLightCardComponent.generated.h already included, missing '#pragma once' in DMXDisplayClusterLightCardComponent.h"
#endif
#define DMXDISPLAYCLUSTERLIGHTCARD_DMXDisplayClusterLightCardComponent_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXDisplayClusterLightCardActorDataValueRanges_Statics; \
	DMXDISPLAYCLUSTERLIGHTCARD_API static class UScriptStruct* StaticStruct();


template<> DMXDISPLAYCLUSTERLIGHTCARD_API UScriptStruct* StaticStruct<struct FDMXDisplayClusterLightCardActorDataValueRanges>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnLightCardReceivedDMXFromPatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnLightCardReceivedDMXFromPatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXDisplayClusterLightCardComponent(); \
	friend struct Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXDisplayClusterLightCardComponent, UDMXComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXDisplayClusterLightCard"), NO_API) \
	DECLARE_SERIALIZER(UDMXDisplayClusterLightCardComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUDMXDisplayClusterLightCardComponent(); \
	friend struct Z_Construct_UClass_UDMXDisplayClusterLightCardComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXDisplayClusterLightCardComponent, UDMXComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXDisplayClusterLightCard"), NO_API) \
	DECLARE_SERIALIZER(UDMXDisplayClusterLightCardComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXDisplayClusterLightCardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXDisplayClusterLightCardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXDisplayClusterLightCardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXDisplayClusterLightCardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXDisplayClusterLightCardComponent(UDMXDisplayClusterLightCardComponent&&); \
	NO_API UDMXDisplayClusterLightCardComponent(const UDMXDisplayClusterLightCardComponent&); \
public: \
	NO_API virtual ~UDMXDisplayClusterLightCardComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXDisplayClusterLightCardComponent(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXDisplayClusterLightCardComponent(UDMXDisplayClusterLightCardComponent&&); \
	NO_API UDMXDisplayClusterLightCardComponent(const UDMXDisplayClusterLightCardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXDisplayClusterLightCardComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXDisplayClusterLightCardComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXDisplayClusterLightCardComponent) \
	NO_API virtual ~UDMXDisplayClusterLightCardComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_117_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h_121_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXDISPLAYCLUSTERLIGHTCARD_API UClass* StaticClass<class UDMXDisplayClusterLightCardComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXDisplayCluster_Source_DMXDisplayClusterLightCard_Private_DMXDisplayClusterLightCardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
