// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/PolymorphicNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolymorphicNetSerializer() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FPolymorphicStructNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPolymorphicStructNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig;
class UScriptStruct* FPolymorphicStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PolymorphicStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPolymorphicStructNetSerializerConfig>()
{
	return FPolymorphicStructNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PolymorphicNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolymorphicStructNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"PolymorphicStructNetSerializerConfig",
		sizeof(FPolymorphicStructNetSerializerConfig),
		alignof(FPolymorphicStructNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPolymorphicArrayStructNetSerializerConfig>() == std::is_polymorphic<FPolymorphicStructNetSerializerConfig>(), "USTRUCT FPolymorphicArrayStructNetSerializerConfig cannot be polymorphic unless super FPolymorphicStructNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig;
class UScriptStruct* FPolymorphicArrayStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PolymorphicArrayStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPolymorphicArrayStructNetSerializerConfig>()
{
	return FPolymorphicArrayStructNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PolymorphicNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolymorphicArrayStructNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig,
		&NewStructOps,
		"PolymorphicArrayStructNetSerializerConfig",
		sizeof(FPolymorphicArrayStructNetSerializerConfig),
		alignof(FPolymorphicArrayStructNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FPolymorphicStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig_Statics::NewStructOps, TEXT("PolymorphicStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PolymorphicStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolymorphicStructNetSerializerConfig), 3606205949U) },
		{ FPolymorphicArrayStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPolymorphicArrayStructNetSerializerConfig_Statics::NewStructOps, TEXT("PolymorphicArrayStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PolymorphicArrayStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolymorphicArrayStructNetSerializerConfig), 3768304942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_395394211(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PolymorphicNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
