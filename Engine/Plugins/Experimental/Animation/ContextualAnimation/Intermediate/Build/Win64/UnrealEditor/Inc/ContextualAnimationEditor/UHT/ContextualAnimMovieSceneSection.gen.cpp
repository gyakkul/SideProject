// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimMovieSceneSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimMovieSceneSection() {}
// Cross Module References
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneSection();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneSection_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	void UContextualAnimMovieSceneSection::StaticRegisterNativesUContextualAnimMovieSceneSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimMovieSceneSection);
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneSection_NoRegister()
	{
		return UContextualAnimMovieSceneSection::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSetIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimSetIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimTrackIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AnimTrackIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContextualAnimMovieSceneSection.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_SectionIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_SectionIdx = { "SectionIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneSection, SectionIdx), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_SectionIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_SectionIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimSetIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimSetIdx = { "AnimSetIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneSection, AnimSetIdx), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimSetIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimSetIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimTrackIdx_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneSection.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimTrackIdx = { "AnimTrackIdx", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneSection, AnimTrackIdx), METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimTrackIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimTrackIdx_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_SectionIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimSetIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::NewProp_AnimTrackIdx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimMovieSceneSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::ClassParams = {
		&UContextualAnimMovieSceneSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneSection()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimMovieSceneSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimMovieSceneSection.OuterSingleton, Z_Construct_UClass_UContextualAnimMovieSceneSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimMovieSceneSection.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimMovieSceneSection>()
	{
		return UContextualAnimMovieSceneSection::StaticClass();
	}
	UContextualAnimMovieSceneSection::UContextualAnimMovieSceneSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimMovieSceneSection);
	UContextualAnimMovieSceneSection::~UContextualAnimMovieSceneSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimMovieSceneSection, UContextualAnimMovieSceneSection::StaticClass, TEXT("UContextualAnimMovieSceneSection"), &Z_Registration_Info_UClass_UContextualAnimMovieSceneSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimMovieSceneSection), 2500886797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_1624024423(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
