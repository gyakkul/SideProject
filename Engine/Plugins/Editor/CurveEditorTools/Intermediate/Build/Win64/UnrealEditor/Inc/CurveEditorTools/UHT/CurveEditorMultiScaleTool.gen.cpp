// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/CurveEditorMultiScaleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorMultiScaleTool() {}
// Cross Module References
	CURVEEDITORTOOLS_API UEnum* Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType();
	CURVEEDITORTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FMultiScaleToolOptions();
	UPackage* Z_Construct_UPackage__Script_CurveEditorTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiScalePivotType;
	static UEnum* EMultiScalePivotType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultiScalePivotType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultiScalePivotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("EMultiScalePivotType"));
		}
		return Z_Registration_Info_UEnum_EMultiScalePivotType.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<EMultiScalePivotType>()
	{
		return EMultiScalePivotType_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enumerators[] = {
		{ "EMultiScalePivotType::Average", (int64)EMultiScalePivotType::Average },
		{ "EMultiScalePivotType::BoundCenter", (int64)EMultiScalePivotType::BoundCenter },
		{ "EMultiScalePivotType::FirstKey", (int64)EMultiScalePivotType::FirstKey },
		{ "EMultiScalePivotType::LastKey", (int64)EMultiScalePivotType::LastKey },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enum_MetaDataParams[] = {
		{ "Average.Name", "EMultiScalePivotType::Average" },
		{ "BoundCenter.Name", "EMultiScalePivotType::BoundCenter" },
		{ "FirstKey.Name", "EMultiScalePivotType::FirstKey" },
		{ "LastKey.Name", "EMultiScalePivotType::LastKey" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorMultiScaleTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		"EMultiScalePivotType",
		"EMultiScalePivotType",
		Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType()
	{
		if (!Z_Registration_Info_UEnum_EMultiScalePivotType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiScalePivotType.InnerSingleton, Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultiScalePivotType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiScaleToolOptions;
class UScriptStruct* FMultiScaleToolOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiScaleToolOptions, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("MultiScaleToolOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.OuterSingleton;
}
template<> CURVEEDITORTOOLS_API UScriptStruct* StaticStruct<FMultiScaleToolOptions>()
{
	return FMultiScaleToolOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PivotType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PivotType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tools/CurveEditorMultiScaleTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiScaleToolOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_XScale_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorMultiScaleTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiScaleToolOptions, XScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_XScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_XScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_YScale_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorMultiScaleTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiScaleToolOptions, YScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_YScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_YScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorMultiScaleTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType = { "PivotType", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultiScaleToolOptions, PivotType), Z_Construct_UEnum_CurveEditorTools_EMultiScalePivotType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType_MetaData)) }; // 1154179058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_XScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_YScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewProp_PivotType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		&NewStructOps,
		"MultiScaleToolOptions",
		sizeof(FMultiScaleToolOptions),
		alignof(FMultiScaleToolOptions),
		Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiScaleToolOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.InnerSingleton, Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultiScaleToolOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::EnumInfo[] = {
		{ EMultiScalePivotType_StaticEnum, TEXT("EMultiScalePivotType"), &Z_Registration_Info_UEnum_EMultiScalePivotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1154179058U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::ScriptStructInfo[] = {
		{ FMultiScaleToolOptions::StaticStruct, Z_Construct_UScriptStruct_FMultiScaleToolOptions_Statics::NewStructOps, TEXT("MultiScaleToolOptions"), &Z_Registration_Info_UScriptStruct_MultiScaleToolOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiScaleToolOptions), 3361579243U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_2658379166(TEXT("/Script/CurveEditorTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorMultiScaleTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
