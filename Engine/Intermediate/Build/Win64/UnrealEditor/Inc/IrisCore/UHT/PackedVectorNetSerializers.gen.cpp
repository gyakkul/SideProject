// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/PackedVectorNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedVectorNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FVectorNetQuantizeNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVectorNetQuantizeNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig;
class UScriptStruct* FVectorNetQuantizeNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("VectorNetQuantizeNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVectorNetQuantizeNetSerializerConfig>()
{
	return FVectorNetQuantizeNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedVectorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorNetQuantizeNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"VectorNetQuantizeNetSerializerConfig",
		sizeof(FVectorNetQuantizeNetSerializerConfig),
		alignof(FVectorNetQuantizeNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVectorNetQuantize10NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVectorNetQuantize10NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig;
class UScriptStruct* FVectorNetQuantize10NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("VectorNetQuantize10NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVectorNetQuantize10NetSerializerConfig>()
{
	return FVectorNetQuantize10NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedVectorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorNetQuantize10NetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"VectorNetQuantize10NetSerializerConfig",
		sizeof(FVectorNetQuantize10NetSerializerConfig),
		alignof(FVectorNetQuantize10NetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVectorNetQuantize100NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVectorNetQuantize100NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig;
class UScriptStruct* FVectorNetQuantize100NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("VectorNetQuantize100NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVectorNetQuantize100NetSerializerConfig>()
{
	return FVectorNetQuantize100NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedVectorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorNetQuantize100NetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"VectorNetQuantize100NetSerializerConfig",
		sizeof(FVectorNetQuantize100NetSerializerConfig),
		alignof(FVectorNetQuantize100NetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVectorNetQuantizeNormalNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FVectorNetQuantizeNormalNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig;
class UScriptStruct* FVectorNetQuantizeNormalNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("VectorNetQuantizeNormalNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FVectorNetQuantizeNormalNetSerializerConfig>()
{
	return FVectorNetQuantizeNormalNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedVectorNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorNetQuantizeNormalNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"VectorNetQuantizeNormalNetSerializerConfig",
		sizeof(FVectorNetQuantizeNormalNetSerializerConfig),
		alignof(FVectorNetQuantizeNormalNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedVectorNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedVectorNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FVectorNetQuantizeNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVectorNetQuantizeNetSerializerConfig_Statics::NewStructOps, TEXT("VectorNetQuantizeNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_VectorNetQuantizeNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorNetQuantizeNetSerializerConfig), 2511092800U) },
		{ FVectorNetQuantize10NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVectorNetQuantize10NetSerializerConfig_Statics::NewStructOps, TEXT("VectorNetQuantize10NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_VectorNetQuantize10NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorNetQuantize10NetSerializerConfig), 2985982056U) },
		{ FVectorNetQuantize100NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVectorNetQuantize100NetSerializerConfig_Statics::NewStructOps, TEXT("VectorNetQuantize100NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_VectorNetQuantize100NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorNetQuantize100NetSerializerConfig), 2118652354U) },
		{ FVectorNetQuantizeNormalNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FVectorNetQuantizeNormalNetSerializerConfig_Statics::NewStructOps, TEXT("VectorNetQuantizeNormalNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_VectorNetQuantizeNormalNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorNetQuantizeNormalNetSerializerConfig), 2230862164U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedVectorNetSerializers_h_147550731(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedVectorNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedVectorNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
