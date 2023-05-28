// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLightNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInterchangeLightUnits : uint8;
struct FLinearColor;
#ifdef INTERCHANGENODES_InterchangeLightNode_generated_h
#error "InterchangeLightNode.generated.h already included, missing '#pragma once' in InterchangeLightNode.h"
#endif
#define INTERCHANGENODES_InterchangeLightNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseLightNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseLightNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeBaseLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeBaseLightNode(UInterchangeBaseLightNode&&); \
	NO_API UInterchangeBaseLightNode(const UInterchangeBaseLightNode&); \
public: \
	NO_API virtual ~UInterchangeBaseLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeBaseLightNode(UInterchangeBaseLightNode&&); \
	NO_API UInterchangeBaseLightNode(const UInterchangeBaseLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseLightNode) \
	NO_API virtual ~UInterchangeBaseLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_19_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeBaseLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomIESTexture); \
	DECLARE_FUNCTION(execGetCustomIESTexture); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomIESTexture); \
	DECLARE_FUNCTION(execGetCustomIESTexture); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeLightNode(UInterchangeLightNode&&); \
	NO_API UInterchangeLightNode(const UInterchangeLightNode&); \
public: \
	NO_API virtual ~UInterchangeLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeLightNode(UInterchangeLightNode&&); \
	NO_API UInterchangeLightNode(const UInterchangeLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLightNode) \
	NO_API virtual ~UInterchangeLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_64_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePointLightNode(); \
	friend struct Z_Construct_UClass_UInterchangePointLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangePointLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePointLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangePointLightNode(); \
	friend struct Z_Construct_UClass_UInterchangePointLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangePointLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePointLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePointLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangePointLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePointLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePointLightNode(UInterchangePointLightNode&&); \
	NO_API UInterchangePointLightNode(const UInterchangePointLightNode&); \
public: \
	NO_API virtual ~UInterchangePointLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePointLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangePointLightNode(UInterchangePointLightNode&&); \
	NO_API UInterchangePointLightNode(const UInterchangePointLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePointLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePointLightNode) \
	NO_API virtual ~UInterchangePointLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_98_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangePointLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeSpotLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSpotLightNode, UInterchangePointLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSpotLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeSpotLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSpotLightNode, UInterchangePointLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSpotLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSpotLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeSpotLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSpotLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSpotLightNode(UInterchangeSpotLightNode&&); \
	NO_API UInterchangeSpotLightNode(const UInterchangeSpotLightNode&); \
public: \
	NO_API virtual ~UInterchangeSpotLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSpotLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeSpotLightNode(UInterchangeSpotLightNode&&); \
	NO_API UInterchangeSpotLightNode(const UInterchangeSpotLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSpotLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpotLightNode) \
	NO_API virtual ~UInterchangeSpotLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_124_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeSpotLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeRectLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeRectLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeRectLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeRectLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeRectLightNode, UInterchangeLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeRectLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeRectLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeRectLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeRectLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeRectLightNode(UInterchangeRectLightNode&&); \
	NO_API UInterchangeRectLightNode(const UInterchangeRectLightNode&); \
public: \
	NO_API virtual ~UInterchangeRectLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeRectLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeRectLightNode(UInterchangeRectLightNode&&); \
	NO_API UInterchangeRectLightNode(const UInterchangeRectLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeRectLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeRectLightNode) \
	NO_API virtual ~UInterchangeRectLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_151_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeRectLightNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_SPARSE_DATA
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_RPC_WRAPPERS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_ACCESSORS
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDirectionalLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightNode(); \
	friend struct Z_Construct_UClass_UInterchangeDirectionalLightNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDirectionalLightNode, UInterchangeBaseLightNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDirectionalLightNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDirectionalLightNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDirectionalLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeDirectionalLightNode(UInterchangeDirectionalLightNode&&); \
	NO_API UInterchangeDirectionalLightNode(const UInterchangeDirectionalLightNode&); \
public: \
	NO_API virtual ~UInterchangeDirectionalLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDirectionalLightNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeDirectionalLightNode(UInterchangeDirectionalLightNode&&); \
	NO_API UInterchangeDirectionalLightNode(const UInterchangeDirectionalLightNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDirectionalLightNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDirectionalLightNode) \
	NO_API virtual ~UInterchangeDirectionalLightNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_177_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_RPC_WRAPPERS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_SPARSE_DATA \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_ACCESSORS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h_180_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeDirectionalLightNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeLightNode_h


#define FOREACH_ENUM_EINTERCHANGELIGHTUNITS(op) \
	op(EInterchangeLightUnits::Unitless) \
	op(EInterchangeLightUnits::Candelas) \
	op(EInterchangeLightUnits::Lumens) 

enum class EInterchangeLightUnits : uint8;
template<> struct TIsUEnumClass<EInterchangeLightUnits> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeLightUnits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
