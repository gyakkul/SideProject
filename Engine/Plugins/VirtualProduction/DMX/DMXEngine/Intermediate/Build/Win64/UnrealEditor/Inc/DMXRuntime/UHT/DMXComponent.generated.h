// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/DMXComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDMXEntityFixturePatch;
struct FDMXNormalizedAttributeValueMap;
#ifdef DMXRUNTIME_DMXComponent_generated_h
#error "DMXComponent.generated.h already included, missing '#pragma once' in DMXComponent.h"
#endif
#define DMXRUNTIME_DMXComponent_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_28_DELEGATE \
static void FDMXComponentFixturePatchReceivedSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXComponentFixturePatchReceivedSignature, UDMXEntityFixturePatch* FixturePatch, FDMXNormalizedAttributeValueMap const& ValuePerAttribute);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_29_DELEGATE \
static void FDMXOnDMXComponentTickSignature_DelegateWrapper(const FMulticastScriptDelegate& DMXOnDMXComponentTickSignature, float DeltaTime);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFixturePatchReceivedDMX); \
	DECLARE_FUNCTION(execSetReceiveDMXFromPatch); \
	DECLARE_FUNCTION(execSetFixturePatch); \
	DECLARE_FUNCTION(execGetFixturePatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFixturePatchReceivedDMX); \
	DECLARE_FUNCTION(execSetReceiveDMXFromPatch); \
	DECLARE_FUNCTION(execSetFixturePatch); \
	DECLARE_FUNCTION(execGetFixturePatch);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXComponent(); \
	friend struct Z_Construct_UClass_UDMXComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUDMXComponent(); \
	friend struct Z_Construct_UClass_UDMXComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDMXComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXComponent(UDMXComponent&&); \
	NO_API UDMXComponent(const UDMXComponent&); \
public: \
	NO_API virtual ~UDMXComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXComponent(UDMXComponent&&); \
	NO_API UDMXComponent(const UDMXComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDMXComponent) \
	NO_API virtual ~UDMXComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_22_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXRUNTIME_API UClass* StaticClass<class UDMXComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Game_DMXComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
