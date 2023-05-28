// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimMovieSceneNotifySection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimMovieSceneNotifySection() {}
// Cross Module References
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifySection();
	CONTEXTUALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimationEditor();
// End Cross Module References
	void UContextualAnimMovieSceneNotifySection::StaticRegisterNativesUContextualAnimMovieSceneNotifySection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimMovieSceneNotifySection);
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_NoRegister()
	{
		return UContextualAnimMovieSceneNotifySection::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotifyEventGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimNotifyEventGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * MovieSceneSection used to represent an AnimNotify in Sequencer Panel \n * Stores the FGuid of the AnimNotifyEvent this section is presenting \n */" },
		{ "IncludePath", "ContextualAnimMovieSceneNotifySection.h" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneNotifySection.h" },
		{ "ToolTip", "MovieSceneSection used to represent an AnimNotify in Sequencer Panel\nStores the FGuid of the AnimNotifyEvent this section is presenting" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::NewProp_AnimNotifyEventGuid_MetaData[] = {
		{ "Comment", "/** Guid of the actual AnimNotifyEvent this section is representing */" },
		{ "ModuleRelativePath", "Public/ContextualAnimMovieSceneNotifySection.h" },
		{ "ToolTip", "Guid of the actual AnimNotifyEvent this section is representing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::NewProp_AnimNotifyEventGuid = { "AnimNotifyEventGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContextualAnimMovieSceneNotifySection, AnimNotifyEventGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::NewProp_AnimNotifyEventGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::NewProp_AnimNotifyEventGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::NewProp_AnimNotifyEventGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimMovieSceneNotifySection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::ClassParams = {
		&UContextualAnimMovieSceneNotifySection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::PropPointers),
		0,
		0x002000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimMovieSceneNotifySection()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifySection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifySection.OuterSingleton, Z_Construct_UClass_UContextualAnimMovieSceneNotifySection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifySection.OuterSingleton;
	}
	template<> CONTEXTUALANIMATIONEDITOR_API UClass* StaticClass<UContextualAnimMovieSceneNotifySection>()
	{
		return UContextualAnimMovieSceneNotifySection::StaticClass();
	}
	UContextualAnimMovieSceneNotifySection::UContextualAnimMovieSceneNotifySection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimMovieSceneNotifySection);
	UContextualAnimMovieSceneNotifySection::~UContextualAnimMovieSceneNotifySection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifySection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifySection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimMovieSceneNotifySection, UContextualAnimMovieSceneNotifySection::StaticClass, TEXT("UContextualAnimMovieSceneNotifySection"), &Z_Registration_Info_UClass_UContextualAnimMovieSceneNotifySection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimMovieSceneNotifySection), 270167727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifySection_h_3963379317(TEXT("/Script/ContextualAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifySection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimationEditor_Public_ContextualAnimMovieSceneNotifySection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
