// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneCameraShakeSourceTriggerSection.h"
#include "Channels/MovieSceneCameraShakeSourceTriggerChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSourceTriggerSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneCameraShakeSourceTriggerSection::StaticRegisterNativesUMovieSceneCameraShakeSourceTriggerSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeSourceTriggerSection);
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_NoRegister()
	{
		return UMovieSceneCameraShakeSourceTriggerSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSourceTriggerSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSourceTriggerSection, Channel), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSourceTriggerChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel_MetaData)) }; // 3409623264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::NewProp_Channel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSourceTriggerSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::ClassParams = {
		&UMovieSceneCameraShakeSourceTriggerSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSourceTriggerSection>()
	{
		return UMovieSceneCameraShakeSourceTriggerSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSourceTriggerSection);
	UMovieSceneCameraShakeSourceTriggerSection::~UMovieSceneCameraShakeSourceTriggerSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSourceTriggerSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSourceTriggerSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeSourceTriggerSection, UMovieSceneCameraShakeSourceTriggerSection::StaticClass, TEXT("UMovieSceneCameraShakeSourceTriggerSection"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeSourceTriggerSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeSourceTriggerSection), 1454520200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSourceTriggerSection_h_724637135(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSourceTriggerSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSourceTriggerSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
