// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneEventSection.h"
#include "../../Source/Runtime/Engine/Classes/Curves/NameCurve.h"
#include "Channels/MovieSceneChannelData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNameCurve();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FEventPayload();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventParameters;
class UScriptStruct* FMovieSceneEventParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventParameters, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventParameters>()
{
	return FMovieSceneEventParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneEventParameters",
		sizeof(FMovieSceneEventParameters),
		alignof(FMovieSceneEventParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EventPayload;
class UScriptStruct* FEventPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEventPayload, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EventPayload"));
	}
	return Z_Registration_Info_UScriptStruct_EventPayload.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FEventPayload>()
{
	return FEventPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEventPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEventPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEventPayload>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** The name of the event to trigger */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "The name of the event to trigger" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventPayload, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** The event parameters */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The event parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEventPayload, Parameters), Z_Construct_UScriptStruct_FMovieSceneEventParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters_MetaData)) }; // 1950849821
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEventPayload_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEventPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"EventPayload",
		sizeof(FEventPayload),
		alignof(FEventPayload),
		Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEventPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEventPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton, Z_Construct_UScriptStruct_FEventPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EventPayload.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMovieSceneEventSectionData>() == std::is_polymorphic<FMovieSceneChannel>(), "USTRUCT FMovieSceneEventSectionData cannot be polymorphic unless super FMovieSceneChannel is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData;
class UScriptStruct* FMovieSceneEventSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneEventSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneEventSectionData>()
{
	return FMovieSceneEventSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Times_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Times_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Times;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyHandles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyHandles;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FFloatPropertyParams NewProp_KeyTimes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A curve of events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "A curve of events" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneEventSectionData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner = { "Times", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData[] = {
		{ "KeyTimes", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times = { "Times", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, Times), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner = { "KeyValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEventPayload, METADATA_PARAMS(nullptr, 0) }; // 1802297926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData[] = {
		{ "Comment", "/** Array of values that correspond to each key time */" },
		{ "KeyValues", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Array of values that correspond to each key time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues = { "KeyValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_MetaData)) }; // 1802297926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles_MetaData[] = {
		{ "Comment", "/** This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "This needs to be a UPROPERTY so it gets saved into editor transactions but transient so it doesn't get saved into assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles = { "KeyHandles", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyHandles), Z_Construct_UScriptStruct_FMovieSceneKeyHandleMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles_MetaData)) }; // 2999086866
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner = { "KeyTimes", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes = { "KeyTimes", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneEventSectionData, KeyTimes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_Times,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyHandles,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewProp_KeyTimes,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneChannel,
		&NewStructOps,
		"MovieSceneEventSectionData",
		sizeof(FMovieSceneEventSectionData),
		alignof(FMovieSceneEventSectionData),
		Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData.InnerSingleton;
	}
	void UMovieSceneEventSection::StaticRegisterNativesUMovieSceneEventSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventSection);
	UClass* Z_Construct_UClass_UMovieSceneEventSection_NoRegister()
	{
		return UMovieSceneEventSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Events;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a section in movie scene event tracks.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
		{ "ToolTip", "Implements a section in movie scene event tracks." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, Events_DEPRECATED), Z_Construct_UScriptStruct_FNameCurve, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events_MetaData)) }; // 2636934501
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData = { "EventData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventSection, EventData), Z_Construct_UScriptStruct_FMovieSceneEventSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData_MetaData)) }; // 2061854937
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_Events,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventSection_Statics::NewProp_EventData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams = {
		&UMovieSceneEventSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEventSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventSection>()
	{
		return UMovieSceneEventSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventSection);
	UMovieSceneEventSection::~UMovieSceneEventSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneEventParameters::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventParameters_Statics::NewStructOps, TEXT("MovieSceneEventParameters"), &Z_Registration_Info_UScriptStruct_MovieSceneEventParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventParameters), 1950849821U) },
		{ FEventPayload::StaticStruct, Z_Construct_UScriptStruct_FEventPayload_Statics::NewStructOps, TEXT("EventPayload"), &Z_Registration_Info_UScriptStruct_EventPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEventPayload), 1802297926U) },
		{ FMovieSceneEventSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneEventSectionData_Statics::NewStructOps, TEXT("MovieSceneEventSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneEventSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneEventSectionData), 2061854937U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventSection, UMovieSceneEventSection::StaticClass, TEXT("UMovieSceneEventSection"), &Z_Registration_Info_UClass_UMovieSceneEventSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventSection), 2904111145U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_2744070557(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
