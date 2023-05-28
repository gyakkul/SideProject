// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/PackedIntNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackedIntNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FPackedInt32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedInt32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig;
class UScriptStruct* FPackedInt32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedInt32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedInt32NetSerializerConfig>()
{
	return FPackedInt32NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedInt32NetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"PackedInt32NetSerializerConfig",
		sizeof(FPackedInt32NetSerializerConfig),
		alignof(FPackedInt32NetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPackedUint32NetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPackedUint32NetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig;
class UScriptStruct* FPackedUint32NetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("PackedUint32NetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FPackedUint32NetSerializerConfig>()
{
	return FPackedUint32NetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/PackedIntNetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPackedUint32NetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"PackedUint32NetSerializerConfig",
		sizeof(FPackedUint32NetSerializerConfig),
		alignof(FPackedUint32NetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FPackedInt32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedInt32NetSerializerConfig_Statics::NewStructOps, TEXT("PackedInt32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedInt32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedInt32NetSerializerConfig), 1010493554U) },
		{ FPackedUint32NetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPackedUint32NetSerializerConfig_Statics::NewStructOps, TEXT("PackedUint32NetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PackedUint32NetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPackedUint32NetSerializerConfig), 3945555196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_182581502(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_PackedIntNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
