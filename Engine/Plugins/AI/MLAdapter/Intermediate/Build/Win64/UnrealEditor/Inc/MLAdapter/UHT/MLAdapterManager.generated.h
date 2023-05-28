// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Managers/MLAdapterManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MLADAPTER_MLAdapterManager_generated_h
#error "MLAdapterManager.generated.h already included, missing '#pragma once' in MLAdapterManager.h"
#endif
#define MLADAPTER_MLAdapterManager_generated_h

#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_SPARSE_DATA
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_RPC_WRAPPERS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ACCESSORS
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMLAdapterManager(); \
	friend struct Z_Construct_UClass_UMLAdapterManager_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterManager)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS \
private: \
	static void StaticRegisterNativesUMLAdapterManager(); \
	friend struct Z_Construct_UClass_UMLAdapterManager_Statics; \
public: \
	DECLARE_CLASS(UMLAdapterManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MLAdapter"), NO_API) \
	DECLARE_SERIALIZER(UMLAdapterManager)


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMLAdapterManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterManager(UMLAdapterManager&&); \
	NO_API UMLAdapterManager(const UMLAdapterManager&); \
public: \
	NO_API virtual ~UMLAdapterManager();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMLAdapterManager(UMLAdapterManager&&); \
	NO_API UMLAdapterManager(const UMLAdapterManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMLAdapterManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMLAdapterManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMLAdapterManager) \
	NO_API virtual ~UMLAdapterManager();


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_40_PROLOG
#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_RPC_WRAPPERS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_SPARSE_DATA \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ACCESSORS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MLADAPTER_API UClass* StaticClass<class UMLAdapterManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h


#define FOREACH_ENUM_EMLADAPTERSERVERMODE(op) \
	op(EMLAdapterServerMode::Invalid) \
	op(EMLAdapterServerMode::Server) \
	op(EMLAdapterServerMode::Client) \
	op(EMLAdapterServerMode::Standalone) \
	op(EMLAdapterServerMode::AutoDetect) 

enum class EMLAdapterServerMode : uint8;
template<> struct TIsUEnumClass<EMLAdapterServerMode> { enum { Value = true }; };
template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterServerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
