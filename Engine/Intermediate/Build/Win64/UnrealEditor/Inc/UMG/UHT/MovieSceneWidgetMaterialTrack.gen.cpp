// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieSceneWidgetMaterialTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialTrack() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneWidgetMaterialTrack::StaticRegisterNativesUMovieSceneWidgetMaterialTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWidgetMaterialTrack);
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_NoRegister()
	{
		return UMovieSceneWidgetMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BrushPropertyNamePath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushPropertyNamePath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushPropertyNamePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material track which is specialized for materials which are owned by widget brushes.\n */" },
		{ "IncludePath", "Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "A material track which is specialized for materials which are owned by widget brushes." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData[] = {
		{ "Comment", "/** The name of the brush property which will be animated by this track. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of the brush property which will be animated by this track." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath = { "BrushPropertyNamePath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, BrushPropertyNamePath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** The name of this track, generated from the property name path. */" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialTrack.h" },
		{ "ToolTip", "The name of this track, generated from the property name path." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneWidgetMaterialTrack, TrackName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_BrushPropertyNamePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::NewProp_TrackName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialTrack, IMovieSceneEntityProvider), false },  // 1947645787
			{ Z_Construct_UClass_UMovieSceneParameterSectionExtender_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialTrack, IMovieSceneParameterSectionExtender), false },  // 4082455961
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWidgetMaterialTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams = {
		&UMovieSceneWidgetMaterialTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneWidgetMaterialTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieSceneWidgetMaterialTrack>()
	{
		return UMovieSceneWidgetMaterialTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialTrack);
	UMovieSceneWidgetMaterialTrack::~UMovieSceneWidgetMaterialTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWidgetMaterialTrack, UMovieSceneWidgetMaterialTrack::StaticClass, TEXT("UMovieSceneWidgetMaterialTrack"), &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWidgetMaterialTrack), 1385939143U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_3073519542(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
