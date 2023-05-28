// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ChildActorComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_ChildActorComponent_generated_h
#error "ChildActorComponent.generated.h already included, missing '#pragma once' in ChildActorComponent.h"
#endif
#define ENGINE_ChildActorComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorAttachedActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorAttachedActorInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChildActorComponentInstanceData_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChildActorComponentInstanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execSetChildActorClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnChildActorDestroyed); \
	DECLARE_FUNCTION(execSetChildActorClass);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChildActorComponent, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct Z_Construct_UClass_UChildActorComponent_Statics; \
public: \
	DECLARE_CLASS(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUChildActorComponent(); \
	friend struct Z_Construct_UClass_UChildActorComponent_Statics; \
public: \
	DECLARE_CLASS(UChildActorComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UChildActorComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ARCHIVESERIALIZER \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ChildActor=NETFIELD_REP_START, \
		NETFIELD_REP_END=ChildActor	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChildActorComponent(UChildActorComponent&&); \
	NO_API UChildActorComponent(const UChildActorComponent&); \
public: \
	NO_API virtual ~UChildActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChildActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChildActorComponent(UChildActorComponent&&); \
	NO_API UChildActorComponent(const UChildActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChildActorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChildActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChildActorComponent) \
	NO_API virtual ~UChildActorComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_81_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h_84_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChildActorComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UChildActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ChildActorComponent_h


#define FOREACH_ENUM_ECHILDACTORCOMPONENTTREEVIEWVISUALIZATIONMODE(op) \
	op(EChildActorComponentTreeViewVisualizationMode::UseDefault) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentOnly) \
	op(EChildActorComponentTreeViewVisualizationMode::ComponentWithChildActor) \
	op(EChildActorComponentTreeViewVisualizationMode::ChildActorOnly) 

enum class EChildActorComponentTreeViewVisualizationMode : uint8;
template<> struct TIsUEnumClass<EChildActorComponentTreeViewVisualizationMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EChildActorComponentTreeViewVisualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
