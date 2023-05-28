// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/StringNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNameNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStringNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FNameNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNameNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NameNetSerializerConfig;
class UScriptStruct* FNameNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNameNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NameNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNameNetSerializerConfig>()
{
	return FNameNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/StringNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNameNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"NameNetSerializerConfig",
		sizeof(FNameNetSerializerConfig),
		alignof(FNameNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNameNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NameNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStringNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FStringNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StringNetSerializerConfig;
class UScriptStruct* FStringNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStringNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("StringNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FStringNetSerializerConfig>()
{
	return FStringNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/StringNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStringNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"StringNetSerializerConfig",
		sizeof(FStringNetSerializerConfig),
		alignof(FStringNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStringNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StringNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FNameNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNameNetSerializerConfig_Statics::NewStructOps, TEXT("NameNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NameNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNameNetSerializerConfig), 1034135029U) },
		{ FStringNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FStringNetSerializerConfig_Statics::NewStructOps, TEXT("StringNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_StringNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStringNetSerializerConfig), 2158460309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_2658116133(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_StringNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
