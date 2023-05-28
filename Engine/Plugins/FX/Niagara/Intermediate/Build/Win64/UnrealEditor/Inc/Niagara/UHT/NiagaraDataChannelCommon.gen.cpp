// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelCommon() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelReference();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference;
class UScriptStruct* FNiagaraDataChannelReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelReference, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelReference>()
{
	return FNiagaraDataChannelReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper struct for FNames referencing Niagara Data Channels allowing a type customization. */" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelCommon.h" },
		{ "ToolTip", "Wrapper struct for FNames referencing Niagara Data Channels allowing a type customization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataChannelReference, ChannelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewProp_ChannelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewProp_ChannelName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataChannelReference",
		sizeof(FNiagaraDataChannelReference),
		alignof(FNiagaraDataChannelReference),
		Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelReference()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelCommon_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDataChannelReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelReference_Statics::NewStructOps, TEXT("NiagaraDataChannelReference"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelReference), 2371448466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelCommon_h_1154910573(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
