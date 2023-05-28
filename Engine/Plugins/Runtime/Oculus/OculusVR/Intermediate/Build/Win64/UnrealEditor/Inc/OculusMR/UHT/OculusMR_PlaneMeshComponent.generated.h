// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OculusMR_PlaneMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOculusMR_PlaneMeshTriangle;
#ifdef OCULUSMR_OculusMR_PlaneMeshComponent_generated_h
#error "OculusMR_PlaneMeshComponent.generated.h already included, missing '#pragma once' in OculusMR_PlaneMeshComponent.h"
#endif
#define OCULUSMR_OculusMR_PlaneMeshComponent_generated_h

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics; \
	OCULUSMR_API static class UScriptStruct* StaticStruct();


template<> OCULUSMR_API UScriptStruct* StaticStruct<struct FOculusMR_PlaneMeshTriangle>();

#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ACCESSORS
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOculusMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_PlaneMeshComponent)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUOculusMR_PlaneMeshComponent(); \
	friend struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UOculusMR_PlaneMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OculusMR"), NO_API) \
	DECLARE_SERIALIZER(UOculusMR_PlaneMeshComponent)


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_PlaneMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_PlaneMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_PlaneMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_PlaneMeshComponent(UOculusMR_PlaneMeshComponent&&); \
	NO_API UOculusMR_PlaneMeshComponent(const UOculusMR_PlaneMeshComponent&); \
public: \
	NO_API virtual ~UOculusMR_PlaneMeshComponent();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOculusMR_PlaneMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOculusMR_PlaneMeshComponent(UOculusMR_PlaneMeshComponent&&); \
	NO_API UOculusMR_PlaneMeshComponent(const UOculusMR_PlaneMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOculusMR_PlaneMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOculusMR_PlaneMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOculusMR_PlaneMeshComponent) \
	NO_API virtual ~UOculusMR_PlaneMeshComponent();


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ACCESSORS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OculusMR_PlaneMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OCULUSMR_API UClass* StaticClass<class UOculusMR_PlaneMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusMR_Private_OculusMR_PlaneMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
