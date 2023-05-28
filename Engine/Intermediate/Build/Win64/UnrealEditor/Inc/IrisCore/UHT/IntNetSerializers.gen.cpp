// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/IntNetSerializers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIntNetSerializers() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIntNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FIntNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FIntNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IntNetSerializerConfig;
class UScriptStruct* FIntNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIntNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("IntNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FIntNetSerializerConfig>()
{
	return FIntNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitCount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BitCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Integer serializers\n" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntNetSerializers.h" },
		{ "ToolTip", "Integer serializers" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIntNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/Serialization/IntNetSerializers.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount = { "BitCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIntNetSerializerConfig, BitCount), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewProp_BitCount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"IntNetSerializerConfig",
		sizeof(FIntNetSerializerConfig),
		alignof(FIntNetSerializerConfig),
		Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIntNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IntNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics::ScriptStructInfo[] = {
		{ FIntNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FIntNetSerializerConfig_Statics::NewStructOps, TEXT("IntNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_IntNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIntNetSerializerConfig), 3240669122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_1053259326(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IntNetSerializers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
