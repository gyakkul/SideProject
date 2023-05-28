// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassAI/Source/MassZoneGraphNavigation/Public/MassZoneGraphNavigationProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassZoneGraphNavigationProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_NoRegister();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphLocationInitializer();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphLocationInitializer_NoRegister();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphPathFollowProcessor();
	MASSZONEGRAPHNAVIGATION_API UClass* Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassZoneGraphNavigation();
// End Cross Module References
	void UMassZoneGraphLocationInitializer::StaticRegisterNativesUMassZoneGraphLocationInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphLocationInitializer);
	UClass* Z_Construct_UClass_UMassZoneGraphLocationInitializer_NoRegister()
	{
		return UMassZoneGraphLocationInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Processor for initializing nearest location on ZoneGraph.\n */" },
		{ "IncludePath", "MassZoneGraphNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationProcessors.h" },
		{ "ToolTip", "Processor for initializing nearest location on ZoneGraph." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphLocationInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::ClassParams = {
		&UMassZoneGraphLocationInitializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphLocationInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphLocationInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphLocationInitializer.OuterSingleton, Z_Construct_UClass_UMassZoneGraphLocationInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphLocationInitializer.OuterSingleton;
	}
	template<> MASSZONEGRAPHNAVIGATION_API UClass* StaticClass<UMassZoneGraphLocationInitializer>()
	{
		return UMassZoneGraphLocationInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphLocationInitializer);
	UMassZoneGraphLocationInitializer::~UMassZoneGraphLocationInitializer() {}
	void UMassZoneGraphPathFollowProcessor::StaticRegisterNativesUMassZoneGraphPathFollowProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphPathFollowProcessor);
	UClass* Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_NoRegister()
	{
		return UMassZoneGraphPathFollowProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignalSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SignalSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Processor for updating move target on ZoneGraph path.\n */" },
		{ "IncludePath", "MassZoneGraphNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationProcessors.h" },
		{ "ToolTip", "Processor for updating move target on ZoneGraph path." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::NewProp_SignalSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationProcessors.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::NewProp_SignalSubsystem = { "SignalSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassZoneGraphPathFollowProcessor, SignalSubsystem), Z_Construct_UClass_UMassSignalSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::NewProp_SignalSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::NewProp_SignalSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::NewProp_SignalSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphPathFollowProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::ClassParams = {
		&UMassZoneGraphPathFollowProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphPathFollowProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphPathFollowProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphPathFollowProcessor.OuterSingleton, Z_Construct_UClass_UMassZoneGraphPathFollowProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphPathFollowProcessor.OuterSingleton;
	}
	template<> MASSZONEGRAPHNAVIGATION_API UClass* StaticClass<UMassZoneGraphPathFollowProcessor>()
	{
		return UMassZoneGraphPathFollowProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphPathFollowProcessor);
	UMassZoneGraphPathFollowProcessor::~UMassZoneGraphPathFollowProcessor() {}
	void UMassZoneGraphLaneCacheBoundaryProcessor::StaticRegisterNativesUMassZoneGraphLaneCacheBoundaryProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassZoneGraphLaneCacheBoundaryProcessor);
	UClass* Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_NoRegister()
	{
		return UMassZoneGraphLaneCacheBoundaryProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassZoneGraphNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** ZoneGraph lane cache boundary processor */// @todo MassMovement: Make this signal based.\n" },
		{ "IncludePath", "MassZoneGraphNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassZoneGraphNavigationProcessors.h" },
		{ "ToolTip", "ZoneGraph lane cache boundary processor // @todo MassMovement: Make this signal based." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassZoneGraphLaneCacheBoundaryProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::ClassParams = {
		&UMassZoneGraphLaneCacheBoundaryProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassZoneGraphLaneCacheBoundaryProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassZoneGraphLaneCacheBoundaryProcessor.OuterSingleton, Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassZoneGraphLaneCacheBoundaryProcessor.OuterSingleton;
	}
	template<> MASSZONEGRAPHNAVIGATION_API UClass* StaticClass<UMassZoneGraphLaneCacheBoundaryProcessor>()
	{
		return UMassZoneGraphLaneCacheBoundaryProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassZoneGraphLaneCacheBoundaryProcessor);
	UMassZoneGraphLaneCacheBoundaryProcessor::~UMassZoneGraphLaneCacheBoundaryProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassZoneGraphLocationInitializer, UMassZoneGraphLocationInitializer::StaticClass, TEXT("UMassZoneGraphLocationInitializer"), &Z_Registration_Info_UClass_UMassZoneGraphLocationInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphLocationInitializer), 2235887734U) },
		{ Z_Construct_UClass_UMassZoneGraphPathFollowProcessor, UMassZoneGraphPathFollowProcessor::StaticClass, TEXT("UMassZoneGraphPathFollowProcessor"), &Z_Registration_Info_UClass_UMassZoneGraphPathFollowProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphPathFollowProcessor), 3551541894U) },
		{ Z_Construct_UClass_UMassZoneGraphLaneCacheBoundaryProcessor, UMassZoneGraphLaneCacheBoundaryProcessor::StaticClass, TEXT("UMassZoneGraphLaneCacheBoundaryProcessor"), &Z_Registration_Info_UClass_UMassZoneGraphLaneCacheBoundaryProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassZoneGraphLaneCacheBoundaryProcessor), 2901341081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationProcessors_h_447978473(TEXT("/Script/MassZoneGraphNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassZoneGraphNavigation_Public_MassZoneGraphNavigationProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
