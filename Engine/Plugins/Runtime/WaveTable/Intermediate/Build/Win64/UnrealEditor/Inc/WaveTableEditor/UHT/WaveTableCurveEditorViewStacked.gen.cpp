// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTableCurveEditorViewStacked.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableCurveEditorViewStacked() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WaveTableEditor();
	WAVETABLEEDITOR_API UEnum* Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveTableCurveSource;
	static UEnum* EWaveTableCurveSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableCurveSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveTableCurveSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource, (UObject*)Z_Construct_UPackage__Script_WaveTableEditor(), TEXT("EWaveTableCurveSource"));
		}
		return Z_Registration_Info_UEnum_EWaveTableCurveSource.OuterSingleton;
	}
	template<> WAVETABLEEDITOR_API UEnum* StaticEnum<EWaveTableCurveSource>()
	{
		return EWaveTableCurveSource_StaticEnum();
	}
	struct Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enumerators[] = {
		{ "EWaveTableCurveSource::Custom", (int64)EWaveTableCurveSource::Custom },
		{ "EWaveTableCurveSource::Expression", (int64)EWaveTableCurveSource::Expression },
		{ "EWaveTableCurveSource::Shared", (int64)EWaveTableCurveSource::Shared },
		{ "EWaveTableCurveSource::Unset", (int64)EWaveTableCurveSource::Unset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Name", "EWaveTableCurveSource::Custom" },
		{ "Expression.Name", "EWaveTableCurveSource::Expression" },
		{ "ModuleRelativePath", "Public/WaveTableCurveEditorViewStacked.h" },
		{ "Shared.Name", "EWaveTableCurveSource::Shared" },
		{ "Unset.Name", "EWaveTableCurveSource::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WaveTableEditor,
		nullptr,
		"EWaveTableCurveSource",
		"EWaveTableCurveSource",
		Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource()
	{
		if (!Z_Registration_Info_UEnum_EWaveTableCurveSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveTableCurveSource.InnerSingleton, Z_Construct_UEnum_WaveTableEditor_EWaveTableCurveSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveTableCurveSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h_Statics::EnumInfo[] = {
		{ EWaveTableCurveSource_StaticEnum, TEXT("EWaveTableCurveSource"), &Z_Registration_Info_UEnum_EWaveTableCurveSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 458080505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h_3442535127(TEXT("/Script/WaveTableEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTableEditor_Public_WaveTableCurveEditorViewStacked_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
