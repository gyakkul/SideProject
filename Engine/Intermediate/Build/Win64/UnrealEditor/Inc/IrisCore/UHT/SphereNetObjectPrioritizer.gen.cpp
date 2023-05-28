// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereNetObjectPrioritizer() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_ULocationBasedNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void USphereNetObjectPrioritizerConfig::StaticRegisterNativesUSphereNetObjectPrioritizerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereNetObjectPrioritizerConfig);
	UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig_NoRegister()
	{
		return USphereNetObjectPrioritizerConfig::StaticClass();
	}
	struct Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerPriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterPriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutsidePriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutsidePriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizerConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereNetObjectPrioritizerConfig, InnerRadius), METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereNetObjectPrioritizerConfig, OuterRadius), METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerPriority_MetaData[] = {
		{ "Comment", "/** Priority for objects inside the inner sphere */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority for objects inside the inner sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerPriority = { "InnerPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereNetObjectPrioritizerConfig, InnerPriority), METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterPriority_MetaData[] = {
		{ "Comment", "/** Priority at the border of the outer sphere */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority at the border of the outer sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterPriority = { "OuterPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereNetObjectPrioritizerConfig, OuterPriority), METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority_MetaData[] = {
		{ "Comment", "/** Priority outside the sphere */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority outside the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority = { "OutsidePriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereNetObjectPrioritizerConfig, OutsidePriority), METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_InnerPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OuterPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::NewProp_OutsidePriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereNetObjectPrioritizerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::ClassParams = {
		&USphereNetObjectPrioritizerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig()
	{
		if (!Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton, Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USphereNetObjectPrioritizerConfig>()
	{
		return USphereNetObjectPrioritizerConfig::StaticClass();
	}
	USphereNetObjectPrioritizerConfig::USphereNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereNetObjectPrioritizerConfig);
	USphereNetObjectPrioritizerConfig::~USphereNetObjectPrioritizerConfig() {}
	void USphereNetObjectPrioritizer::StaticRegisterNativesUSphereNetObjectPrioritizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereNetObjectPrioritizer);
	UClass* Z_Construct_UClass_USphereNetObjectPrioritizer_NoRegister()
	{
		return USphereNetObjectPrioritizer::StaticClass();
	}
	struct Z_Construct_UClass_USphereNetObjectPrioritizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocationBasedNetObjectPrioritizer,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereNetObjectPrioritizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::ClassParams = {
		&USphereNetObjectPrioritizer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereNetObjectPrioritizer()
	{
		if (!Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_USphereNetObjectPrioritizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereNetObjectPrioritizer.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USphereNetObjectPrioritizer>()
	{
		return USphereNetObjectPrioritizer::StaticClass();
	}
	USphereNetObjectPrioritizer::USphereNetObjectPrioritizer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereNetObjectPrioritizer);
	USphereNetObjectPrioritizer::~USphereNetObjectPrioritizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphereNetObjectPrioritizerConfig, USphereNetObjectPrioritizerConfig::StaticClass, TEXT("USphereNetObjectPrioritizerConfig"), &Z_Registration_Info_UClass_USphereNetObjectPrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereNetObjectPrioritizerConfig), 2525136679U) },
		{ Z_Construct_UClass_USphereNetObjectPrioritizer, USphereNetObjectPrioritizer::StaticClass, TEXT("USphereNetObjectPrioritizer"), &Z_Registration_Info_UClass_USphereNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereNetObjectPrioritizer), 3827600897U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_675585712(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
