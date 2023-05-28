// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/MinimalReplicationTagCountNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinimalReplicationTagCountNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

static_assert(std::is_polymorphic<FMinimalReplicationTagCountMapNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FMinimalReplicationTagCountMapNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig;
class UScriptStruct* FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMapNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMapNetSerializerConfig>()
{
	return FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/MinimalReplicationTagCountNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMapNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"MinimalReplicationTagCountMapNetSerializerConfig",
		sizeof(FMinimalReplicationTagCountMapNetSerializerConfig),
		alignof(FMinimalReplicationTagCountMapNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FMinimalReplicationTagCountMapNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapNetSerializerConfig_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMapNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMapNetSerializerConfig), 1570717877U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_1503547984(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_MinimalReplicationTagCountNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
