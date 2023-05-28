// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneControlRigParameterTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneControlRigParameterTrack() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack();
	CONTROLRIG_API UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UNodeAndChannelMappings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UMovieSceneControlRigParameterTrack::StaticRegisterNativesUMovieSceneControlRigParameterTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneControlRigParameterTrack);
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack_NoRegister()
	{
		return UMovieSceneControlRigParameterTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionToKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SectionToKey;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles animation of skeletal mesh actors using animation ControlRigs\n */" },
		{ "IncludePath", "Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Handles animation of skeletal mesh actors using animation ControlRigs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData[] = {
		{ "Comment", "/** Control Rig we control*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Control Rig we control" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData[] = {
		{ "Comment", "/** Section we should Key */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Section we should Key" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey = { "SectionToKey", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, SectionToKey), Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track .*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Unique Name*/" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneControlRigParameterTrack.h" },
		{ "ToolTip", "Unique Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneControlRigParameterTrack, TrackName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_SectionToKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::NewProp_TrackName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
			{ Z_Construct_UClass_UNodeAndChannelMappings_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneControlRigParameterTrack, INodeAndChannelMappings), false },  // 1983046986
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneControlRigParameterTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams = {
		&UMovieSceneControlRigParameterTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneControlRigParameterTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneControlRigParameterTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UMovieSceneControlRigParameterTrack>()
	{
		return UMovieSceneControlRigParameterTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneControlRigParameterTrack);
	UMovieSceneControlRigParameterTrack::~UMovieSceneControlRigParameterTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneControlRigParameterTrack, UMovieSceneControlRigParameterTrack::StaticClass, TEXT("UMovieSceneControlRigParameterTrack"), &Z_Registration_Info_UClass_UMovieSceneControlRigParameterTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneControlRigParameterTrack), 486568603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_101772368(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Sequencer_MovieSceneControlRigParameterTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
