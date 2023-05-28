// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraBakerSettingsDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerSettingsDetails() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraBakerTextureSourceAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraBakerTextureSourceAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction;
class UScriptStruct* FNiagaraBakerTextureSourceAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraBakerTextureSourceAction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSourceAction>()
{
	return FNiagaraBakerTextureSourceAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraBakerSettingsDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSourceAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraBakerTextureSourceAction",
		sizeof(FNiagaraBakerTextureSourceAction),
		alignof(FNiagaraBakerTextureSourceAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraBakerSettingsDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraBakerSettingsDetails_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraBakerTextureSourceAction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSourceAction_Statics::NewStructOps, TEXT("NiagaraBakerTextureSourceAction"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSourceAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSourceAction), 3071165074U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraBakerSettingsDetails_h_1187404105(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraBakerSettingsDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraBakerSettingsDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
