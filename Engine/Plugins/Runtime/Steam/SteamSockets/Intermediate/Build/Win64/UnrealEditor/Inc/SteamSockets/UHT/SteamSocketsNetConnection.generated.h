// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamSocketsNetConnection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STEAMSOCKETS_SteamSocketsNetConnection_generated_h
#error "SteamSocketsNetConnection.generated.h already included, missing '#pragma once' in SteamSocketsNetConnection.h"
#endif
#define STEAMSOCKETS_SteamSocketsNetConnection_generated_h

#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ACCESSORS
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamSocketsNetConnection(); \
	friend struct Z_Construct_UClass_USteamSocketsNetConnection_Statics; \
public: \
	DECLARE_CLASS(USteamSocketsNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSockets"), NO_API) \
	DECLARE_SERIALIZER(USteamSocketsNetConnection)


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSteamSocketsNetConnection(); \
	friend struct Z_Construct_UClass_USteamSocketsNetConnection_Statics; \
public: \
	DECLARE_CLASS(USteamSocketsNetConnection, UNetConnection, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SteamSockets"), NO_API) \
	DECLARE_SERIALIZER(USteamSocketsNetConnection)


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USteamSocketsNetConnection(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamSocketsNetConnection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamSocketsNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamSocketsNetConnection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamSocketsNetConnection(USteamSocketsNetConnection&&); \
	NO_API USteamSocketsNetConnection(const USteamSocketsNetConnection&); \
public: \
	NO_API virtual ~USteamSocketsNetConnection();


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USteamSocketsNetConnection(USteamSocketsNetConnection&&); \
	NO_API USteamSocketsNetConnection(const USteamSocketsNetConnection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USteamSocketsNetConnection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamSocketsNetConnection); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USteamSocketsNetConnection) \
	NO_API virtual ~USteamSocketsNetConnection();


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ACCESSORS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STEAMSOCKETS_API UClass* StaticClass<class USteamSocketsNetConnection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Steam_SteamSockets_Source_SteamSockets_Public_SteamSocketsNetConnection_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
