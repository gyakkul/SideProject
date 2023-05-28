// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DNACommon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RIGLOGICMODULE_DNACommon_generated_h
#error "DNACommon.generated.h already included, missing '#pragma once' in DNACommon.h"
#endif
#define RIGLOGICMODULE_DNACommon_generated_h

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCoordinateSystem_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FCoordinateSystem>();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FMeshBlendShapeChannelMapping>();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_126_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTextureCoordinate_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FTextureCoordinate>();

#define FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_145_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVertexLayout_Statics; \
	RIGLOGICMODULE_API static class UScriptStruct* StaticStruct();


template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<struct FVertexLayout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h


#define FOREACH_ENUM_EARCHETYPE(op) \
	op(EArchetype::Asian) \
	op(EArchetype::Black) \
	op(EArchetype::Caucasian) \
	op(EArchetype::Hispanic) \
	op(EArchetype::Alien) \
	op(EArchetype::Other) 

enum class EArchetype : uint8;
template<> struct TIsUEnumClass<EArchetype> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EArchetype>();

#define FOREACH_ENUM_EGENDER(op) \
	op(EGender::Male) \
	op(EGender::Female) \
	op(EGender::Other) 

enum class EGender : uint8;
template<> struct TIsUEnumClass<EGender> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EGender>();

#define FOREACH_ENUM_ETRANSLATIONUNIT(op) \
	op(ETranslationUnit::CM) \
	op(ETranslationUnit::M) 

enum class ETranslationUnit : uint8;
template<> struct TIsUEnumClass<ETranslationUnit> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ETranslationUnit>();

#define FOREACH_ENUM_EROTATIONUNIT(op) \
	op(ERotationUnit::Degrees) \
	op(ERotationUnit::Radians) 

enum class ERotationUnit : uint8;
template<> struct TIsUEnumClass<ERotationUnit> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERotationUnit>();

#define FOREACH_ENUM_EDIRECTION(op) \
	op(EDirection::Left) \
	op(EDirection::Right) \
	op(EDirection::Up) \
	op(EDirection::Down) \
	op(EDirection::Front) \
	op(EDirection::Back) 

enum class EDirection : uint8;
template<> struct TIsUEnumClass<EDirection> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDirection>();

#define FOREACH_ENUM_EDNADATALAYER(op) \
	op(EDNADataLayer::None) \
	op(EDNADataLayer::Descriptor) \
	op(EDNADataLayer::Definition) \
	op(EDNADataLayer::Behavior) \
	op(EDNADataLayer::Geometry) \
	op(EDNADataLayer::GeometryWithoutBlendShapes) \
	op(EDNADataLayer::MachineLearnedBehavior) \
	op(EDNADataLayer::All) 

enum class EDNADataLayer : uint8;
template<> struct TIsUEnumClass<EDNADataLayer> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDNADataLayer>();

#define FOREACH_ENUM_EACTIVATIONFUNCTION(op) \
	op(EActivationFunction::Linear) \
	op(EActivationFunction::ReLU) \
	op(EActivationFunction::LeakyReLU) \
	op(EActivationFunction::Tanh) \
	op(EActivationFunction::Sigmoid) 

enum class EActivationFunction : uint8;
template<> struct TIsUEnumClass<EActivationFunction> { enum { Value = true }; };
template<> RIGLOGICMODULE_API UEnum* StaticEnum<EActivationFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
