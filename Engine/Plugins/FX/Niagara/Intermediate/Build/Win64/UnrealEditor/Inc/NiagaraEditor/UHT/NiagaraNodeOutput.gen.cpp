// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeOutput.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeOutput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOutput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOutput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeOutput::StaticRegisterNativesUNiagaraNodeOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeOutput);
	UClass* Z_Construct_UClass_UNiagaraNodeOutput_NoRegister()
	{
		return UNiagaraNodeOutput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptTypeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptTypeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptTypeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ScriptTypeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeOutput.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOutput.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOutput, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs_MetaData)) }; // 2575088255
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType = { "ScriptType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOutput, ScriptType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType_MetaData)) }; // 2772325717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeId = { "ScriptTypeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOutput, ScriptTypeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOutput.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeIndex = { "ScriptTypeIndex", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOutput, ScriptTypeIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOutput_Statics::NewProp_ScriptTypeIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeOutput_Statics::ClassParams = {
		&UNiagaraNodeOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeOutput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeOutput.OuterSingleton, Z_Construct_UClass_UNiagaraNodeOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeOutput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeOutput>()
	{
		return UNiagaraNodeOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeOutput);
	UNiagaraNodeOutput::~UNiagaraNodeOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeOutput, UNiagaraNodeOutput::StaticClass, TEXT("UNiagaraNodeOutput"), &Z_Registration_Info_UClass_UNiagaraNodeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeOutput), 1854963325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_1402368340(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
