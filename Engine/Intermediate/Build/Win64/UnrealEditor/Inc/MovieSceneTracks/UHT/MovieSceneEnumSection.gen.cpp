// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneEnumSection.h"
#include "Channels/MovieSceneByteChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneEnumSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneByteChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneEnumSection::StaticRegisterNativesUMovieSceneEnumSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneEnumSection);
	UClass* Z_Construct_UClass_UMovieSceneEnumSection_NoRegister()
	{
		return UMovieSceneEnumSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneEnumSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnumCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneEnumSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A single enum section.\n */" },
		{ "IncludePath", "Sections/MovieSceneEnumSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "A single enum section." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData[] = {
		{ "Comment", "/** Ordered curve data */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneEnumSection.h" },
		{ "ToolTip", "Ordered curve data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve = { "EnumCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneEnumSection, EnumCurve), Z_Construct_UScriptStruct_FMovieSceneByteChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve_MetaData)) }; // 3302488198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneEnumSection_Statics::NewProp_EnumCurve,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneEnumSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneEnumSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneEnumSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams = {
		&UMovieSceneEnumSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneEnumSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneEnumSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton, Z_Construct_UClass_UMovieSceneEnumSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneEnumSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneEnumSection>()
	{
		return UMovieSceneEnumSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneEnumSection);
	UMovieSceneEnumSection::~UMovieSceneEnumSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneEnumSection, UMovieSceneEnumSection::StaticClass, TEXT("UMovieSceneEnumSection"), &Z_Registration_Info_UClass_UMovieSceneEnumSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneEnumSection), 663077502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_2488173084(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneEnumSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
