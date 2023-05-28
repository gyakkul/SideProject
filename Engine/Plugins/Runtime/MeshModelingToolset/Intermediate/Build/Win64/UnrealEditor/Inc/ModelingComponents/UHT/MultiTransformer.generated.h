// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Transforms/MultiTransformer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_MultiTransformer_generated_h
#error "MultiTransformer.generated.h already included, missing '#pragma once' in MultiTransformer.h"
#endif
#define MODELINGCOMPONENTS_MultiTransformer_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_SPARSE_DATA
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_RPC_WRAPPERS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_ACCESSORS
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiTransformer(); \
	friend struct Z_Construct_UClass_UMultiTransformer_Statics; \
public: \
	DECLARE_CLASS(UMultiTransformer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UMultiTransformer)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_INCLASS \
private: \
	static void StaticRegisterNativesUMultiTransformer(); \
	friend struct Z_Construct_UClass_UMultiTransformer_Statics; \
public: \
	DECLARE_CLASS(UMultiTransformer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UMultiTransformer)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTransformer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTransformer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTransformer(UMultiTransformer&&); \
	NO_API UMultiTransformer(const UMultiTransformer&); \
public: \
	NO_API virtual ~UMultiTransformer();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiTransformer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiTransformer(UMultiTransformer&&); \
	NO_API UMultiTransformer(const UMultiTransformer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiTransformer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiTransformer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiTransformer) \
	NO_API virtual ~UMultiTransformer();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_INCLASS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_SPARSE_DATA \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_ACCESSORS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UMultiTransformer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Transforms_MultiTransformer_h


#define FOREACH_ENUM_EMULTITRANSFORMERMODE(op) \
	op(EMultiTransformerMode::DefaultGizmo) \
	op(EMultiTransformerMode::QuickAxisTranslation) 

enum class EMultiTransformerMode;
template<> struct TIsUEnumClass<EMultiTransformerMode> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EMultiTransformerMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
