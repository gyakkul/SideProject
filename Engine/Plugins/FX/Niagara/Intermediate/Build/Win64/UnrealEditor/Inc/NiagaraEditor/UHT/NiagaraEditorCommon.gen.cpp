// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEditorCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorCommon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey;
class UScriptStruct* FFunctionInputSummaryViewKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("FunctionInputSummaryViewKey"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FFunctionInputSummaryViewKey>()
{
	return FFunctionInputSummaryViewKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionInputSummaryViewKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_FunctionGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_FunctionGuid = { "FunctionGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewKey, FunctionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_FunctionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_FunctionGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputGuid = { "InputGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewKey, InputGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewKey, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_FunctionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewProp_InputName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"FunctionInputSummaryViewKey",
		sizeof(FFunctionInputSummaryViewKey),
		alignof(FFunctionInputSummaryViewKey),
		Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey()
	{
		if (!Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.InnerSingleton, Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata;
class UScriptStruct* FFunctionInputSummaryViewMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("FunctionInputSummaryViewMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FFunctionInputSummaryViewMetadata>()
{
	return FFunctionInputSummaryViewMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFunctionInputSummaryViewMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FFunctionInputSummaryViewMetadata*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFunctionInputSummaryViewMetadata), &Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewMetadata, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewMetadata, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_SortIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_SortIndex = { "SortIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFunctionInputSummaryViewMetadata, SortIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_SortIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_SortIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewProp_SortIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"FunctionInputSummaryViewMetadata",
		sizeof(FFunctionInputSummaryViewMetadata),
		alignof(FFunctionInputSummaryViewMetadata),
		Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.InnerSingleton, Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorCommon_h_Statics::ScriptStructInfo[] = {
		{ FFunctionInputSummaryViewKey::StaticStruct, Z_Construct_UScriptStruct_FFunctionInputSummaryViewKey_Statics::NewStructOps, TEXT("FunctionInputSummaryViewKey"), &Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionInputSummaryViewKey), 2854944151U) },
		{ FFunctionInputSummaryViewMetadata::StaticStruct, Z_Construct_UScriptStruct_FFunctionInputSummaryViewMetadata_Statics::NewStructOps, TEXT("FunctionInputSummaryViewMetadata"), &Z_Registration_Info_UScriptStruct_FunctionInputSummaryViewMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFunctionInputSummaryViewMetadata), 345758445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorCommon_h_2041606236(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
