// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraParameterDefinitionsSubscriber.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsSubscriber() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription;
class UScriptStruct* FParameterDefinitionsSubscription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ParameterDefinitionsSubscription"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FParameterDefinitionsSubscription>()
{
	return FParameterDefinitionsSubscription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Definitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionsId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionsId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChangeIdHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedChangeIdHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterDefinitionsSubscription>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDefinitionsSubscription, Definitions), Z_Construct_UClass_UNiagaraParameterDefinitionsBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId = { "DefinitionsId", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDefinitionsSubscription, DefinitionsId_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraParameterDefinitionsSubscriber.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash = { "CachedChangeIdHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDefinitionsSubscription, CachedChangeIdHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_Definitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_DefinitionsId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewProp_CachedChangeIdHash,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"ParameterDefinitionsSubscription",
		sizeof(FParameterDefinitionsSubscription),
		alignof(FParameterDefinitionsSubscription),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics::ScriptStructInfo[] = {
		{ FParameterDefinitionsSubscription::StaticStruct, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription_Statics::NewStructOps, TEXT("ParameterDefinitionsSubscription"), &Z_Registration_Info_UScriptStruct_ParameterDefinitionsSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterDefinitionsSubscription), 1729836513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_2616118429(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraParameterDefinitionsSubscriber_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
