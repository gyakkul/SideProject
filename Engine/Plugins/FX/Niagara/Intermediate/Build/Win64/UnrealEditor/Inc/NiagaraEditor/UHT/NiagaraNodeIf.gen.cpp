// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeIf.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeIf() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeIf();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeIf_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPinGuidsForPath();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PinGuidsForPath;
class UScriptStruct* FPinGuidsForPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PinGuidsForPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PinGuidsForPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinGuidsForPath, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("PinGuidsForPath"));
	}
	return Z_Registration_Info_UScriptStruct_PinGuidsForPath.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FPinGuidsForPath>()
{
	return FPinGuidsForPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPinGuidsForPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPinGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTruePinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTruePinGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFalsePinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputFalsePinGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinGuidsForPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_OutputPinGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_OutputPinGuid = { "OutputPinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinGuidsForPath, OutputPinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_OutputPinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_OutputPinGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputTruePinGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputTruePinGuid = { "InputTruePinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinGuidsForPath, InputTruePinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputTruePinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputTruePinGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputFalsePinGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputFalsePinGuid = { "InputFalsePinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinGuidsForPath, InputFalsePinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputFalsePinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputFalsePinGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_OutputPinGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputTruePinGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewProp_InputFalsePinGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"PinGuidsForPath",
		sizeof(FPinGuidsForPath),
		alignof(FPinGuidsForPath),
		Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinGuidsForPath()
	{
		if (!Z_Registration_Info_UScriptStruct_PinGuidsForPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PinGuidsForPath.InnerSingleton, Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PinGuidsForPath.InnerSingleton;
	}
	void UNiagaraNodeIf::StaticRegisterNativesUNiagaraNodeIf()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeIf);
	UClass* Z_Construct_UClass_UNiagaraNodeIf_NoRegister()
	{
		return UNiagaraNodeIf::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeIf_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputVars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputVars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputVars;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathAssociatedPinGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathAssociatedPinGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathAssociatedPinGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionPinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionPinGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeIf_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeIf_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeIf.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars_Inner = { "OutputVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars_MetaData[] = {
		{ "Comment", "/** Outputs of this branch. */" },
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
		{ "ToolTip", "Outputs of this branch." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars = { "OutputVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeIf, OutputVars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids_Inner = { "PathAssociatedPinGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPinGuidsForPath, METADATA_PARAMS(nullptr, 0) }; // 43100628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids = { "PathAssociatedPinGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeIf, PathAssociatedPinGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids_MetaData)) }; // 43100628
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_ConditionPinGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraNodeIf.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_ConditionPinGuid = { "ConditionPinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeIf, ConditionPinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_ConditionPinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_ConditionPinGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeIf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_OutputVars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_PathAssociatedPinGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeIf_Statics::NewProp_ConditionPinGuid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeIf_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeIf>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeIf_Statics::ClassParams = {
		&UNiagaraNodeIf::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeIf_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeIf_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeIf_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeIf_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeIf()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeIf.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeIf.OuterSingleton, Z_Construct_UClass_UNiagaraNodeIf_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeIf.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeIf>()
	{
		return UNiagaraNodeIf::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeIf);
	UNiagaraNodeIf::~UNiagaraNodeIf() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ScriptStructInfo[] = {
		{ FPinGuidsForPath::StaticStruct, Z_Construct_UScriptStruct_FPinGuidsForPath_Statics::NewStructOps, TEXT("PinGuidsForPath"), &Z_Registration_Info_UScriptStruct_PinGuidsForPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPinGuidsForPath), 43100628U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeIf, UNiagaraNodeIf::StaticClass, TEXT("UNiagaraNodeIf"), &Z_Registration_Info_UClass_UNiagaraNodeIf, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeIf), 3151078612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_106279346(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeIf_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
