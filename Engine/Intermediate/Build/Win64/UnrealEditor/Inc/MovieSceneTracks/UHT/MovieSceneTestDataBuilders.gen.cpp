// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tests/MovieSceneTestDataBuilders.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneTestDataBuilders() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTestSequence();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneTestSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneTestSequence::StaticRegisterNativesUMovieSceneTestSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneTestSequence);
	UClass* Z_Construct_UClass_UMovieSceneTestSequence_NoRegister()
	{
		return UMovieSceneTestSequence::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneTestSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingGuids;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneTestSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTestSequence_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple type of sequence for use in automated tests.\n *\n * Bound objects are specified manually on the sequence and will be simply returned when\n * bindings are resolved.\n */" },
		{ "IncludePath", "Tests/MovieSceneTestDataBuilders.h" },
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
		{ "ToolTip", "Simple type of sequence for use in automated tests.\n\nBound objects are specified manually on the sequence and will be simply returned when\nbindings are resolved." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** The movie scene */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
		{ "ToolTip", "The movie scene" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTestSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_Inner = { "BoundObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects = { "BoundObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTestSequence, BoundObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_Inner = { "BindingGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tests/MovieSceneTestDataBuilders.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids = { "BindingGuids", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneTestSequence, BindingGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BoundObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneTestSequence_Statics::NewProp_BindingGuids,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneTestSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneTestSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneTestSequence_Statics::ClassParams = {
		&UMovieSceneTestSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneTestSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneTestSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneTestSequence()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton, Z_Construct_UClass_UMovieSceneTestSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneTestSequence.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneTestSequence>()
	{
		return UMovieSceneTestSequence::StaticClass();
	}
	UMovieSceneTestSequence::UMovieSceneTestSequence(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneTestSequence);
	UMovieSceneTestSequence::~UMovieSceneTestSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneTestSequence, UMovieSceneTestSequence::StaticClass, TEXT("UMovieSceneTestSequence"), &Z_Registration_Info_UClass_UMovieSceneTestSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneTestSequence), 83226695U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_2174032864(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Tests_MovieSceneTestDataBuilders_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
