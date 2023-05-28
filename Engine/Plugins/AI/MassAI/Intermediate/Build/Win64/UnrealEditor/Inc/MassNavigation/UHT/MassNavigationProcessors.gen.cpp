// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassNavigationProcessors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassNavigationProcessors() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassMoveTargetFragmentInitializer();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassMoveTargetFragmentInitializer_NoRegister();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleGridProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleGridProcessor_NoRegister();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_NoRegister();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationSmoothHeightProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_NoRegister();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassOffLODNavigationProcessor();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassOffLODNavigationProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassOffLODNavigationProcessor::StaticRegisterNativesUMassOffLODNavigationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassOffLODNavigationProcessor);
	UClass* Z_Construct_UClass_UMassOffLODNavigationProcessor_NoRegister()
	{
		return UMassOffLODNavigationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates Off-LOD entities position to move targets position.\n */" },
		{ "IncludePath", "MassNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassNavigationProcessors.h" },
		{ "ToolTip", "Updates Off-LOD entities position to move targets position." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassOffLODNavigationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::ClassParams = {
		&UMassOffLODNavigationProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassOffLODNavigationProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassOffLODNavigationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassOffLODNavigationProcessor.OuterSingleton, Z_Construct_UClass_UMassOffLODNavigationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassOffLODNavigationProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassOffLODNavigationProcessor>()
	{
		return UMassOffLODNavigationProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassOffLODNavigationProcessor);
	UMassOffLODNavigationProcessor::~UMassOffLODNavigationProcessor() {}
	void UMassNavigationSmoothHeightProcessor::StaticRegisterNativesUMassNavigationSmoothHeightProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationSmoothHeightProcessor);
	UClass* Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_NoRegister()
	{
		return UMassNavigationSmoothHeightProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Updates entities height to move targets position smoothly.\n * Does not update Off-LOD entities.\n */" },
		{ "IncludePath", "MassNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassNavigationProcessors.h" },
		{ "ToolTip", "Updates entities height to move targets position smoothly.\nDoes not update Off-LOD entities." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationSmoothHeightProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::ClassParams = {
		&UMassNavigationSmoothHeightProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationSmoothHeightProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationSmoothHeightProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationSmoothHeightProcessor.OuterSingleton, Z_Construct_UClass_UMassNavigationSmoothHeightProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationSmoothHeightProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassNavigationSmoothHeightProcessor>()
	{
		return UMassNavigationSmoothHeightProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationSmoothHeightProcessor);
	UMassNavigationSmoothHeightProcessor::~UMassNavigationSmoothHeightProcessor() {}
	void UMassMoveTargetFragmentInitializer::StaticRegisterNativesUMassMoveTargetFragmentInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassMoveTargetFragmentInitializer);
	UClass* Z_Construct_UClass_UMassMoveTargetFragmentInitializer_NoRegister()
	{
		return UMassMoveTargetFragmentInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Initializes the move target's location to the agents initial position.\n */" },
		{ "IncludePath", "MassNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassNavigationProcessors.h" },
		{ "ToolTip", "Initializes the move target's location to the agents initial position." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassMoveTargetFragmentInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::ClassParams = {
		&UMassMoveTargetFragmentInitializer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassMoveTargetFragmentInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassMoveTargetFragmentInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassMoveTargetFragmentInitializer.OuterSingleton, Z_Construct_UClass_UMassMoveTargetFragmentInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassMoveTargetFragmentInitializer.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassMoveTargetFragmentInitializer>()
	{
		return UMassMoveTargetFragmentInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassMoveTargetFragmentInitializer);
	UMassMoveTargetFragmentInitializer::~UMassMoveTargetFragmentInitializer() {}
	void UMassNavigationObstacleGridProcessor::StaticRegisterNativesUMassNavigationObstacleGridProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationObstacleGridProcessor);
	UClass* Z_Construct_UClass_UMassNavigationObstacleGridProcessor_NoRegister()
	{
		return UMassNavigationObstacleGridProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Processor to update obstacle grid */" },
		{ "IncludePath", "MassNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassNavigationProcessors.h" },
		{ "ToolTip", "Processor to update obstacle grid" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationObstacleGridProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::ClassParams = {
		&UMassNavigationObstacleGridProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationObstacleGridProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationObstacleGridProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationObstacleGridProcessor.OuterSingleton, Z_Construct_UClass_UMassNavigationObstacleGridProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationObstacleGridProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassNavigationObstacleGridProcessor>()
	{
		return UMassNavigationObstacleGridProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationObstacleGridProcessor);
	UMassNavigationObstacleGridProcessor::~UMassNavigationObstacleGridProcessor() {}
	void UMassNavigationObstacleRemoverProcessor::StaticRegisterNativesUMassNavigationObstacleRemoverProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassNavigationObstacleRemoverProcessor);
	UClass* Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_NoRegister()
	{
		return UMassNavigationObstacleRemoverProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Deinitializer processor to remove avoidance obstacles from the avoidance obstacle grid */" },
		{ "IncludePath", "MassNavigationProcessors.h" },
		{ "ModuleRelativePath", "Public/MassNavigationProcessors.h" },
		{ "ToolTip", "Deinitializer processor to remove avoidance obstacles from the avoidance obstacle grid" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassNavigationObstacleRemoverProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::ClassParams = {
		&UMassNavigationObstacleRemoverProcessor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor()
	{
		if (!Z_Registration_Info_UClass_UMassNavigationObstacleRemoverProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassNavigationObstacleRemoverProcessor.OuterSingleton, Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassNavigationObstacleRemoverProcessor.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassNavigationObstacleRemoverProcessor>()
	{
		return UMassNavigationObstacleRemoverProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassNavigationObstacleRemoverProcessor);
	UMassNavigationObstacleRemoverProcessor::~UMassNavigationObstacleRemoverProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationProcessors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationProcessors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassOffLODNavigationProcessor, UMassOffLODNavigationProcessor::StaticClass, TEXT("UMassOffLODNavigationProcessor"), &Z_Registration_Info_UClass_UMassOffLODNavigationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassOffLODNavigationProcessor), 1115845176U) },
		{ Z_Construct_UClass_UMassNavigationSmoothHeightProcessor, UMassNavigationSmoothHeightProcessor::StaticClass, TEXT("UMassNavigationSmoothHeightProcessor"), &Z_Registration_Info_UClass_UMassNavigationSmoothHeightProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationSmoothHeightProcessor), 1215924951U) },
		{ Z_Construct_UClass_UMassMoveTargetFragmentInitializer, UMassMoveTargetFragmentInitializer::StaticClass, TEXT("UMassMoveTargetFragmentInitializer"), &Z_Registration_Info_UClass_UMassMoveTargetFragmentInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassMoveTargetFragmentInitializer), 905912320U) },
		{ Z_Construct_UClass_UMassNavigationObstacleGridProcessor, UMassNavigationObstacleGridProcessor::StaticClass, TEXT("UMassNavigationObstacleGridProcessor"), &Z_Registration_Info_UClass_UMassNavigationObstacleGridProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationObstacleGridProcessor), 3892240141U) },
		{ Z_Construct_UClass_UMassNavigationObstacleRemoverProcessor, UMassNavigationObstacleRemoverProcessor::StaticClass, TEXT("UMassNavigationObstacleRemoverProcessor"), &Z_Registration_Info_UClass_UMassNavigationObstacleRemoverProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassNavigationObstacleRemoverProcessor), 4079212518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationProcessors_h_1730297676(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationProcessors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_MassNavigationProcessors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
