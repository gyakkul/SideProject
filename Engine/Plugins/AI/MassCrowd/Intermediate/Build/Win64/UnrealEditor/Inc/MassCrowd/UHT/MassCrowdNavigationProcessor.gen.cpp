// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdNavigationProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdNavigationProcessor() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneTrackingDestructor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_NoRegister();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalProcessorBase();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister();
// End Cross Module References
	void UMassCrowdLaneTrackingSignalProcessor::StaticRegisterNativesUMassCrowdLaneTrackingSignalProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdLaneTrackingSignalProcessor);
	UClass* Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_NoRegister()
	{
		return UMassCrowdLaneTrackingSignalProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassSignalProcessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processor that monitors when entities change lane and notify the MassCrowd subsystem. */" },
		{ "IncludePath", "MassCrowdNavigationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
		{ "ToolTip", "Processor that monitors when entities change lane and notify the MassCrowd subsystem." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdLaneTrackingSignalProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::ClassParams = {
		&UMassCrowdLaneTrackingSignalProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdLaneTrackingSignalProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdLaneTrackingSignalProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdLaneTrackingSignalProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdLaneTrackingSignalProcessor>()
	{
		return UMassCrowdLaneTrackingSignalProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdLaneTrackingSignalProcessor);
	UMassCrowdLaneTrackingSignalProcessor::~UMassCrowdLaneTrackingSignalProcessor() {}
	void UMassCrowdLaneTrackingDestructor::StaticRegisterNativesUMassCrowdLaneTrackingDestructor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdLaneTrackingDestructor);
	UClass* Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_NoRegister()
	{
		return UMassCrowdLaneTrackingDestructor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processors that cleans up the lane tracking on entity destruction. */" },
		{ "IncludePath", "MassCrowdNavigationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
		{ "ToolTip", "Processors that cleans up the lane tracking on entity destruction." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdLaneTrackingDestructor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::ClassParams = {
		&UMassCrowdLaneTrackingDestructor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdLaneTrackingDestructor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdLaneTrackingDestructor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdLaneTrackingDestructor.OuterSingleton, Z_Construct_UClass_UMassCrowdLaneTrackingDestructor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdLaneTrackingDestructor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdLaneTrackingDestructor>()
	{
		return UMassCrowdLaneTrackingDestructor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdLaneTrackingDestructor);
	UMassCrowdLaneTrackingDestructor::~UMassCrowdLaneTrackingDestructor() {}
	void UMassCrowdDynamicObstacleProcessor::StaticRegisterNativesUMassCrowdDynamicObstacleProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdDynamicObstacleProcessor);
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_NoRegister()
	{
		return UMassCrowdDynamicObstacleProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphAnnotationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphAnnotationSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdNavigationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::NewProp_ZoneGraphAnnotationSubsystem = { "ZoneGraphAnnotationSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdDynamicObstacleProcessor, ZoneGraphAnnotationSubsystem), Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::NewProp_ZoneGraphAnnotationSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdDynamicObstacleProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::ClassParams = {
		&UMassCrowdDynamicObstacleProcessor::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdDynamicObstacleProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdDynamicObstacleProcessor.OuterSingleton, Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdDynamicObstacleProcessor.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdDynamicObstacleProcessor>()
	{
		return UMassCrowdDynamicObstacleProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdDynamicObstacleProcessor);
	UMassCrowdDynamicObstacleProcessor::~UMassCrowdDynamicObstacleProcessor() {}
	void UMassCrowdDynamicObstacleInitializer::StaticRegisterNativesUMassCrowdDynamicObstacleInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdDynamicObstacleInitializer);
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_NoRegister()
	{
		return UMassCrowdDynamicObstacleInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdNavigationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdDynamicObstacleInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::ClassParams = {
		&UMassCrowdDynamicObstacleInitializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdDynamicObstacleInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdDynamicObstacleInitializer.OuterSingleton, Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdDynamicObstacleInitializer.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdDynamicObstacleInitializer>()
	{
		return UMassCrowdDynamicObstacleInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdDynamicObstacleInitializer);
	UMassCrowdDynamicObstacleInitializer::~UMassCrowdDynamicObstacleInitializer() {}
	void UMassCrowdDynamicObstacleDeinitializer::StaticRegisterNativesUMassCrowdDynamicObstacleDeinitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdDynamicObstacleDeinitializer);
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_NoRegister()
	{
		return UMassCrowdDynamicObstacleDeinitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphAnnotationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphAnnotationSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassCrowdNavigationProcessor.h" },
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdNavigationProcessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::NewProp_ZoneGraphAnnotationSubsystem = { "ZoneGraphAnnotationSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdDynamicObstacleDeinitializer, ZoneGraphAnnotationSubsystem), Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::NewProp_ZoneGraphAnnotationSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdDynamicObstacleDeinitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::ClassParams = {
		&UMassCrowdDynamicObstacleDeinitializer::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdDynamicObstacleDeinitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdDynamicObstacleDeinitializer.OuterSingleton, Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdDynamicObstacleDeinitializer.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdDynamicObstacleDeinitializer>()
	{
		return UMassCrowdDynamicObstacleDeinitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdDynamicObstacleDeinitializer);
	UMassCrowdDynamicObstacleDeinitializer::~UMassCrowdDynamicObstacleDeinitializer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdNavigationProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdNavigationProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdLaneTrackingSignalProcessor, UMassCrowdLaneTrackingSignalProcessor::StaticClass, TEXT("UMassCrowdLaneTrackingSignalProcessor"), &Z_Registration_Info_UClass_UMassCrowdLaneTrackingSignalProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdLaneTrackingSignalProcessor), 2692571760U) },
		{ Z_Construct_UClass_UMassCrowdLaneTrackingDestructor, UMassCrowdLaneTrackingDestructor::StaticClass, TEXT("UMassCrowdLaneTrackingDestructor"), &Z_Registration_Info_UClass_UMassCrowdLaneTrackingDestructor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdLaneTrackingDestructor), 482975551U) },
		{ Z_Construct_UClass_UMassCrowdDynamicObstacleProcessor, UMassCrowdDynamicObstacleProcessor::StaticClass, TEXT("UMassCrowdDynamicObstacleProcessor"), &Z_Registration_Info_UClass_UMassCrowdDynamicObstacleProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdDynamicObstacleProcessor), 4194661905U) },
		{ Z_Construct_UClass_UMassCrowdDynamicObstacleInitializer, UMassCrowdDynamicObstacleInitializer::StaticClass, TEXT("UMassCrowdDynamicObstacleInitializer"), &Z_Registration_Info_UClass_UMassCrowdDynamicObstacleInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdDynamicObstacleInitializer), 2866760899U) },
		{ Z_Construct_UClass_UMassCrowdDynamicObstacleDeinitializer, UMassCrowdDynamicObstacleDeinitializer::StaticClass, TEXT("UMassCrowdDynamicObstacleDeinitializer"), &Z_Registration_Info_UClass_UMassCrowdDynamicObstacleDeinitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdDynamicObstacleDeinitializer), 833017752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdNavigationProcessor_h_1504085352(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdNavigationProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdNavigationProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
