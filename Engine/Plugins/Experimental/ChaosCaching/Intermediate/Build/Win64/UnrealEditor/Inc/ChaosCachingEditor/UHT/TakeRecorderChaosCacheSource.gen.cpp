// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sequencer/TakeRecorderChaosCacheSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderChaosCacheSource() {}
// Cross Module References
	CHAOSCACHING_API UClass* Z_Construct_UClass_AChaosCacheManager_NoRegister();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_NoRegister();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UTakeRecorderChaosCacheSource();
	CHAOSCACHINGEDITOR_API UClass* Z_Construct_UClass_UTakeRecorderChaosCacheSource_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UTakeRecorderSource();
	UPackage* Z_Construct_UPackage__Script_ChaosCachingEditor();
// End Cross Module References
	void UTakeRecorderChaosCacheSource::StaticRegisterNativesUTakeRecorderChaosCacheSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderChaosCacheSource);
	UClass* Z_Construct_UClass_UTakeRecorderChaosCacheSource_NoRegister()
	{
		return UTakeRecorderChaosCacheSource::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChaosCacheManager_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ChaosCacheManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackRecorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackRecorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTakeRecorderSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCachingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::Class_MetaDataParams[] = {
		{ "Category", "Chaos" },
		{ "Comment", "/** A recording source selector for the chaos integration into take recorder */" },
		{ "IncludePath", "Sequencer/TakeRecorderChaosCacheSource.h" },
		{ "ModuleRelativePath", "Public/Sequencer/TakeRecorderChaosCacheSource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "TakeRecorderDisplayName", "Chaos Recorder" },
		{ "ToolTip", "A recording source selector for the chaos integration into take recorder" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_ChaosCacheManager_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Chaos Cache manager to be used as take recorder source */" },
		{ "DisplayName", "Chaos Cache" },
		{ "ModuleRelativePath", "Public/Sequencer/TakeRecorderChaosCacheSource.h" },
		{ "ToolTip", "Chaos Cache manager to be used as take recorder source" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_ChaosCacheManager = { "ChaosCacheManager", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderChaosCacheSource, ChaosCacheManager), Z_Construct_UClass_AChaosCacheManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_ChaosCacheManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_ChaosCacheManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_TrackRecorder_MetaData[] = {
		{ "Comment", "/** Chaos cache track recorder used by this source */" },
		{ "ModuleRelativePath", "Public/Sequencer/TakeRecorderChaosCacheSource.h" },
		{ "ToolTip", "Chaos cache track recorder used by this source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_TrackRecorder = { "TrackRecorder", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderChaosCacheSource, TrackRecorder), Z_Construct_UClass_UMovieSceneChaosCacheTrackRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_TrackRecorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_TrackRecorder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_ChaosCacheManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::NewProp_TrackRecorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderChaosCacheSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::ClassParams = {
		&UTakeRecorderChaosCacheSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderChaosCacheSource()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderChaosCacheSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderChaosCacheSource.OuterSingleton, Z_Construct_UClass_UTakeRecorderChaosCacheSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderChaosCacheSource.OuterSingleton;
	}
	template<> CHAOSCACHINGEDITOR_API UClass* StaticClass<UTakeRecorderChaosCacheSource>()
	{
		return UTakeRecorderChaosCacheSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderChaosCacheSource);
	UTakeRecorderChaosCacheSource::~UTakeRecorderChaosCacheSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_TakeRecorderChaosCacheSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_TakeRecorderChaosCacheSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderChaosCacheSource, UTakeRecorderChaosCacheSource::StaticClass, TEXT("UTakeRecorderChaosCacheSource"), &Z_Registration_Info_UClass_UTakeRecorderChaosCacheSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderChaosCacheSource), 4237771513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_TakeRecorderChaosCacheSource_h_269809978(TEXT("/Script/ChaosCachingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_TakeRecorderChaosCacheSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCachingEditor_Public_Sequencer_TakeRecorderChaosCacheSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
