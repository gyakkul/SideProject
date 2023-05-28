// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieScene3DTransformSection.h"
#include "Channels/MovieSceneDoubleChannel.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "ConstraintChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DTransformSection() {}
// Cross Module References
	CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintAndActiveChannel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneDoubleChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionConstraints();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShow3DTrajectory;
	static UEnum* EShow3DTrajectory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EShow3DTrajectory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EShow3DTrajectory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EShow3DTrajectory"));
		}
		return Z_Registration_Info_UEnum_EShow3DTrajectory.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EShow3DTrajectory>()
	{
		return EShow3DTrajectory_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enumerators[] = {
		{ "EShow3DTrajectory::EST_OnlyWhenSelected", (int64)EShow3DTrajectory::EST_OnlyWhenSelected },
		{ "EShow3DTrajectory::EST_Always", (int64)EShow3DTrajectory::EST_Always },
		{ "EShow3DTrajectory::EST_Never", (int64)EShow3DTrajectory::EST_Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Visibility options for 3d trajectory. */" },
		{ "EST_Always.DisplayName", "Always" },
		{ "EST_Always.Name", "EShow3DTrajectory::EST_Always" },
		{ "EST_Never.DisplayName", "Never" },
		{ "EST_Never.Name", "EShow3DTrajectory::EST_Never" },
		{ "EST_OnlyWhenSelected.DisplayName", "Only When Selected" },
		{ "EST_OnlyWhenSelected.Name", "EShow3DTrajectory::EST_OnlyWhenSelected" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Visibility options for 3d trajectory." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		"EShow3DTrajectory",
		"EShow3DTrajectory",
		Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory()
	{
		if (!Z_Registration_Info_UEnum_EShow3DTrajectory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShow3DTrajectory.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EShow3DTrajectory.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA

static_assert(std::is_polymorphic<FMovieScene3DLocationKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieScene3DLocationKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct;
class UScriptStruct* FMovieScene3DLocationKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DLocationKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DLocationKeyStruct>()
{
	return FMovieScene3DLocationKeyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for translation keys in 3D transform sections.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DLocationKeyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's translation value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's translation value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DLocationKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DLocationKeyStruct",
		sizeof(FMovieScene3DLocationKeyStruct),
		alignof(FMovieScene3DLocationKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieScene3DRotationKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieScene3DRotationKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct;
class UScriptStruct* FMovieScene3DRotationKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DRotationKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DRotationKeyStruct>()
{
	return FMovieScene3DRotationKeyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for translation keys in 3D transform sections.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DRotationKeyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's rotation value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's rotation value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DRotationKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DRotationKeyStruct",
		sizeof(FMovieScene3DRotationKeyStruct),
		alignof(FMovieScene3DRotationKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieScene3DScaleKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieScene3DScaleKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct;
class UScriptStruct* FMovieScene3DScaleKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DScaleKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DScaleKeyStruct>()
{
	return FMovieScene3DScaleKeyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for translation keys in 3D transform sections.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for translation keys in 3D transform sections." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DScaleKeyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's scale value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's scale value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DScaleKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DScaleKeyStruct",
		sizeof(FMovieScene3DScaleKeyStruct),
		alignof(FMovieScene3DScaleKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieScene3DTransformKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieScene3DTransformKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct;
class UScriptStruct* FMovieScene3DTransformKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieScene3DTransformKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieScene3DTransformKeyStruct>()
{
	return FMovieScene3DTransformKeyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for 3D transform section key data.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Proxy structure for 3D transform section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScene3DTransformKeyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's translation value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's translation value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's rotation value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's rotation value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's scale value. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's scale value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Scale), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScene3DTransformKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieScene3DTransformKeyStruct",
		sizeof(FMovieScene3DTransformKeyStruct),
		alignof(FMovieScene3DTransformKeyStruct),
		Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneTransformMask;
class UScriptStruct* FMovieSceneTransformMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformMask, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneTransformMask"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneTransformMask>()
{
	return FMovieSceneTransformMask::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneTransformMask>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneTransformMask, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewProp_Mask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneTransformMask",
		sizeof(FMovieSceneTransformMask),
		alignof(FMovieSceneTransformMask),
		Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTransformMask()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneTransformMask.InnerSingleton;
	}
	void UMovieScene3DTransformSectionConstraints::StaticRegisterNativesUMovieScene3DTransformSectionConstraints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformSectionConstraints);
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister()
	{
		return UMovieScene3DTransformSectionConstraints::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintsChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintsChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstraintsChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This object contains information needed for constraint channels on the transform section\n*/" },
		{ "IncludePath", "Sections/MovieScene3DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "This object contains information needed for constraint channels on the transform section" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels_Inner = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintAndActiveChannel, METADATA_PARAMS(nullptr, 0) }; // 1158857121
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels_MetaData[] = {
		{ "Comment", "/** Constraint Channels*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Constraint Channels" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels = { "ConstraintsChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSectionConstraints, ConstraintsChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels_MetaData)) }; // 1158857121
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::NewProp_ConstraintsChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformSectionConstraints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::ClassParams = {
		&UMovieScene3DTransformSectionConstraints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformSectionConstraints()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformSectionConstraints>()
	{
		return UMovieScene3DTransformSectionConstraints::StaticClass();
	}
	UMovieScene3DTransformSectionConstraints::UMovieScene3DTransformSectionConstraints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSectionConstraints);
	UMovieScene3DTransformSectionConstraints::~UMovieScene3DTransformSectionConstraints() {}
	void UMovieScene3DTransformSection::StaticRegisterNativesUMovieScene3DTransformSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DTransformSection);
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection_NoRegister()
	{
		return UMovieScene3DTransformSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DTransformSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformMask_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualWeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManualWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideRegistry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Constraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseQuaternionInterpolation_MetaData[];
#endif
		static void NewProp_bUseQuaternionInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseQuaternionInterpolation;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Show3DTrajectory_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Show3DTrajectory_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Show3DTrajectory;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DTransformSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 3D transform section\n */" },
		{ "IncludePath", "Sections/MovieScene3DTransformSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "A 3D transform section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask = { "TransformMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, TransformMask), Z_Construct_UScriptStruct_FMovieSceneTransformMask, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask_MetaData)) }; // 2423217134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData[] = {
		{ "Comment", "/** Translation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Translation curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Translation, UMovieScene3DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Translation), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation_MetaData)) }; // 3270845618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** Rotation curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Rotation curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Rotation, UMovieScene3DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Rotation), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation_MetaData)) }; // 3270845618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData[] = {
		{ "Comment", "/** Scale curves */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Scale curves" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(Scale, UMovieScene3DTransformSection), nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Scale), Z_Construct_UScriptStruct_FMovieSceneDoubleChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale_MetaData)) }; // 3270845618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData[] = {
		{ "Comment", "/** Manual weight curve */" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Manual weight curve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight = { "ManualWeight", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, ManualWeight), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_OverrideRegistry_MetaData[] = {
		{ "Comment", "/** Optional pointer to a \"channels override\" container object. This object would only be allocated if any channels are overridden with a non-standard channel \x09*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Optional pointer to a \"channels override\" container object. This object would only be allocated if any channels are overridden with a non-standard channel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_OverrideRegistry = { "OverrideRegistry", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, OverrideRegistry), Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_OverrideRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_OverrideRegistry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Constraints_MetaData[] = {
		{ "Comment", "/** Optional pointer to constraint channels*/" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Optional pointer to constraint channels" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Constraints), Z_Construct_UClass_UMovieScene3DTransformSectionConstraints_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Constraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether to use a quaternion linear interpolation between keys. This finds the 'shortest' rotation between keyed orientations. */" },
		{ "DisplayName", "Use Quaternion Interpolation" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Whether to use a quaternion linear interpolation between keys. This finds the 'shortest' rotation between keyed orientations." },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_SetBit(void* Obj)
	{
		((UMovieScene3DTransformSection*)Obj)->bUseQuaternionInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation = { "bUseQuaternionInterpolation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene3DTransformSection), &Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData[] = {
		{ "Category", "Transform" },
		{ "Comment", "/** Whether to show the 3d trajectory */" },
		{ "DisplayName", "Show 3D Trajectory" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DTransformSection.h" },
		{ "ToolTip", "Whether to show the 3d trajectory" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory = { "Show3DTrajectory", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DTransformSection, Show3DTrajectory), Z_Construct_UEnum_MovieSceneTracks_EShow3DTrajectory, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_MetaData)) }; // 3166780523
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_TransformMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_ManualWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_OverrideRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Constraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_bUseQuaternionInterpolation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DTransformSection_Statics::NewProp_Show3DTrajectory,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneConstrainedSection_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DTransformSection, IMovieSceneConstrainedSection), false },  // 2356854711
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DTransformSection, IMovieSceneEntityProvider), false },  // 1947645787
			{ Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DTransformSection, IMovieSceneChannelOverrideProvider), false },  // 237137268
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DTransformSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DTransformSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DTransformSection_Statics::ClassParams = {
		&UMovieScene3DTransformSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DTransformSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DTransformSection()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DTransformSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DTransformSection.OuterSingleton, Z_Construct_UClass_UMovieScene3DTransformSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DTransformSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DTransformSection>()
	{
		return UMovieScene3DTransformSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DTransformSection);
	UMovieScene3DTransformSection::~UMovieScene3DTransformSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics
	{
#if WITH_EDITORONLY_DATA
		static const FEnumRegisterCompiledInInfo EnumInfo[];
#endif
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
#if WITH_EDITORONLY_DATA
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::EnumInfo[] = {
		{ EShow3DTrajectory_StaticEnum, TEXT("EShow3DTrajectory"), &Z_Registration_Info_UEnum_EShow3DTrajectory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3166780523U) },
	};
#endif
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieScene3DLocationKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieScene3DLocationKeyStruct_Statics::NewStructOps, TEXT("MovieScene3DLocationKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieScene3DLocationKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene3DLocationKeyStruct), 3305896310U) },
		{ FMovieScene3DRotationKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieScene3DRotationKeyStruct_Statics::NewStructOps, TEXT("MovieScene3DRotationKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieScene3DRotationKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene3DRotationKeyStruct), 3590811954U) },
		{ FMovieScene3DScaleKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieScene3DScaleKeyStruct_Statics::NewStructOps, TEXT("MovieScene3DScaleKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieScene3DScaleKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene3DScaleKeyStruct), 675675215U) },
		{ FMovieScene3DTransformKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieScene3DTransformKeyStruct_Statics::NewStructOps, TEXT("MovieScene3DTransformKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieScene3DTransformKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScene3DTransformKeyStruct), 3212080504U) },
		{ FMovieSceneTransformMask::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneTransformMask_Statics::NewStructOps, TEXT("MovieSceneTransformMask"), &Z_Registration_Info_UScriptStruct_MovieSceneTransformMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneTransformMask), 2423217134U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DTransformSectionConstraints, UMovieScene3DTransformSectionConstraints::StaticClass, TEXT("UMovieScene3DTransformSectionConstraints"), &Z_Registration_Info_UClass_UMovieScene3DTransformSectionConstraints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformSectionConstraints), 3148991210U) },
		{ Z_Construct_UClass_UMovieScene3DTransformSection, UMovieScene3DTransformSection::StaticClass, TEXT("UMovieScene3DTransformSection"), &Z_Registration_Info_UClass_UMovieScene3DTransformSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DTransformSection), 3211783574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_492085696(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::ScriptStructInfo),
		IF_WITH_EDITORONLY_DATA(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::EnumInfo, nullptr), IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DTransformSection_h_Statics::EnumInfo), 0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
