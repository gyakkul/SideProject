// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEditorModule.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorModule() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitions_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FReservedParameter();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReservedParameter;
class UScriptStruct* FReservedParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReservedParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReservedParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReservedParameter, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ReservedParameter"));
	}
	return Z_Registration_Info_UScriptStruct_ReservedParameter.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FReservedParameter>()
{
	return FReservedParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReservedParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReservingDefinitionsAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReservingDefinitionsAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservedParameter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Wrapper struct for tracking parameters that are reserved by parameter definitions assets. */" },
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
		{ "ToolTip", "Wrapper struct for tracking parameters that are reserved by parameter definitions assets." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReservedParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReservedParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReservedParameter, Parameter), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_Parameter_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_ReservingDefinitionsAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_ReservingDefinitionsAsset = { "ReservingDefinitionsAsset", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReservedParameter, ReservingDefinitionsAsset), Z_Construct_UClass_UNiagaraParameterDefinitions_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_ReservingDefinitionsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_ReservingDefinitionsAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReservedParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReservedParameter_Statics::NewProp_ReservingDefinitionsAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReservedParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"ReservedParameter",
		sizeof(FReservedParameter),
		alignof(FReservedParameter),
		Z_Construct_UScriptStruct_FReservedParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservedParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReservedParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReservedParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReservedParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_ReservedParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReservedParameter.InnerSingleton, Z_Construct_UScriptStruct_FReservedParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReservedParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo;
class UScriptStruct* FNiagaraRendererCreationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraRendererCreationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraRendererCreationInfo>()
{
	return FNiagaraRendererCreationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererClassPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRendererCreationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererCreationInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererCreationInfo, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_RendererClassPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_RendererClassPath = { "RendererClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRendererCreationInfo, RendererClassPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_RendererClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_RendererClassPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewProp_RendererClassPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraRendererCreationInfo",
		sizeof(FNiagaraRendererCreationInfo),
		alignof(FNiagaraRendererCreationInfo),
		Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorModule_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorModule_h_Statics::ScriptStructInfo[] = {
		{ FReservedParameter::StaticStruct, Z_Construct_UScriptStruct_FReservedParameter_Statics::NewStructOps, TEXT("ReservedParameter"), &Z_Registration_Info_UScriptStruct_ReservedParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReservedParameter), 1791340441U) },
		{ FNiagaraRendererCreationInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRendererCreationInfo_Statics::NewStructOps, TEXT("NiagaraRendererCreationInfo"), &Z_Registration_Info_UScriptStruct_NiagaraRendererCreationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRendererCreationInfo), 3200143238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorModule_h_3658232404(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorModule_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEditorModule_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
