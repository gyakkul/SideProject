// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaIOCoreDefinitions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAIOCORE_MediaIOCoreDefinitions_generated_h
#error "MediaIOCoreDefinitions.generated.h already included, missing '#pragma once' in MediaIOCoreDefinitions.h"
#endif
#define MEDIAIOCORE_MediaIOCoreDefinitions_generated_h

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_107_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOAutoDetectableTimecodeFormat_Backup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOAutoDetectableTimecodeFormat_Backup>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIODevice_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIODevice>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_183_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOConnection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOConnection>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOMode_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOMode>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_267_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOConfiguration>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_298_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOInputConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOInputConfiguration>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_328_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOOutputConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOOutputConfiguration>();

#define FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaIOVideoTimecodeConfiguration_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<struct FMediaIOVideoTimecodeConfiguration>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreDefinitions_h


#define FOREACH_ENUM_EMEDIAIOTRANSPORTTYPE(op) \
	op(EMediaIOTransportType::SingleLink) \
	op(EMediaIOTransportType::DualLink) \
	op(EMediaIOTransportType::QuadLink) \
	op(EMediaIOTransportType::HDMI) 

enum class EMediaIOTransportType;
template<> struct TIsUEnumClass<EMediaIOTransportType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOTransportType>();

#define FOREACH_ENUM_EMEDIAIOQUADLINKTRANSPORTTYPE(op) \
	op(EMediaIOQuadLinkTransportType::SquareDivision) \
	op(EMediaIOQuadLinkTransportType::TwoSampleInterleave) 

enum class EMediaIOQuadLinkTransportType;
template<> struct TIsUEnumClass<EMediaIOQuadLinkTransportType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOQuadLinkTransportType>();

#define FOREACH_ENUM_EMEDIAIOSTANDARDTYPE(op) \
	op(EMediaIOStandardType::Progressive) \
	op(EMediaIOStandardType::Interlaced) \
	op(EMediaIOStandardType::ProgressiveSegmentedFrame) 

enum class EMediaIOStandardType;
template<> struct TIsUEnumClass<EMediaIOStandardType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOStandardType>();

#define FOREACH_ENUM_EMEDIAIOTIMECODEFORMAT(op) \
	op(EMediaIOTimecodeFormat::None) \
	op(EMediaIOTimecodeFormat::LTC) \
	op(EMediaIOTimecodeFormat::VITC) 

enum class EMediaIOTimecodeFormat;
template<> struct TIsUEnumClass<EMediaIOTimecodeFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOTimecodeFormat>();

#define FOREACH_ENUM_EMEDIAIOAUTODETECTABLETIMECODEFORMAT(op) \
	op(EMediaIOAutoDetectableTimecodeFormat::None) \
	op(EMediaIOAutoDetectableTimecodeFormat::LTC) \
	op(EMediaIOAutoDetectableTimecodeFormat::VITC) \
	op(EMediaIOAutoDetectableTimecodeFormat::Auto) 

enum class EMediaIOAutoDetectableTimecodeFormat : uint8;
template<> struct TIsUEnumClass<EMediaIOAutoDetectableTimecodeFormat> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOAutoDetectableTimecodeFormat>();

#define FOREACH_ENUM_EMEDIAIOINPUTTYPE(op) \
	op(EMediaIOInputType::Fill) \
	op(EMediaIOInputType::FillAndKey) 

enum class EMediaIOInputType;
template<> struct TIsUEnumClass<EMediaIOInputType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOInputType>();

#define FOREACH_ENUM_EMEDIAIOOUTPUTTYPE(op) \
	op(EMediaIOOutputType::Fill) \
	op(EMediaIOOutputType::FillAndKey) 

enum class EMediaIOOutputType;
template<> struct TIsUEnumClass<EMediaIOOutputType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOOutputType>();

#define FOREACH_ENUM_EMEDIAIOREFERENCETYPE(op) \
	op(EMediaIOReferenceType::FreeRun) \
	op(EMediaIOReferenceType::External) \
	op(EMediaIOReferenceType::Input) 

enum class EMediaIOReferenceType;
template<> struct TIsUEnumClass<EMediaIOReferenceType> { enum { Value = true }; };
template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaIOReferenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
