// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AssetReferencingPolicySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSETREFERENCERESTRICTIONS_AssetReferencingPolicySettings_generated_h
#error "AssetReferencingPolicySettings.generated.h already included, missing '#pragma once' in AssetReferencingPolicySettings.h"
#endif
#define ASSETREFERENCERESTRICTIONS_AssetReferencingPolicySettings_generated_h

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPDefaultPluginDomainRules_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<struct FARPDefaultPluginDomainRules>();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPDomainDefinitionForMatchingPlugins_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<struct FARPDomainDefinitionForMatchingPlugins>();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPDomainSettingsForPlugins_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<struct FARPDomainSettingsForPlugins>();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPDefaultProjectDomainRules_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<struct FARPDefaultProjectDomainRules>();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FARPDomainDefinitionByContentRoot_Statics; \
	ASSETREFERENCERESTRICTIONS_API static class UScriptStruct* StaticStruct();


template<> ASSETREFERENCERESTRICTIONS_API UScriptStruct* StaticStruct<struct FARPDomainDefinitionByContentRoot>();

#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_SPARSE_DATA
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetListOfDomains_NoPluginsOrEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngineOrGame); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_All);


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetListOfDomains_NoPluginsOrEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngineOrGame); \
	DECLARE_FUNCTION(execGetListOfDomains_NoEngine); \
	DECLARE_FUNCTION(execGetListOfDomains_All);


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_ACCESSORS
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssetReferencingPolicySettings(); \
	friend struct Z_Construct_UClass_UAssetReferencingPolicySettings_Statics; \
public: \
	DECLARE_CLASS(UAssetReferencingPolicySettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetReferenceRestrictions"), NO_API) \
	DECLARE_SERIALIZER(UAssetReferencingPolicySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUAssetReferencingPolicySettings(); \
	friend struct Z_Construct_UClass_UAssetReferencingPolicySettings_Statics; \
public: \
	DECLARE_CLASS(UAssetReferencingPolicySettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AssetReferenceRestrictions"), NO_API) \
	DECLARE_SERIALIZER(UAssetReferencingPolicySettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssetReferencingPolicySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetReferencingPolicySettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetReferencingPolicySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetReferencingPolicySettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetReferencingPolicySettings(UAssetReferencingPolicySettings&&); \
	NO_API UAssetReferencingPolicySettings(const UAssetReferencingPolicySettings&); \
public: \
	NO_API virtual ~UAssetReferencingPolicySettings();


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAssetReferencingPolicySettings(UAssetReferencingPolicySettings&&); \
	NO_API UAssetReferencingPolicySettings(const UAssetReferencingPolicySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssetReferencingPolicySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssetReferencingPolicySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssetReferencingPolicySettings) \
	NO_API virtual ~UAssetReferencingPolicySettings();


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_177_PROLOG
#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_RPC_WRAPPERS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_INCLASS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_ACCESSORS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSETREFERENCERESTRICTIONS_API UClass* StaticClass<class UAssetReferencingPolicySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySettings_h


#define FOREACH_ENUM_EARPPLUGINMATCHMODE(op) \
	op(EARPPluginMatchMode::MatchByCategory) \
	op(EARPPluginMatchMode::MatchByPathPrefix) 

enum class EARPPluginMatchMode : uint8;
template<> struct TIsUEnumClass<EARPPluginMatchMode> { enum { Value = true }; };
template<> ASSETREFERENCERESTRICTIONS_API UEnum* StaticEnum<EARPPluginMatchMode>();

#define FOREACH_ENUM_EARPDOMAINALLOWEDTOREFERENCEMODE(op) \
	op(EARPDomainAllowedToReferenceMode::AdditionalDomains) \
	op(EARPDomainAllowedToReferenceMode::AllDomains) 

enum class EARPDomainAllowedToReferenceMode : uint8;
template<> struct TIsUEnumClass<EARPDomainAllowedToReferenceMode> { enum { Value = true }; };
template<> ASSETREFERENCERESTRICTIONS_API UEnum* StaticEnum<EARPDomainAllowedToReferenceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
