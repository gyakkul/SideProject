// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCommon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBaseTypes();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBindingSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBaseTypes;
	static UEnum* ENiagaraBaseTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBaseTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraBaseTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBaseTypes, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBaseTypes"));
		}
		return Z_Registration_Info_UEnum_ENiagaraBaseTypes.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBaseTypes>()
	{
		return ENiagaraBaseTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enumerators[] = {
		{ "ENiagaraBaseTypes::Half", (int64)ENiagaraBaseTypes::Half },
		{ "ENiagaraBaseTypes::Float", (int64)ENiagaraBaseTypes::Float },
		{ "ENiagaraBaseTypes::Int32", (int64)ENiagaraBaseTypes::Int32 },
		{ "ENiagaraBaseTypes::Bool", (int64)ENiagaraBaseTypes::Bool },
		{ "ENiagaraBaseTypes::Max", (int64)ENiagaraBaseTypes::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "ENiagaraBaseTypes::Bool" },
		{ "Float.Name", "ENiagaraBaseTypes::Float" },
		{ "Half.Name", "ENiagaraBaseTypes::Half" },
		{ "Int32.Name", "ENiagaraBaseTypes::Int32" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ENiagaraBaseTypes::Max" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraBaseTypes",
		"ENiagaraBaseTypes",
		Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBaseTypes()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBaseTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBaseTypes.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBaseTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraBaseTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat;
	static UEnum* ENiagaraGpuBufferFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraGpuBufferFormat"));
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraGpuBufferFormat>()
	{
		return ENiagaraGpuBufferFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enumerators[] = {
		{ "ENiagaraGpuBufferFormat::Float", (int64)ENiagaraGpuBufferFormat::Float },
		{ "ENiagaraGpuBufferFormat::HalfFloat", (int64)ENiagaraGpuBufferFormat::HalfFloat },
		{ "ENiagaraGpuBufferFormat::UnsignedNormalizedByte", (int64)ENiagaraGpuBufferFormat::UnsignedNormalizedByte },
		{ "ENiagaraGpuBufferFormat::Max", (int64)ENiagaraGpuBufferFormat::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Niagara supported buffer formats on the GPU. */" },
		{ "Float.Comment", "/** 32-bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "Float.Name", "ENiagaraGpuBufferFormat::Float" },
		{ "Float.ToolTip", "32-bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "HalfFloat.Comment", "/** 16-bit per channel floating point, range [-65504, 65504] */" },
		{ "HalfFloat.Name", "ENiagaraGpuBufferFormat::HalfFloat" },
		{ "HalfFloat.ToolTip", "16-bit per channel floating point, range [-65504, 65504]" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ENiagaraGpuBufferFormat::Max" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Niagara supported buffer formats on the GPU." },
		{ "UnsignedNormalizedByte.Comment", "/** 8-bit per channel fixed point, range [0, 1]. */" },
		{ "UnsignedNormalizedByte.Name", "ENiagaraGpuBufferFormat::UnsignedNormalizedByte" },
		{ "UnsignedNormalizedByte.ToolTip", "8-bit per channel fixed point, range [0, 1]." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraGpuBufferFormat",
		"ENiagaraGpuBufferFormat",
		Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraGpuSyncMode;
	static UEnum* ENiagaraGpuSyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraGpuSyncMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraGpuSyncMode>()
	{
		return ENiagaraGpuSyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enumerators[] = {
		{ "ENiagaraGpuSyncMode::None", (int64)ENiagaraGpuSyncMode::None },
		{ "ENiagaraGpuSyncMode::SyncCpuToGpu", (int64)ENiagaraGpuSyncMode::SyncCpuToGpu },
		{ "ENiagaraGpuSyncMode::SyncGpuToCpu", (int64)ENiagaraGpuSyncMode::SyncGpuToCpu },
		{ "ENiagaraGpuSyncMode::SyncBoth", (int64)ENiagaraGpuSyncMode::SyncBoth },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "None.Comment", "/** Data will not be automatically pushed and could diverge between Cpu & Gpu. */" },
		{ "None.Name", "ENiagaraGpuSyncMode::None" },
		{ "None.ToolTip", "Data will not be automatically pushed and could diverge between Cpu & Gpu." },
		{ "SyncBoth.Comment", "/** Gpu will continuously push back to the Cpu and Cpu modifications will be pushed to the Gpu. */" },
		{ "SyncBoth.Name", "ENiagaraGpuSyncMode::SyncBoth" },
		{ "SyncBoth.ToolTip", "Gpu will continuously push back to the Cpu and Cpu modifications will be pushed to the Gpu." },
		{ "SyncCpuToGpu.Comment", "/** Cpu modifications will be pushed to the Gpu. */" },
		{ "SyncCpuToGpu.Name", "ENiagaraGpuSyncMode::SyncCpuToGpu" },
		{ "SyncCpuToGpu.ToolTip", "Cpu modifications will be pushed to the Gpu." },
		{ "SyncGpuToCpu.Comment", "/** Gpu will continuously push back to the Cpu, this will incur a performance penalty. */" },
		{ "SyncGpuToCpu.Name", "ENiagaraGpuSyncMode::SyncGpuToCpu" },
		{ "SyncGpuToCpu.ToolTip", "Gpu will continuously push back to the Cpu, this will incur a performance penalty." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraGpuSyncMode",
		"ENiagaraGpuSyncMode",
		Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraGpuSyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuSyncMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMipMapGeneration;
	static UEnum* ENiagaraMipMapGeneration_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraMipMapGeneration"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraMipMapGeneration>()
	{
		return ENiagaraMipMapGeneration_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enumerators[] = {
		{ "ENiagaraMipMapGeneration::Disabled", (int64)ENiagaraMipMapGeneration::Disabled },
		{ "ENiagaraMipMapGeneration::PostStage", (int64)ENiagaraMipMapGeneration::PostStage },
		{ "ENiagaraMipMapGeneration::PostSimulate", (int64)ENiagaraMipMapGeneration::PostSimulate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enum_MetaDataParams[] = {
		{ "Disabled.Comment", "/** Mips will not be created or automatically generated. */" },
		{ "Disabled.Name", "ENiagaraMipMapGeneration::Disabled" },
		{ "Disabled.ToolTip", "Mips will not be created or automatically generated." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "PostSimulate.Comment", "/** Mips will be generated after all stages have been run if the interface was written to. */" },
		{ "PostSimulate.Name", "ENiagaraMipMapGeneration::PostSimulate" },
		{ "PostSimulate.ToolTip", "Mips will be generated after all stages have been run if the interface was written to." },
		{ "PostStage.Comment", "/** Mips will be generated after each stage where the interfaces is written to. */" },
		{ "PostStage.Name", "ENiagaraMipMapGeneration::PostStage" },
		{ "PostStage.ToolTip", "Mips will be generated after each stage where the interfaces is written to." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraMipMapGeneration",
		"ENiagaraMipMapGeneration",
		Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraMipMapGeneration_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMipMapGeneration.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultMode;
	static UEnum* ENiagaraDefaultMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDefaultMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultMode>()
	{
		return ENiagaraDefaultMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enumerators[] = {
		{ "ENiagaraDefaultMode::Value", (int64)ENiagaraDefaultMode::Value },
		{ "ENiagaraDefaultMode::Binding", (int64)ENiagaraDefaultMode::Binding },
		{ "ENiagaraDefaultMode::Custom", (int64)ENiagaraDefaultMode::Custom },
		{ "ENiagaraDefaultMode::FailIfPreviouslyNotSet", (int64)ENiagaraDefaultMode::FailIfPreviouslyNotSet },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enum_MetaDataParams[] = {
		{ "Binding.Comment", "// Default initialize using a dropdown widget in the Selected Details panel. \n" },
		{ "Binding.Name", "ENiagaraDefaultMode::Binding" },
		{ "Binding.ToolTip", "Default initialize using a dropdown widget in the Selected Details panel." },
		{ "Comment", "// TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node. \n// TODO: Should we add an \"Uninitialized\" entry, or is that too much friction? \n" },
		{ "Custom.Comment", "// Default initialization is done using a sub-graph.\n" },
		{ "Custom.Name", "ENiagaraDefaultMode::Custom" },
		{ "Custom.ToolTip", "Default initialization is done using a sub-graph." },
		{ "FailIfPreviouslyNotSet.Comment", "// Fail compilation if this value has not been set previously in the stack.\n" },
		{ "FailIfPreviouslyNotSet.Name", "ENiagaraDefaultMode::FailIfPreviouslyNotSet" },
		{ "FailIfPreviouslyNotSet.ToolTip", "Fail compilation if this value has not been set previously in the stack." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "TODO: Custom will eventually mean that the default value or binding will be overridden by a subgraph default, i.e. expose it to a \"Initialize variable\" node.\nTODO: Should we add an \"Uninitialized\" entry, or is that too much friction?" },
		{ "Value.Comment", "// Default initialize using a value widget in the Selected Details panel. \n" },
		{ "Value.Name", "ENiagaraDefaultMode::Value" },
		{ "Value.ToolTip", "Default initialize using a value widget in the Selected Details panel." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDefaultMode",
		"ENiagaraDefaultMode",
		Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting;
	static UEnum* ENiagaraDefaultRendererMotionVectorSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDefaultRendererMotionVectorSetting"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDefaultRendererMotionVectorSetting>()
	{
		return ENiagaraDefaultRendererMotionVectorSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enumerators[] = {
		{ "ENiagaraDefaultRendererMotionVectorSetting::Precise", (int64)ENiagaraDefaultRendererMotionVectorSetting::Precise },
		{ "ENiagaraDefaultRendererMotionVectorSetting::Approximate", (int64)ENiagaraDefaultRendererMotionVectorSetting::Approximate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enum_MetaDataParams[] = {
		{ "Approximate.Comment", "/**\n\x09 * Approximates the motion vectors from current velocity.\n\x09 * Saves memory and performance, but can result in lower quality motion blur and/or anti-aliasing.\n\x09 */" },
		{ "Approximate.Name", "ENiagaraDefaultRendererMotionVectorSetting::Approximate" },
		{ "Approximate.ToolTip", "Approximates the motion vectors from current velocity.\nSaves memory and performance, but can result in lower quality motion blur and/or anti-aliasing." },
		{ "Comment", "/** How to handle how Niagara rendered effects should generate motion vectors by default (can still be overridden on a case-by-case basis) */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Precise.Comment", "/**\n\x09 * Motion vectors generated are precise (ideal for motion blur and temporal anti-aliasing).\n\x09 * Requires relevant emitters to store more data per particle, and may affect vertex processing performance.\n\x09 */" },
		{ "Precise.Name", "ENiagaraDefaultRendererMotionVectorSetting::Precise" },
		{ "Precise.ToolTip", "Motion vectors generated are precise (ideal for motion blur and temporal anti-aliasing).\nRequires relevant emitters to store more data per particle, and may affect vertex processing performance." },
		{ "ToolTip", "How to handle how Niagara rendered effects should generate motion vectors by default (can still be overridden on a case-by-case basis)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDefaultRendererMotionVectorSetting",
		"ENiagaraDefaultRendererMotionVectorSetting",
		Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDefaultRendererMotionVectorSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting;
	static UEnum* ENiagaraRendererMotionVectorSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererMotionVectorSetting"));
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererMotionVectorSetting>()
	{
		return ENiagaraRendererMotionVectorSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enumerators[] = {
		{ "ENiagaraRendererMotionVectorSetting::AutoDetect", (int64)ENiagaraRendererMotionVectorSetting::AutoDetect },
		{ "ENiagaraRendererMotionVectorSetting::Precise", (int64)ENiagaraRendererMotionVectorSetting::Precise },
		{ "ENiagaraRendererMotionVectorSetting::Approximate", (int64)ENiagaraRendererMotionVectorSetting::Approximate },
		{ "ENiagaraRendererMotionVectorSetting::Disable", (int64)ENiagaraRendererMotionVectorSetting::Disable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enum_MetaDataParams[] = {
		{ "Approximate.Comment", "/** Force motion vectors to be approximate for this renderer (higher performance, lower particle memory usage). */" },
		{ "Approximate.Name", "ENiagaraRendererMotionVectorSetting::Approximate" },
		{ "Approximate.ToolTip", "Force motion vectors to be approximate for this renderer (higher performance, lower particle memory usage)." },
		{ "AutoDetect.Comment", "/** Determines the best method to employ when generating motion vectors (accurate vs. approximate) based on project and renderer settings */" },
		{ "AutoDetect.Name", "ENiagaraRendererMotionVectorSetting::AutoDetect" },
		{ "AutoDetect.ToolTip", "Determines the best method to employ when generating motion vectors (accurate vs. approximate) based on project and renderer settings" },
		{ "Comment", "/** How a given Niagara renderer should handle motion vector generation. */" },
		{ "Disable.Comment", "/** Do not generate motion vectors (i.e. render the object as though it is stationary). */" },
		{ "Disable.Name", "ENiagaraRendererMotionVectorSetting::Disable" },
		{ "Disable.ToolTip", "Do not generate motion vectors (i.e. render the object as though it is stationary)." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Precise.Comment", "/** Force motion vectors to be precise for this renderer. */" },
		{ "Precise.Name", "ENiagaraRendererMotionVectorSetting::Precise" },
		{ "Precise.ToolTip", "Force motion vectors to be precise for this renderer." },
		{ "ToolTip", "How a given Niagara renderer should handle motion vector generation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraRendererMotionVectorSetting",
		"ENiagaraRendererMotionVectorSetting",
		Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRendererMotionVectorSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimTarget;
	static UEnum* ENiagaraSimTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSimTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimTarget, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSimTarget"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSimTarget.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSimTarget>()
	{
		return ENiagaraSimTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enumerators[] = {
		{ "ENiagaraSimTarget::CPUSim", (int64)ENiagaraSimTarget::CPUSim },
		{ "ENiagaraSimTarget::GPUComputeSim", (int64)ENiagaraSimTarget::GPUComputeSim },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enum_MetaDataParams[] = {
		{ "CPUSim.Name", "ENiagaraSimTarget::CPUSim" },
		{ "GPUComputeSim.Name", "ENiagaraSimTarget::GPUComputeSim" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraSimTarget",
		"ENiagaraSimTarget",
		Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimTarget.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSimTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSimTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode;
	static UEnum* ENiagaraAgeUpdateMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraAgeUpdateMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraAgeUpdateMode>()
	{
		return ENiagaraAgeUpdateMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enumerators[] = {
		{ "ENiagaraAgeUpdateMode::TickDeltaTime", (int64)ENiagaraAgeUpdateMode::TickDeltaTime },
		{ "ENiagaraAgeUpdateMode::DesiredAge", (int64)ENiagaraAgeUpdateMode::DesiredAge },
		{ "ENiagaraAgeUpdateMode::DesiredAgeNoSeek", (int64)ENiagaraAgeUpdateMode::DesiredAgeNoSeek },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines modes for updating the component's age. */" },
		{ "DesiredAge.Comment", "/** Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime*/" },
		{ "DesiredAge.Name", "ENiagaraAgeUpdateMode::DesiredAge" },
		{ "DesiredAge.ToolTip", "Update the age by seeking to the DesiredAge. To prevent major perf loss, we clamp to MaxClampTime" },
		{ "DesiredAgeNoSeek.Comment", "/** Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n\x09or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n\x09This mode is useful for continuous effects controlled by sequencer. */" },
		{ "DesiredAgeNoSeek.Name", "ENiagaraAgeUpdateMode::DesiredAgeNoSeek" },
		{ "DesiredAgeNoSeek.ToolTip", "Update the age by tracking changes to the desired age, but when the desired age goes backwards in time,\n      or jumps forwards in time by more than a few steps, the system is reset and simulated forward by a single step.\n      This mode is useful for continuous effects controlled by sequencer." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "TickDeltaTime.Comment", "/** Update the age using the delta time supplied to the component tick function. */" },
		{ "TickDeltaTime.Name", "ENiagaraAgeUpdateMode::TickDeltaTime" },
		{ "TickDeltaTime.ToolTip", "Update the age using the delta time supplied to the component tick function." },
		{ "ToolTip", "Defines modes for updating the component's age." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraAgeUpdateMode",
		"ENiagaraAgeUpdateMode",
		Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraAgeUpdateMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStatEvaluationType;
	static UEnum* ENiagaraStatEvaluationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatEvaluationType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatEvaluationType>()
	{
		return ENiagaraStatEvaluationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enumerators[] = {
		{ "ENiagaraStatEvaluationType::Average", (int64)ENiagaraStatEvaluationType::Average },
		{ "ENiagaraStatEvaluationType::Maximum", (int64)ENiagaraStatEvaluationType::Maximum },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enum_MetaDataParams[] = {
		{ "Average.Name", "ENiagaraStatEvaluationType::Average" },
		{ "Maximum.Name", "ENiagaraStatEvaluationType::Maximum" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraStatEvaluationType",
		"ENiagaraStatEvaluationType",
		Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStatEvaluationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraStatEvaluationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStatDisplayMode;
	static UEnum* ENiagaraStatDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStatDisplayMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStatDisplayMode>()
	{
		return ENiagaraStatDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enumerators[] = {
		{ "ENiagaraStatDisplayMode::Percent", (int64)ENiagaraStatDisplayMode::Percent },
		{ "ENiagaraStatDisplayMode::Absolute", (int64)ENiagaraStatDisplayMode::Absolute },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Name", "ENiagaraStatDisplayMode::Absolute" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Percent.Name", "ENiagaraStatDisplayMode::Percent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraStatDisplayMode",
		"ENiagaraStatDisplayMode",
		Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStatDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraStatDisplayMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDataSetType;
	static UEnum* ENiagaraDataSetType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataSetType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDataSetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraDataSetType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraDataSetType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDataSetType.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraDataSetType>()
	{
		return ENiagaraDataSetType_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enumerators[] = {
		{ "ENiagaraDataSetType::ParticleData", (int64)ENiagaraDataSetType::ParticleData },
		{ "ENiagaraDataSetType::Shared", (int64)ENiagaraDataSetType::Shared },
		{ "ENiagaraDataSetType::Event", (int64)ENiagaraDataSetType::Event },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enum_MetaDataParams[] = {
		{ "Event.Name", "ENiagaraDataSetType::Event" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ParticleData.Name", "ENiagaraDataSetType::ParticleData" },
		{ "Shared.Name", "ENiagaraDataSetType::Shared" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraDataSetType",
		"ENiagaraDataSetType",
		Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataSetType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataSetType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDataSetType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraDataSetType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDataSetType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraInputNodeUsage;
	static UEnum* ENiagaraInputNodeUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraInputNodeUsage"));
		}
		return Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraInputNodeUsage>()
	{
		return ENiagaraInputNodeUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enumerators[] = {
		{ "ENiagaraInputNodeUsage::Undefined", (int64)ENiagaraInputNodeUsage::Undefined },
		{ "ENiagaraInputNodeUsage::Parameter", (int64)ENiagaraInputNodeUsage::Parameter },
		{ "ENiagaraInputNodeUsage::Attribute", (int64)ENiagaraInputNodeUsage::Attribute },
		{ "ENiagaraInputNodeUsage::SystemConstant", (int64)ENiagaraInputNodeUsage::SystemConstant },
		{ "ENiagaraInputNodeUsage::TranslatorConstant", (int64)ENiagaraInputNodeUsage::TranslatorConstant },
		{ "ENiagaraInputNodeUsage::RapidIterationParameter", (int64)ENiagaraInputNodeUsage::RapidIterationParameter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enum_MetaDataParams[] = {
		{ "Attribute.Name", "ENiagaraInputNodeUsage::Attribute" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Parameter.Name", "ENiagaraInputNodeUsage::Parameter" },
		{ "RapidIterationParameter.Name", "ENiagaraInputNodeUsage::RapidIterationParameter" },
		{ "SystemConstant.Name", "ENiagaraInputNodeUsage::SystemConstant" },
		{ "TranslatorConstant.Name", "ENiagaraInputNodeUsage::TranslatorConstant" },
		{ "Undefined.Hidden", "" },
		{ "Undefined.Name", "ENiagaraInputNodeUsage::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraInputNodeUsage",
		"ENiagaraInputNodeUsage",
		Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraInputNodeUsage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus;
	static UEnum* ENiagaraScriptCompileStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptCompileStatus"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptCompileStatus>()
	{
		return ENiagaraScriptCompileStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enumerators[] = {
		{ "ENiagaraScriptCompileStatus::NCS_Unknown", (int64)ENiagaraScriptCompileStatus::NCS_Unknown },
		{ "ENiagaraScriptCompileStatus::NCS_Dirty", (int64)ENiagaraScriptCompileStatus::NCS_Dirty },
		{ "ENiagaraScriptCompileStatus::NCS_Error", (int64)ENiagaraScriptCompileStatus::NCS_Error },
		{ "ENiagaraScriptCompileStatus::NCS_UpToDate", (int64)ENiagaraScriptCompileStatus::NCS_UpToDate },
		{ "ENiagaraScriptCompileStatus::NCS_BeingCreated", (int64)ENiagaraScriptCompileStatus::NCS_BeingCreated },
		{ "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings },
		{ "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings", (int64)ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings },
		{ "ENiagaraScriptCompileStatus::NCS_MAX", (int64)ENiagaraScriptCompileStatus::NCS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Enumerates states a Niagara script can be in.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "NCS_BeingCreated.Comment", "/** Niagara script is in the process of being created for the first time. */" },
		{ "NCS_BeingCreated.Name", "ENiagaraScriptCompileStatus::NCS_BeingCreated" },
		{ "NCS_BeingCreated.ToolTip", "Niagara script is in the process of being created for the first time." },
		{ "NCS_ComputeUpToDateWithWarnings.Comment", "/** Niagara script has been compiled for compute since it was last modified. There are warnings. */" },
		{ "NCS_ComputeUpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_ComputeUpToDateWithWarnings" },
		{ "NCS_ComputeUpToDateWithWarnings.ToolTip", "Niagara script has been compiled for compute since it was last modified. There are warnings." },
		{ "NCS_Dirty.Comment", "/** Niagara script has been modified but not recompiled. */" },
		{ "NCS_Dirty.Name", "ENiagaraScriptCompileStatus::NCS_Dirty" },
		{ "NCS_Dirty.ToolTip", "Niagara script has been modified but not recompiled." },
		{ "NCS_Error.Comment", "/** Niagara script tried but failed to be compiled. */" },
		{ "NCS_Error.Name", "ENiagaraScriptCompileStatus::NCS_Error" },
		{ "NCS_Error.ToolTip", "Niagara script tried but failed to be compiled." },
		{ "NCS_MAX.Name", "ENiagaraScriptCompileStatus::NCS_MAX" },
		{ "NCS_Unknown.Comment", "/** Niagara script is in an unknown state. */" },
		{ "NCS_Unknown.Name", "ENiagaraScriptCompileStatus::NCS_Unknown" },
		{ "NCS_Unknown.ToolTip", "Niagara script is in an unknown state." },
		{ "NCS_UpToDate.Comment", "/** Niagara script has been compiled since it was last modified. */" },
		{ "NCS_UpToDate.Name", "ENiagaraScriptCompileStatus::NCS_UpToDate" },
		{ "NCS_UpToDate.ToolTip", "Niagara script has been compiled since it was last modified." },
		{ "NCS_UpToDateWithWarnings.Comment", "/** Niagara script has been compiled since it was last modified. There are warnings. */" },
		{ "NCS_UpToDateWithWarnings.Name", "ENiagaraScriptCompileStatus::NCS_UpToDateWithWarnings" },
		{ "NCS_UpToDateWithWarnings.ToolTip", "Niagara script has been compiled since it was last modified. There are warnings." },
		{ "ToolTip", "Enumerates states a Niagara script can be in." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptCompileStatus",
		"ENiagaraScriptCompileStatus",
		Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataSetID;
class UScriptStruct* FNiagaraDataSetID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataSetID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetID, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetID"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataSetID.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetID>()
{
	return FNiagaraDataSetID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetID, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetID, Type), Z_Construct_UEnum_Niagara_ENiagaraDataSetType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_MetaData)) }; // 3892718668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetID",
		sizeof(FNiagaraDataSetID),
		alignof(FNiagaraDataSetID),
		Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataSetID.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataSetID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties;
class UScriptStruct* FNiagaraDataSetProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetProperties, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetProperties"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetProperties>()
{
	return FNiagaraDataSetProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Data Set" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetProperties, ID), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID_MetaData)) }; // 1812770562
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetProperties, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewProp_Variables,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetProperties",
		sizeof(FNiagaraDataSetProperties),
		alignof(FNiagaraDataSetProperties),
		Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo;
class UScriptStruct* FNiagaraScriptDataUsageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataUsageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataUsageInfo>()
{
	return FNiagaraScriptDataUsageInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[];
#endif
		static void NewProp_bReadsAttributeData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Struct containing usage information about a script. Things such as whether it reads attribute data, reads or writes events data etc." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataUsageInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData[] = {
		{ "Comment", "/** If true, this script reads attribute data. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "If true, this script reads attribute data." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
	{
		((FNiagaraScriptDataUsageInfo*)Obj)->bReadsAttributeData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraScriptDataUsageInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewProp_bReadsAttributeData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataUsageInfo",
		sizeof(FNiagaraScriptDataUsageInfo),
		alignof(FNiagaraScriptDataUsageInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature;
class UScriptStruct* FNiagaraFunctionSignature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFunctionSignature, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFunctionSignature"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFunctionSignature>()
{
	return FNiagaraFunctionSignature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresContext_MetaData[];
#endif
		static void NewProp_bRequiresContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresExecPin_MetaData[];
#endif
		static void NewProp_bRequiresExecPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresExecPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMemberFunction_MetaData[];
#endif
		static void NewProp_bMemberFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMemberFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionVersion_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FunctionVersion;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsCPU_MetaData[];
#endif
		static void NewProp_bSupportsCPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsCPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsGPU_MetaData[];
#endif
		static void NewProp_bSupportsGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsGPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteFunction_MetaData[];
#endif
		static void NewProp_bWriteFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadFunction_MetaData[];
#endif
		static void NewProp_bReadFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoftDeprecatedFunction_MetaData[];
#endif
		static void NewProp_bSoftDeprecatedFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoftDeprecatedFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompileTagGenerator_MetaData[];
#endif
		static void NewProp_bIsCompileTagGenerator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompileTagGenerator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextStageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContextStageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredInputs_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_RequiredInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_RequiredOutputs;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionSpecifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_FunctionSpecifiers;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputDescriptions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputDescriptions;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutputDescriptions_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDescriptions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDescriptions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputDescriptions;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFunctionSignature>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Name of the function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData[] = {
		{ "Comment", "/** Input parameters to this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters to this function." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** Input parameters of this function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Input parameters of this function." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData[] = {
		{ "Comment", "/** Id of the owner is this is a member function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Id of the owner is this is a member function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bRequiresContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext = { "bRequiresContext", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData[] = {
		{ "Comment", "/** Does this function need an exec pin for control flow because it has internal side effects that be seen by the script VM and could therefore be optimized out? If so, set to true. Default is false. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Does this function need an exec pin for control flow because it has internal side effects that be seen by the script VM and could therefore be optimized out? If so, set to true. Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bRequiresExecPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin = { "bRequiresExecPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData[] = {
		{ "Comment", "/** True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "True if this is the signature for a \"member\" function of a data interface. If this is true, the first input is the owner." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bMemberFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction = { "bMemberFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Comment", "/** Is this function experimental? */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Is this function experimental?" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bExperimental = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, ExperimentalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData[] = {
		{ "Comment", "/** Per function version, it is up to the discretion of the function as to what the version means. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Per function version, it is up to the discretion of the function as to what the version means." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion = { "FunctionVersion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData[] = {
		{ "Comment", "/** Support running on the CPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the CPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsCPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU = { "bSupportsCPU", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData[] = {
		{ "Comment", "/** Support running on the GPU. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Support running on the GPU." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSupportsGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU = { "bSupportsGPU", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData[] = {
		{ "Comment", "/** Writes data owned by the data interface.  Any stage using it will be marked as an Output stage. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Writes data owned by the data interface.  Any stage using it will be marked as an Output stage." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bWriteFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction = { "bWriteFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction_MetaData[] = {
		{ "Comment", "/** Reads data owned by the data interface.  Any stage using it will be marked as an Input stage. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Reads data owned by the data interface.  Any stage using it will be marked as an Input stage." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bReadFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction = { "bReadFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData[] = {
		{ "Comment", "/** Whether or not this function should show up in normal usage. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Whether or not this function should show up in normal usage." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bSoftDeprecatedFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction = { "bSoftDeprecatedFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData[] = {
		{ "Comment", "/** Whether or not this function should be treated as a compile tag. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Whether or not this function should be treated as a compile tag." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bIsCompileTagGenerator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator = { "bIsCompileTagGenerator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData[] = {
		{ "Comment", "/** Hidden functions can not be placed but may be bound and used.  This is useful to hide functionality while developing. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Hidden functions can not be placed but may be bound and used.  This is useful to hide functionality while developing." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FNiagaraFunctionSignature*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraFunctionSignature), &Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraScriptUsage" },
		{ "Comment", "/** Bitmask for which scripts are supported for this function. Use UNiagaraScript::MakeSupportedUsageContextBitmask to make the bitmask. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Bitmask for which scripts are supported for this function. Use UNiagaraScript::MakeSupportedUsageContextBitmask to make the bitmask." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, ModuleUsageBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageIndex_MetaData[] = {
		{ "Comment", "/** When using simulation stages and bRequiresContext is true this will be the index of the stage that is associated with the function. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "When using simulation stages and bRequiresContext is true this will be the index of the stage that is associated with the function." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageIndex = { "ContextStageIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, ContextStageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredInputs_MetaData[] = {
		{ "Comment", "/** Number of required inputs. Can be less than the actual number of inputs when using bVariadicInput. INDEX_NONE when not using bVariadicInput, denoting that all inputs are required. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Number of required inputs. Can be less than the actual number of inputs when using bVariadicInput. INDEX_NONE when not using bVariadicInput, denoting that all inputs are required." },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredInputs = { "RequiredInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, RequiredInputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredOutputs_MetaData[] = {
		{ "Comment", "/** Number of required outputs. Can be less than the actual number of outputs when using bVariadicOutput. INDEX_NONE when not using bVariadicOutput, denoting that all outputs are required. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Number of required outputs. Can be less than the actual number of outputs when using bVariadicOutput. INDEX_NONE when not using bVariadicOutput, denoting that all outputs are required." },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredOutputs = { "RequiredOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, RequiredOutputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredOutputs_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp = { "FunctionSpecifiers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "Comment", "/** Function specifiers verified at bind time. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Function specifiers verified at bind time." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, FunctionSpecifiers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_ValueProp = { "InputDescriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_Key_KeyProp = { "InputDescriptions_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions = { "InputDescriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, InputDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_MetaData)) }; // 1114376608
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_ValueProp = { "OutputDescriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_Key_KeyProp = { "OutputDescriptions_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SkipForCompileHash", "TRUE" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions = { "OutputDescriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFunctionSignature, OutputDescriptions), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_MetaData)) }; // 1114376608
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OwnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bRequiresExecPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bMemberFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bExperimental,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ExperimentalMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionVersion,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSupportsGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bWriteFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bReadFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bSoftDeprecatedFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bIsCompileTagGenerator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_bHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ModuleUsageBitmask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_ContextStageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_RequiredOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_FunctionSpecifiers,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_InputDescriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewProp_OutputDescriptions,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFunctionSignature",
		sizeof(FNiagaraFunctionSignature),
		alignof(FNiagaraFunctionSignature),
		Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo;
class UScriptStruct* FNiagaraScriptDataInterfaceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceInfo>()
{
	return FNiagaraScriptDataInterfaceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type_MetaData)) }; // 1791563344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_DataInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_UserPtrIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewProp_RegisteredParameterMapWrite,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceInfo",
		sizeof(FNiagaraScriptDataInterfaceInfo),
		alignof(FNiagaraScriptDataInterfaceInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo;
class UScriptStruct* FNiagaraScriptDataInterfaceCompileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptDataInterfaceCompileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptDataInterfaceCompileInfo>()
{
	return FNiagaraScriptDataInterfaceCompileInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserPtrIdx_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserPtrIdx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredFunctions;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapRead_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapRead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredParameterMapWrite_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegisteredParameterMapWrite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlaceholder_MetaData[];
#endif
		static void NewProp_bIsPlaceholder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlaceholder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptDataInterfaceCompileInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData[] = {
		{ "Comment", "/** Index of the user pointer for this data interface. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Index of the user pointer for this data interface." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx = { "UserPtrIdx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, UserPtrIdx), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, Type), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type_MetaData)) }; // 1791563344
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(nullptr, 0) }; // 2580596167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions = { "RegisteredFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_MetaData)) }; // 2580596167
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead = { "RegisteredParameterMapRead", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite = { "RegisteredParameterMapWrite", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit(void* Obj)
	{
		((FNiagaraScriptDataInterfaceCompileInfo*)Obj)->bIsPlaceholder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder = { "bIsPlaceholder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraScriptDataInterfaceCompileInfo), &Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_UserPtrIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_Type,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapRead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_RegisteredParameterMapWrite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewProp_bIsPlaceholder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptDataInterfaceCompileInfo",
		sizeof(FNiagaraScriptDataInterfaceCompileInfo),
		alignof(FNiagaraScriptDataInterfaceCompileInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStatScope;
class UScriptStruct* FNiagaraStatScope::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStatScope.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStatScope.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStatScope, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStatScope"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStatScope.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStatScope>()
{
	return FNiagaraStatScope::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStatScope_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FullName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStatScope>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName = { "FullName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStatScope, FullName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStatScope, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FullName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewProp_FriendlyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraStatScope",
		sizeof(FNiagaraStatScope),
		alignof(FNiagaraStatScope),
		Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStatScope.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStatScope.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStatScope.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VMFunctionSpecifier;
class UScriptStruct* FVMFunctionSpecifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMFunctionSpecifier, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VMFunctionSpecifier"));
	}
	return Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMFunctionSpecifier>()
{
	return FVMFunctionSpecifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMFunctionSpecifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMFunctionSpecifier, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMFunctionSpecifier, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMFunctionSpecifier",
		sizeof(FVMFunctionSpecifier),
		alignof(FVMFunctionSpecifier),
		Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMFunctionSpecifier()
	{
		if (!Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.InnerSingleton, Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VMFunctionSpecifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo;
class UScriptStruct* FVMExternalFunctionBindingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VMExternalFunctionBindingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVMExternalFunctionBindingInfo>()
{
	return FVMExternalFunctionBindingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InputParamLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputParamLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputParamLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOutputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionSpecifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionSpecifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FunctionSpecifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariadicInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariadicOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariadicOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariadicOutputs;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_Specifiers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Specifiers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Specifiers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Specifiers;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVMExternalFunctionBindingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName = { "OwnerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, OwnerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner = { "InputParamLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations = { "InputParamLocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, InputParamLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs = { "NumOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, NumOutputs), METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVMFunctionSpecifier, METADATA_PARAMS(nullptr, 0) }; // 298083807
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers = { "FunctionSpecifiers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, FunctionSpecifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_MetaData)) }; // 298083807
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs_Inner = { "VariadicInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs = { "VariadicInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, VariadicInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs_MetaData)) }; // 1114376608
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs_Inner = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs = { "VariadicOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, VariadicOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs_MetaData)) }; // 1114376608
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp = { "Specifiers", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp = { "Specifiers_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers = { "Specifiers", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVMExternalFunctionBindingInfo, Specifiers_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_OwnerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_InputParamLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_NumOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_FunctionSpecifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_VariadicOutputs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewProp_Specifiers,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VMExternalFunctionBindingInfo",
		sizeof(FVMExternalFunctionBindingInfo),
		alignof(FVMExternalFunctionBindingInfo),
		Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.InnerSingleton, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext;
class UScriptStruct* FNiagaraSystemUpdateContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSystemUpdateContext"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSystemUpdateContext>()
{
	return FNiagaraSystemUpdateContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsToReset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsToReInit_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToReInit_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToReInit;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsToNotifySimDestroy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToNotifySimDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToNotifySimDestroy;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemSimsToDestroy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSimsToDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemSimsToDestroy;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemSimsToRecache_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemSimsToRecache_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SystemSimsToRecache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nHelper for reseting/reinitializing Niagara systems currently active when they are being edited. \nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate().\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Helper for reseting/reinitializing Niagara systems currently active when they are being edited.\nCan be used inside a scope with Systems being reinitialized on destruction or you can store the context and use CommitUpdate() to trigger reinitialization.\nFor example, this can be split between PreEditChange and PostEditChange to ensure problematic data is not modified during execution of a system.\nThis can be made a UPROPERTY() to ensure safey in cases where a GC could be possible between Add() and CommitUpdate()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSystemUpdateContext>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset = { "ComponentsToReset", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReset), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit = { "ComponentsToReInit", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToReInit), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_Inner = { "ComponentsToNotifySimDestroy", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy = { "ComponentsToNotifySimDestroy", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy = { "SystemSimsToDestroy", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemUpdateContext, SystemSimsToDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache_Inner = { "SystemSimsToRecache", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache = { "SystemSimsToRecache", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSystemUpdateContext, SystemSimsToRecache), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToReInit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_ComponentsToNotifySimDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewProp_SystemSimsToRecache,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSystemUpdateContext",
		sizeof(FNiagaraSystemUpdateContext),
		alignof(FNiagaraSystemUpdateContext),
		Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptUsage;
	static UEnum* ENiagaraScriptUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptUsage"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptUsage.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptUsage>()
	{
		return ENiagaraScriptUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enumerators[] = {
		{ "ENiagaraScriptUsage::Function", (int64)ENiagaraScriptUsage::Function },
		{ "ENiagaraScriptUsage::Module", (int64)ENiagaraScriptUsage::Module },
		{ "ENiagaraScriptUsage::DynamicInput", (int64)ENiagaraScriptUsage::DynamicInput },
		{ "ENiagaraScriptUsage::ParticleSpawnScript", (int64)ENiagaraScriptUsage::ParticleSpawnScript },
		{ "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated", (int64)ENiagaraScriptUsage::ParticleSpawnScriptInterpolated },
		{ "ENiagaraScriptUsage::ParticleUpdateScript", (int64)ENiagaraScriptUsage::ParticleUpdateScript },
		{ "ENiagaraScriptUsage::ParticleEventScript", (int64)ENiagaraScriptUsage::ParticleEventScript },
		{ "ENiagaraScriptUsage::ParticleSimulationStageScript", (int64)ENiagaraScriptUsage::ParticleSimulationStageScript },
		{ "ENiagaraScriptUsage::ParticleGPUComputeScript", (int64)ENiagaraScriptUsage::ParticleGPUComputeScript },
		{ "ENiagaraScriptUsage::EmitterSpawnScript", (int64)ENiagaraScriptUsage::EmitterSpawnScript },
		{ "ENiagaraScriptUsage::EmitterUpdateScript", (int64)ENiagaraScriptUsage::EmitterUpdateScript },
		{ "ENiagaraScriptUsage::SystemSpawnScript", (int64)ENiagaraScriptUsage::SystemSpawnScript },
		{ "ENiagaraScriptUsage::SystemUpdateScript", (int64)ENiagaraScriptUsage::SystemUpdateScript },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different usages for a niagara script. */" },
		{ "DynamicInput.Comment", "/** The script defines a dynamic input for use in particle, emitter, or system scripts. */" },
		{ "DynamicInput.Name", "ENiagaraScriptUsage::DynamicInput" },
		{ "DynamicInput.ToolTip", "The script defines a dynamic input for use in particle, emitter, or system scripts." },
		{ "EmitterSpawnScript.Comment", "/** The script is called once when the emitter spawns. */" },
		{ "EmitterSpawnScript.Name", "ENiagaraScriptUsage::EmitterSpawnScript" },
		{ "EmitterSpawnScript.ToolTip", "The script is called once when the emitter spawns." },
		{ "EmitterUpdateScript.Comment", "/** The script is called every frame to tick the emitter. */" },
		{ "EmitterUpdateScript.Name", "ENiagaraScriptUsage::EmitterUpdateScript" },
		{ "EmitterUpdateScript.ToolTip", "The script is called every frame to tick the emitter." },
		{ "Function.Comment", "/** The script defines a function for use in modules. */" },
		{ "Function.Name", "ENiagaraScriptUsage::Function" },
		{ "Function.ToolTip", "The script defines a function for use in modules." },
		{ "Module.Comment", "/** The script defines a module for use in particle, emitter, or system scripts. */" },
		{ "Module.Name", "ENiagaraScriptUsage::Module" },
		{ "Module.ToolTip", "The script defines a module for use in particle, emitter, or system scripts." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ParticleEventScript.Comment", "/** The script is called to update particles in response to an event. */" },
		{ "ParticleEventScript.Name", "ENiagaraScriptUsage::ParticleEventScript" },
		{ "ParticleEventScript.ToolTip", "The script is called to update particles in response to an event." },
		{ "ParticleGPUComputeScript.Comment", "/** The script is called to update particles on the GPU. */" },
		{ "ParticleGPUComputeScript.Hidden", "" },
		{ "ParticleGPUComputeScript.Name", "ENiagaraScriptUsage::ParticleGPUComputeScript" },
		{ "ParticleGPUComputeScript.ToolTip", "The script is called to update particles on the GPU." },
		{ "ParticleSimulationStageScript.Comment", "/** The script is called as a particle simulation stage. */" },
		{ "ParticleSimulationStageScript.Name", "ENiagaraScriptUsage::ParticleSimulationStageScript" },
		{ "ParticleSimulationStageScript.ToolTip", "The script is called as a particle simulation stage." },
		{ "ParticleSpawnScript.Comment", "/** The script is called when spawning particles. */" },
		{ "ParticleSpawnScript.Name", "ENiagaraScriptUsage::ParticleSpawnScript" },
		{ "ParticleSpawnScript.ToolTip", "The script is called when spawning particles." },
		{ "ParticleSpawnScriptInterpolated.Comment", "/** Particle spawn script that handles intra-frame spawning and also pulls in the update script. */" },
		{ "ParticleSpawnScriptInterpolated.Hidden", "" },
		{ "ParticleSpawnScriptInterpolated.Name", "ENiagaraScriptUsage::ParticleSpawnScriptInterpolated" },
		{ "ParticleSpawnScriptInterpolated.ToolTip", "Particle spawn script that handles intra-frame spawning and also pulls in the update script." },
		{ "ParticleUpdateScript.Comment", "/** The script is called to update particles every frame. */" },
		{ "ParticleUpdateScript.Name", "ENiagaraScriptUsage::ParticleUpdateScript" },
		{ "ParticleUpdateScript.ToolTip", "The script is called to update particles every frame." },
		{ "SystemSpawnScript.Comment", "/** The script is called once when the system spawns. */" },
		{ "SystemSpawnScript.Name", "ENiagaraScriptUsage::SystemSpawnScript" },
		{ "SystemSpawnScript.ToolTip", "The script is called once when the system spawns." },
		{ "SystemUpdateScript.Comment", "/** The script is called every frame to tick the system. */" },
		{ "SystemUpdateScript.Name", "ENiagaraScriptUsage::SystemUpdateScript" },
		{ "SystemUpdateScript.ToolTip", "The script is called every frame to tick the system." },
		{ "ToolTip", "Defines different usages for a niagara script." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptUsage",
		"ENiagaraScriptUsage",
		Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptUsage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptUsage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch;
	static UEnum* ENiagaraCompileUsageStaticSwitch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCompileUsageStaticSwitch"));
		}
		return Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCompileUsageStaticSwitch>()
	{
		return ENiagaraCompileUsageStaticSwitch_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enumerators[] = {
		{ "ENiagaraCompileUsageStaticSwitch::Spawn", (int64)ENiagaraCompileUsageStaticSwitch::Spawn },
		{ "ENiagaraCompileUsageStaticSwitch::Update", (int64)ENiagaraCompileUsageStaticSwitch::Update },
		{ "ENiagaraCompileUsageStaticSwitch::Event", (int64)ENiagaraCompileUsageStaticSwitch::Event },
		{ "ENiagaraCompileUsageStaticSwitch::SimulationStage", (int64)ENiagaraCompileUsageStaticSwitch::SimulationStage },
		{ "ENiagaraCompileUsageStaticSwitch::Default", (int64)ENiagaraCompileUsageStaticSwitch::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different usages for a niagara script. */" },
		{ "Default.Comment", "/** The default value if the compiler cannot map the compilation context. */" },
		{ "Default.Name", "ENiagaraCompileUsageStaticSwitch::Default" },
		{ "Default.ToolTip", "The default value if the compiler cannot map the compilation context." },
		{ "Event.Comment", "/** The script is called in an event context. */" },
		{ "Event.Name", "ENiagaraCompileUsageStaticSwitch::Event" },
		{ "Event.ToolTip", "The script is called in an event context." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "SimulationStage.Comment", "/** The script is called as part of a simulation stage. */" },
		{ "SimulationStage.Name", "ENiagaraCompileUsageStaticSwitch::SimulationStage" },
		{ "SimulationStage.ToolTip", "The script is called as part of a simulation stage." },
		{ "Spawn.Comment", "/** The script is called during the spawn phase. */" },
		{ "Spawn.Name", "ENiagaraCompileUsageStaticSwitch::Spawn" },
		{ "Spawn.ToolTip", "The script is called during the spawn phase." },
		{ "ToolTip", "Defines different usages for a niagara script." },
		{ "Update.Comment", "/** The script is called during the update phase. */" },
		{ "Update.Name", "ENiagaraCompileUsageStaticSwitch::Update" },
		{ "Update.ToolTip", "The script is called during the update phase." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraCompileUsageStaticSwitch",
		"ENiagaraCompileUsageStaticSwitch",
		Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCompileUsageStaticSwitch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch;
	static UEnum* ENiagaraScriptContextStaticSwitch_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptContextStaticSwitch"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptContextStaticSwitch>()
	{
		return ENiagaraScriptContextStaticSwitch_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enumerators[] = {
		{ "ENiagaraScriptContextStaticSwitch::System", (int64)ENiagaraScriptContextStaticSwitch::System },
		{ "ENiagaraScriptContextStaticSwitch::Emitter", (int64)ENiagaraScriptContextStaticSwitch::Emitter },
		{ "ENiagaraScriptContextStaticSwitch::Particle", (int64)ENiagaraScriptContextStaticSwitch::Particle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different execution contexts for a niagara script. */" },
		{ "Emitter.Comment", "/** The script is called in a emitter context. */" },
		{ "Emitter.Name", "ENiagaraScriptContextStaticSwitch::Emitter" },
		{ "Emitter.ToolTip", "The script is called in a emitter context." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Particle.Comment", "/** The script is called in a particle context. */" },
		{ "Particle.Name", "ENiagaraScriptContextStaticSwitch::Particle" },
		{ "Particle.ToolTip", "The script is called in a particle context." },
		{ "System.Comment", "/** The script is called in a system context. */" },
		{ "System.Name", "ENiagaraScriptContextStaticSwitch::System" },
		{ "System.ToolTip", "The script is called in a system context." },
		{ "ToolTip", "Defines different execution contexts for a niagara script." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptContextStaticSwitch",
		"ENiagaraScriptContextStaticSwitch",
		Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptContextStaticSwitch_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptGroup;
	static UEnum* ENiagaraScriptGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptGroup"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptGroup.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptGroup>()
	{
		return ENiagaraScriptGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enumerators[] = {
		{ "ENiagaraScriptGroup::Particle", (int64)ENiagaraScriptGroup::Particle },
		{ "ENiagaraScriptGroup::Emitter", (int64)ENiagaraScriptGroup::Emitter },
		{ "ENiagaraScriptGroup::System", (int64)ENiagaraScriptGroup::System },
		{ "ENiagaraScriptGroup::Max", (int64)ENiagaraScriptGroup::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enum_MetaDataParams[] = {
		{ "Emitter.Name", "ENiagaraScriptGroup::Emitter" },
		{ "Max.Name", "ENiagaraScriptGroup::Max" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Particle.Name", "ENiagaraScriptGroup::Particle" },
		{ "System.Name", "ENiagaraScriptGroup::System" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptGroup",
		"ENiagaraScriptGroup",
		Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptGroup()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptGroup.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBindingSource;
	static UEnum* ENiagaraBindingSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBindingSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraBindingSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBindingSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBindingSource"));
		}
		return Z_Registration_Info_UEnum_ENiagaraBindingSource.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBindingSource>()
	{
		return ENiagaraBindingSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enumerators[] = {
		{ "ImplicitFromSource", (int64)ImplicitFromSource },
		{ "ExplicitParticles", (int64)ExplicitParticles },
		{ "ExplicitEmitter", (int64)ExplicitEmitter },
		{ "ExplicitSystem", (int64)ExplicitSystem },
		{ "ExplicitUser", (int64)ExplicitUser },
		{ "MaxBindingSource", (int64)MaxBindingSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enum_MetaDataParams[] = {
		{ "ExplicitEmitter.Name", "ExplicitEmitter" },
		{ "ExplicitParticles.Name", "ExplicitParticles" },
		{ "ExplicitSystem.Name", "ExplicitSystem" },
		{ "ExplicitUser.Name", "ExplicitUser" },
		{ "ImplicitFromSource.Name", "ImplicitFromSource" },
		{ "MaxBindingSource.Name", "MaxBindingSource" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraBindingSource",
		"ENiagaraBindingSource",
		Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBindingSource()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBindingSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBindingSource.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBindingSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraBindingSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableInfo;
class UScriptStruct* FNiagaraVariableInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableInfo>()
{
	return FNiagaraVariableInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definition_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Definition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines all you need to know about a variable.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Defines all you need to know about a variable." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableInfo, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition = { "Definition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableInfo, Definition), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableInfo, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_Definition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewProp_DataInterface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableInfo",
		sizeof(FNiagaraVariableInfo),
		alignof(FNiagaraVariableInfo),
		Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode;
	static UEnum* ENiagaraRendererSourceDataMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRendererSourceDataMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRendererSourceDataMode>()
	{
		return ENiagaraRendererSourceDataMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enumerators[] = {
		{ "ENiagaraRendererSourceDataMode::Particles", (int64)ENiagaraRendererSourceDataMode::Particles },
		{ "ENiagaraRendererSourceDataMode::Emitter", (int64)ENiagaraRendererSourceDataMode::Emitter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** This enum decides how a renderer will attempt to process the incoming data from the stack.*/" },
		{ "Emitter.Comment", "/** The renderer will draw only one element per Emitter. It can only pull in data from Emitter/User/or System namespaces when drawing the single element. */" },
		{ "Emitter.Name", "ENiagaraRendererSourceDataMode::Emitter" },
		{ "Emitter.ToolTip", "The renderer will draw only one element per Emitter. It can only pull in data from Emitter/User/or System namespaces when drawing the single element." },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "Particles.Comment", "/** The renderer will draw particle data, but can potentially pull in data from the Emitter/User/or System namespaces when drawing each Particle.*/" },
		{ "Particles.Name", "ENiagaraRendererSourceDataMode::Particles" },
		{ "Particles.ToolTip", "The renderer will draw particle data, but can potentially pull in data from the Emitter/User/or System namespaces when drawing each Particle." },
		{ "ToolTip", "This enum decides how a renderer will attempt to process the incoming data from the stack." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraRendererSourceDataMode",
		"ENiagaraRendererSourceDataMode",
		Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding;
class UScriptStruct* FNiagaraVariableAttributeBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableAttributeBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableAttributeBinding>()
{
	return FNiagaraVariableAttributeBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamMapVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamMapVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootVariable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CachedDisplayName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingSourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingSourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBindingExistsOnSource_MetaData[];
#endif
		static void NewProp_bBindingExistsOnSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBindingExistsOnSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCachedParticleValue_MetaData[];
#endif
		static void NewProp_bIsCachedParticleValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCachedParticleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableAttributeBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData[] = {
		{ "Comment", "/** The fully expressed namespace for the variable. If an emitter namespace, this will include the Emitter's unique name.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The fully expressed namespace for the variable. If an emitter namespace, this will include the Emitter's unique name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable = { "ParamMapVariable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, ParamMapVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData[] = {
		{ "Comment", "/** The version of the namespace to be found in an attribute table lookup. I.e. without Particles or Emitter.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The version of the namespace to be found in an attribute table lookup. I.e. without Particles or Emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable = { "DataSetVariable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, DataSetVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData[] = {
		{ "Comment", "/** The namespace and default value explicitly set by the user. If meant to be derived from the source mode, it will be without a namespace.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The namespace and default value explicitly set by the user. If meant to be derived from the source mode, it will be without a namespace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable = { "RootVariable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, RootVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable_MetaData)) }; // 2575088255
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "Comment", "/** Old variable brought in from previous setup. Generally ignored other than postload work.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Old variable brought in from previous setup. Generally ignored other than postload work." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName = { "CachedDisplayName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, CachedDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData[] = {
		{ "Comment", "/** Captures the state of the namespace when the variable is set. Allows us to make later decisions about how to reconstititue the namespace.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Captures the state of the namespace when the variable is set. Allows us to make later decisions about how to reconstititue the namespace." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode = { "BindingSourceMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableAttributeBinding, BindingSourceMode), Z_Construct_UEnum_Niagara_ENiagaraBindingSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode_MetaData)) }; // 1423730133
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData[] = {
		{ "Comment", "/** Determine if this varible is accessible by the associated emitter passed into CacheValues.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Determine if this varible is accessible by the associated emitter passed into CacheValues." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_SetBit(void* Obj)
	{
		((FNiagaraVariableAttributeBinding*)Obj)->bBindingExistsOnSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource = { "bBindingExistsOnSource", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVariableAttributeBinding), &Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData[] = {
		{ "Comment", "/** When CacheValues is called, was this a particle attribute?*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "When CacheValues is called, was this a particle attribute?" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_SetBit(void* Obj)
	{
		((FNiagaraVariableAttributeBinding*)Obj)->bIsCachedParticleValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue = { "bIsCachedParticleValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVariableAttributeBinding), &Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_ParamMapVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_DataSetVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_RootVariable,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BoundVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_CachedDisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_BindingSourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bBindingExistsOnSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewProp_bIsCachedParticleValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableAttributeBinding",
		sizeof(FNiagaraVariableAttributeBinding),
		alignof(FNiagaraVariableAttributeBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding;
class UScriptStruct* FNiagaraMaterialAttributeBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMaterialAttributeBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMaterialAttributeBinding>()
{
	return FNiagaraMaterialAttributeBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedNiagaraVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedNiagaraVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraChildVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NiagaraChildVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMaterialAttributeBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName = { "MaterialParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, MaterialParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable = { "NiagaraVariable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, NiagaraVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable = { "ResolvedNiagaraVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable = { "NiagaraChildVariable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMaterialAttributeBinding, NiagaraChildVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable_MetaData)) }; // 1114376608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_MaterialParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_ResolvedNiagaraVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewProp_NiagaraChildVariable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMaterialAttributeBinding",
		sizeof(FNiagaraMaterialAttributeBinding),
		alignof(FNiagaraMaterialAttributeBinding),
		Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding;
class UScriptStruct* FNiagaraVariableDataInterfaceBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableDataInterfaceBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableDataInterfaceBinding>()
{
	return FNiagaraVariableDataInterfaceBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundVariable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableDataInterfaceBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable = { "BoundVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableDataInterfaceBinding, BoundVariable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewProp_BoundVariable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableDataInterfaceBinding",
		sizeof(FNiagaraVariableDataInterfaceBinding),
		alignof(FNiagaraVariableDataInterfaceBinding),
		Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding;
class UScriptStruct* FNiagaraScriptVariableBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptVariableBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptVariableBinding>()
{
	return FNiagaraScriptVariableBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Primarily a wrapper around an FName to be used for customizations in the Selected Details panel \n    to select a default binding to initialize module inputs. The customization implementation\n    is FNiagaraScriptVariableBindingCustomization. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Primarily a wrapper around an FName to be used for customizations in the Selected Details panel\n   to select a default binding to initialize module inputs. The customization implementation\n   is FNiagaraScriptVariableBindingCustomization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptVariableBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptVariableBinding, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptVariableBinding",
		sizeof(FNiagaraScriptVariableBinding),
		alignof(FNiagaraScriptVariableBinding),
		Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding;
class UScriptStruct* FNiagaraUserParameterBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUserParameterBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUserParameterBinding>()
{
	return FNiagaraUserParameterBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUserParameterBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "User Parameter" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraUserParameterBinding, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter_MetaData)) }; // 2575088255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewProp_Parameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraUserParameterBinding",
		sizeof(FNiagaraUserParameterBinding),
		alignof(FNiagaraUserParameterBinding),
		Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode;
	static UEnum* ENiagaraLegacyTrailWidthMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraLegacyTrailWidthMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraLegacyTrailWidthMode>()
	{
		return ENiagaraLegacyTrailWidthMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enumerators[] = {
		{ "ENiagaraLegacyTrailWidthMode::FromCentre", (int64)ENiagaraLegacyTrailWidthMode::FromCentre },
		{ "ENiagaraLegacyTrailWidthMode::FromFirst", (int64)ENiagaraLegacyTrailWidthMode::FromFirst },
		{ "ENiagaraLegacyTrailWidthMode::FromSecond", (int64)ENiagaraLegacyTrailWidthMode::FromSecond },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \nControls the way that the width scale property affects animation trails. \nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara.\n*/" },
		{ "FromCentre.Name", "ENiagaraLegacyTrailWidthMode::FromCentre" },
		{ "FromFirst.Name", "ENiagaraLegacyTrailWidthMode::FromFirst" },
		{ "FromSecond.Name", "ENiagaraLegacyTrailWidthMode::FromSecond" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Controls the way that the width scale property affects animation trails.\nOnly used for Legacy Anim Trail support when converting from Cascade to Niagara." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraLegacyTrailWidthMode",
		"ENiagaraLegacyTrailWidthMode",
		Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraLegacyTrailWidthMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompileDependency;
class UScriptStruct* FNiagaraCompileDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompileDependency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompileDependency"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompileDependency>()
{
	return FNiagaraCompileDependency::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkerErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LinkerErrorMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StackGuids_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackGuids_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StackGuids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependentVariable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DependentVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDependentVariableFromCustomIterationNamespace_MetaData[];
#endif
		static void NewProp_bDependentVariableFromCustomIterationNamespace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDependentVariableFromCustomIterationNamespace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Records necessary information to verify that this will link properly and trace where that linkage dependency exists. */" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "Records necessary information to verify that this will link properly and trace where that linkage dependency exists." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompileDependency>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData[] = {
		{ "Comment", "/* The message itself*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The message itself" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage = { "LinkerErrorMessage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileDependency, LinkerErrorMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData[] = {
		{ "Comment", "/** The node guid that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The node guid that generated the compile event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileDependency, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData[] = {
		{ "Comment", "/** The pin persistent id that generated the compile event*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The pin persistent id that generated the compile event" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid = { "PinGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileDependency, PinGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_Inner = { "StackGuids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData[] = {
		{ "Comment", "/** The compile stack frame of node id's*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The compile stack frame of node id's" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids = { "StackGuids", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileDependency, StackGuids), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData[] = {
		{ "Comment", "/** The variable we are dependent on.*/" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "ToolTip", "The variable we are dependent on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable = { "DependentVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompileDependency, DependentVariable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace_SetBit(void* Obj)
	{
		((FNiagaraCompileDependency*)Obj)->bDependentVariableFromCustomIterationNamespace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace = { "bDependentVariableFromCustomIterationNamespace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraCompileDependency), &Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_LinkerErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_NodeGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_PinGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_StackGuids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_DependentVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewProp_bDependentVariableFromCustomIterationNamespace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCompileDependency",
		sizeof(FNiagaraCompileDependency),
		alignof(FNiagaraCompileDependency),
		Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCompileDependency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSystemInstanceState;
	static UEnum* ENiagaraSystemInstanceState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSystemInstanceState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSystemInstanceState>()
	{
		return ENiagaraSystemInstanceState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enumerators[] = {
		{ "ENiagaraSystemInstanceState::None", (int64)ENiagaraSystemInstanceState::None },
		{ "ENiagaraSystemInstanceState::PendingSpawn", (int64)ENiagaraSystemInstanceState::PendingSpawn },
		{ "ENiagaraSystemInstanceState::PendingSpawnPaused", (int64)ENiagaraSystemInstanceState::PendingSpawnPaused },
		{ "ENiagaraSystemInstanceState::Spawning", (int64)ENiagaraSystemInstanceState::Spawning },
		{ "ENiagaraSystemInstanceState::Running", (int64)ENiagaraSystemInstanceState::Running },
		{ "ENiagaraSystemInstanceState::Paused", (int64)ENiagaraSystemInstanceState::Paused },
		{ "ENiagaraSystemInstanceState::Num", (int64)ENiagaraSystemInstanceState::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "None.Name", "ENiagaraSystemInstanceState::None" },
		{ "Num.Name", "ENiagaraSystemInstanceState::Num" },
		{ "Paused.Name", "ENiagaraSystemInstanceState::Paused" },
		{ "PendingSpawn.Name", "ENiagaraSystemInstanceState::PendingSpawn" },
		{ "PendingSpawnPaused.Name", "ENiagaraSystemInstanceState::PendingSpawnPaused" },
		{ "Running.Name", "ENiagaraSystemInstanceState::Running" },
		{ "Spawning.Name", "ENiagaraSystemInstanceState::Spawning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraSystemInstanceState",
		"ENiagaraSystemInstanceState",
		Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSystemInstanceState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSystemInstanceState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraFunctionDebugState;
	static UEnum* ENiagaraFunctionDebugState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraFunctionDebugState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraFunctionDebugState>()
	{
		return ENiagaraFunctionDebugState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enumerators[] = {
		{ "ENiagaraFunctionDebugState::NoDebug", (int64)ENiagaraFunctionDebugState::NoDebug },
		{ "ENiagaraFunctionDebugState::Basic", (int64)ENiagaraFunctionDebugState::Basic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enum_MetaDataParams[] = {
		{ "Basic.Name", "ENiagaraFunctionDebugState::Basic" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "NoDebug.Name", "ENiagaraFunctionDebugState::NoDebug" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraFunctionDebugState",
		"ENiagaraFunctionDebugState",
		Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraFunctionDebugState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraFunctionDebugState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage;
	static UEnum* ENiagaraGpuComputeTickStage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraGpuComputeTickStage"));
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraGpuComputeTickStage::Type>()
	{
		return ENiagaraGpuComputeTickStage_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enumerators[] = {
		{ "ENiagaraGpuComputeTickStage::PreInitViews", (int64)ENiagaraGpuComputeTickStage::PreInitViews },
		{ "ENiagaraGpuComputeTickStage::PostInitViews", (int64)ENiagaraGpuComputeTickStage::PostInitViews },
		{ "ENiagaraGpuComputeTickStage::PostOpaqueRender", (int64)ENiagaraGpuComputeTickStage::PostOpaqueRender },
		{ "ENiagaraGpuComputeTickStage::Max", (int64)ENiagaraGpuComputeTickStage::Max },
		{ "ENiagaraGpuComputeTickStage::First", (int64)ENiagaraGpuComputeTickStage::First },
		{ "ENiagaraGpuComputeTickStage::Last", (int64)ENiagaraGpuComputeTickStage::Last },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum used to track stage that GPU compute proxies will execute in. */" },
		{ "First.hidden", "" },
		{ "First.Name", "ENiagaraGpuComputeTickStage::First" },
		{ "Last.hidden", "" },
		{ "Last.Name", "ENiagaraGpuComputeTickStage::Last" },
		{ "Max.hidden", "" },
		{ "Max.Name", "ENiagaraGpuComputeTickStage::Max" },
		{ "ModuleRelativePath", "Public/NiagaraCommon.h" },
		{ "PostInitViews.Name", "ENiagaraGpuComputeTickStage::PostInitViews" },
		{ "PostOpaqueRender.Name", "ENiagaraGpuComputeTickStage::PostOpaqueRender" },
		{ "PreInitViews.Name", "ENiagaraGpuComputeTickStage::PreInitViews" },
		{ "ToolTip", "Enum used to track stage that GPU compute proxies will execute in." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraGpuComputeTickStage",
		"ENiagaraGpuComputeTickStage::Type",
		Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraGpuComputeTickStage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::EnumInfo[] = {
		{ ENiagaraBaseTypes_StaticEnum, TEXT("ENiagaraBaseTypes"), &Z_Registration_Info_UEnum_ENiagaraBaseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1835655677U) },
		{ ENiagaraGpuBufferFormat_StaticEnum, TEXT("ENiagaraGpuBufferFormat"), &Z_Registration_Info_UEnum_ENiagaraGpuBufferFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2870428067U) },
		{ ENiagaraGpuSyncMode_StaticEnum, TEXT("ENiagaraGpuSyncMode"), &Z_Registration_Info_UEnum_ENiagaraGpuSyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1841721869U) },
		{ ENiagaraMipMapGeneration_StaticEnum, TEXT("ENiagaraMipMapGeneration"), &Z_Registration_Info_UEnum_ENiagaraMipMapGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4040815115U) },
		{ ENiagaraDefaultMode_StaticEnum, TEXT("ENiagaraDefaultMode"), &Z_Registration_Info_UEnum_ENiagaraDefaultMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 465618061U) },
		{ ENiagaraDefaultRendererMotionVectorSetting_StaticEnum, TEXT("ENiagaraDefaultRendererMotionVectorSetting"), &Z_Registration_Info_UEnum_ENiagaraDefaultRendererMotionVectorSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 966593994U) },
		{ ENiagaraRendererMotionVectorSetting_StaticEnum, TEXT("ENiagaraRendererMotionVectorSetting"), &Z_Registration_Info_UEnum_ENiagaraRendererMotionVectorSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4146911906U) },
		{ ENiagaraSimTarget_StaticEnum, TEXT("ENiagaraSimTarget"), &Z_Registration_Info_UEnum_ENiagaraSimTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 348263643U) },
		{ ENiagaraAgeUpdateMode_StaticEnum, TEXT("ENiagaraAgeUpdateMode"), &Z_Registration_Info_UEnum_ENiagaraAgeUpdateMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1189200022U) },
		{ ENiagaraStatEvaluationType_StaticEnum, TEXT("ENiagaraStatEvaluationType"), &Z_Registration_Info_UEnum_ENiagaraStatEvaluationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 149061318U) },
		{ ENiagaraStatDisplayMode_StaticEnum, TEXT("ENiagaraStatDisplayMode"), &Z_Registration_Info_UEnum_ENiagaraStatDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859203233U) },
		{ ENiagaraDataSetType_StaticEnum, TEXT("ENiagaraDataSetType"), &Z_Registration_Info_UEnum_ENiagaraDataSetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3892718668U) },
		{ ENiagaraInputNodeUsage_StaticEnum, TEXT("ENiagaraInputNodeUsage"), &Z_Registration_Info_UEnum_ENiagaraInputNodeUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2971802532U) },
		{ ENiagaraScriptCompileStatus_StaticEnum, TEXT("ENiagaraScriptCompileStatus"), &Z_Registration_Info_UEnum_ENiagaraScriptCompileStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2615206437U) },
		{ ENiagaraScriptUsage_StaticEnum, TEXT("ENiagaraScriptUsage"), &Z_Registration_Info_UEnum_ENiagaraScriptUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2772325717U) },
		{ ENiagaraCompileUsageStaticSwitch_StaticEnum, TEXT("ENiagaraCompileUsageStaticSwitch"), &Z_Registration_Info_UEnum_ENiagaraCompileUsageStaticSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1617473287U) },
		{ ENiagaraScriptContextStaticSwitch_StaticEnum, TEXT("ENiagaraScriptContextStaticSwitch"), &Z_Registration_Info_UEnum_ENiagaraScriptContextStaticSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1734269713U) },
		{ ENiagaraScriptGroup_StaticEnum, TEXT("ENiagaraScriptGroup"), &Z_Registration_Info_UEnum_ENiagaraScriptGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1662954733U) },
		{ ENiagaraBindingSource_StaticEnum, TEXT("ENiagaraBindingSource"), &Z_Registration_Info_UEnum_ENiagaraBindingSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1423730133U) },
		{ ENiagaraRendererSourceDataMode_StaticEnum, TEXT("ENiagaraRendererSourceDataMode"), &Z_Registration_Info_UEnum_ENiagaraRendererSourceDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 919437016U) },
		{ ENiagaraLegacyTrailWidthMode_StaticEnum, TEXT("ENiagaraLegacyTrailWidthMode"), &Z_Registration_Info_UEnum_ENiagaraLegacyTrailWidthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2622323433U) },
		{ ENiagaraSystemInstanceState_StaticEnum, TEXT("ENiagaraSystemInstanceState"), &Z_Registration_Info_UEnum_ENiagaraSystemInstanceState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3208980430U) },
		{ ENiagaraFunctionDebugState_StaticEnum, TEXT("ENiagaraFunctionDebugState"), &Z_Registration_Info_UEnum_ENiagaraFunctionDebugState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3149775033U) },
		{ ENiagaraGpuComputeTickStage_StaticEnum, TEXT("ENiagaraGpuComputeTickStage"), &Z_Registration_Info_UEnum_ENiagaraGpuComputeTickStage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 397138429U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDataSetID::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataSetID_Statics::NewStructOps, TEXT("NiagaraDataSetID"), &Z_Registration_Info_UScriptStruct_NiagaraDataSetID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataSetID), 1812770562U) },
		{ FNiagaraDataSetProperties::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataSetProperties_Statics::NewStructOps, TEXT("NiagaraDataSetProperties"), &Z_Registration_Info_UScriptStruct_NiagaraDataSetProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataSetProperties), 3083523917U) },
		{ FNiagaraScriptDataUsageInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo_Statics::NewStructOps, TEXT("NiagaraScriptDataUsageInfo"), &Z_Registration_Info_UScriptStruct_NiagaraScriptDataUsageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptDataUsageInfo), 2203210763U) },
		{ FNiagaraFunctionSignature::StaticStruct, Z_Construct_UScriptStruct_FNiagaraFunctionSignature_Statics::NewStructOps, TEXT("NiagaraFunctionSignature"), &Z_Registration_Info_UScriptStruct_NiagaraFunctionSignature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraFunctionSignature), 2580596167U) },
		{ FNiagaraScriptDataInterfaceInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo_Statics::NewStructOps, TEXT("NiagaraScriptDataInterfaceInfo"), &Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptDataInterfaceInfo), 1256432025U) },
		{ FNiagaraScriptDataInterfaceCompileInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo_Statics::NewStructOps, TEXT("NiagaraScriptDataInterfaceCompileInfo"), &Z_Registration_Info_UScriptStruct_NiagaraScriptDataInterfaceCompileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptDataInterfaceCompileInfo), 1001342821U) },
		{ FNiagaraStatScope::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStatScope_Statics::NewStructOps, TEXT("NiagaraStatScope"), &Z_Registration_Info_UScriptStruct_NiagaraStatScope, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStatScope), 3655907096U) },
		{ FVMFunctionSpecifier::StaticStruct, Z_Construct_UScriptStruct_FVMFunctionSpecifier_Statics::NewStructOps, TEXT("VMFunctionSpecifier"), &Z_Registration_Info_UScriptStruct_VMFunctionSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVMFunctionSpecifier), 298083807U) },
		{ FVMExternalFunctionBindingInfo::StaticStruct, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo_Statics::NewStructOps, TEXT("VMExternalFunctionBindingInfo"), &Z_Registration_Info_UScriptStruct_VMExternalFunctionBindingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVMExternalFunctionBindingInfo), 207317690U) },
		{ FNiagaraSystemUpdateContext::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext_Statics::NewStructOps, TEXT("NiagaraSystemUpdateContext"), &Z_Registration_Info_UScriptStruct_NiagaraSystemUpdateContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSystemUpdateContext), 1401210665U) },
		{ FNiagaraVariableInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableInfo_Statics::NewStructOps, TEXT("NiagaraVariableInfo"), &Z_Registration_Info_UScriptStruct_NiagaraVariableInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableInfo), 378733228U) },
		{ FNiagaraVariableAttributeBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding_Statics::NewStructOps, TEXT("NiagaraVariableAttributeBinding"), &Z_Registration_Info_UScriptStruct_NiagaraVariableAttributeBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableAttributeBinding), 2514448469U) },
		{ FNiagaraMaterialAttributeBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding_Statics::NewStructOps, TEXT("NiagaraMaterialAttributeBinding"), &Z_Registration_Info_UScriptStruct_NiagaraMaterialAttributeBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMaterialAttributeBinding), 3175080182U) },
		{ FNiagaraVariableDataInterfaceBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableDataInterfaceBinding_Statics::NewStructOps, TEXT("NiagaraVariableDataInterfaceBinding"), &Z_Registration_Info_UScriptStruct_NiagaraVariableDataInterfaceBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableDataInterfaceBinding), 3612780882U) },
		{ FNiagaraScriptVariableBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptVariableBinding_Statics::NewStructOps, TEXT("NiagaraScriptVariableBinding"), &Z_Registration_Info_UScriptStruct_NiagaraScriptVariableBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptVariableBinding), 3697348502U) },
		{ FNiagaraUserParameterBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraUserParameterBinding_Statics::NewStructOps, TEXT("NiagaraUserParameterBinding"), &Z_Registration_Info_UScriptStruct_NiagaraUserParameterBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraUserParameterBinding), 1724214256U) },
		{ FNiagaraCompileDependency::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompileDependency_Statics::NewStructOps, TEXT("NiagaraCompileDependency"), &Z_Registration_Info_UScriptStruct_NiagaraCompileDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompileDependency), 3696746606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_3636724955(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
