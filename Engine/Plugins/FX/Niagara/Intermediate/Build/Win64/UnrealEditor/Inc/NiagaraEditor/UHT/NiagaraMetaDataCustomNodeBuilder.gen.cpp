// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraMetaDataCustomNodeBuilder.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMetaDataCustomNodeBuilder() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer;
class UScriptStruct* FNiagaraVariableMetaDataContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraVariableMetaDataContainer"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraVariableMetaDataContainer>()
{
	return FNiagaraVariableMetaDataContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraMetaDataCustomNodeBuilder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableMetaDataContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "MetaData" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraMetaDataCustomNodeBuilder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaDataContainer, MetaData), Z_Construct_UScriptStruct_FNiagaraVariableMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewProp_MetaData_MetaData)) }; // 2573469744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewProp_MetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraVariableMetaDataContainer",
		sizeof(FNiagaraVariableMetaDataContainer),
		alignof(FNiagaraVariableMetaDataContainer),
		Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraMetaDataCustomNodeBuilder_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraMetaDataCustomNodeBuilder_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraVariableMetaDataContainer::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableMetaDataContainer_Statics::NewStructOps, TEXT("NiagaraVariableMetaDataContainer"), &Z_Registration_Info_UScriptStruct_NiagaraVariableMetaDataContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableMetaDataContainer), 1396032548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraMetaDataCustomNodeBuilder_h_3714471929(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraMetaDataCustomNodeBuilder_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraMetaDataCustomNodeBuilder_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
