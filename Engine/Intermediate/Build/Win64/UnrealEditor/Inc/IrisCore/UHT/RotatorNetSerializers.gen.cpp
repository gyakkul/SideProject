// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/RotatorNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRotatorNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRotatorNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FRotatorNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig;
class UScriptStruct* FRotatorNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorNetSerializerConfig>()
{
	return FRotatorNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"RotatorNetSerializerConfig",
		sizeof(FRotatorNetSerializerConfig),
		alignof(FRotatorNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotatorNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRotatorAsByteNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorAsByteNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig;
class UScriptStruct* FRotatorAsByteNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorAsByteNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorAsByteNetSerializerConfig>()
{
	return FRotatorAsByteNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorAsByteNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"RotatorAsByteNetSerializerConfig",
		sizeof(FRotatorAsByteNetSerializerConfig),
		alignof(FRotatorAsByteNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRotatorAsShortNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FRotatorAsShortNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig;
class UScriptStruct* FRotatorAsShortNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("RotatorAsShortNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FRotatorAsShortNetSerializerConfig>()
{
	return FRotatorAsShortNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/RotatorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotatorAsShortNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"RotatorAsShortNetSerializerConfig",
		sizeof(FRotatorAsShortNetSerializerConfig),
		alignof(FRotatorAsShortNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FRotatorNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorNetSerializerConfig), 3903692462U) },
		{ FRotatorAsByteNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorAsByteNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorAsByteNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorAsByteNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorAsByteNetSerializerConfig), 1151204520U) },
		{ FRotatorAsShortNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FRotatorAsShortNetSerializerConfig_Statics::NewStructOps, TEXT("RotatorAsShortNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_RotatorAsShortNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotatorAsShortNetSerializerConfig), 2226769023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_4050988905(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_RotatorNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
