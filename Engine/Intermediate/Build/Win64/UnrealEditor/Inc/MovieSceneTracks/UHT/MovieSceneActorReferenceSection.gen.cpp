// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneActorReferenceSection.h"
#include "../../Source/Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Channels/MovieSceneChannelData.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneActorReferenceSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FIntegralCurve();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey;
class UScriptStruct* FMovieSceneActorReferenceKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceKey"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceKey>()
{
	return FMovieSceneActorReferenceKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceKey, Object), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceKey, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Key" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceKey, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewProp_SocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneActorReferenceKey",
		sizeof(FMovieSceneActorReferenceKey),
		alignof(FMovieSceneActorReferenceKey),
		Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneActorReferenceData>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneActorReferenceData cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData;
class UScriptStruct* FMovieSceneActorReferenceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneActorReferenceData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneActorReferenceData>()
{
	return FMovieSceneActorReferenceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A curve of events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneActorReferenceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "Comment", "/** Sorted array of key times */" },
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Sorted array of key times" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyTimes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Comment", "/** Default value used when there are no keys */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Default value used when there are no keys" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceData, DefaultValue), Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue_MetaData)) }; // 3875560855
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey, METADATA_PARAMS(nullptr, 0) }; // 3875560855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_MetaData)) }; // 3875560855
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneActorReferenceData, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewProp_KeyHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneActorReferenceData",
		sizeof(FMovieSceneActorReferenceData),
		alignof(FMovieSceneActorReferenceData),
		Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneActorReferenceData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData.InnerSingleton;
	}
	void UMovieSceneActorReferenceSection::StaticRegisterNativesUMovieSceneActorReferenceSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneActorReferenceSection);
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection_NoRegister()
	{
		return UMovieSceneActorReferenceSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorReferenceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorReferenceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuidIndexCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorGuidIndexCurve;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorGuidStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorGuidStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorGuidStrings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single actor reference point section\n */" },
		{ "IncludePath", "Sections/MovieSceneActorReferenceSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "A single actor reference point section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData = { "ActorReferenceData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorReferenceData), Z_Construct_UScriptStruct_FMovieSceneActorReferenceData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData_MetaData)) }; // 124520195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData[] = {
		{ "Comment", "/** Curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
		{ "ToolTip", "Curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve = { "ActorGuidIndexCurve", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidIndexCurve_DEPRECATED), Z_Construct_UScriptStruct_FIntegralCurve, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve_MetaData)) }; // 397992019
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneActorReferenceSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings = { "ActorGuidStrings", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneActorReferenceSection, ActorGuidStrings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorReferenceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidIndexCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::NewProp_ActorGuidStrings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneActorReferenceSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams = {
		&UMovieSceneActorReferenceSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneActorReferenceSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton, Z_Construct_UClass_UMovieSceneActorReferenceSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneActorReferenceSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneActorReferenceSection>()
	{
		return UMovieSceneActorReferenceSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneActorReferenceSection);
	UMovieSceneActorReferenceSection::~UMovieSceneActorReferenceSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneActorReferenceKey::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceKey_Statics::NewStructOps, TEXT("MovieSceneActorReferenceKey"), &Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneActorReferenceKey), 3875560855U) },
		{ FMovieSceneActorReferenceData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneActorReferenceData_Statics::NewStructOps, TEXT("MovieSceneActorReferenceData"), &Z_Registration_Info_UScriptStruct_MovieSceneActorReferenceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneActorReferenceData), 124520195U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneActorReferenceSection, UMovieSceneActorReferenceSection::StaticClass, TEXT("UMovieSceneActorReferenceSection"), &Z_Registration_Info_UClass_UMovieSceneActorReferenceSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneActorReferenceSection), 1735822048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_2730190733(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneActorReferenceSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
