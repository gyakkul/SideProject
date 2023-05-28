// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieScene/MovieSceneLiveLinkSection.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "LiveLinkPresetTypes.h"
#include "LiveLinkRefSkeleton.h"
#include "LiveLinkTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneLiveLinkSection() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRefSkeleton();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister();
	LIVELINKMOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	UPackage* Z_Construct_UPackage__Script_LiveLinkMovieScene();
// End Cross Module References
	void UMovieSceneLiveLinkSection::StaticRegisterNativesUMovieSceneLiveLinkSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneLiveLinkSection);
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection_NoRegister()
	{
		return UMovieSceneLiveLinkSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectPreset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectPreset;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ChannelMask_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelMask_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChannelMask;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateToPush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TemplateToPush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefSkeleton;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyFloatChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyFloatChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyFloatChannels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkMovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A movie scene section for all live link recorded data\n*/" },
		{ "IncludePath", "MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A movie scene section for all live link recorded data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset = { "SubjectPreset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubjectPreset), Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset_MetaData)) }; // 855667327
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_Inner = { "ChannelMask", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_MetaData[] = {
		{ "Comment", "// Channels that we may not send to live link or they are sent but not priority (MattH to do).\n" },
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
		{ "ToolTip", "Channels that we may not send to live link or they are sent but not priority (MattH to do)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask = { "ChannelMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, ChannelMask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_Inner = { "SubSections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneLiveLinkSubSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections = { "SubSections", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, SubjectName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush = { "TemplateToPush", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, TemplateToPush_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkFrameData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush_MetaData)) }; // 4152646791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton = { "RefSkeleton", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, RefSkeleton_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkRefSkeleton, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton_MetaData)) }; // 3254312841
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, CurveNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_Inner = { "PropertyFloatChannels", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(nullptr, 0) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/MovieScene/MovieSceneLiveLinkSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels = { "PropertyFloatChannels", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneLiveLinkSection, PropertyFloatChannels_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_ChannelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_TemplateToPush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_RefSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_CurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::NewProp_PropertyFloatChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneLiveLinkSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::ClassParams = {
		&UMovieSceneLiveLinkSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneLiveLinkSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton, Z_Construct_UClass_UMovieSceneLiveLinkSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneLiveLinkSection.OuterSingleton;
	}
	template<> LIVELINKMOVIESCENE_API UClass* StaticClass<UMovieSceneLiveLinkSection>()
	{
		return UMovieSceneLiveLinkSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneLiveLinkSection);
	UMovieSceneLiveLinkSection::~UMovieSceneLiveLinkSection() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMovieSceneLiveLinkSection)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneLiveLinkSection, UMovieSceneLiveLinkSection::StaticClass, TEXT("UMovieSceneLiveLinkSection"), &Z_Registration_Info_UClass_UMovieSceneLiveLinkSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneLiveLinkSection), 2276694088U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_83419572(TEXT("/Script/LiveLinkMovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkMovieScene_Public_MovieScene_MovieSceneLiveLinkSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
