// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSmartObjects/Public/MassSmartObjectProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmartObjectProcessor() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_NoRegister();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_NoRegister();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer();
	MASSSMARTOBJECTS_API UClass* Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSmartObjects();
// End Cross Module References
	void UMassSmartObjectCandidatesFinderProcessor::StaticRegisterNativesUMassSmartObjectCandidatesFinderProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmartObjectCandidatesFinderProcessor);
	UClass* Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_NoRegister()
	{
		return UMassSmartObjectCandidatesFinderProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchExtents_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchExtents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processor that builds a list of candidates objects for each users. */" },
		{ "IncludePath", "MassSmartObjectProcessor.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectProcessor.h" },
		{ "ToolTip", "Processor that builds a list of candidates objects for each users." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::NewProp_SearchExtents_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Extents used to perform the spatial query in the octree for world location queries. */" },
		{ "ModuleRelativePath", "Public/MassSmartObjectProcessor.h" },
		{ "ToolTip", "Extents used to perform the spatial query in the octree for world location queries." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::NewProp_SearchExtents = { "SearchExtents", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSmartObjectCandidatesFinderProcessor, SearchExtents), METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::NewProp_SearchExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::NewProp_SearchExtents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::NewProp_SearchExtents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmartObjectCandidatesFinderProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::ClassParams = {
		&UMassSmartObjectCandidatesFinderProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSmartObjectCandidatesFinderProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmartObjectCandidatesFinderProcessor.OuterSingleton, Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmartObjectCandidatesFinderProcessor.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<UMassSmartObjectCandidatesFinderProcessor>()
	{
		return UMassSmartObjectCandidatesFinderProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmartObjectCandidatesFinderProcessor);
	UMassSmartObjectCandidatesFinderProcessor::~UMassSmartObjectCandidatesFinderProcessor() {}
	void UMassSmartObjectTimedBehaviorProcessor::StaticRegisterNativesUMassSmartObjectTimedBehaviorProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmartObjectTimedBehaviorProcessor);
	UClass* Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_NoRegister()
	{
		return UMassSmartObjectTimedBehaviorProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processor for time based user's behavior that waits x seconds then releases its claim on the object */" },
		{ "IncludePath", "MassSmartObjectProcessor.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectProcessor.h" },
		{ "ToolTip", "Processor for time based user's behavior that waits x seconds then releases its claim on the object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmartObjectTimedBehaviorProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::ClassParams = {
		&UMassSmartObjectTimedBehaviorProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassSmartObjectTimedBehaviorProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmartObjectTimedBehaviorProcessor.OuterSingleton, Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmartObjectTimedBehaviorProcessor.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<UMassSmartObjectTimedBehaviorProcessor>()
	{
		return UMassSmartObjectTimedBehaviorProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmartObjectTimedBehaviorProcessor);
	UMassSmartObjectTimedBehaviorProcessor::~UMassSmartObjectTimedBehaviorProcessor() {}
	void UMassSmartObjectUserFragmentDeinitializer::StaticRegisterNativesUMassSmartObjectUserFragmentDeinitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmartObjectUserFragmentDeinitializer);
	UClass* Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_NoRegister()
	{
		return UMassSmartObjectUserFragmentDeinitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSmartObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Deinitializer processor to unregister slot invalidation callback when SmartObjectUser fragment gets removed */" },
		{ "IncludePath", "MassSmartObjectProcessor.h" },
		{ "ModuleRelativePath", "Public/MassSmartObjectProcessor.h" },
		{ "ToolTip", "Deinitializer processor to unregister slot invalidation callback when SmartObjectUser fragment gets removed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmartObjectUserFragmentDeinitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::ClassParams = {
		&UMassSmartObjectUserFragmentDeinitializer::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer()
	{
		if (!Z_Registration_Info_UClass_UMassSmartObjectUserFragmentDeinitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmartObjectUserFragmentDeinitializer.OuterSingleton, Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmartObjectUserFragmentDeinitializer.OuterSingleton;
	}
	template<> MASSSMARTOBJECTS_API UClass* StaticClass<UMassSmartObjectUserFragmentDeinitializer>()
	{
		return UMassSmartObjectUserFragmentDeinitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmartObjectUserFragmentDeinitializer);
	UMassSmartObjectUserFragmentDeinitializer::~UMassSmartObjectUserFragmentDeinitializer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSmartObjectCandidatesFinderProcessor, UMassSmartObjectCandidatesFinderProcessor::StaticClass, TEXT("UMassSmartObjectCandidatesFinderProcessor"), &Z_Registration_Info_UClass_UMassSmartObjectCandidatesFinderProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmartObjectCandidatesFinderProcessor), 2995639203U) },
		{ Z_Construct_UClass_UMassSmartObjectTimedBehaviorProcessor, UMassSmartObjectTimedBehaviorProcessor::StaticClass, TEXT("UMassSmartObjectTimedBehaviorProcessor"), &Z_Registration_Info_UClass_UMassSmartObjectTimedBehaviorProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmartObjectTimedBehaviorProcessor), 3086688372U) },
		{ Z_Construct_UClass_UMassSmartObjectUserFragmentDeinitializer, UMassSmartObjectUserFragmentDeinitializer::StaticClass, TEXT("UMassSmartObjectUserFragmentDeinitializer"), &Z_Registration_Info_UClass_UMassSmartObjectUserFragmentDeinitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmartObjectUserFragmentDeinitializer), 1562022725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectProcessor_h_1385782738(TEXT("/Script/MassSmartObjects"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSmartObjects_Public_MassSmartObjectProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
