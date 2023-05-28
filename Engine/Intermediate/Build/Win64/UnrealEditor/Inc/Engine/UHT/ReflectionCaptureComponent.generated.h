// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/ReflectionCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ReflectionCaptureComponent_generated_h
#error "ReflectionCaptureComponent.generated.h already included, missing '#pragma once' in ReflectionCaptureComponent.h"
#endif
#define ENGINE_ReflectionCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_SPARSE_DATA
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_RPC_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ACCESSORS
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UReflectionCaptureComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUReflectionCaptureComponent(); \
	friend struct Z_Construct_UClass_UReflectionCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(UReflectionCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UReflectionCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public: \
	ENGINE_API virtual ~UReflectionCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UReflectionCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UReflectionCaptureComponent(UReflectionCaptureComponent&&); \
	ENGINE_API UReflectionCaptureComponent(const UReflectionCaptureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UReflectionCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReflectionCaptureComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReflectionCaptureComponent) \
	ENGINE_API virtual ~UReflectionCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_SPARSE_DATA \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ACCESSORS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ReflectionCaptureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UReflectionCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_ReflectionCaptureComponent_h


#define FOREACH_ENUM_EREFLECTIONSOURCETYPE(op) \
	op(EReflectionSourceType::CapturedScene) \
	op(EReflectionSourceType::SpecifiedCubemap) 

enum class EReflectionSourceType : uint8;
template<> struct TIsUEnumClass<EReflectionSourceType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EReflectionSourceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
