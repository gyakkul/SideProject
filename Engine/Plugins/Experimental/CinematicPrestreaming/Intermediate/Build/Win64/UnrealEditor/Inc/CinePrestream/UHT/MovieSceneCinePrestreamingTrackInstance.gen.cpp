// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TrackInstances/MovieSceneCinePrestreamingTrackInstance.h"
#include "EntitySystem/TrackInstance/MovieSceneTrackInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCinePrestreamingTrackInstance() {}
// Cross Module References
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UCinePrestreamingData_NoRegister();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance();
	CINEMATICPRESTREAMING_API UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput();
	UPackage* Z_Construct_UPackage__Script_CinematicPrestreaming();
// End Cross Module References
	void UMovieSceneCinePrestreamingTrackInstance::StaticRegisterNativesUMovieSceneCinePrestreamingTrackInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCinePrestreamingTrackInstance);
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_NoRegister()
	{
		return UMovieSceneCinePrestreamingTrackInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrestreamingAssetMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrestreamingAssetMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrestreamingAssetMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PrestreamingAssetMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicPrestreaming,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrackInstances/MovieSceneCinePrestreamingTrackInstance.h" },
		{ "ModuleRelativePath", "Private/TrackInstances/MovieSceneCinePrestreamingTrackInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_ValueProp = { "PrestreamingAssetMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCinePrestreamingData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_Key_KeyProp = { "PrestreamingAssetMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 599563984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_MetaData[] = {
		{ "Comment", "/** Map of loaded asset references. */" },
		{ "ModuleRelativePath", "Private/TrackInstances/MovieSceneCinePrestreamingTrackInstance.h" },
		{ "ToolTip", "Map of loaded asset references." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap = { "PrestreamingAssetMap", nullptr, (EPropertyFlags)0x0044008000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCinePrestreamingTrackInstance, PrestreamingAssetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_MetaData)) }; // 599563984
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::NewProp_PrestreamingAssetMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCinePrestreamingTrackInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::ClassParams = {
		&UMovieSceneCinePrestreamingTrackInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrackInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrackInstance.OuterSingleton, Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrackInstance.OuterSingleton;
	}
	template<> CINEMATICPRESTREAMING_API UClass* StaticClass<UMovieSceneCinePrestreamingTrackInstance>()
	{
		return UMovieSceneCinePrestreamingTrackInstance::StaticClass();
	}
	UMovieSceneCinePrestreamingTrackInstance::UMovieSceneCinePrestreamingTrackInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCinePrestreamingTrackInstance);
	UMovieSceneCinePrestreamingTrackInstance::~UMovieSceneCinePrestreamingTrackInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Private_TrackInstances_MovieSceneCinePrestreamingTrackInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Private_TrackInstances_MovieSceneCinePrestreamingTrackInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCinePrestreamingTrackInstance, UMovieSceneCinePrestreamingTrackInstance::StaticClass, TEXT("UMovieSceneCinePrestreamingTrackInstance"), &Z_Registration_Info_UClass_UMovieSceneCinePrestreamingTrackInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCinePrestreamingTrackInstance), 4160613946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Private_TrackInstances_MovieSceneCinePrestreamingTrackInstance_h_2276868582(TEXT("/Script/CinematicPrestreaming"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Private_TrackInstances_MovieSceneCinePrestreamingTrackInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CinematicPrestreaming_Source_CinematicPrestreaming_Private_TrackInstances_MovieSceneCinePrestreamingTrackInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
