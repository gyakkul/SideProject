// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/OnlineEngineInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_OnlineEngineInterface_generated_h
#error "OnlineEngineInterface.generated.h already included, missing '#pragma once' in OnlineEngineInterface.h"
#endif
#define ENGINE_OnlineEngineInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineEngineInterface(); \
	friend struct Z_Construct_UClass_UOnlineEngineInterface_Statics; \
public: \
	DECLARE_CLASS(UOnlineEngineInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UOnlineEngineInterface) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineEngineInterface(); \
	friend struct Z_Construct_UClass_UOnlineEngineInterface_Statics; \
public: \
	DECLARE_CLASS(UOnlineEngineInterface, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UOnlineEngineInterface) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineEngineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEngineInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineEngineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEngineInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineEngineInterface(UOnlineEngineInterface&&); \
	NO_API UOnlineEngineInterface(const UOnlineEngineInterface&); \
public: \
	NO_API virtual ~UOnlineEngineInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineEngineInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineEngineInterface(UOnlineEngineInterface&&); \
	NO_API UOnlineEngineInterface(const UOnlineEngineInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineEngineInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineEngineInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineEngineInterface) \
	NO_API virtual ~UOnlineEngineInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_40_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h_43_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineEngineInterface."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UOnlineEngineInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_OnlineEngineInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
