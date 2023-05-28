// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editor/ControlRigContextMenuContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UControlRig;
class UControlRigBlueprint;
struct FControlRigGraphNodeContextMenuContext;
struct FControlRigRigHierarchyDragAndDropContext;
struct FControlRigRigHierarchyToGraphDragAndDropContext;
#ifdef CONTROLRIGEDITOR_ControlRigContextMenuContext_generated_h
#error "ControlRigContextMenuContext.generated.h already included, missing '#pragma once' in ControlRigContextMenuContext.h"
#endif
#define CONTROLRIGEDITOR_ControlRigContextMenuContext_generated_h

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigRigHierarchyDragAndDropContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FControlRigRigHierarchyDragAndDropContext>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigGraphNodeContextMenuContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FControlRigGraphNodeContextMenuContext>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FControlRigRigHierarchyToGraphDragAndDropContext_Statics; \
	CONTROLRIGEDITOR_API static class UScriptStruct* StaticStruct();


template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<struct FControlRigRigHierarchyToGraphDragAndDropContext>();

#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_SPARSE_DATA
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRigHierarchyToGraphDragAndDropContext); \
	DECLARE_FUNCTION(execGetGraphNodeContextMenuContext); \
	DECLARE_FUNCTION(execGetRigHierarchyDragAndDropContext); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execGetControlRig); \
	DECLARE_FUNCTION(execGetControlRigBlueprint);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRigHierarchyToGraphDragAndDropContext); \
	DECLARE_FUNCTION(execGetGraphNodeContextMenuContext); \
	DECLARE_FUNCTION(execGetRigHierarchyDragAndDropContext); \
	DECLARE_FUNCTION(execIsAltDown); \
	DECLARE_FUNCTION(execGetControlRig); \
	DECLARE_FUNCTION(execGetControlRigBlueprint);


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_ACCESSORS
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUControlRigContextMenuContext(); \
	friend struct Z_Construct_UClass_UControlRigContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UControlRigContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigContextMenuContext)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUControlRigContextMenuContext(); \
	friend struct Z_Construct_UClass_UControlRigContextMenuContext_Statics; \
public: \
	DECLARE_CLASS(UControlRigContextMenuContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ControlRigEditor"), NO_API) \
	DECLARE_SERIALIZER(UControlRigContextMenuContext)


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigContextMenuContext) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigContextMenuContext); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigContextMenuContext(UControlRigContextMenuContext&&); \
	NO_API UControlRigContextMenuContext(const UControlRigContextMenuContext&); \
public: \
	NO_API virtual ~UControlRigContextMenuContext();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UControlRigContextMenuContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UControlRigContextMenuContext(UControlRigContextMenuContext&&); \
	NO_API UControlRigContextMenuContext(const UControlRigContextMenuContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UControlRigContextMenuContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UControlRigContextMenuContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UControlRigContextMenuContext) \
	NO_API virtual ~UControlRigContextMenuContext();


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_105_PROLOG
#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_RPC_WRAPPERS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_INCLASS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_SPARSE_DATA \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_ACCESSORS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h_108_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONTROLRIGEDITOR_API UClass* StaticClass<class UControlRigContextMenuContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Editor_ControlRigContextMenuContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
