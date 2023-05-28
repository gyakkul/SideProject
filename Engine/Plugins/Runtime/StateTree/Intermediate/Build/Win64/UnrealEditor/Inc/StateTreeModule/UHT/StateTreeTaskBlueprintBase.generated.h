// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStateTreeRunStatus : uint8;
struct FStateTreeActiveStates;
struct FStateTreeTransitionResult;
#ifdef STATETREEMODULE_StateTreeTaskBlueprintBase_generated_h
#error "StateTreeTaskBlueprintBase.generated.h already included, missing '#pragma once' in StateTreeTaskBlueprintBase.h"
#endif
#define STATETREEMODULE_StateTreeTaskBlueprintBase_generated_h

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_ACCESSORS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateTreeTaskBlueprintBase(); \
	friend struct Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UStateTreeTaskBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeTaskBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUStateTreeTaskBlueprintBase(); \
	friend struct Z_Construct_UClass_UStateTreeTaskBlueprintBase_Statics; \
public: \
	DECLARE_CLASS(UStateTreeTaskBlueprintBase, UStateTreeNodeBlueprintBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/StateTreeModule"), NO_API) \
	DECLARE_SERIALIZER(UStateTreeTaskBlueprintBase)


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateTreeTaskBlueprintBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeTaskBlueprintBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeTaskBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeTaskBlueprintBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeTaskBlueprintBase(UStateTreeTaskBlueprintBase&&); \
	NO_API UStateTreeTaskBlueprintBase(const UStateTreeTaskBlueprintBase&); \
public: \
	NO_API virtual ~UStateTreeTaskBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateTreeTaskBlueprintBase(UStateTreeTaskBlueprintBase&&); \
	NO_API UStateTreeTaskBlueprintBase(const UStateTreeTaskBlueprintBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateTreeTaskBlueprintBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateTreeTaskBlueprintBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateTreeTaskBlueprintBase) \
	NO_API virtual ~UStateTreeTaskBlueprintBase();


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_INCLASS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_ACCESSORS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STATETREEMODULE_API UClass* StaticClass<class UStateTreeTaskBlueprintBase>();

#define FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStateTreeBlueprintTaskWrapper_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStateTreeTaskBase Super;


template<> STATETREEMODULE_API UScriptStruct* StaticStruct<struct FStateTreeBlueprintTaskWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeTaskBlueprintBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
