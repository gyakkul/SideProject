// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterNetworkSerializationPackedBitsNetSerializer() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>() == std::is_polymorphic<FNetSerializerConfig>(), "USTRUCT FCharacterNetworkSerializationPackedBitsNetSerializerConfig cannot be polymorphic unless super FNetSerializerConfig is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig;
class UScriptStruct* FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterNetworkSerializationPackedBitsNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>()
{
	return FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedDataBits_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAllowedDataBits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAllowedObjectReferences_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxAllowedObjectReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterNetworkSerializationPackedBitsNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits_MetaData[] = {
		{ "Comment", "// Value used to sanity check incoming data so that we do not over-allocate dynamic memory\n" },
		{ "ModuleRelativePath", "Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h" },
		{ "ToolTip", "Value used to sanity check incoming data so that we do not over-allocate dynamic memory" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits = { "MaxAllowedDataBits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharacterNetworkSerializationPackedBitsNetSerializerConfig, MaxAllowedDataBits), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences_MetaData[] = {
		{ "Comment", "// Value used to sanity check incoming data so that we do not over-allocate dynamic memory\n" },
		{ "ModuleRelativePath", "Public/GameFramework/CharacterNetworkSerializationPackedBitsNetSerializer.h" },
		{ "ToolTip", "Value used to sanity check incoming data so that we do not over-allocate dynamic memory" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences = { "MaxAllowedObjectReferences", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCharacterNetworkSerializationPackedBitsNetSerializerConfig, MaxAllowedObjectReferences), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedDataBits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewProp_MaxAllowedObjectReferences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FNetSerializerConfig,
		&NewStructOps,
		"CharacterNetworkSerializationPackedBitsNetSerializerConfig",
		sizeof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig),
		alignof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig),
		Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FCharacterNetworkSerializationPackedBitsNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBitsNetSerializerConfig_Statics::NewStructOps, TEXT("CharacterNetworkSerializationPackedBitsNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBitsNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterNetworkSerializationPackedBitsNetSerializerConfig), 3379549151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_1933776466(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_GameFramework_CharacterNetworkSerializationPackedBitsNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
