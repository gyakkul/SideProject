// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereWithOwnerBoostNetObjectPrioritizer() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_USphereNetObjectPrioritizerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereWithOwnerBoostNetObjectPrioritizerConfig);
	UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_NoRegister()
	{
		return USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
	}
	struct Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPriorityBoost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OwnerPriorityBoost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereNetObjectPrioritizerConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::NewProp_OwnerPriorityBoost_MetaData[] = {
		{ "Comment", "/** Priority boost for the owning connection. Added to the priority calculated by the sphere prioritizer. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h" },
		{ "ToolTip", "Priority boost for the owning connection. Added to the priority calculated by the sphere prioritizer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::NewProp_OwnerPriorityBoost = { "OwnerPriorityBoost", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USphereWithOwnerBoostNetObjectPrioritizerConfig, OwnerPriorityBoost), METADATA_PARAMS(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::NewProp_OwnerPriorityBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::NewProp_OwnerPriorityBoost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::NewProp_OwnerPriorityBoost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereWithOwnerBoostNetObjectPrioritizerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::ClassParams = {
		&USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig()
	{
		if (!Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.OuterSingleton, Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USphereWithOwnerBoostNetObjectPrioritizerConfig>()
	{
		return USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass();
	}
	USphereWithOwnerBoostNetObjectPrioritizerConfig::USphereWithOwnerBoostNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereWithOwnerBoostNetObjectPrioritizerConfig);
	USphereWithOwnerBoostNetObjectPrioritizerConfig::~USphereWithOwnerBoostNetObjectPrioritizerConfig() {}
	void USphereWithOwnerBoostNetObjectPrioritizer::StaticRegisterNativesUSphereWithOwnerBoostNetObjectPrioritizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphereWithOwnerBoostNetObjectPrioritizer);
	UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_NoRegister()
	{
		return USphereWithOwnerBoostNetObjectPrioritizer::StaticClass();
	}
	struct Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereNetObjectPrioritizer,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/SphereWithOwnerBoostNetObjectPrioritizer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphereWithOwnerBoostNetObjectPrioritizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::ClassParams = {
		&USphereWithOwnerBoostNetObjectPrioritizer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer()
	{
		if (!Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<USphereWithOwnerBoostNetObjectPrioritizer>()
	{
		return USphereWithOwnerBoostNetObjectPrioritizer::StaticClass();
	}
	USphereWithOwnerBoostNetObjectPrioritizer::USphereWithOwnerBoostNetObjectPrioritizer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereWithOwnerBoostNetObjectPrioritizer);
	USphereWithOwnerBoostNetObjectPrioritizer::~USphereWithOwnerBoostNetObjectPrioritizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig, USphereWithOwnerBoostNetObjectPrioritizerConfig::StaticClass, TEXT("USphereWithOwnerBoostNetObjectPrioritizerConfig"), &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereWithOwnerBoostNetObjectPrioritizerConfig), 3348012964U) },
		{ Z_Construct_UClass_USphereWithOwnerBoostNetObjectPrioritizer, USphereWithOwnerBoostNetObjectPrioritizer::StaticClass, TEXT("USphereWithOwnerBoostNetObjectPrioritizer"), &Z_Registration_Info_UClass_USphereWithOwnerBoostNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphereWithOwnerBoostNetObjectPrioritizer), 1499324440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h_2495773135(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereWithOwnerBoostNetObjectPrioritizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
