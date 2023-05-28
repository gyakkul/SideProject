// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraTypeCustomizations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTypeCustomizations() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraStackAssetAction_VarBind>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraStackAssetAction_VarBind cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind;
class UScriptStruct* FNiagaraStackAssetAction_VarBind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraStackAssetAction_VarBind"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraStackAssetAction_VarBind>()
{
	return FNiagaraStackAssetAction_VarBind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraTypeCustomizations.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStackAssetAction_VarBind>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraStackAssetAction_VarBind",
		sizeof(FNiagaraStackAssetAction_VarBind),
		alignof(FNiagaraStackAssetAction_VarBind),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraTypeCustomizations_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraTypeCustomizations_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraStackAssetAction_VarBind::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStackAssetAction_VarBind_Statics::NewStructOps, TEXT("NiagaraStackAssetAction_VarBind"), &Z_Registration_Info_UScriptStruct_NiagaraStackAssetAction_VarBind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStackAssetAction_VarBind), 1333812979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraTypeCustomizations_h_3286473562(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraTypeCustomizations_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraTypeCustomizations_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
