// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/GameplayTagNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagNetSerializer() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayTagNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayTagNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig;
class UScriptStruct* FGameplayTagNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagNetSerializerConfig>()
{
	return FGameplayTagNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"GameplayTagNetSerializerConfig",
		sizeof(FGameplayTagNetSerializerConfig),
		alignof(FGameplayTagNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayTagNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayTagNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagNetSerializerConfig), 1245721918U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_4020956292(TEXT("/Script/GameplayTags"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
