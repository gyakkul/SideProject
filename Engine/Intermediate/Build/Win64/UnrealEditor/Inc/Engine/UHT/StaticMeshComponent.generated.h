// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StaticMeshComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
#ifdef ENGINE_StaticMeshComponent_generated_h
#error "StaticMeshComponent.generated.h already included, missing '#pragma once' in StaticMeshComponent.h"
#endif
#define ENGINE_StaticMeshComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPaintedVertex_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPaintedVertex>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetForceDisableNanite); \
	DECLARE_FUNCTION(execSetReverseCulling); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetInitialEvaluateWorldPositionOffset); \
	DECLARE_FUNCTION(execSetEvaluateWorldPositionOffset); \
	DECLARE_FUNCTION(execSetEvaluateWorldPositionOffsetInRayTracing); \
	DECLARE_FUNCTION(execSetDistanceFieldSelfShadowBias); \
	DECLARE_FUNCTION(execSetForcedLodModel); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execOnRep_StaticMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetForceDisableNanite); \
	DECLARE_FUNCTION(execSetReverseCulling); \
	DECLARE_FUNCTION(execGetLocalBounds); \
	DECLARE_FUNCTION(execGetInitialEvaluateWorldPositionOffset); \
	DECLARE_FUNCTION(execSetEvaluateWorldPositionOffset); \
	DECLARE_FUNCTION(execSetEvaluateWorldPositionOffsetInRayTracing); \
	DECLARE_FUNCTION(execSetDistanceFieldSelfShadowBias); \
	DECLARE_FUNCTION(execSetForcedLodModel); \
	DECLARE_FUNCTION(execSetStaticMesh); \
	DECLARE_FUNCTION(execOnRep_StaticMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticMeshComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UStaticMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StaticMesh=NETFIELD_REP_START, \
		NETFIELD_REP_END=StaticMesh	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUStaticMeshComponent(); \
	friend struct Z_Construct_UClass_UStaticMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UStaticMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_UStaticMeshComponent, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStaticMeshComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StaticMesh=NETFIELD_REP_START, \
		NETFIELD_REP_END=StaticMesh	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshComponent(UStaticMeshComponent&&); \
	NO_API UStaticMeshComponent(const UStaticMeshComponent&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStaticMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStaticMeshComponent(UStaticMeshComponent&&); \
	NO_API UStaticMeshComponent(const UStaticMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStaticMeshComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStaticMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStaticMeshComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_96_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_99_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StaticMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStaticMeshComponent>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_759_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshVertexColorLODData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshVertexColorLODData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h_783_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshComponentInstanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FPrimitiveComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStaticMeshComponentInstanceData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_StaticMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
