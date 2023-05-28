// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraHlslTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraHlslTranslator() {}
// Cross Module References
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode;
	static UEnum* ENiagaraDataSetAccessMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraDataSetAccessMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraDataSetAccessMode>()
	{
		return ENiagaraDataSetAccessMode_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enumerators[] = {
		{ "ENiagaraDataSetAccessMode::AppendConsume", (int64)ENiagaraDataSetAccessMode::AppendConsume },
		{ "ENiagaraDataSetAccessMode::Direct", (int64)ENiagaraDataSetAccessMode::Direct },
		{ "ENiagaraDataSetAccessMode::Num", (int64)ENiagaraDataSetAccessMode::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enum_MetaDataParams[] = {
		{ "AppendConsume.Comment", "/** Data set reads and writes use shared counters to add and remove the end of available data. Writes are conditional and read */" },
		{ "AppendConsume.Name", "ENiagaraDataSetAccessMode::AppendConsume" },
		{ "AppendConsume.ToolTip", "Data set reads and writes use shared counters to add and remove the end of available data. Writes are conditional and read" },
		{ "Direct.Comment", "/** Data set is accessed directly at a specific index. */" },
		{ "Direct.Name", "ENiagaraDataSetAccessMode::Direct" },
		{ "Direct.ToolTip", "Data set is accessed directly at a specific index." },
		{ "ModuleRelativePath", "Private/NiagaraHlslTranslator.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ENiagaraDataSetAccessMode::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraDataSetAccessMode",
		"ENiagaraDataSetAccessMode",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraDataSetAccessMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h_Statics::EnumInfo[] = {
		{ ENiagaraDataSetAccessMode_StaticEnum, TEXT("ENiagaraDataSetAccessMode"), &Z_Registration_Info_UEnum_ENiagaraDataSetAccessMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 820023073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h_1867439582(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraHlslTranslator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
