// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DMXProtocolBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDMXInputPortReference;
struct FDMXOutputPortReference;
#ifdef DMXPROTOCOL_DMXProtocolBlueprintLibrary_generated_h
#error "DMXProtocolBlueprintLibrary.generated.h already included, missing '#pragma once' in DMXProtocolBlueprintLibrary.h"
#endif
#define DMXPROTOCOL_DMXProtocolBlueprintLibrary_generated_h

#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddress); \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddresses); \
	DECLARE_FUNCTION(execSetDMXOutputPortDeviceAddress); \
	DECLARE_FUNCTION(execSetDMXInputPortDeviceAddress); \
	DECLARE_FUNCTION(execGetLocalDMXNetworkInterfaceCardIPs); \
	DECLARE_FUNCTION(execIsReceiveDMXEnabled); \
	DECLARE_FUNCTION(execSetReceiveDMXEnabled); \
	DECLARE_FUNCTION(execIsSendDMXEnabled); \
	DECLARE_FUNCTION(execSetSendDMXEnabled);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddress); \
	DECLARE_FUNCTION(execSetDMXOutputPortDestinationAddresses); \
	DECLARE_FUNCTION(execSetDMXOutputPortDeviceAddress); \
	DECLARE_FUNCTION(execSetDMXInputPortDeviceAddress); \
	DECLARE_FUNCTION(execGetLocalDMXNetworkInterfaceCardIPs); \
	DECLARE_FUNCTION(execIsReceiveDMXEnabled); \
	DECLARE_FUNCTION(execSetReceiveDMXEnabled); \
	DECLARE_FUNCTION(execIsSendDMXEnabled); \
	DECLARE_FUNCTION(execSetSendDMXEnabled);


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDMXProtocolBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDMXProtocolBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXProtocol"), NO_API) \
	DECLARE_SERIALIZER(UDMXProtocolBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUDMXProtocolBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UDMXProtocolBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UDMXProtocolBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DMXProtocol"), NO_API) \
	DECLARE_SERIALIZER(UDMXProtocolBlueprintLibrary)


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXProtocolBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXProtocolBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXProtocolBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXProtocolBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXProtocolBlueprintLibrary(UDMXProtocolBlueprintLibrary&&); \
	NO_API UDMXProtocolBlueprintLibrary(const UDMXProtocolBlueprintLibrary&); \
public: \
	NO_API virtual ~UDMXProtocolBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDMXProtocolBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDMXProtocolBlueprintLibrary(UDMXProtocolBlueprintLibrary&&); \
	NO_API UDMXProtocolBlueprintLibrary(const UDMXProtocolBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDMXProtocolBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDMXProtocolBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDMXProtocolBlueprintLibrary) \
	NO_API virtual ~UDMXProtocolBlueprintLibrary();


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DMXPROTOCOL_API UClass* StaticClass<class UDMXProtocolBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXProtocolBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
