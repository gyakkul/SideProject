// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneEventTriggerSection.h"
#include "Channels/MovieSceneEventChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEventTriggerSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventSectionBase();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneEventChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEventTriggerSection::StaticRegisterNativesUMovieSceneEventTriggerSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEventTriggerSection);
	UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection_NoRegister()
	{
		return UMovieSceneEventTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEventSectionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Event section that triggeres specific timed events.\n */" },
		{ "IncludePath", "Sections/MovieSceneEventTriggerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventTriggerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Event section that triggeres specific timed events." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData[] = {
		{ "Comment", "/** The channel that defines this section's timed events */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEventTriggerSection.h" },
		{ "ToolTip", "The channel that defines this section's timed events" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel = { "EventChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEventTriggerSection, EventChannel), Z_Construct_UScriptStruct_FMovieSceneEventChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel_MetaData)) }; // 2838253818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::NewProp_EventChannel,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEventTriggerSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEventTriggerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::ClassParams = {
		&UMovieSceneEventTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEventTriggerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEventTriggerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEventTriggerSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEventTriggerSection>()
	{
		return UMovieSceneEventTriggerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEventTriggerSection);
	UMovieSceneEventTriggerSection::~UMovieSceneEventTriggerSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEventTriggerSection, UMovieSceneEventTriggerSection::StaticClass, TEXT("UMovieSceneEventTriggerSection"), &Z_Registration_Info_UClass_UMovieSceneEventTriggerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEventTriggerSection), 1256493844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_4144356677(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEventTriggerSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
