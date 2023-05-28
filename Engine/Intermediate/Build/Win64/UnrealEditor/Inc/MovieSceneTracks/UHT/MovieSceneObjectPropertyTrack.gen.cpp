// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tracks/MovieSceneObjectPropertyTrack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectPropertyTrack() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePropertyTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneObjectPropertyTrack::StaticRegisterNativesUMovieSceneObjectPropertyTrack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneObjectPropertyTrack);
	UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack_NoRegister()
	{
		return UMovieSceneObjectPropertyTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PropertyClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScenePropertyTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneObjectPropertyTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneObjectPropertyTrack.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneObjectPropertyTrack.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass = { "PropertyClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneObjectPropertyTrack, PropertyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::NewProp_PropertyClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneTrackTemplateProducer_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneObjectPropertyTrack, IMovieSceneTrackTemplateProducer), false },  // 2931163055
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneObjectPropertyTrack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::ClassParams = {
		&UMovieSceneObjectPropertyTrack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneObjectPropertyTrack()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton, Z_Construct_UClass_UMovieSceneObjectPropertyTrack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneObjectPropertyTrack>()
	{
		return UMovieSceneObjectPropertyTrack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneObjectPropertyTrack);
	UMovieSceneObjectPropertyTrack::~UMovieSceneObjectPropertyTrack() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneObjectPropertyTrack, UMovieSceneObjectPropertyTrack::StaticClass, TEXT("UMovieSceneObjectPropertyTrack"), &Z_Registration_Info_UClass_UMovieSceneObjectPropertyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneObjectPropertyTrack), 2407828701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_1606173108(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneObjectPropertyTrack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
