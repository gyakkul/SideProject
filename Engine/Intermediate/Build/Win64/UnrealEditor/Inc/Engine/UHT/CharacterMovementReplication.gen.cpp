// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterMovementReplication() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits;
class UScriptStruct* FCharacterNetworkSerializationPackedBits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterNetworkSerializationPackedBits"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterNetworkSerializationPackedBits>()
{
	return FCharacterNetworkSerializationPackedBits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Intermediate data stream used for network serialization of Character RPC data.\n * This is basically an array of bits that is packed/unpacked via NetSerialize into custom data structs on the sending and receiving ends.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Intermediate data stream used for network serialization of Character RPC data.\nThis is basically an array of bits that is packed/unpacked via NetSerialize into custom data structs on the sending and receiving ends." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterNetworkSerializationPackedBits>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CharacterNetworkSerializationPackedBits",
		sizeof(FCharacterNetworkSerializationPackedBits),
		alignof(FCharacterNetworkSerializationPackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.InnerSingleton, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCharacterServerMovePackedBits>() == std::is_polymorphic<FCharacterNetworkSerializationPackedBits>(), "USTRUCT FCharacterServerMovePackedBits cannot be polymorphic unless super FCharacterNetworkSerializationPackedBits is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits;
class UScriptStruct* FCharacterServerMovePackedBits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterServerMovePackedBits"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterServerMovePackedBits>()
{
	return FCharacterServerMovePackedBits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used internally to handle serialization of FCharacterNetworkMoveDataContainer over the network.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Structure used internally to handle serialization of FCharacterNetworkMoveDataContainer over the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterServerMovePackedBits>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits,
		&NewStructOps,
		"CharacterServerMovePackedBits",
		sizeof(FCharacterServerMovePackedBits),
		alignof(FCharacterServerMovePackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterServerMovePackedBits()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.InnerSingleton, Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCharacterMoveResponsePackedBits>() == std::is_polymorphic<FCharacterNetworkSerializationPackedBits>(), "USTRUCT FCharacterMoveResponsePackedBits cannot be polymorphic unless super FCharacterNetworkSerializationPackedBits is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits;
class UScriptStruct* FCharacterMoveResponsePackedBits::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CharacterMoveResponsePackedBits"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCharacterMoveResponsePackedBits>()
{
	return FCharacterMoveResponsePackedBits::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure used internally to handle serialization of FCharacterMoveResponseDataContainer over the network.\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/CharacterMovementReplication.h" },
		{ "ToolTip", "Structure used internally to handle serialization of FCharacterMoveResponseDataContainer over the network." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterMoveResponsePackedBits>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits,
		&NewStructOps,
		"CharacterMoveResponsePackedBits",
		sizeof(FCharacterMoveResponsePackedBits),
		alignof(FCharacterMoveResponsePackedBits),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.InnerSingleton, Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementReplication_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementReplication_h_Statics::ScriptStructInfo[] = {
		{ FCharacterNetworkSerializationPackedBits::StaticStruct, Z_Construct_UScriptStruct_FCharacterNetworkSerializationPackedBits_Statics::NewStructOps, TEXT("CharacterNetworkSerializationPackedBits"), &Z_Registration_Info_UScriptStruct_CharacterNetworkSerializationPackedBits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterNetworkSerializationPackedBits), 3509400289U) },
		{ FCharacterServerMovePackedBits::StaticStruct, Z_Construct_UScriptStruct_FCharacterServerMovePackedBits_Statics::NewStructOps, TEXT("CharacterServerMovePackedBits"), &Z_Registration_Info_UScriptStruct_CharacterServerMovePackedBits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterServerMovePackedBits), 1667373874U) },
		{ FCharacterMoveResponsePackedBits::StaticStruct, Z_Construct_UScriptStruct_FCharacterMoveResponsePackedBits_Statics::NewStructOps, TEXT("CharacterMoveResponsePackedBits"), &Z_Registration_Info_UScriptStruct_CharacterMoveResponsePackedBits, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterMoveResponsePackedBits), 3734216073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementReplication_h_3342027566(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementReplication_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_CharacterMovementReplication_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
