// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDatasmithAreaLightFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDatasmithAreaLightActorShape : uint8;
enum class EDatasmithAreaLightActorType : uint8;
enum class ELightUnits : uint8;
struct FLinearColor;
#ifdef DATASMITHINTERCHANGE_InterchangeDatasmithAreaLightFactoryNode_generated_h
#error "InterchangeDatasmithAreaLightFactoryNode.generated.h already included, missing '#pragma once' in InterchangeDatasmithAreaLightFactoryNode.h"
#endif
#define DATASMITHINTERCHANGE_InterchangeDatasmithAreaLightFactoryNode_generated_h

#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execSetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomSourceLength); \
	DECLARE_FUNCTION(execGetCustomSourceLength); \
	DECLARE_FUNCTION(execSetCustomSourceRadius); \
	DECLARE_FUNCTION(execGetCustomSourceRadius); \
	DECLARE_FUNCTION(execSetCustomRotation); \
	DECLARE_FUNCTION(execGetCustomRotation); \
	DECLARE_FUNCTION(execSetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execGetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execSetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execGetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomColor); \
	DECLARE_FUNCTION(execGetCustomColor); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomDimensions); \
	DECLARE_FUNCTION(execGetCustomDimensions); \
	DECLARE_FUNCTION(execSetCustomLightShape); \
	DECLARE_FUNCTION(execGetCustomLightShape); \
	DECLARE_FUNCTION(execSetCustomLightType); \
	DECLARE_FUNCTION(execGetCustomLightType);


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightOuterAngle); \
	DECLARE_FUNCTION(execSetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execGetCustomSpotlightInnerAngle); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomSourceLength); \
	DECLARE_FUNCTION(execGetCustomSourceLength); \
	DECLARE_FUNCTION(execSetCustomSourceRadius); \
	DECLARE_FUNCTION(execGetCustomSourceRadius); \
	DECLARE_FUNCTION(execSetCustomRotation); \
	DECLARE_FUNCTION(execGetCustomRotation); \
	DECLARE_FUNCTION(execSetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execGetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execSetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execGetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomColor); \
	DECLARE_FUNCTION(execGetCustomColor); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomDimensions); \
	DECLARE_FUNCTION(execGetCustomDimensions); \
	DECLARE_FUNCTION(execSetCustomLightShape); \
	DECLARE_FUNCTION(execGetCustomLightShape); \
	DECLARE_FUNCTION(execSetCustomLightType); \
	DECLARE_FUNCTION(execGetCustomLightType);


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_ACCESSORS
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDatasmithAreaLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDatasmithAreaLightFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithInterchange"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDatasmithAreaLightFactoryNode)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInterchangeDatasmithAreaLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeDatasmithAreaLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDatasmithAreaLightFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DatasmithInterchange"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDatasmithAreaLightFactoryNode)


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeDatasmithAreaLightFactoryNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDatasmithAreaLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDatasmithAreaLightFactoryNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(UInterchangeDatasmithAreaLightFactoryNode&&); \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(const UInterchangeDatasmithAreaLightFactoryNode&); \
public: \
	NO_API virtual ~UInterchangeDatasmithAreaLightFactoryNode();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(UInterchangeDatasmithAreaLightFactoryNode&&); \
	NO_API UInterchangeDatasmithAreaLightFactoryNode(const UInterchangeDatasmithAreaLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDatasmithAreaLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDatasmithAreaLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDatasmithAreaLightFactoryNode) \
	NO_API virtual ~UInterchangeDatasmithAreaLightFactoryNode();


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_INCLASS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_ACCESSORS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHINTERCHANGE_API UClass* StaticClass<class UInterchangeDatasmithAreaLightFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchange_Public_InterchangeDatasmithAreaLightFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
