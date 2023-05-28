// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/MovieSceneDMXLibraryTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneDMXLibraryTrack() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrack();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrack_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UMovieSceneDMXLibraryTrack::StaticRegisterNativesUMovieSceneDMXLibraryTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneDMXLibraryTrack);
	UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrack_NoRegister()
	{
		return UMovieSceneDMXLibraryTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Library_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Library;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles manipulation of DMX Libraries in a movie scene.\n */" },
		{ "IncludePath", "Sequencer/MovieSceneDMXLibraryTrack.h" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibraryTrack.h" },
		{ "ToolTip", "Handles manipulation of DMX Libraries in a movie scene." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** The sections owned by this track .*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibraryTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDMXLibraryTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Library_MetaData[] = {
		{ "Comment", "/** The DMX Library to manipulate */" },
		{ "ModuleRelativePath", "Public/Sequencer/MovieSceneDMXLibraryTrack.h" },
		{ "ToolTip", "The DMX Library to manipulate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Library = { "Library", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneDMXLibraryTrack, Library), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Library_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Library_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::NewProp_Library,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneDMXLibraryTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneDMXLibraryTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::ClassParams = {
		&UMovieSceneDMXLibraryTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneDMXLibraryTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneDMXLibraryTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrack.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UMovieSceneDMXLibraryTrack>()
	{
		return UMovieSceneDMXLibraryTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneDMXLibraryTrack);
	UMovieSceneDMXLibraryTrack::~UMovieSceneDMXLibraryTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneDMXLibraryTrack, UMovieSceneDMXLibraryTrack::StaticClass, TEXT("UMovieSceneDMXLibraryTrack"), &Z_Registration_Info_UClass_UMovieSceneDMXLibraryTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneDMXLibraryTrack), 1111364851U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_1545615990(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Sequencer_MovieSceneDMXLibraryTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
