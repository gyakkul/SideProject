// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SplineMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SplineMeshComponent_generated_h
#error "SplineMeshComponent.generated.h already included, missing '#pragma once' in SplineMeshComponent.h"
#endif
#define ENGINE_SplineMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineMeshParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineMeshParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax); \
	DECLARE_FUNCTION(execGetBoundaryMax); \
	DECLARE_FUNCTION(execSetBoundaryMin); \
	DECLARE_FUNCTION(execGetBoundaryMin); \
	DECLARE_FUNCTION(execSetSplineUpDir); \
	DECLARE_FUNCTION(execGetSplineUpDir); \
	DECLARE_FUNCTION(execSetForwardAxis); \
	DECLARE_FUNCTION(execGetForwardAxis); \
	DECLARE_FUNCTION(execSetEndOffset); \
	DECLARE_FUNCTION(execGetEndOffset); \
	DECLARE_FUNCTION(execSetEndRoll); \
	DECLARE_FUNCTION(execGetEndRoll); \
	DECLARE_FUNCTION(execSetEndScale); \
	DECLARE_FUNCTION(execGetEndScale); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartRoll); \
	DECLARE_FUNCTION(execGetStartRoll); \
	DECLARE_FUNCTION(execSetStartScale); \
	DECLARE_FUNCTION(execGetStartScale); \
	DECLARE_FUNCTION(execSetStartAndEnd); \
	DECLARE_FUNCTION(execSetEndTangent); \
	DECLARE_FUNCTION(execGetEndTangent); \
	DECLARE_FUNCTION(execSetEndPosition); \
	DECLARE_FUNCTION(execGetEndPosition); \
	DECLARE_FUNCTION(execSetStartTangent); \
	DECLARE_FUNCTION(execGetStartTangent); \
	DECLARE_FUNCTION(execSetStartPosition); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execUpdateMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax); \
	DECLARE_FUNCTION(execGetBoundaryMax); \
	DECLARE_FUNCTION(execSetBoundaryMin); \
	DECLARE_FUNCTION(execGetBoundaryMin); \
	DECLARE_FUNCTION(execSetSplineUpDir); \
	DECLARE_FUNCTION(execGetSplineUpDir); \
	DECLARE_FUNCTION(execSetForwardAxis); \
	DECLARE_FUNCTION(execGetForwardAxis); \
	DECLARE_FUNCTION(execSetEndOffset); \
	DECLARE_FUNCTION(execGetEndOffset); \
	DECLARE_FUNCTION(execSetEndRoll); \
	DECLARE_FUNCTION(execGetEndRoll); \
	DECLARE_FUNCTION(execSetEndScale); \
	DECLARE_FUNCTION(execGetEndScale); \
	DECLARE_FUNCTION(execSetStartOffset); \
	DECLARE_FUNCTION(execGetStartOffset); \
	DECLARE_FUNCTION(execSetStartRoll); \
	DECLARE_FUNCTION(execGetStartRoll); \
	DECLARE_FUNCTION(execSetStartScale); \
	DECLARE_FUNCTION(execGetStartScale); \
	DECLARE_FUNCTION(execSetStartAndEnd); \
	DECLARE_FUNCTION(execSetEndTangent); \
	DECLARE_FUNCTION(execGetEndTangent); \
	DECLARE_FUNCTION(execSetEndPosition); \
	DECLARE_FUNCTION(execGetEndPosition); \
	DECLARE_FUNCTION(execSetStartTangent); \
	DECLARE_FUNCTION(execGetStartTangent); \
	DECLARE_FUNCTION(execSetStartPosition); \
	DECLARE_FUNCTION(execGetStartPosition); \
	DECLARE_FUNCTION(execUpdateMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ACCESSORS \
static void GetbNeverNeedsCookedCollisionData_WrapperImpl(const void* Object, void* OutValue); \
static void SetbNeverNeedsCookedCollisionData_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USplineMeshComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend struct Z_Construct_UClass_USplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend struct Z_Construct_UClass_USplineMeshComponent_Statics; \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public: \
	NO_API virtual ~USplineMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent) \
	NO_API virtual ~USplineMeshComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_99_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_102_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USplineMeshComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_396_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSplineMeshInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FStaticMeshComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSplineMeshInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h


#define FOREACH_ENUM_ESPLINEMESHAXIS(op) \
	op(ESplineMeshAxis::X) \
	op(ESplineMeshAxis::Y) \
	op(ESplineMeshAxis::Z) 

namespace ESplineMeshAxis { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESplineMeshAxis::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
