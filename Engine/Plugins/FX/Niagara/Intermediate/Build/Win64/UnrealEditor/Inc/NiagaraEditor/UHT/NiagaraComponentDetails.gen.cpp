// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/NiagaraComponentDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentDetails() {}
// Cross Module References
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper;
class UScriptStruct* FNiagaraEnumToByteHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraEnumToByteHelper"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraEnumToByteHelper>()
{
	return FNiagaraEnumToByteHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEnumToByteHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/Customizations/NiagaraComponentDetails.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEnumToByteHelper, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraEnumToByteHelper",
		sizeof(FNiagaraEnumToByteHelper),
		alignof(FNiagaraEnumToByteHelper),
		Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraEnumToByteHelper::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEnumToByteHelper_Statics::NewStructOps, TEXT("NiagaraEnumToByteHelper"), &Z_Registration_Info_UScriptStruct_NiagaraEnumToByteHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEnumToByteHelper), 3979952210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_930707471(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_Customizations_NiagaraComponentDetails_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
