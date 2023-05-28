// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieScenePrimitiveMaterialSection.h"
#include "Channels/MovieSceneObjectPathChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePrimitiveMaterialSection() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScenePrimitiveMaterialSection::StaticRegisterNativesUMovieScenePrimitiveMaterialSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScenePrimitiveMaterialSection);
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_NoRegister()
	{
		return UMovieScenePrimitiveMaterialSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScenePrimitiveMaterialSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel = { "MaterialChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScenePrimitiveMaterialSection, MaterialChannel), Z_Construct_UScriptStruct_FMovieSceneObjectPathChannel, METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel_MetaData)) }; // 3165347126
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::NewProp_MaterialChannel,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScenePrimitiveMaterialSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScenePrimitiveMaterialSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams = {
		&UMovieScenePrimitiveMaterialSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScenePrimitiveMaterialSection()
	{
		if (!Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton, Z_Construct_UClass_UMovieScenePrimitiveMaterialSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScenePrimitiveMaterialSection>()
	{
		return UMovieScenePrimitiveMaterialSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScenePrimitiveMaterialSection);
	UMovieScenePrimitiveMaterialSection::~UMovieScenePrimitiveMaterialSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScenePrimitiveMaterialSection, UMovieScenePrimitiveMaterialSection::StaticClass, TEXT("UMovieScenePrimitiveMaterialSection"), &Z_Registration_Info_UClass_UMovieScenePrimitiveMaterialSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScenePrimitiveMaterialSection), 718194441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_1508824992(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScenePrimitiveMaterialSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
