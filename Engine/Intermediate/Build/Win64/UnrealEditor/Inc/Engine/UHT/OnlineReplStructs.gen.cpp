// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineReplStructs() {}
// Cross Module References
	COREONLINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdWrapper();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FUniqueNetIdRepl>() == std::is_polymorphic<FUniqueNetIdWrapper>(), "USTRUCT FUniqueNetIdRepl cannot be polymorphic unless super FUniqueNetIdWrapper is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniqueNetIdRepl;
class UScriptStruct* FUniqueNetIdRepl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdRepl, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UniqueNetIdRepl"));
	}
	return Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUniqueNetIdRepl>()
{
	return FUniqueNetIdRepl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReplicationBytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationBytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicationBytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for opaque type FUniqueNetId\n *\n * Makes sure that the opaque aspects of FUniqueNetId are properly handled/serialized \n * over network RPC and actor replication\n */" },
		{ "DisplayName", "Unique Net Id" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Wrapper for opaque type FUniqueNetId\n\nMakes sure that the opaque aspects of FUniqueNetId are properly handled/serialized\nover network RPC and actor replication" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniqueNetIdRepl>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData[] = {
		{ "Comment", "/** Network serialized data cache */" },
		{ "ModuleRelativePath", "Classes/GameFramework/OnlineReplStructs.h" },
		{ "ToolTip", "Network serialized data cache" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes = { "ReplicationBytes", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniqueNetIdRepl, ReplicationBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewProp_ReplicationBytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FUniqueNetIdWrapper,
		&NewStructOps,
		"UniqueNetIdRepl",
		sizeof(FUniqueNetIdRepl),
		alignof(FUniqueNetIdRepl),
		Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl()
	{
		if (!Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton, Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniqueNetIdRepl.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics::ScriptStructInfo[] = {
		{ FUniqueNetIdRepl::StaticStruct, Z_Construct_UScriptStruct_FUniqueNetIdRepl_Statics::NewStructOps, TEXT("UniqueNetIdRepl"), &Z_Registration_Info_UScriptStruct_UniqueNetIdRepl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniqueNetIdRepl), 2142661840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_153782762(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_OnlineReplStructs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
