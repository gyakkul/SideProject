// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternalMinimalReplicationTagCountMapNetSerializer() {}
// Cross Module References
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer;
class UScriptStruct* FMinimalReplicationTagCountMapForNetSerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer, (UObject*)Z_Construct_UPackage__Script_GameplayAbilities(), TEXT("MinimalReplicationTagCountMapForNetSerializer"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.OuterSingleton;
}
template<> GAMEPLAYABILITIES_API UScriptStruct* StaticStruct<FMinimalReplicationTagCountMapForNetSerializer>()
{
	return FMinimalReplicationTagCountMapForNetSerializer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalReplicationTagCountMapForNetSerializer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_MetaData[] = {
		{ "ModuleRelativePath", "Private/Serialization/InternalMinimalReplicationTagCountMapNetSerializer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMinimalReplicationTagCountMapForNetSerializer, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
		nullptr,
		&NewStructOps,
		"MinimalReplicationTagCountMapForNetSerializer",
		sizeof(FMinimalReplicationTagCountMapForNetSerializer),
		alignof(FMinimalReplicationTagCountMapForNetSerializer),
		Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer()
	{
		if (!Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics::ScriptStructInfo[] = {
		{ FMinimalReplicationTagCountMapForNetSerializer::StaticStruct, Z_Construct_UScriptStruct_FMinimalReplicationTagCountMapForNetSerializer_Statics::NewStructOps, TEXT("MinimalReplicationTagCountMapForNetSerializer"), &Z_Registration_Info_UScriptStruct_MinimalReplicationTagCountMapForNetSerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalReplicationTagCountMapForNetSerializer), 2421727570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_628829202(TEXT("/Script/GameplayAbilities"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Private_Serialization_InternalMinimalReplicationTagCountMapNetSerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
