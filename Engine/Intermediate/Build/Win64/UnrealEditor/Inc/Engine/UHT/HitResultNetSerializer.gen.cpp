// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Engine/HitResultNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitResultNetSerializer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResultNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FHitResultNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FHitResultNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig;
class UScriptStruct* FHitResultNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitResultNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HitResultNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHitResultNetSerializerConfig>()
{
	return FHitResultNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Engine/HitResultNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitResultNetSerializerConfig>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"HitResultNetSerializerConfig",
		sizeof(FHitResultNetSerializerConfig),
		alignof(FHitResultNetSerializerConfig),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitResultNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FHitResultNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FHitResultNetSerializerConfig_Statics::NewStructOps, TEXT("HitResultNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_HitResultNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHitResultNetSerializerConfig), 4081403445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_3290971742(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Engine_HitResultNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
