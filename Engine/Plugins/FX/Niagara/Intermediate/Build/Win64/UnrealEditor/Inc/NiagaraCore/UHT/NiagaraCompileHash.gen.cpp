// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraCompileHash.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCompileHash() {}
// Cross Module References
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileHash;
class UScriptStruct* FNiagaraCompileHash::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileHash, (UObject*)Z_Construct_UPackage__Script_NiagaraCore(), TEXT("NiagaraCompileHash"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileHash.OuterSingleton;
}
template<> NIAGARACORE_API UScriptStruct* StaticStruct<FNiagaraCompileHash>()
{
	return FNiagaraCompileHash::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataHash_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHash_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileHash>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner = { "DataHash", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCompileHash.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash = { "DataHash", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileHash, DataHash), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewProp_DataHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
		nullptr,
		&NewStructOps,
		"NiagaraCompileHash",
		sizeof(FNiagaraCompileHash),
		alignof(FNiagaraCompileHash),
		Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCompileHash.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraCompileHash::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileHash_Statics::NewStructOps, TEXT("NiagaraCompileHash"), &Z_Registration_Info_UScriptStruct_NiagaraCompileHash, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileHash), 118874400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_3498752156(TEXT("/Script/NiagaraCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraCompileHash_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
