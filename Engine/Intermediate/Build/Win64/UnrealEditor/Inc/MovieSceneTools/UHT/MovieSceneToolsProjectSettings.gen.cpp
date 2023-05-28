// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneToolsProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneToolsProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister();
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType();
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings();
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType;
	static UEnum* EMovieSceneToolsPropertyTrackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("EMovieSceneToolsPropertyTrackType"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UEnum* StaticEnum<EMovieSceneToolsPropertyTrackType>()
	{
		return EMovieSceneToolsPropertyTrackType_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enumerators[] = {
		{ "EMovieSceneToolsPropertyTrackType::FloatTrack", (int64)EMovieSceneToolsPropertyTrackType::FloatTrack },
		{ "EMovieSceneToolsPropertyTrackType::DoubleTrack", (int64)EMovieSceneToolsPropertyTrackType::DoubleTrack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enum_MetaDataParams[] = {
		{ "DoubleTrack.Name", "EMovieSceneToolsPropertyTrackType::DoubleTrack" },
		{ "FloatTrack.Name", "EMovieSceneToolsPropertyTrackType::FloatTrack" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		"EMovieSceneToolsPropertyTrackType",
		"EMovieSceneToolsPropertyTrackType",
		Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.InnerSingleton, Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings;
class UScriptStruct* FMovieSceneToolsPropertyTrackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("MovieSceneToolsPropertyTrackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.OuterSingleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FMovieSceneToolsPropertyTrackSettings>()
{
	return FMovieSceneToolsPropertyTrackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneToolsPropertyTrackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "Comment", "/** Optional ActorComponent tag (when keying a component property). */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Optional ActorComponent tag (when keying a component property)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneToolsPropertyTrackSettings, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "Comment", "/** Name to the keyed property within the Actor or ActorComponent. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Name to the keyed property within the Actor or ActorComponent." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneToolsPropertyTrackSettings, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewProp_PropertyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"MovieSceneToolsPropertyTrackSettings",
		sizeof(FMovieSceneToolsPropertyTrackSettings),
		alignof(FMovieSceneToolsPropertyTrackSettings),
		Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings;
class UScriptStruct* FMovieSceneToolsFbxSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("MovieSceneToolsFbxSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.OuterSingleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FMovieSceneToolsFbxSettings>()
{
	return FMovieSceneToolsFbxSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FbxPropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FbxPropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PropertyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneToolsFbxSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** The name of the fbx property */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The name of the fbx property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName = { "FbxPropertyName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneToolsFbxSettings, FbxPropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** The property track setting to map to */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The property track setting to map to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneToolsFbxSettings, PropertyPath), Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath_MetaData)) }; // 1541985933
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** Type of property track to map to */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Type of property track to map to" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneToolsFbxSettings, PropertyType), Z_Construct_UEnum_MovieSceneTools_EMovieSceneToolsPropertyTrackType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType_MetaData)) }; // 3851471472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_FbxPropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewProp_PropertyType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"MovieSceneToolsFbxSettings",
		sizeof(FMovieSceneToolsFbxSettings),
		alignof(FMovieSceneToolsFbxSettings),
		Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings.InnerSingleton;
	}
	void UMovieSceneToolsProjectSettings::StaticRegisterNativesUMovieSceneToolsProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneToolsProjectSettings);
	UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings_NoRegister()
	{
		return UMovieSceneToolsProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShotDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotPrefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShotPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstShotNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FirstShotNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotIncrement_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShotIncrement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShotNumDigits_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ShotNumDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeNumDigits_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TakeNumDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstTakeNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FirstTakeNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TakeSeparator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TakeSeparator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSequenceSeparator_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubSequenceSeparator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FbxSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FbxSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FbxSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings for the level sequences\n" },
		{ "IncludePath", "MovieSceneToolsProjectSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Settings for the level sequences" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData[] = {
		{ "Category", "Timeline" },
		{ "Comment", "/** The default start time for new level sequences, in seconds. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default start time for new level sequences, in seconds." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime = { "DefaultStartTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, DefaultStartTime), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData[] = {
		{ "Category", "Timeline" },
		{ "ClampMin", "0.000010" },
		{ "Comment", "/** The default duration for new level sequences in seconds. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default duration for new level sequences in seconds." },
		{ "Units", "s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration = { "DefaultDuration", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, DefaultDuration), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The default directory for the shots. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default directory for the shots." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory = { "ShotDirectory", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotDirectory), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The default prefix for shot names. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default prefix for shot names." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix = { "ShotPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotPrefix), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The first shot number. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The first shot number." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber = { "FirstShotNumber", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FirstShotNumber), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The default shot increment. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The default shot increment." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement = { "ShotIncrement", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotIncrement), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The number of digits for the shot number. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The number of digits for the shot number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits = { "ShotNumDigits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, ShotNumDigits), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The number of digits for the take number. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The number of digits for the take number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits = { "TakeNumDigits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, TakeNumDigits), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** The first take number. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "The first take number." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber = { "FirstTakeNumber", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FirstTakeNumber), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** Character separator between the shot number and the take number. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Character separator between the shot number and the take number." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator = { "TakeSeparator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, TakeSeparator), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData[] = {
		{ "Category", "Shots" },
		{ "Comment", "/** Character separator between the take number and the sub sequence name. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Character separator between the take number and the sub sequence name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator = { "SubSequenceSeparator", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, SubSequenceSeparator), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_Inner = { "FbxSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings, METADATA_PARAMS(nullptr, 0) }; // 2050457220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** Mapping between fbx property name and property track path */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsProjectSettings.h" },
		{ "ToolTip", "Mapping between fbx property name and property track path" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings = { "FbxSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneToolsProjectSettings, FbxSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_MetaData)) }; // 2050457220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_DefaultDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstShotNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotIncrement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_ShotNumDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeNumDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FirstTakeNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_TakeSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_SubSequenceSeparator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::NewProp_FbxSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneToolsProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::ClassParams = {
		&UMovieSceneToolsProjectSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneToolsProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneToolsProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneToolsProjectSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneToolsProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneToolsProjectSettings.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneToolsProjectSettings>()
	{
		return UMovieSceneToolsProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneToolsProjectSettings);
	UMovieSceneToolsProjectSettings::~UMovieSceneToolsProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::EnumInfo[] = {
		{ EMovieSceneToolsPropertyTrackType_StaticEnum, TEXT("EMovieSceneToolsPropertyTrackType"), &Z_Registration_Info_UEnum_EMovieSceneToolsPropertyTrackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851471472U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneToolsPropertyTrackSettings::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneToolsPropertyTrackSettings_Statics::NewStructOps, TEXT("MovieSceneToolsPropertyTrackSettings"), &Z_Registration_Info_UScriptStruct_MovieSceneToolsPropertyTrackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneToolsPropertyTrackSettings), 1541985933U) },
		{ FMovieSceneToolsFbxSettings::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneToolsFbxSettings_Statics::NewStructOps, TEXT("MovieSceneToolsFbxSettings"), &Z_Registration_Info_UScriptStruct_MovieSceneToolsFbxSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneToolsFbxSettings), 2050457220U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneToolsProjectSettings, UMovieSceneToolsProjectSettings::StaticClass, TEXT("UMovieSceneToolsProjectSettings"), &Z_Registration_Info_UClass_UMovieSceneToolsProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneToolsProjectSettings), 3628073609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_1163699054(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
