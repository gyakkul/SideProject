// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/FloatNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FFloatNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FFloatNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig;
class UScriptStruct* FFloatNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("FloatNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FFloatNetSerializerConfig>()
{
	return FFloatNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/FloatNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"FloatNetSerializerConfig",
		sizeof(FFloatNetSerializerConfig),
		alignof(FFloatNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDoubleNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FDoubleNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig;
class UScriptStruct* FDoubleNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("DoubleNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FDoubleNetSerializerConfig>()
{
	return FDoubleNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/FloatNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"DoubleNetSerializerConfig",
		sizeof(FDoubleNetSerializerConfig),
		alignof(FDoubleNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDoubleNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FFloatNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FFloatNetSerializerConfig_Statics::NewStructOps, TEXT("FloatNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_FloatNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatNetSerializerConfig), 3342988396U) },
		{ FDoubleNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FDoubleNetSerializerConfig_Statics::NewStructOps, TEXT("DoubleNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_DoubleNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleNetSerializerConfig), 3887191346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_1147917336(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_FloatNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
