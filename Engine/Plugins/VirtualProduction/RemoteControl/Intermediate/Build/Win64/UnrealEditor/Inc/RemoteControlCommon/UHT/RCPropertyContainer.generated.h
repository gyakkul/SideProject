// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RCPropertyContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REMOTECONTROLCOMMON_RCPropertyContainer_generated_h
#error "RCPropertyContainer.generated.h already included, missing '#pragma once' in RCPropertyContainer.h"
#endif
#define REMOTECONTROLCOMMON_RCPropertyContainer_generated_h

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyContainerBase(); \
	friend struct Z_Construct_UClass_URCPropertyContainerBase_Statics; \
public: \
	DECLARE_CLASS(URCPropertyContainerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), NO_API) \
	DECLARE_SERIALIZER(URCPropertyContainerBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS \
private: \
	static void StaticRegisterNativesURCPropertyContainerBase(); \
	friend struct Z_Construct_UClass_URCPropertyContainerBase_Statics; \
public: \
	DECLARE_CLASS(URCPropertyContainerBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), NO_API) \
	DECLARE_SERIALIZER(URCPropertyContainerBase)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCPropertyContainerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCPropertyContainerBase(URCPropertyContainerBase&&); \
	NO_API URCPropertyContainerBase(const URCPropertyContainerBase&); \
public: \
	NO_API virtual ~URCPropertyContainerBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCPropertyContainerBase(URCPropertyContainerBase&&); \
	NO_API URCPropertyContainerBase(const URCPropertyContainerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCPropertyContainerBase) \
	NO_API virtual ~URCPropertyContainerBase();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_14_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROLCOMMON_API UClass* StaticClass<class URCPropertyContainerBase>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRCPropertyContainerKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> REMOTECONTROLCOMMON_API UScriptStruct* StaticStruct<struct FRCPropertyContainerKey>();

#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_SPARSE_DATA
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_RPC_WRAPPERS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ACCESSORS
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURCPropertyContainerRegistry(); \
	friend struct Z_Construct_UClass_URCPropertyContainerRegistry_Statics; \
public: \
	DECLARE_CLASS(URCPropertyContainerRegistry, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), NO_API) \
	DECLARE_SERIALIZER(URCPropertyContainerRegistry)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS \
private: \
	static void StaticRegisterNativesURCPropertyContainerRegistry(); \
	friend struct Z_Construct_UClass_URCPropertyContainerRegistry_Statics; \
public: \
	DECLARE_CLASS(URCPropertyContainerRegistry, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RemoteControlCommon"), NO_API) \
	DECLARE_SERIALIZER(URCPropertyContainerRegistry)


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URCPropertyContainerRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCPropertyContainerRegistry(URCPropertyContainerRegistry&&); \
	NO_API URCPropertyContainerRegistry(const URCPropertyContainerRegistry&); \
public: \
	NO_API virtual ~URCPropertyContainerRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URCPropertyContainerRegistry(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URCPropertyContainerRegistry(URCPropertyContainerRegistry&&); \
	NO_API URCPropertyContainerRegistry(const URCPropertyContainerRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URCPropertyContainerRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URCPropertyContainerRegistry); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URCPropertyContainerRegistry) \
	NO_API virtual ~URCPropertyContainerRegistry();


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_95_PROLOG
#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_RPC_WRAPPERS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_SPARSE_DATA \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ACCESSORS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMOTECONTROLCOMMON_API UClass* StaticClass<class URCPropertyContainerRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Public_RCPropertyContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
