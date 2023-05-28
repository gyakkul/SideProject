// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerSectionBP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerSectionBP() {}
// Cross Module References
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerSectionBP();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerSectionBP_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_CustomizableSequencerTracks();
// End Cross Module References
	void USequencerSectionBP::StaticRegisterNativesUSequencerSectionBP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerSectionBP);
	UClass* Z_Construct_UClass_USequencerSectionBP_NoRegister()
	{
		return USequencerSectionBP::StaticClass();
	}
	struct Z_Construct_UClass_USequencerSectionBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerSectionBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableSequencerTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerSectionBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "SequencerSection" },
		{ "IncludePath", "SequencerSectionBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencerSectionBP.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USequencerSectionBP_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(USequencerSectionBP, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerSectionBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerSectionBP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerSectionBP_Statics::ClassParams = {
		&USequencerSectionBP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x003000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerSectionBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerSectionBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerSectionBP()
	{
		if (!Z_Registration_Info_UClass_USequencerSectionBP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerSectionBP.OuterSingleton, Z_Construct_UClass_USequencerSectionBP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerSectionBP.OuterSingleton;
	}
	template<> CUSTOMIZABLESEQUENCERTRACKS_API UClass* StaticClass<USequencerSectionBP>()
	{
		return USequencerSectionBP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerSectionBP);
	USequencerSectionBP::~USequencerSectionBP() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerSectionBP, USequencerSectionBP::StaticClass, TEXT("USequencerSectionBP"), &Z_Registration_Info_UClass_USequencerSectionBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerSectionBP), 3473435638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_658848175(TEXT("/Script/CustomizableSequencerTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerSectionBP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
