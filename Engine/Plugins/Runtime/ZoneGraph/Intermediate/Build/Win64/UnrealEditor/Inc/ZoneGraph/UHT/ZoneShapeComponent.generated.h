// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneShapeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EZoneShapePolygonRoutingType : uint8;
enum class FZoneShapeType : uint8;
struct FZoneGraphTagMask;
#ifdef ZONEGRAPH_ZoneShapeComponent_generated_h
#error "ZoneShapeComponent.generated.h already included, missing '#pragma once' in ZoneShapeComponent.h"
#endif
#define ZONEGRAPH_ZoneShapeComponent_generated_h

#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetPolygonRoutingType); \
	DECLARE_FUNCTION(execSetReverseLaneProfile); \
	DECLARE_FUNCTION(execIsLaneProfileReversed); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetShapeType); \
	DECLARE_FUNCTION(execGetShapeType);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetPolygonRoutingType); \
	DECLARE_FUNCTION(execSetReverseLaneProfile); \
	DECLARE_FUNCTION(execIsLaneProfileReversed); \
	DECLARE_FUNCTION(execSetTags); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execSetShapeType); \
	DECLARE_FUNCTION(execGetShapeType);


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ACCESSORS
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UZoneShapeComponent, NO_API)


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneShapeComponent(); \
	friend struct Z_Construct_UClass_UZoneShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), NO_API) \
	DECLARE_SERIALIZER(UZoneShapeComponent) \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUZoneShapeComponent(); \
	friend struct Z_Construct_UClass_UZoneShapeComponent_Statics; \
public: \
	DECLARE_CLASS(UZoneShapeComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ZoneGraph"), NO_API) \
	DECLARE_SERIALIZER(UZoneShapeComponent) \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneShapeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneShapeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneShapeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneShapeComponent(UZoneShapeComponent&&); \
	NO_API UZoneShapeComponent(const UZoneShapeComponent&); \
public: \
	NO_API virtual ~UZoneShapeComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UZoneShapeComponent(UZoneShapeComponent&&); \
	NO_API UZoneShapeComponent(const UZoneShapeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneShapeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneShapeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneShapeComponent) \
	NO_API virtual ~UZoneShapeComponent();


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_36_PROLOG
#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_INCLASS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ACCESSORS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZONEGRAPH_API UClass* StaticClass<class UZoneShapeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneShapeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
