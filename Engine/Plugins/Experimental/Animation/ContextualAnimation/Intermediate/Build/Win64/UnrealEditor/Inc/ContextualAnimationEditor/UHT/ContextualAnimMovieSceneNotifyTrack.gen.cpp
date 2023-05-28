// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimMovieSceneNotifyTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimMovieSceneNotifyTrack() {}
// Cross Module References
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	void UContextualAnimMovieSceneNotifyTrack::StaticRegisterNativesUContextualAnimMovieSceneNotifyTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimMovieSceneNotifyTrack);
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_NoRegister()
	{
		return UContextualAnimMovieSceneNotifyTrack::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** MovieSceneTrack used to show the notifies in the animation the track was created from in Sequencer Panel */" },
		{ "IncludePath", "ContextualAnimMovieSceneNotifyTrack.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneNotifyTrack.h" },
		{ "ToolTip", "MovieSceneTrack used to show the notifies in the animation the track was created from in Sequencer Panel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "/** List of sections in this track */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneNotifyTrack.h" },
		{ "ToolTip", "List of sections in this track" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneNotifyTrack, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Animation_MetaData[] = {
		{ "Comment", "/** Ptr to the animation this track was created from */" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneNotifyTrack.h" },
		{ "ToolTip", "Ptr to the animation this track was created from" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneNotifyTrack, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::NewProp_Animation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimMovieSceneNotifyTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::ClassParams = {
		&UContextualAnimMovieSceneNotifyTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::PropPointers),
		0,
		0x00A000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifyTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifyTrack.OuterSingleton, Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifyTrack.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimMovieSceneNotifyTrack>()
	{
		return UContextualAnimMovieSceneNotifyTrack::StaticClass();
	}
	UContextualAnimMovieSceneNotifyTrack::UContextualAnimMovieSceneNotifyTrack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimMovieSceneNotifyTrack);
	UContextualAnimMovieSceneNotifyTrack::~UContextualAnimMovieSceneNotifyTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifyTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifyTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimMovieSceneNotifyTrack, UContextualAnimMovieSceneNotifyTrack::StaticClass, TEXT("UContextualAnimMovieSceneNotifyTrack"), &Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimMovieSceneNotifyTrack), 2039456184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifyTrack_h_897579489(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifyTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifyTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
