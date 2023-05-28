// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MuCO/CustomizableObjectParameterTypeDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMIZABLEOBJECT_CustomizableObjectParameterTypeDefinitions_generated_h
#error "CustomizableObjectParameterTypeDefinitions.generated.h already included, missing '#pragma once' in CustomizableObjectParameterTypeDefinitions.h"
#endif
#define CUSTOMIZABLEOBJECT_CustomizableObjectParameterTypeDefinitions_generated_h

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_47_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectBoolParameterValue>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_72_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectIntParameterValue>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectFloatParameterValue>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectTextureParameterValue>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectVectorParameterValue>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectProjector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectProjector>();

#define FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue_Statics; \
	CUSTOMIZABLEOBJECT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<struct FCustomizableObjectProjectorParameterValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectParameterTypeDefinitions_h


#define FOREACH_ENUM_EMUTABLEPARAMETERTYPE(op) \
	op(EMutableParameterType::None) \
	op(EMutableParameterType::Bool) \
	op(EMutableParameterType::Int) \
	op(EMutableParameterType::Float) \
	op(EMutableParameterType::Color) \
	op(EMutableParameterType::Projector) \
	op(EMutableParameterType::Texture) 

enum class EMutableParameterType : uint8;
template<> struct TIsUEnumClass<EMutableParameterType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<EMutableParameterType>();

#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTGROUPTYPE(op) \
	op(ECustomizableObjectGroupType::COGT_TOGGLE) \
	op(ECustomizableObjectGroupType::COGT_ALL) \
	op(ECustomizableObjectGroupType::COGT_ONE) \
	op(ECustomizableObjectGroupType::COGT_ONE_OR_NONE) 

enum class ECustomizableObjectGroupType : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectGroupType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectGroupType>();

#define FOREACH_ENUM_EMUTABLECOMPILEMESHTYPE(op) \
	op(EMutableCompileMeshType::Full) \
	op(EMutableCompileMeshType::Local) \
	op(EMutableCompileMeshType::LocalAndChildren) \
	op(EMutableCompileMeshType::AddWorkingSetNoChildren) \
	op(EMutableCompileMeshType::AddWorkingSetAndChildren) 

enum class EMutableCompileMeshType : uint8;
template<> struct TIsUEnumClass<EMutableCompileMeshType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<EMutableCompileMeshType>();

#define FOREACH_ENUM_ECUSTOMIZABLEOBJECTPROJECTORTYPE(op) \
	op(ECustomizableObjectProjectorType::Planar) \
	op(ECustomizableObjectProjectorType::Cylindrical) \
	op(ECustomizableObjectProjectorType::Wrapping) 

enum class ECustomizableObjectProjectorType : uint8;
template<> struct TIsUEnumClass<ECustomizableObjectProjectorType> { enum { Value = true }; };
template<> CUSTOMIZABLEOBJECT_API UEnum* StaticEnum<ECustomizableObjectProjectorType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
