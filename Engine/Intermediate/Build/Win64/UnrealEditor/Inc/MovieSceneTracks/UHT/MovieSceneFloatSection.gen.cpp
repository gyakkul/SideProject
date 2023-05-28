// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneFloatSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFloatSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneFloatSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneFloatSection::StaticRegisterNativesUMovieSceneFloatSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneFloatSection);
	UClass* Z_Construct_UClass_UMovieSceneFloatSection_NoRegister()
	{
		return UMovieSceneFloatSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneFloatSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideRegistry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneFloatSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section\n */" },
		{ "IncludePath", "Sections/MovieSceneFloatSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFloatSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A single floating point section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFloatSection.h" },
		{ "ToolTip", "Float data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFloatSection, FloatCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_FloatCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_OverrideRegistry_MetaData[] = {
		{ "Comment", "/** Channel overrides */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneFloatSection.h" },
		{ "ToolTip", "Channel overrides" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_OverrideRegistry = { "OverrideRegistry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneFloatSection, OverrideRegistry), Z_Construct_UClass_UMovieSceneSectionChannelOverrideRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_OverrideRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_OverrideRegistry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneFloatSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_FloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneFloatSection_Statics::NewProp_OverrideRegistry,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneFloatSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneFloatSection, IMovieSceneEntityProvider), false },  // 1947645787
			{ Z_Construct_UClass_UMovieSceneChannelOverrideProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneFloatSection, IMovieSceneChannelOverrideProvider), false },  // 237137268
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneFloatSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneFloatSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneFloatSection_Statics::ClassParams = {
		&UMovieSceneFloatSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneFloatSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneFloatSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneFloatSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneFloatSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneFloatSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneFloatSection.OuterSingleton, Z_Construct_UClass_UMovieSceneFloatSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneFloatSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneFloatSection>()
	{
		return UMovieSceneFloatSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFloatSection);
	UMovieSceneFloatSection::~UMovieSceneFloatSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneFloatSection, UMovieSceneFloatSection::StaticClass, TEXT("UMovieSceneFloatSection"), &Z_Registration_Info_UClass_UMovieSceneFloatSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneFloatSection), 3779779384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_4278837391(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneFloatSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
