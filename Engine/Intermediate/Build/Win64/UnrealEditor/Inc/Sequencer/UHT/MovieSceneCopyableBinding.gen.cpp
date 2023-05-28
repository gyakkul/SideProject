// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MovieSceneCopyableBinding.h"
#include "MovieSceneBinding.h"
#include "MovieScenePossessable.h"
#include "MovieSceneSpawnable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCopyableBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBinding();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePossessable();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSpawnable();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableBinding();
	SEQUENCER_API UClass* Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Sequencer();
// End Cross Module References
	void UMovieSceneCopyableBinding::StaticRegisterNativesUMovieSceneCopyableBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCopyableBinding);
	UClass* Z_Construct_UClass_UMovieSceneCopyableBinding_NoRegister()
	{
		return UMovieSceneCopyableBinding::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCopyableBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnableObjectTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnableObjectTemplate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spawnable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Spawnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Possessable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Possessable;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoundObjectNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoundObjectNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FolderPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Sequencer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneCopyableBinding.h" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData[] = {
		{ "Comment", "/** \n\x09* Spawnables need to know about their Object Template but we cannot rely on automatic serialization due to the object\n\x09* template belonging to the Movie Scene (it gets serialized as a reference). Instead we manually serialize the object\n\x09* so that we can duplicate it into a new object (which is stored in this variable) but we don't want this exported with\n\x09* the rest of the text as it'll fall back to the same reference issue. Marking this as TextExportTransient solves this.\n\x09*/" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
		{ "ToolTip", "Spawnables need to know about their Object Template but we cannot rely on automatic serialization due to the object\ntemplate belonging to the Movie Scene (it gets serialized as a reference). Instead we manually serialize the object\nso that we can duplicate it into a new object (which is stored in this variable) but we don't want this exported with\nthe rest of the text as it'll fall back to the same reference issue. Marking this as TextExportTransient solves this." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate = { "SpawnableObjectTemplate", nullptr, (EPropertyFlags)0x0014400000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, SpawnableObjectTemplate), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData[] = {
		{ "Comment", "/**\n\x09 * Tracks are also owned by the owning Movie Sequence. We manually copy the tracks out of a binding when we copy,\n\x09 * because the binding stores them as a reference to a privately owned object. We store these copied tracks here,\n\x09 * and then restore them upon paste to re-create the tracks with the correct owner.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
		{ "ToolTip", "Tracks are also owned by the owning Movie Sequence. We manually copy the tracks out of a binding when we copy,\nbecause the binding stores them as a reference to a privately owned object. We store these copied tracks here,\nand then restore them upon paste to re-create the tracks with the correct owner." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, Binding), Z_Construct_UScriptStruct_FMovieSceneBinding, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding_MetaData)) }; // 1180083504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable = { "Spawnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, Spawnable), Z_Construct_UScriptStruct_FMovieSceneSpawnable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable_MetaData)) }; // 2899774977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable = { "Possessable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, Possessable), Z_Construct_UScriptStruct_FMovieScenePossessable, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable_MetaData)) }; // 517388266
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames_Inner = { "BoundObjectNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames = { "BoundObjectNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, BoundObjectNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath_Inner = { "FolderPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/MovieSceneCopyableBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath = { "FolderPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCopyableBinding, FolderPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_SpawnableObjectTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Tracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Spawnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_Possessable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_BoundObjectNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::NewProp_FolderPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCopyableBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::ClassParams = {
		&UMovieSceneCopyableBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCopyableBinding()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCopyableBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCopyableBinding.OuterSingleton, Z_Construct_UClass_UMovieSceneCopyableBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCopyableBinding.OuterSingleton;
	}
	template<> SEQUENCER_API UClass* StaticClass<UMovieSceneCopyableBinding>()
	{
		return UMovieSceneCopyableBinding::StaticClass();
	}
	UMovieSceneCopyableBinding::UMovieSceneCopyableBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCopyableBinding);
	UMovieSceneCopyableBinding::~UMovieSceneCopyableBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCopyableBinding, UMovieSceneCopyableBinding::StaticClass, TEXT("UMovieSceneCopyableBinding"), &Z_Registration_Info_UClass_UMovieSceneCopyableBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCopyableBinding), 936564393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_4103369126(TEXT("/Script/Sequencer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Sequencer_Private_MovieSceneCopyableBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
