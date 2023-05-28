// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/SoftObjectNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoftObjectNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FSoftObjectNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftObjectNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig;
class UScriptStruct* FSoftObjectNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftObjectNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftObjectNetSerializerConfig>()
{
	return FSoftObjectNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftObjectNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"SoftObjectNetSerializerConfig",
		sizeof(FSoftObjectNetSerializerConfig),
		alignof(FSoftObjectNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoftObjectPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftObjectPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig;
class UScriptStruct* FSoftObjectPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftObjectPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftObjectPathNetSerializerConfig>()
{
	return FSoftObjectPathNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftObjectPathNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"SoftObjectPathNetSerializerConfig",
		sizeof(FSoftObjectPathNetSerializerConfig),
		alignof(FSoftObjectPathNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoftClassPathNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FSoftClassPathNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig;
class UScriptStruct* FSoftClassPathNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SoftClassPathNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSoftClassPathNetSerializerConfig>()
{
	return FSoftClassPathNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/SoftObjectNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoftClassPathNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"SoftClassPathNetSerializerConfig",
		sizeof(FSoftClassPathNetSerializerConfig),
		alignof(FSoftClassPathNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FSoftObjectNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftObjectNetSerializerConfig_Statics::NewStructOps, TEXT("SoftObjectNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftObjectNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftObjectNetSerializerConfig), 3466039447U) },
		{ FSoftObjectPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftObjectPathNetSerializerConfig_Statics::NewStructOps, TEXT("SoftObjectPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftObjectPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftObjectPathNetSerializerConfig), 3649488281U) },
		{ FSoftClassPathNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSoftClassPathNetSerializerConfig_Statics::NewStructOps, TEXT("SoftClassPathNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SoftClassPathNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoftClassPathNetSerializerConfig), 1499527231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_3249064999(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_SoftObjectNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
