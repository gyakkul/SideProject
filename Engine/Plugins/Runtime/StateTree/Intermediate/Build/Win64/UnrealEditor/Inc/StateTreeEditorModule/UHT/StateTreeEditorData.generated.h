// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StateTreeEditorData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STATETREEEDITORMODULE_StateTreeEditorData_generated_h
#error "StateTreeEditorData.generated.h already included, missing '#pragma once' in StateTreeEditorData.h"
#endif
#define STATETREEEDITORMODULE_StateTreeEditorData_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeEditorData(); \
	friend struct Z_Construct_UClass_UStateTreeEditorData_Statics; \
public: \
	DECLARE_CLASS(UStateTreeEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeEditorData) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeEditorData*>(this); }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeEditorData(); \
	friend struct Z_Construct_UClass_UStateTreeEditorData_Statics; \
public: \
	DECLARE_CLASS(UStateTreeEditorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/StateTreeEditorModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeEditorData) \
	virtual UObject* _getUObject() const override { return const_cast<UStateTreeEditorData*>(this); }


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeEditorData(UStateTreeEditorData&&); \
	NO_API UStateTreeEditorData(const UStateTreeEditorData&); \
public: \
	NO_API virtual ~UStateTreeEditorData();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeEditorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeEditorData(UStateTreeEditorData&&); \
	NO_API UStateTreeEditorData(const UStateTreeEditorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeEditorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeEditorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeEditorData) \
	NO_API virtual ~UStateTreeEditorData();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_24_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_INCLASS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEEDITORMODULE_API UClass* StaticClass<class UStateTreeEditorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeEditorData_h


#define FOREACH_ENUM_ESTATETREEVISITOR(op) \
	op(EStateTreeVisitor::Continue) \
	op(EStateTreeVisitor::Break) 

enum class EStateTreeVisitor : uint8;
template<> struct TIsUEnumClass<EStateTreeVisitor> { enum { Value = true }; };
template<> STATETREEEDITORMODULE_API UEnum* StaticEnum<EStateTreeVisitor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
