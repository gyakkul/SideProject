// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTableTransform.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "WaveTableSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableTransform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_WaveTable();
	WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableCurve();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableSettings();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableTransform;
class UScriptStruct* FWaveTableTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableTransform, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableTransform"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableTransform.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableTransform>()
{
	return FWaveTableTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveTableTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Curve_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scalar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveCustom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveCustom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveShared_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurveShared;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WaveTable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTableSettings;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FinalValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableTransform>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The curve to apply when transforming the output. */" },
		{ "DisplayName", "Curve Type" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "The curve to apply when transforming the output." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, Curve), Z_Construct_UEnum_WaveTable_EWaveTableCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_MetaData)) }; // 1596869494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar_MetaData[] = {
		{ "Category", "Input" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** When curve set to log, exponential or exponential inverse, value is factor 'b' in following equations with output 'y' and input 'x':\n\x09 *  Exponential: y = x * 10^-b(1-x)\n\x09 *  Exponential (Inverse): y = ((x - 1) * 10^(-bx)) + 1\n\x09 *  Logarithmic: y = b * log(x) + 1\n\x09 */" },
		{ "DisplayName", "Exponential Scalar" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "When curve set to log, exponential or exponential inverse, value is factor 'b' in following equations with output 'y' and input 'x':\nExponential: y = x * 10^-b(1-x)\nExponential (Inverse): y = ((x - 1) * 10^(-bx)) + 1\nLogarithmic: y = b * log(x) + 1" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, Scalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom_MetaData[] = {
		{ "Comment", "/** Custom curve to apply if output curve type is set to 'Custom.' */" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "Custom curve to apply if output curve type is set to 'Custom.'" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom = { "CurveCustom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, CurveCustom), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared_MetaData[] = {
		{ "Category", "Curve" },
		{ "Comment", "/** Asset curve reference to apply if output curve type is set to 'Shared.' */" },
		{ "DisplayName", "Asset" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
		{ "ToolTip", "Asset curve reference to apply if output curve type is set to 'Shared.'" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared = { "CurveShared", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, CurveShared), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_Inner = { "WaveTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable = { "WaveTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, WaveTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings_MetaData[] = {
		{ "Category", "WaveTable" },
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings = { "WaveTableSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, WaveTableSettings), Z_Construct_UScriptStruct_FWaveTableSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings_MetaData)) }; // 1070595053
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaveTableTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue = { "FinalValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableTransform, FinalValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_Scalar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveCustom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_CurveShared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTable,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_WaveTableSettings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewProp_FinalValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		&NewStructOps,
		"WaveTableTransform",
		sizeof(FWaveTableTransform),
		alignof(FWaveTableTransform),
		Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveTableTransform.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics::ScriptStructInfo[] = {
		{ FWaveTableTransform::StaticStruct, Z_Construct_UScriptStruct_FWaveTableTransform_Statics::NewStructOps, TEXT("WaveTableTransform"), &Z_Registration_Info_UScriptStruct_WaveTableTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableTransform), 1121844760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_1134566502(TEXT("/Script/WaveTable"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
