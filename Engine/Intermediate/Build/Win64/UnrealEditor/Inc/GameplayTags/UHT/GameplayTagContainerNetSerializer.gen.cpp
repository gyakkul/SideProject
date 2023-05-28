// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/GameplayTagContainerNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTagContainerNetSerializer() {}
// Cross Module References
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References

static_assert(std::is_polymorphic<FGameplayTagContainerNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FGameplayTagContainerNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig;
class UScriptStruct* FGameplayTagContainerNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_GameplayTags(), TEXT("GameplayTagContainerNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.OuterSingleton;
}
template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<FGameplayTagContainerNetSerializerConfig>()
{
	return FGameplayTagContainerNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayTagContainerNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayTagContainerNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"GameplayTagContainerNetSerializerConfig",
		sizeof(FGameplayTagContainerNetSerializerConfig),
		alignof(FGameplayTagContainerNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FGameplayTagContainerNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerConfig_Statics::NewStructOps, TEXT("GameplayTagContainerNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_GameplayTagContainerNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayTagContainerNetSerializerConfig), 243584836U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_3518631780(TEXT("/Script/GameplayTags"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Public_GameplayTagContainerNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
