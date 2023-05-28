// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraParameterBindingCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterBindingCustomization() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingAction();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraParameterBindingAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraParameterBindingAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction;
class UScriptStruct* FNiagaraParameterBindingAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterBindingAction, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraParameterBindingAction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraParameterBindingAction>()
{
	return FNiagaraParameterBindingAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraParameterBindingCustomization.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterBindingAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraParameterBindingAction",
		sizeof(FNiagaraParameterBindingAction),
		alignof(FNiagaraParameterBindingAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBindingAction()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraParameterBindingCustomization_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraParameterBindingCustomization_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraParameterBindingAction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterBindingAction_Statics::NewStructOps, TEXT("NiagaraParameterBindingAction"), &Z_Registration_Info_UScriptStruct_NiagaraParameterBindingAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterBindingAction), 3435532246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraParameterBindingCustomization_h_2914688494(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraParameterBindingCustomization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraParameterBindingCustomization_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
