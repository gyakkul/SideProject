// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraScriptHighlight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptHighlight() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptHighlight();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight;
class UScriptStruct* FNiagaraScriptHighlight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptHighlight, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptHighlight"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptHighlight>()
{
	return FNiagaraScriptHighlight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScriptHighlight.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptHighlight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Classes/NiagaraScriptHighlight.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptHighlight, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Highlight" },
		{ "ModuleRelativePath", "Classes/NiagaraScriptHighlight.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptHighlight, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewProp_DisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptHighlight",
		sizeof(FNiagaraScriptHighlight),
		alignof(FNiagaraScriptHighlight),
		Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptHighlight()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraScriptHighlight::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptHighlight_Statics::NewStructOps, TEXT("NiagaraScriptHighlight"), &Z_Registration_Info_UScriptStruct_NiagaraScriptHighlight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptHighlight), 122317876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h_2699563380(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptHighlight_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
