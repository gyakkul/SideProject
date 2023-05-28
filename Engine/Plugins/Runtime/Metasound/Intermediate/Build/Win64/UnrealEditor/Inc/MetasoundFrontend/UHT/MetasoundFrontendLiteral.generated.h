// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundFrontendLiteral.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef METASOUNDFRONTEND_MetasoundFrontendLiteral_generated_h
#error "MetasoundFrontendLiteral.generated.h already included, missing '#pragma once' in MetasoundFrontendLiteral.h"
#endif
#define METASOUNDFRONTEND_MetasoundFrontendLiteral_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMetasoundFrontendLiteral_Statics; \
	static class UScriptStruct* StaticStruct();


template<> METASOUNDFRONTEND_API UScriptStruct* StaticStruct<struct FMetasoundFrontendLiteral>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundFrontend_Public_MetasoundFrontendLiteral_h


#define FOREACH_ENUM_EMETASOUNDFRONTENDLITERALTYPE(op) \
	op(EMetasoundFrontendLiteralType::None) \
	op(EMetasoundFrontendLiteralType::Boolean) \
	op(EMetasoundFrontendLiteralType::Integer) \
	op(EMetasoundFrontendLiteralType::Float) \
	op(EMetasoundFrontendLiteralType::String) \
	op(EMetasoundFrontendLiteralType::UObject) \
	op(EMetasoundFrontendLiteralType::NoneArray) \
	op(EMetasoundFrontendLiteralType::BooleanArray) \
	op(EMetasoundFrontendLiteralType::IntegerArray) \
	op(EMetasoundFrontendLiteralType::FloatArray) \
	op(EMetasoundFrontendLiteralType::StringArray) \
	op(EMetasoundFrontendLiteralType::UObjectArray) \
	op(EMetasoundFrontendLiteralType::Invalid) 

enum class EMetasoundFrontendLiteralType : uint8;
template<> struct TIsUEnumClass<EMetasoundFrontendLiteralType> { enum { Value = true }; };
template<> METASOUNDFRONTEND_API UEnum* StaticEnum<EMetasoundFrontendLiteralType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
