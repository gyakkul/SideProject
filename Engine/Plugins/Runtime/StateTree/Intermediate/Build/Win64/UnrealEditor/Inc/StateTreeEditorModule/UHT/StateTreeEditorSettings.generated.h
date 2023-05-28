// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEEDITORMODULE_StateTreeEditorSettings_generated_h
#error "StateTreeEditorSettings.generated.h already included, missing '#pragma once' in StateTreeEditorSettings.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorSettings_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorSettings(); \
	friend struct Z_Construct_UClass_UStateTreeEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UStateTreeEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeEditorSettings(); \
	friend struct Z_Construct_UClass_UStateTreeEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UStateTreeEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeEditorSettings(UStateTreeEditorSettings&&); \
	NO_API UStateTreeEditorSettings(const UStateTreeEditorSettings&); \
public: \
	NO_API virtual ~UStateTreeEditorSettings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeEditorSettings(UStateTreeEditorSettings&&); \
	NO_API UStateTreeEditorSettings(const UStateTreeEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorSettings) \
	NO_API virtual ~UStateTreeEditorSettings();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_16_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_INCLASS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h_19_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StateTreeEditorSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEEDITORMODULE_API UClass* StaticClass<class UStateTreeEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorSettings_h


#define FOREACH_ENUM_ESTATETREESAVEONCOMPILE(op) \
	op(EStateTreeSaveOnCompile::Never) \
	op(EStateTreeSaveOnCompile::SuccessOnly) \
	op(EStateTreeSaveOnCompile::Always) 

enum class EStateTreeSaveOnCompile : uint8;
template<> struct TIsUEnumClass<EStateTreeSaveOnCompile> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeSaveOnCompile>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
