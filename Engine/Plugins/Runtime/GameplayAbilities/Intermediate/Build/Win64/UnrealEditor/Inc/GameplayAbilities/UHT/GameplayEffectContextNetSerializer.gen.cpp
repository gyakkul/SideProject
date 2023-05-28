// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/GameplayEffectContextNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectContextNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayEffectContextNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayEffectContextNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig;
class UScriptStruct* FGameplayEffectContextNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContextNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContextNetSerializerConfig>()
{
	return FGameplayEffectContextNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/GameplayEffectContextNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContextNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"GameplayEffectContextNetSerializerConfig",
		sizeof(FGameplayEffectContextNetSerializerConfig),
		alignof(FGameplayEffectContextNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectContextNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContextNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayEffectContextNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayEffectContextNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContextNetSerializerConfig), 3508872963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextNetSerializer_h_1176880549(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
