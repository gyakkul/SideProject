// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneEventRepeaterSection.h"
#include "Channels/MovieSceneEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventRepeaterSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEvent();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEventRepeaterSection::StaticRegisterNativesUMovieSceneEventRepeaterSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventRepeaterSection);
	UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection_NoRegister()
	{
		return UMovieSceneEventRepeaterSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Event section that will trigger its event exactly once, every time it is evaluated.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventRepeaterSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventRepeaterSection.h" },
		{ "ToolTip", "Event section that will trigger its event exactly once, every time it is evaluated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** The event that should be triggered each time this section is evaluated */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventRepeaterSection.h" },
		{ "ToolTip", "The event that should be triggered each time this section is evaluated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventRepeaterSection, Event), Z_Construct_UScriptStruct_FMovieSceneEvent, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event_MetaData)) }; // 3632963668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::NewProp_Event,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEventRepeaterSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventRepeaterSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::ClassParams = {
		&UMovieSceneEventRepeaterSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventRepeaterSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEventRepeaterSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventRepeaterSection>()
	{
		return UMovieSceneEventRepeaterSection::StaticClass();
	}
	UMovieSceneEventRepeaterSection::UMovieSceneEventRepeaterSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventRepeaterSection);
	UMovieSceneEventRepeaterSection::~UMovieSceneEventRepeaterSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventRepeaterSection, UMovieSceneEventRepeaterSection::StaticClass, TEXT("UMovieSceneEventRepeaterSection"), &Z_Registration_Info_UClass_UMovieSceneEventRepeaterSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventRepeaterSection), 3253749803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_444392743(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventRepeaterSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
