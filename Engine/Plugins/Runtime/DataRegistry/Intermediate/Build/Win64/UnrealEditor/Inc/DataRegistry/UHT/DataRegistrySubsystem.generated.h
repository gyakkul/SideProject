// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataRegistrySubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataRegistrySubsystemGetItemResult : uint8;
struct FDataRegistryId;
struct FDataRegistryLookup;
struct FDataRegistryType;
struct FTableRowBase;
#ifdef DATAREGISTRY_DataRegistrySubsystem_generated_h
#error "DataRegistrySubsystem.generated.h already included, missing '#pragma once' in DataRegistrySubsystem.h"
#endif
#define DATAREGISTRY_DataRegistrySubsystem_generated_h

#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_DataRegistryId); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryId); \
	DECLARE_FUNCTION(execConv_DataRegistryIdToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryId); \
	DECLARE_FUNCTION(execNotEqual_DataRegistryType); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryType); \
	DECLARE_FUNCTION(execConv_DataRegistryTypeToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryType); \
	DECLARE_FUNCTION(execEvaluateDataRegistryCurve); \
	DECLARE_FUNCTION(execAcquireItemBP);


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_DataRegistryId); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryId); \
	DECLARE_FUNCTION(execConv_DataRegistryIdToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryId); \
	DECLARE_FUNCTION(execNotEqual_DataRegistryType); \
	DECLARE_FUNCTION(execEqualEqual_DataRegistryType); \
	DECLARE_FUNCTION(execConv_DataRegistryTypeToString); \
	DECLARE_FUNCTION(execIsValidDataRegistryType); \
	DECLARE_FUNCTION(execEvaluateDataRegistryCurve); \
	DECLARE_FUNCTION(execAcquireItemBP);


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_ACCESSORS
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDataRegistrySubsystem(); \
	friend struct Z_Construct_UClass_UDataRegistrySubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataRegistrySubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataRegistry"), NO_API) \
	DECLARE_SERIALIZER(UDataRegistrySubsystem)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUDataRegistrySubsystem(); \
	friend struct Z_Construct_UClass_UDataRegistrySubsystem_Statics; \
public: \
	DECLARE_CLASS(UDataRegistrySubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DataRegistry"), NO_API) \
	DECLARE_SERIALIZER(UDataRegistrySubsystem)


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataRegistrySubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDataRegistrySubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataRegistrySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistrySubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataRegistrySubsystem(UDataRegistrySubsystem&&); \
	NO_API UDataRegistrySubsystem(const UDataRegistrySubsystem&); \
public: \
	NO_API virtual ~UDataRegistrySubsystem();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDataRegistrySubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDataRegistrySubsystem(UDataRegistrySubsystem&&); \
	NO_API UDataRegistrySubsystem(const UDataRegistrySubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDataRegistrySubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDataRegistrySubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDataRegistrySubsystem) \
	NO_API virtual ~UDataRegistrySubsystem();


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_25_PROLOG
#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_INCLASS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_ACCESSORS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATAREGISTRY_API UClass* StaticClass<class UDataRegistrySubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySubsystem_h


#define FOREACH_ENUM_EDATAREGISTRYSUBSYSTEMGETITEMRESULT(op) \
	op(EDataRegistrySubsystemGetItemResult::Found) \
	op(EDataRegistrySubsystemGetItemResult::NotFound) 

enum class EDataRegistrySubsystemGetItemResult : uint8;
template<> struct TIsUEnumClass<EDataRegistrySubsystemGetItemResult> { enum { Value = true }; };
template<> DATAREGISTRY_API UEnum* StaticEnum<EDataRegistrySubsystemGetItemResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
