// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USmartObjectBehaviorDefinition;
class USmartObjectComponent;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FSmartObjectClaimHandle;
struct FSmartObjectHandle;
struct FSmartObjectRequest;
struct FSmartObjectRequestResult;
struct FSmartObjectSlotHandle;
#ifdef SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h
#error "SmartObjectSubsystem.generated.h already included, missing '#pragma once' in SmartObjectSubsystem.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequestFilter_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequestFilter>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequest_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequest>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectRequestResult_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectRequestResult>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSlotEnabled); \
	DECLARE_FUNCTION(execRemoveTagFromSlot); \
	DECLARE_FUNCTION(execAddTagToSlot); \
	DECLARE_FUNCTION(execGetSlotTags); \
	DECLARE_FUNCTION(execRemoveTagFromInstance); \
	DECLARE_FUNCTION(execAddTagToInstance); \
	DECLARE_FUNCTION(execGetInstanceTags); \
	DECLARE_FUNCTION(execGetSlotTransformFromRequestResult); \
	DECLARE_FUNCTION(execGetSlotTransform); \
	DECLARE_FUNCTION(execGetSlotLocation); \
	DECLARE_FUNCTION(execGetBehaviorDefinitionByRequestResult); \
	DECLARE_FUNCTION(execGetBehaviorDefinition); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execClaim); \
	DECLARE_FUNCTION(execFindSmartObjects); \
	DECLARE_FUNCTION(execFindSmartObject); \
	DECLARE_FUNCTION(execGetSmartObjectComponentByRequestResult); \
	DECLARE_FUNCTION(execGetSmartObjectComponent); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSlotEnabled); \
	DECLARE_FUNCTION(execRemoveTagFromSlot); \
	DECLARE_FUNCTION(execAddTagToSlot); \
	DECLARE_FUNCTION(execGetSlotTags); \
	DECLARE_FUNCTION(execRemoveTagFromInstance); \
	DECLARE_FUNCTION(execAddTagToInstance); \
	DECLARE_FUNCTION(execGetInstanceTags); \
	DECLARE_FUNCTION(execGetSlotTransformFromRequestResult); \
	DECLARE_FUNCTION(execGetSlotTransform); \
	DECLARE_FUNCTION(execGetSlotLocation); \
	DECLARE_FUNCTION(execGetBehaviorDefinitionByRequestResult); \
	DECLARE_FUNCTION(execGetBehaviorDefinition); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execUse); \
	DECLARE_FUNCTION(execClaim); \
	DECLARE_FUNCTION(execFindSmartObjects); \
	DECLARE_FUNCTION(execFindSmartObject); \
	DECLARE_FUNCTION(execGetSmartObjectComponentByRequestResult); \
	DECLARE_FUNCTION(execGetSmartObjectComponent); \
	DECLARE_FUNCTION(execSetEnabled);


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectSubsystem(); \
	friend struct Z_Construct_UClass_USmartObjectSubsystem_Statics; \
public: \
	DECLARE_CLASS(USmartObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("SmartObjects");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_INCLASS \
private: \
	static void StaticRegisterNativesUSmartObjectSubsystem(); \
	friend struct Z_Construct_UClass_USmartObjectSubsystem_Statics; \
public: \
	DECLARE_CLASS(USmartObjectSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectSubsystem) \
	static const TCHAR* StaticConfigName() {return TEXT("SmartObjects");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartObjectSubsystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectSubsystem(USmartObjectSubsystem&&); \
	NO_API USmartObjectSubsystem(const USmartObjectSubsystem&); \
public: \
	NO_API virtual ~USmartObjectSubsystem();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectSubsystem(USmartObjectSubsystem&&); \
	NO_API USmartObjectSubsystem(const USmartObjectSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USmartObjectSubsystem) \
	NO_API virtual ~USmartObjectSubsystem();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_162_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_INCLASS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTOBJECTSMODULE_API UClass* StaticClass<class USmartObjectSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSubsystem_h


#define FOREACH_ENUM_ESMARTOBJECTCOLLECTIONREGISTRATIONRESULT(op) \
	op(ESmartObjectCollectionRegistrationResult::Failed_InvalidCollection) \
	op(ESmartObjectCollectionRegistrationResult::Failed_AlreadyRegistered) \
	op(ESmartObjectCollectionRegistrationResult::Failed_NotFromPersistentLevel) \
	op(ESmartObjectCollectionRegistrationResult::Succeeded) 

enum class ESmartObjectCollectionRegistrationResult : uint8;
template<> struct TIsUEnumClass<ESmartObjectCollectionRegistrationResult> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectCollectionRegistrationResult>();

#define FOREACH_ENUM_ESMARTOBJECTUNREGISTRATIONMODE(op) \
	op(ESmartObjectUnregistrationMode::KeepRuntimeInstanceActiveIfPartOfCollection) \
	op(ESmartObjectUnregistrationMode::DestroyRuntimeInstance) 

enum class ESmartObjectUnregistrationMode : uint8;
template<> struct TIsUEnumClass<ESmartObjectUnregistrationMode> { enum { Value = true }; };
template<> SMARTOBJECTSMODULE_API UEnum* StaticEnum<ESmartObjectUnregistrationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
