// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Serialization/PredictionKeyNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredictionKeyNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

static_assert(std::is_polymorphic<FPredictionKeyNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FPredictionKeyNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig;
class UScriptStruct* FPredictionKeyNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("PredictionKeyNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FPredictionKeyNetSerializerConfig>()
{
	return FPredictionKeyNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Serialization/PredictionKeyNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredictionKeyNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"PredictionKeyNetSerializerConfig",
		sizeof(FPredictionKeyNetSerializerConfig),
		alignof(FPredictionKeyNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FPredictionKeyNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FPredictionKeyNetSerializerConfig_Statics::NewStructOps, TEXT("PredictionKeyNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_PredictionKeyNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPredictionKeyNetSerializerConfig), 2112574260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_1729876186(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_PredictionKeyNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
