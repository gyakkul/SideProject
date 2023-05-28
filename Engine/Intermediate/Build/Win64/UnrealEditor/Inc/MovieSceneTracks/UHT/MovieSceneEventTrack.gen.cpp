// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneEventTrack.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister();
	MOVIESCENETRACKS_API UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFireEventsAtPosition;
	static UEnum* EFireEventsAtPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("EFireEventsAtPosition"));
		}
		return Z_Registration_Info_UEnum_EFireEventsAtPosition.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UEnum* StaticEnum<EFireEventsAtPosition>()
	{
		return EFireEventsAtPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enumerators[] = {
		{ "EFireEventsAtPosition::AtStartOfEvaluation", (int64)EFireEventsAtPosition::AtStartOfEvaluation },
		{ "EFireEventsAtPosition::AtEndOfEvaluation", (int64)EFireEventsAtPosition::AtEndOfEvaluation },
		{ "EFireEventsAtPosition::AfterSpawn", (int64)EFireEventsAtPosition::AfterSpawn },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enum_MetaDataParams[] = {
		{ "AfterSpawn.Comment", "/** Fire events right after any spawn tracks have been evaluated */" },
		{ "AfterSpawn.Name", "EFireEventsAtPosition::AfterSpawn" },
		{ "AfterSpawn.ToolTip", "Fire events right after any spawn tracks have been evaluated" },
		{ "AtEndOfEvaluation.Comment", "/** Fire events after everything else has been evaluated in the sequence */" },
		{ "AtEndOfEvaluation.Name", "EFireEventsAtPosition::AtEndOfEvaluation" },
		{ "AtEndOfEvaluation.ToolTip", "Fire events after everything else has been evaluated in the sequence" },
		{ "AtStartOfEvaluation.Comment", "/** Fire events before anything else is evaluated in the sequence */" },
		{ "AtStartOfEvaluation.Name", "EFireEventsAtPosition::AtStartOfEvaluation" },
		{ "AtStartOfEvaluation.ToolTip", "Fire events before anything else is evaluated in the sequence" },
		{ "Comment", "/** Indicates at what point in the sequence evaluation events should fire */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Indicates at what point in the sequence evaluation events should fire" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		"EFireEventsAtPosition",
		"EFireEventsAtPosition",
		Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition()
	{
		if (!Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton, Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFireEventsAtPosition.InnerSingleton;
	}
	void UMovieSceneEventTrack::StaticRegisterNativesUMovieSceneEventTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventTrack);
	UClass* Z_Construct_UClass_UMovieSceneEventTrack_NoRegister()
	{
		return UMovieSceneEventTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenForwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenForwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenForwards;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFireEventsWhenBackwards_MetaData[];
#endif
		static void NewProp_bFireEventsWhenBackwards_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEventsWhenBackwards;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventPosition_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventPosition_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EventPosition;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a movie scene track that triggers discrete events during playback.\n */" },
		{ "IncludePath", "Tracks/MovieSceneEventTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Implements a movie scene track that triggers discrete events during playback." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence forwards. */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence forwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit(void* Obj)
	{
		((UMovieSceneEventTrack*)Obj)->bFireEventsWhenForwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards = { "bFireEventsWhenForwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneEventTrack), &Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** If events should be fired when passed playing the sequence backwards. */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "If events should be fired when passed playing the sequence backwards." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit(void* Obj)
	{
		((UMovieSceneEventTrack*)Obj)->bFireEventsWhenBackwards = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards = { "bFireEventsWhenBackwards", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMovieSceneEventTrack), &Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData[] = {
		{ "Category", "TrackEvent" },
		{ "Comment", "/** Defines where in the evaluation to trigger events */" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "Defines where in the evaluation to trigger events" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition = { "EventPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventTrack, EventPosition), Z_Construct_UEnum_MovieSceneTracks_EFireEventsAtPosition, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_MetaData)) }; // 2412320450
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The track's sections. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneEventTrack.h" },
		{ "ToolTip", "The track's sections." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenForwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_bFireEventsWhenBackwards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_EventPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTrack_Statics::NewProp_Sections,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEventTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
			{ Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEventTrack, IMovieSceneDeterminismSource), false },  // 2580973216
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventTrack_Statics::ClassParams = {
		&UMovieSceneEventTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneEventTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventTrack>()
	{
		return UMovieSceneEventTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTrack);
	UMovieSceneEventTrack::~UMovieSceneEventTrack() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneEventTrack)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::EnumInfo[] = {
		{ EFireEventsAtPosition_StaticEnum, TEXT("EFireEventsAtPosition"), &Z_Registration_Info_UEnum_EFireEventsAtPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2412320450U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventTrack, UMovieSceneEventTrack::StaticClass, TEXT("UMovieSceneEventTrack"), &Z_Registration_Info_UClass_UMovieSceneEventTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventTrack), 2395001966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_2018673906(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneEventTrack_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
