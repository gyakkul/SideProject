// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoseSearch/PoseSearchIndex.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POSESEARCH_PoseSearchIndex_generated_h
#error "PoseSearchIndex.generated.h already included, missing '#pragma once' in PoseSearchIndex.h"
#endif
#define POSESEARCH_PoseSearchIndex_generated_h

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchPoseMetadata_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchPoseMetadata>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchIndexAsset_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchIndexAsset>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_134_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchIndexBase_Statics; \
	static class UScriptStruct* StaticStruct();


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchIndexBase>();

#define FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseSearchIndex_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FPoseSearchIndexBase Super;


template<> POSESEARCH_API UScriptStruct* StaticStruct<struct FPoseSearchIndex>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchIndex_h


#define FOREACH_ENUM_ESEARCHINDEXASSETTYPE(op) \
	op(ESearchIndexAssetType::Invalid) \
	op(ESearchIndexAssetType::Sequence) \
	op(ESearchIndexAssetType::BlendSpace) \
	op(ESearchIndexAssetType::AnimComposite) 

enum class ESearchIndexAssetType : int32;
template<> struct TIsUEnumClass<ESearchIndexAssetType> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<ESearchIndexAssetType>();

#define FOREACH_ENUM_EPOSESEARCHBOOLEANREQUEST(op) \
	op(EPoseSearchBooleanRequest::FalseValue) \
	op(EPoseSearchBooleanRequest::TrueValue) \
	op(EPoseSearchBooleanRequest::Indifferent) \
	op(EPoseSearchBooleanRequest::Num) \
	op(EPoseSearchBooleanRequest::Invalid) 

enum class EPoseSearchBooleanRequest : uint8;
template<> struct TIsUEnumClass<EPoseSearchBooleanRequest> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchBooleanRequest>();

#define FOREACH_ENUM_EPOSESEARCHPOSEFLAGS(op) \
	op(EPoseSearchPoseFlags::None) \
	op(EPoseSearchPoseFlags::BlockTransition) 

enum class EPoseSearchPoseFlags : uint32;
template<> struct TIsUEnumClass<EPoseSearchPoseFlags> { enum { Value = true }; };
template<> POSESEARCH_API UEnum* StaticEnum<EPoseSearchPoseFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
