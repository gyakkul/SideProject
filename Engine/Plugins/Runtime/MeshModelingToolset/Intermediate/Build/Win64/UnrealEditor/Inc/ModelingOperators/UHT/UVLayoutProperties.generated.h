// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/UVLayoutProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGOPERATORS_UVLayoutProperties_generated_h
#error "UVLayoutProperties.generated.h already included, missing '#pragma once' in UVLayoutProperties.h"
#endif
#define MODELINGOPERATORS_UVLayoutProperties_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_ACCESSORS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUVLayoutProperties(); \
	friend struct Z_Construct_UClass_UUVLayoutProperties_Statics; \
public: \
	DECLARE_CLASS(UUVLayoutProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingOperators"), NO_API) \
	DECLARE_SERIALIZER(UUVLayoutProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUUVLayoutProperties(); \
	friend struct Z_Construct_UClass_UUVLayoutProperties_Statics; \
public: \
	DECLARE_CLASS(UUVLayoutProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingOperators"), NO_API) \
	DECLARE_SERIALIZER(UUVLayoutProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVLayoutProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVLayoutProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUVLayoutProperties(UUVLayoutProperties&&); \
	NO_API UUVLayoutProperties(const UUVLayoutProperties&); \
public: \
	NO_API virtual ~UUVLayoutProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUVLayoutProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUVLayoutProperties(UUVLayoutProperties&&); \
	NO_API UUVLayoutProperties(const UUVLayoutProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUVLayoutProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUVLayoutProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUVLayoutProperties) \
	NO_API virtual ~UUVLayoutProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_28_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_INCLASS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGOPERATORS_API UClass* StaticClass<class UUVLayoutProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h


#define FOREACH_ENUM_EUVLAYOUTTYPE(op) \
	op(EUVLayoutType::Transform) \
	op(EUVLayoutType::Stack) \
	op(EUVLayoutType::Repack) 

enum class EUVLayoutType;
template<> struct TIsUEnumClass<EUVLayoutType> { enum { Value = true }; };
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EUVLayoutType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
