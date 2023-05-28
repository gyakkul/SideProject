// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SmartObjectComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMARTOBJECTSMODULE_SmartObjectComponent_generated_h
#error "SmartObjectComponent.generated.h already included, missing '#pragma once' in SmartObjectComponent.h"
#endif
#define SMARTOBJECTSMODULE_SmartObjectComponent_generated_h

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_ACCESSORS
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSmartObjectComponent(); \
	friend struct Z_Construct_UClass_USmartObjectComponent_Statics; \
public: \
	DECLARE_CLASS(USmartObjectComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUSmartObjectComponent(); \
	friend struct Z_Construct_UClass_USmartObjectComponent_Statics; \
public: \
	DECLARE_CLASS(USmartObjectComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SmartObjectsModule"), NO_API) \
	DECLARE_SERIALIZER(USmartObjectComponent) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USmartObjectComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectComponent(USmartObjectComponent&&); \
	NO_API USmartObjectComponent(const USmartObjectComponent&); \
public: \
	NO_API virtual ~USmartObjectComponent();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USmartObjectComponent(USmartObjectComponent&&); \
	NO_API USmartObjectComponent(const USmartObjectComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USmartObjectComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USmartObjectComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USmartObjectComponent) \
	NO_API virtual ~USmartObjectComponent();


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_23_PROLOG
#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_INCLASS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_ACCESSORS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTOBJECTSMODULE_API UClass* StaticClass<class USmartObjectComponent>();

#define FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSmartObjectComponentInstanceData_Statics; \
	SMARTOBJECTSMODULE_API static class UScriptStruct* StaticStruct(); \
	typedef FActorComponentInstanceData Super;


template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<struct FSmartObjectComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
