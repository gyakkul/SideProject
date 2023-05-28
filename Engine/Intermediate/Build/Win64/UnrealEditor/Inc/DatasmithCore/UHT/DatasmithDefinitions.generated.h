// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DatasmithDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHCORE_DatasmithDefinitions_generated_h
#error "DatasmithDefinitions.generated.h already included, missing '#pragma once' in DatasmithDefinitions.h"
#endif
#define DATASMITHCORE_DatasmithDefinitions_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithDefinitions_h


#define FOREACH_ENUM_EDATASMITHLIGHTSHAPE(op) \
	op(EDatasmithLightShape::Rectangle) \
	op(EDatasmithLightShape::Disc) \
	op(EDatasmithLightShape::Sphere) \
	op(EDatasmithLightShape::Cylinder) \
	op(EDatasmithLightShape::None) 

enum class EDatasmithLightShape : uint8;
template<> struct TIsUEnumClass<EDatasmithLightShape> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithLightShape>();

#define FOREACH_ENUM_EDATASMITHTEXTUREMODE(op) \
	op(EDatasmithTextureMode::Diffuse) \
	op(EDatasmithTextureMode::Specular) \
	op(EDatasmithTextureMode::Normal) \
	op(EDatasmithTextureMode::NormalGreenInv) \
	op(EDatasmithTextureMode::UNUSED_Displace) \
	op(EDatasmithTextureMode::Other) \
	op(EDatasmithTextureMode::Bump) \
	op(EDatasmithTextureMode::Ies) 

enum class EDatasmithTextureMode : uint8;
template<> struct TIsUEnumClass<EDatasmithTextureMode> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureMode>();

#define FOREACH_ENUM_EDATASMITHTEXTUREFILTER(op) \
	op(EDatasmithTextureFilter::Nearest) \
	op(EDatasmithTextureFilter::Bilinear) \
	op(EDatasmithTextureFilter::Trilinear) \
	op(EDatasmithTextureFilter::Default) 

enum class EDatasmithTextureFilter : uint8;
template<> struct TIsUEnumClass<EDatasmithTextureFilter> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureFilter>();

#define FOREACH_ENUM_EDATASMITHTEXTUREADDRESS(op) \
	op(EDatasmithTextureAddress::Wrap) \
	op(EDatasmithTextureAddress::Clamp) \
	op(EDatasmithTextureAddress::Mirror) 

enum class EDatasmithTextureAddress : uint8;
template<> struct TIsUEnumClass<EDatasmithTextureAddress> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureAddress>();

#define FOREACH_ENUM_EDATASMITHTEXTUREFORMAT(op) \
	op(EDatasmithTextureFormat::PNG) \
	op(EDatasmithTextureFormat::JPEG) 

enum class EDatasmithTextureFormat : uint8;
template<> struct TIsUEnumClass<EDatasmithTextureFormat> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithTextureFormat>();

#define FOREACH_ENUM_EDATASMITHCOLORSPACE(op) \
	op(EDatasmithColorSpace::Default) \
	op(EDatasmithColorSpace::sRGB) \
	op(EDatasmithColorSpace::Linear) 

enum class EDatasmithColorSpace : uint8;
template<> struct TIsUEnumClass<EDatasmithColorSpace> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithColorSpace>();

#define FOREACH_ENUM_EDATASMITHKEYVALUEPROPERTYTYPE(op) \
	op(EDatasmithKeyValuePropertyType::String) \
	op(EDatasmithKeyValuePropertyType::Color) \
	op(EDatasmithKeyValuePropertyType::Float) \
	op(EDatasmithKeyValuePropertyType::Bool) \
	op(EDatasmithKeyValuePropertyType::Texture) \
	op(EDatasmithKeyValuePropertyType::Vector) \
	op(EDatasmithKeyValuePropertyType::Integer) 

enum class EDatasmithKeyValuePropertyType : uint8;
template<> struct TIsUEnumClass<EDatasmithKeyValuePropertyType> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithKeyValuePropertyType>();

#define FOREACH_ENUM_EDATASMITHACTORREMOVALRULE(op) \
	op(EDatasmithActorRemovalRule::RemoveChildren) \
	op(EDatasmithActorRemovalRule::KeepChildrenAndKeepRelativeTransform) 

enum class EDatasmithActorRemovalRule : uint8;
template<> struct TIsUEnumClass<EDatasmithActorRemovalRule> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithActorRemovalRule>();

#define FOREACH_ENUM_EDATASMITHACTORATTACHMENTRULE(op) \
	op(EDatasmithActorAttachmentRule::KeepRelativeTransform) \
	op(EDatasmithActorAttachmentRule::KeepWorldTransform) 

enum class EDatasmithActorAttachmentRule : uint8;
template<> struct TIsUEnumClass<EDatasmithActorAttachmentRule> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithActorAttachmentRule>();

#define FOREACH_ENUM_EDATASMITHCOMPLETIONMODE(op) \
	op(EDatasmithCompletionMode::KeepState) \
	op(EDatasmithCompletionMode::RestoreState) \
	op(EDatasmithCompletionMode::ProjectDefault) 

enum class EDatasmithCompletionMode : uint8;
template<> struct TIsUEnumClass<EDatasmithCompletionMode> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithCompletionMode>();

#define FOREACH_ENUM_EDATASMITHPROPERTYCATEGORY(op) \
	op(EDatasmithPropertyCategory::Undefined) \
	op(EDatasmithPropertyCategory::Generic) \
	op(EDatasmithPropertyCategory::RelativeLocation) \
	op(EDatasmithPropertyCategory::RelativeRotation) \
	op(EDatasmithPropertyCategory::RelativeScale3D) \
	op(EDatasmithPropertyCategory::Visibility) \
	op(EDatasmithPropertyCategory::Material) \
	op(EDatasmithPropertyCategory::Color) \
	op(EDatasmithPropertyCategory::Option) 

enum class EDatasmithPropertyCategory : uint8;
template<> struct TIsUEnumClass<EDatasmithPropertyCategory> { enum { Value = true }; };
template<> DATASMITHCORE_API UEnum* StaticEnum<EDatasmithPropertyCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
