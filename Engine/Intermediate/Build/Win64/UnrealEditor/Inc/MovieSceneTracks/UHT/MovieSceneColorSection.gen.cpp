// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneColorSection.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneColorSection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatChannel();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneKeyStruct();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References

static_assert(std::is_polymorphic<FMovieSceneColorKeyStruct>() == std::is_polymorphic<FMovieSceneKeyStruct>(), "USTRUCT FMovieSceneColorKeyStruct cannot be polymorphic unless super FMovieSceneKeyStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct;
class UScriptStruct* FMovieSceneColorKeyStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneColorKeyStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneColorKeyStruct>()
{
	return FMovieSceneColorKeyStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy structure for color section key data.\n */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Proxy structure for color section key data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneColorKeyStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's color value. */" },
		{ "InlineColorPicker", "" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "The key's color value." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The key's time. */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "The key's time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneColorKeyStruct, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewProp_Time,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		Z_Construct_UScriptStruct_FMovieSceneKeyStruct,
		&NewStructOps,
		"MovieSceneColorKeyStruct",
		sizeof(FMovieSceneColorKeyStruct),
		alignof(FMovieSceneColorKeyStruct),
		Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct.InnerSingleton;
	}
	void UMovieSceneColorSection::StaticRegisterNativesUMovieSceneColorSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneColorSection);
	UClass* Z_Construct_UClass_UMovieSceneColorSection_NoRegister()
	{
		return UMovieSceneColorSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneColorSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneColorSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single floating point section\n */" },
		{ "IncludePath", "Sections/MovieSceneColorSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "A single floating point section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve_MetaData[] = {
		{ "Comment", "/** Red curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Red curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, RedCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve_MetaData[] = {
		{ "Comment", "/** Green curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Green curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, GreenCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve_MetaData[] = {
		{ "Comment", "/** Blue curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Blue curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, BlueCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve_MetaData)) }; // 3942748414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve_MetaData[] = {
		{ "Comment", "/** Alpha curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneColorSection.h" },
		{ "ToolTip", "Alpha curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneColorSection, AlphaCurve), Z_Construct_UScriptStruct_FMovieSceneFloatChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve_MetaData)) }; // 3942748414
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_RedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_GreenCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_BlueCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneColorSection_Statics::NewProp_AlphaCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneColorSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneColorSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneColorSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneColorSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneColorSection_Statics::ClassParams = {
		&UMovieSceneColorSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneColorSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneColorSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneColorSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton, Z_Construct_UClass_UMovieSceneColorSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneColorSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneColorSection>()
	{
		return UMovieSceneColorSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneColorSection);
	UMovieSceneColorSection::~UMovieSceneColorSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneColorKeyStruct::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneColorKeyStruct_Statics::NewStructOps, TEXT("MovieSceneColorKeyStruct"), &Z_Registration_Info_UScriptStruct_MovieSceneColorKeyStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneColorKeyStruct), 4178662606U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneColorSection, UMovieSceneColorSection::StaticClass, TEXT("UMovieSceneColorSection"), &Z_Registration_Info_UClass_UMovieSceneColorSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneColorSection), 3031529095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_4152202273(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneColorSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
