// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/NetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBoolNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNopNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStructNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FBoolNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FBoolNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig;
class UScriptStruct* FBoolNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("BoolNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FBoolNetSerializerConfig>()
{
	return FBoolNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/NetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"BoolNetSerializerConfig",
		sizeof(FBoolNetSerializerConfig),
		alignof(FBoolNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStructNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FStructNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructNetSerializerConfig;
class UScriptStruct* FStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("StructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FStructNetSerializerConfig>()
{
	return FStructNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/NetSerializers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"StructNetSerializerConfig",
		sizeof(FStructNetSerializerConfig),
		alignof(FStructNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructNetSerializerConfig.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNopNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FNopNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NopNetSerializerConfig;
class UScriptStruct* FNopNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNopNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NopNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNopNetSerializerConfig>()
{
	return FNopNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The NopNetSerializer have all the serializer functions implemented\n * as no-ops. The main purpose of this serializer is to allow adding\n * a non-replicated member as part of a ReplicationStateDescriptor\n * without incurring a bandwidth cost. This allows systems, such as \n * prioritization and filtering, to access the source data given an\n * instance protocol and information regarding the member, for example\n * by looking for a particular RepTag.\n */" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/NetSerializers.h" },
		{ "ToolTip", "The NopNetSerializer have all the serializer functions implemented\nas no-ops. The main purpose of this serializer is to allow adding\na non-replicated member as part of a ReplicationStateDescriptor\nwithout incurring a bandwidth cost. This allows systems, such as\nprioritization and filtering, to access the source data given an\ninstance protocol and information regarding the member, for example\nby looking for a particular RepTag." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNopNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"NopNetSerializerConfig",
		sizeof(FNopNetSerializerConfig),
		alignof(FNopNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNopNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NopNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FBoolNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FBoolNetSerializerConfig_Statics::NewStructOps, TEXT("BoolNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_BoolNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolNetSerializerConfig), 1474953636U) },
		{ FStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FStructNetSerializerConfig_Statics::NewStructOps, TEXT("StructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_StructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructNetSerializerConfig), 3138681198U) },
		{ FNopNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FNopNetSerializerConfig_Statics::NewStructOps, TEXT("NopNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_NopNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNopNetSerializerConfig), 1769887943U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializers_h_3819277480(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_NetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
