// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "Channels/MovieSceneChannelData.h"
#include "Channels/MovieSceneCurveChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatChannel() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveExtrapolation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveInterpMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERichCurveTangentMode();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTangentData();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatValue;
class UScriptStruct* FMovieSceneFloatValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatValue, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFloatValue"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFloatValue>()
{
	return FMovieSceneFloatValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TangentMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TangentMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddingByte_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PaddingByte;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, Tangent), Z_Construct_UScriptStruct_FMovieSceneTangentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent_MetaData)) }; // 300005167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode = { "InterpMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, InterpMode), Z_Construct_UEnum_Engine_ERichCurveInterpMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode_MetaData)) }; // 931686469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode = { "TangentMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, TangentMode), Z_Construct_UEnum_Engine_ERichCurveTangentMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode_MetaData)) }; // 161970341
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_PaddingByte_MetaData[] = {
		{ "Comment", "/**\n\x09 * float value = 4 bytes\n\x09 * tangent data = 4 floats + byte enum = 4*4 + 1 = 17 bytes, rounded up to 20 bytes on clang-win64\n\x09 * interp and tangent modes = 2 byte enums = 2 bytes\n\x09 * total = 26 bytes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "float value = 4 bytes\ntangent data = 4 floats + byte enum = 4*4 + 1 = 17 bytes, rounded up to 20 bytes on clang-win64\ninterp and tangent modes = 2 byte enums = 2 bytes\ntotal = 26 bytes" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_PaddingByte = { "PaddingByte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatValue, PaddingByte), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_PaddingByte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_PaddingByte_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_Tangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_InterpMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_TangentMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewProp_PaddingByte,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneFloatValue",
		sizeof(FMovieSceneFloatValue),
		alignof(FMovieSceneFloatValue),
		Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFloatValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneFloatChannel>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneFloatChannel cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel;
class UScriptStruct* FMovieSceneFloatChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneFloatChannel, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneFloatChannel"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneFloatChannel>()
{
	return FMovieSceneFloatChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreInfinityExtrap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostInfinityExtrap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PostInfinityExtrap;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDefaultValue_MetaData[];
#endif
		static void NewProp_bHasDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TickResolution;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCurve_MetaData[];
#endif
		static void NewProp_bShowCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCurve;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneFloatChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Pre-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "Pre-infinity extrapolation state" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap = { "PreInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, PreInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap_MetaData)) }; // 600995221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData[] = {
		{ "Comment", "/** Post-infinity extrapolation state */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "Post-infinity extrapolation state" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap = { "PostInfinityExtrap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, PostInfinityExtrap), Z_Construct_UEnum_Engine_ERichCurveExtrapolation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap_MetaData)) }; // 600995221
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatValue, METADATA_PARAMS(nullptr, 0) }; // 4240783157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData[] = {
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_MetaData)) }; // 4240783157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannel*)Obj)->bHasDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue = { "bHasDefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneFloatChannel), &Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution = { "TickResolution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneFloatChannel, TickResolution), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Channels/MovieSceneFloatChannel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve_SetBit(void* Obj)
	{
		((FMovieSceneFloatChannel*)Obj)->bShowCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve = { "bShowCurve", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneFloatChannel), &Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PreInfinityExtrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_PostInfinityExtrap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_Values,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bHasDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_KeyHandles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_TickResolution,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewProp_bShowCurve,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneFloatChannel",
		sizeof(FMovieSceneFloatChannel),
		alignof(FMovieSceneFloatChannel),
		Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneFloatValue::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatValue_Statics::NewStructOps, TEXT("MovieSceneFloatValue"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatValue), 4240783157U) },
		{ FMovieSceneFloatChannel::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneFloatChannel_Statics::NewStructOps, TEXT("MovieSceneFloatChannel"), &Z_Registration_Info_UScriptStruct_MovieSceneFloatChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneFloatChannel), 3942748414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h_4113653596(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_Channels_MovieSceneFloatChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
