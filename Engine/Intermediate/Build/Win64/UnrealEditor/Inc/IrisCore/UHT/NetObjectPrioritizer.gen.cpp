// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectPrioritizer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UNetObjectPrioritizerConfig::StaticRegisterNativesUNetObjectPrioritizerConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizerConfig);
	UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig_NoRegister()
	{
		return UNetObjectPrioritizerConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for prioritizer specific configuration.\n * @see FNetObjectPrioritizerDefinition\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ToolTip", "Base class for prioritizer specific configuration.\n@see FNetObjectPrioritizerDefinition" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizerConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::ClassParams = {
		&UNetObjectPrioritizerConfig::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig()
	{
		if (!Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizerConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectPrioritizerConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizerConfig>()
	{
		return UNetObjectPrioritizerConfig::StaticClass();
	}
	UNetObjectPrioritizerConfig::UNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizerConfig);
	UNetObjectPrioritizerConfig::~UNetObjectPrioritizerConfig() {}
	void UNetObjectPrioritizer::StaticRegisterNativesUNetObjectPrioritizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectPrioritizer);
	UClass* Z_Construct_UClass_UNetObjectPrioritizer_NoRegister()
	{
		return UNetObjectPrioritizer::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectPrioritizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectPrioritizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectPrioritizer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * NetObjectPrioritizers are responsible for determining how important it is to replicate an object. Priorities should be at least 0.0f, \n * meaning no need to replicate. At 1.0f objects are being considered for replication. Priorities are acumulated per object and connection \n * until it's replicated, at which point the priority is reset to zero. Bandwidth constraints and other factors may cause a highly prioritized \n * object to still not be replicated to a particular connection a certain frame. There is no mechanism to force an object to be replicated a \n * certain frame, but the priority is a major factor in the decision.\n */" },
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectPrioritizer.h" },
		{ "ToolTip", "NetObjectPrioritizers are responsible for determining how important it is to replicate an object. Priorities should be at least 0.0f,\nmeaning no need to replicate. At 1.0f objects are being considered for replication. Priorities are acumulated per object and connection\nuntil it's replicated, at which point the priority is reset to zero. Bandwidth constraints and other factors may cause a highly prioritized\nobject to still not be replicated to a particular connection a certain frame. There is no mechanism to force an object to be replicated a\ncertain frame, but the priority is a major factor in the decision." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectPrioritizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectPrioritizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectPrioritizer_Statics::ClassParams = {
		&UNetObjectPrioritizer::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectPrioritizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectPrioritizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectPrioritizer()
	{
		if (!Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton, Z_Construct_UClass_UNetObjectPrioritizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectPrioritizer.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectPrioritizer>()
	{
		return UNetObjectPrioritizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectPrioritizer);
	UNetObjectPrioritizer::~UNetObjectPrioritizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectPrioritizerConfig, UNetObjectPrioritizerConfig::StaticClass, TEXT("UNetObjectPrioritizerConfig"), &Z_Registration_Info_UClass_UNetObjectPrioritizerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizerConfig), 2998003471U) },
		{ Z_Construct_UClass_UNetObjectPrioritizer, UNetObjectPrioritizer::StaticClass, TEXT("UNetObjectPrioritizer"), &Z_Registration_Info_UClass_UNetObjectPrioritizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectPrioritizer), 1402295454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_570700797(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectPrioritizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
