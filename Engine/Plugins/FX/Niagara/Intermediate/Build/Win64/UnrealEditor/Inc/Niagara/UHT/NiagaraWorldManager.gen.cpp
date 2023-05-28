// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraWorldManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraWorldManager() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FNiagaraWorldManagerTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FNiagaraWorldManagerTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction;
class UScriptStruct* FNiagaraWorldManagerTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWorldManagerTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWorldManagerTickFunction>()
{
	return FNiagaraWorldManagerTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraWorldManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWorldManagerTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"NiagaraWorldManagerTickFunction",
		sizeof(FNiagaraWorldManagerTickFunction),
		alignof(FNiagaraWorldManagerTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraWorldManagerTickFunction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraWorldManagerTickFunction_Statics::NewStructOps, TEXT("NiagaraWorldManagerTickFunction"), &Z_Registration_Info_UScriptStruct_NiagaraWorldManagerTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraWorldManagerTickFunction), 227743332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h_500566075(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraWorldManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
