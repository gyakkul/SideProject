// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracksComponentTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTracksComponentTypes() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintComponentData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerlinNoiseParams;
class UScriptStruct* FPerlinNoiseParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinNoiseParams, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("PerlinNoiseParams"));
	}
	return Z_Registration_Info_UScriptStruct_PerlinNoiseParams.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FPerlinNoiseParams>()
{
	return FPerlinNoiseParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for Perlin Noise channels */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for Perlin Noise channels" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinNoiseParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The frequency of the noise, i.e. how many times per second does the noise peak */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The frequency of the noise, i.e. how many times per second does the noise peak" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinNoiseParams, Frequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** The amplitude of the noise, which will vary between [-Amplitude, +Amplitude] */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "The amplitude of the noise, which will vary between [-Amplitude, +Amplitude]" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinNoiseParams, Amplitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Perlin Noise" },
		{ "Comment", "/** Starting offset, in seconds, into the noise pattern */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Starting offset, in seconds, into the noise pattern" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerlinNoiseParams, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Amplitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"PerlinNoiseParams",
		sizeof(FPerlinNoiseParams),
		alignof(FPerlinNoiseParams),
		Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerlinNoiseParams()
	{
		if (!Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton, Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerlinNoiseParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData;
class UScriptStruct* FLevelVisibilityComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelVisibilityComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("LevelVisibilityComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FLevelVisibilityComponentData>()
{
	return FLevelVisibilityComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the level visibility system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the level visibility system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelVisibilityComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelVisibilityComponentData, Section), Z_Construct_UClass_UMovieSceneLevelVisibilitySection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"LevelVisibilityComponentData",
		sizeof(FLevelVisibilityComponentData),
		alignof(FLevelVisibilityComponentData),
		Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelVisibilityComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData;
class UScriptStruct* FMovieSceneDataLayerComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneDataLayerComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneDataLayerComponentData>()
{
	return FMovieSceneDataLayerComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the data layer system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the data layer system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneDataLayerComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneDataLayerComponentData, Section), Z_Construct_UClass_UMovieSceneDataLayerSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneDataLayerComponentData",
		sizeof(FMovieSceneDataLayerComponentData),
		alignof(FMovieSceneDataLayerComponentData),
		Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintComponentData;
class UScriptStruct* FConstraintComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("ConstraintComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FConstraintComponentData>()
{
	return FConstraintComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstraintName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for the constraint system */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for the constraint system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintName = { "ConstraintName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintComponentData, ConstraintName), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewProp_ConstraintName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"ConstraintComponentData",
		sizeof(FConstraintComponentData),
		alignof(FConstraintComponentData),
		Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton, Z_Construct_UScriptStruct_FConstraintComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintComponentData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData;
class UScriptStruct* FMovieSceneSkeletalAnimationComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneSkeletalAnimationComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneSkeletalAnimationComponentData>()
{
	return FMovieSceneSkeletalAnimationComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component data for a skeletal mesh animation */" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
		{ "ToolTip", "Component data for a skeletal mesh animation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneSkeletalAnimationComponentData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneTracksComponentTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneSkeletalAnimationComponentData, Section), Z_Construct_UClass_UMovieSceneSkeletalAnimationSection_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneSkeletalAnimationComponentData",
		sizeof(FMovieSceneSkeletalAnimationComponentData),
		alignof(FMovieSceneSkeletalAnimationComponentData),
		Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo[] = {
		{ FPerlinNoiseParams::StaticStruct, Z_Construct_UScriptStruct_FPerlinNoiseParams_Statics::NewStructOps, TEXT("PerlinNoiseParams"), &Z_Registration_Info_UScriptStruct_PerlinNoiseParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerlinNoiseParams), 1230117869U) },
		{ FLevelVisibilityComponentData::StaticStruct, Z_Construct_UScriptStruct_FLevelVisibilityComponentData_Statics::NewStructOps, TEXT("LevelVisibilityComponentData"), &Z_Registration_Info_UScriptStruct_LevelVisibilityComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelVisibilityComponentData), 3814056615U) },
		{ FMovieSceneDataLayerComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneDataLayerComponentData_Statics::NewStructOps, TEXT("MovieSceneDataLayerComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneDataLayerComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneDataLayerComponentData), 443219574U) },
		{ FConstraintComponentData::StaticStruct, Z_Construct_UScriptStruct_FConstraintComponentData_Statics::NewStructOps, TEXT("ConstraintComponentData"), &Z_Registration_Info_UScriptStruct_ConstraintComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintComponentData), 3314524788U) },
		{ FMovieSceneSkeletalAnimationComponentData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneSkeletalAnimationComponentData_Statics::NewStructOps, TEXT("MovieSceneSkeletalAnimationComponentData"), &Z_Registration_Info_UScriptStruct_MovieSceneSkeletalAnimationComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneSkeletalAnimationComponentData), 3553481814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_2268374457(TEXT("/Script/MovieSceneTracks"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_MovieSceneTracksComponentTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
