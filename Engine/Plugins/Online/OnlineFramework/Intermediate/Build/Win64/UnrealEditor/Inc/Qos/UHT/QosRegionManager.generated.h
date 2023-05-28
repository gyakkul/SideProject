// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QosRegionManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QOS_QosRegionManager_generated_h
#error "QosRegionManager.generated.h already included, missing '#pragma once' in QosRegionManager.h"
#endif
#define QOS_QosRegionManager_generated_h

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQosSubspaceComparisonParams_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FQosSubspaceComparisonParams>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_137_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQosPingServerInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FQosPingServerInfo>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQosDatacenterInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FQosDatacenterInfo>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQosRegionInfo_Statics; \
	QOS_API static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FQosRegionInfo>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDatacenterQosInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FDatacenterQosInstance>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_379_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRegionQosInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> QOS_API UScriptStruct* StaticStruct<struct FRegionQosInstance>();

#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_SPARSE_DATA
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_RPC_WRAPPERS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_ACCESSORS
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQosRegionManager(); \
	friend struct Z_Construct_UClass_UQosRegionManager_Statics; \
public: \
	DECLARE_CLASS(UQosRegionManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), NO_API) \
	DECLARE_SERIALIZER(UQosRegionManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_INCLASS \
private: \
	static void StaticRegisterNativesUQosRegionManager(); \
	friend struct Z_Construct_UClass_UQosRegionManager_Statics; \
public: \
	DECLARE_CLASS(UQosRegionManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Qos"), NO_API) \
	DECLARE_SERIALIZER(UQosRegionManager) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQosRegionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQosRegionManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQosRegionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQosRegionManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQosRegionManager(UQosRegionManager&&); \
	NO_API UQosRegionManager(const UQosRegionManager&); \
public: \
	NO_API virtual ~UQosRegionManager();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQosRegionManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQosRegionManager(UQosRegionManager&&); \
	NO_API UQosRegionManager(const UQosRegionManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQosRegionManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQosRegionManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQosRegionManager) \
	NO_API virtual ~UQosRegionManager();


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_452_PROLOG
#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_RPC_WRAPPERS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_INCLASS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_SPARSE_DATA \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_ACCESSORS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h_456_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class QosRegionManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QOS_API UClass* StaticClass<class UQosRegionManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Online_OnlineFramework_Source_Qos_Public_QosRegionManager_h


#define FOREACH_ENUM_EQOSDATACENTERRESULT(op) \
	op(EQosDatacenterResult::Invalid) \
	op(EQosDatacenterResult::Success) \
	op(EQosDatacenterResult::Incomplete) 

enum class EQosDatacenterResult : uint8;
template<> struct TIsUEnumClass<EQosDatacenterResult> { enum { Value = true }; };
template<> QOS_API UEnum* StaticEnum<EQosDatacenterResult>();

#define FOREACH_ENUM_EQOSCOMPLETIONRESULT(op) \
	op(EQosCompletionResult::Invalid) \
	op(EQosCompletionResult::Success) \
	op(EQosCompletionResult::Failure) \
	op(EQosCompletionResult::Canceled) 

enum class EQosCompletionResult : uint8;
template<> struct TIsUEnumClass<EQosCompletionResult> { enum { Value = true }; };
template<> QOS_API UEnum* StaticEnum<EQosCompletionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
