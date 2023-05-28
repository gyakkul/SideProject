// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Customizations/NiagaraEventScriptPropertiesCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEventScriptPropertiesCustomization() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraStackAssetAction_EventSource>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraStackAssetAction_EventSource cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource;
class UScriptStruct* FNiagaraStackAssetAction_EventSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraStackAssetAction_EventSource"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraStackAssetAction_EventSource>()
{
	return FNiagaraStackAssetAction_EventSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Customizations/NiagaraEventScriptPropertiesCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStackAssetAction_EventSource>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraStackAssetAction_EventSource",
		sizeof(FNiagaraStackAssetAction_EventSource),
		alignof(FNiagaraStackAssetAction_EventSource),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Customizations_NiagaraEventScriptPropertiesCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Customizations_NiagaraEventScriptPropertiesCustomization_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraStackAssetAction_EventSource::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStackAssetAction_EventSource_Statics::NewStructOps, TEXT("NiagaraStackAssetAction_EventSource"), &Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_EventSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStackAssetAction_EventSource), 4098288892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Customizations_NiagaraEventScriptPropertiesCustomization_h_3537653835(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Customizations_NiagaraEventScriptPropertiesCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_Customizations_NiagaraEventScriptPropertiesCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
