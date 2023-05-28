// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Serialization/GameplayEffectContextHandleNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectContextHandleNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayEffectContextHandleNetSerializerConfig>() == std::is_polymorphic<FPolymorphicStructNetSerializerConfig>(), "USTRUCT FGameplayEffectContextHandleNetSerializerConfig cannot be polymorphic unless super FPolymorphicStructNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig;
class UScriptStruct* FGameplayEffectContextHandleNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("GameplayEffectContextHandleNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FGameplayEffectContextHandleNetSerializerConfig>()
{
	return FGameplayEffectContextHandleNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Serialization/GameplayEffectContextHandleNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectContextHandleNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		Z_Construct_UScriptStruct_FPolymorphicStructNetSerializerConfig,
		&NewStructOps,
		"GameplayEffectContextHandleNetSerializerConfig",
		sizeof(FGameplayEffectContextHandleNetSerializerConfig),
		alignof(FGameplayEffectContextHandleNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextHandleNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextHandleNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectContextHandleNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectContextHandleNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayEffectContextHandleNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayEffectContextHandleNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectContextHandleNetSerializerConfig), 219949908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextHandleNetSerializer_h_2025763629(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextHandleNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Serialization_GameplayEffectContextHandleNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
