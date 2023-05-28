// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXFixtureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADMXFixtureActor;
class UTexture2D;
struct FLinearColor;
#ifdef DMXFIXTURES_DMXFixtureComponent_generated_h
#error "DMXFixtureComponent.generated.h already included, missing '#pragma once' in DMXFixtureComponent.h"
#endif
#define DMXFIXTURES_DMXFixtureComponent_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDMXChannelData_Statics; \
	DMXFIXTURES_API static class UScriptStruct* StaticStruct();


template<> DMXFIXTURES_API UScriptStruct* StaticStruct<struct FDMXChannelData>();

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_RPC_WRAPPERS \
	virtual void GetSupportedDMXAttributes_Implementation(TArray<FName>& OutAttributeNames); \
 \
	DECLARE_FUNCTION(execGetSupportedDMXAttributes); \
	DECLARE_FUNCTION(execGetTextureCenterColors); \
	DECLARE_FUNCTION(execGetParentFixtureActor); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSupportedDMXAttributes); \
	DECLARE_FUNCTION(execGetTextureCenterColors); \
	DECLARE_FUNCTION(execGetParentFixtureActor); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXFixtureComponent(); \
	friend struct Z_Construct_UClass_UDMXFixtureComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXFixtureComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), NO_API) \
	DECLARE_SERIALIZER(UDMXFixtureComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUDMXFixtureComponent(); \
	friend struct Z_Construct_UClass_UDMXFixtureComponent_Statics; \
public: \
	DECLARE_CLASS(UDMXFixtureComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DMXFixtures"), NO_API) \
	DECLARE_SERIALIZER(UDMXFixtureComponent)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXFixtureComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXFixtureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXFixtureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXFixtureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXFixtureComponent(UDMXFixtureComponent&&); \
	NO_API UDMXFixtureComponent(const UDMXFixtureComponent&); \
public: \
	NO_API virtual ~UDMXFixtureComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXFixtureComponent(UDMXFixtureComponent&&); \
	NO_API UDMXFixtureComponent(const UDMXFixtureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXFixtureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXFixtureComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDMXFixtureComponent) \
	NO_API virtual ~UDMXFixtureComponent();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_37_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXFIXTURES_API UClass* StaticClass<class UDMXFixtureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
