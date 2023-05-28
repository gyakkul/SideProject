// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/CurveEditorTransformTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorTransformTool() {}
// Cross Module References
	CURVEEDITORTOOLS_API UEnum* Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType();
	CURVEEDITORTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FTransformToolOptions();
	UPackage* Z_Construct_UPackage__Script_CurveEditorTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolTransformInterpType;
	static UEnum* EToolTransformInterpType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolTransformInterpType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolTransformInterpType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("EToolTransformInterpType"));
		}
		return Z_Registration_Info_UEnum_EToolTransformInterpType.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UEnum* StaticEnum<EToolTransformInterpType>()
	{
		return EToolTransformInterpType_StaticEnum();
	}
	struct Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enumerators[] = {
		{ "EToolTransformInterpType::Linear", (int64)EToolTransformInterpType::Linear },
		{ "EToolTransformInterpType::Sinusoidal", (int64)EToolTransformInterpType::Sinusoidal },
		{ "EToolTransformInterpType::Cubic", (int64)EToolTransformInterpType::Cubic },
		{ "EToolTransformInterpType::CircularIn", (int64)EToolTransformInterpType::CircularIn },
		{ "EToolTransformInterpType::CircularOut", (int64)EToolTransformInterpType::CircularOut },
		{ "EToolTransformInterpType::ExpIn", (int64)EToolTransformInterpType::ExpIn },
		{ "EToolTransformInterpType::ExpOut", (int64)EToolTransformInterpType::ExpOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enum_MetaDataParams[] = {
		{ "CircularIn.Name", "EToolTransformInterpType::CircularIn" },
		{ "CircularOut.Name", "EToolTransformInterpType::CircularOut" },
		{ "Cubic.Name", "EToolTransformInterpType::Cubic" },
		{ "ExpIn.Name", "EToolTransformInterpType::ExpIn" },
		{ "ExpOut.Name", "EToolTransformInterpType::ExpOut" },
		{ "Linear.Name", "EToolTransformInterpType::Linear" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
		{ "Sinusoidal.Name", "EToolTransformInterpType::Sinusoidal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		"EToolTransformInterpType",
		"EToolTransformInterpType",
		Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType()
	{
		if (!Z_Registration_Info_UEnum_EToolTransformInterpType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolTransformInterpType.InnerSingleton, Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolTransformInterpType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformToolOptions;
class UScriptStruct* FTransformToolOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformToolOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformToolOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformToolOptions, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("TransformToolOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TransformToolOptions.OuterSingleton;
}
template<> CURVEEDITORTOOLS_API UScriptStruct* StaticStruct<FTransformToolOptions>()
{
	return FTransformToolOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTransformToolOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpperBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LowerBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCenterX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleCenterX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCenterY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleCenterY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffInterpType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffInterpType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffInterpType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformToolOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_UpperBound_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_UpperBound = { "UpperBound", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, UpperBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_UpperBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_UpperBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LowerBound_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LowerBound = { "LowerBound", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, LowerBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LowerBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LowerBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LeftBound_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LeftBound = { "LeftBound", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, LeftBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LeftBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LeftBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_RightBound_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_RightBound = { "RightBound", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, RightBound), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_RightBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_RightBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterX_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterX = { "ScaleCenterX", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, ScaleCenterX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterY_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterY = { "ScaleCenterY", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, ScaleCenterY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterY_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType_MetaData[] = {
		{ "Category", "ToolOptions" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorTransformTool.h" },
		{ "ToolTip", "Interpolation type for soft selection (activate by holding ctrl)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType = { "FalloffInterpType", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTransformToolOptions, FalloffInterpType), Z_Construct_UEnum_CurveEditorTools_EToolTransformInterpType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType_MetaData)) }; // 741441789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformToolOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_UpperBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LowerBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_LeftBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_RightBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_ScaleCenterY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewProp_FalloffInterpType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformToolOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		&NewStructOps,
		"TransformToolOptions",
		sizeof(FTransformToolOptions),
		alignof(FTransformToolOptions),
		Z_Construct_UScriptStruct_FTransformToolOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformToolOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTransformToolOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TransformToolOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformToolOptions.InnerSingleton, Z_Construct_UScriptStruct_FTransformToolOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TransformToolOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::EnumInfo[] = {
		{ EToolTransformInterpType_StaticEnum, TEXT("EToolTransformInterpType"), &Z_Registration_Info_UEnum_EToolTransformInterpType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 741441789U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::ScriptStructInfo[] = {
		{ FTransformToolOptions::StaticStruct, Z_Construct_UScriptStruct_FTransformToolOptions_Statics::NewStructOps, TEXT("TransformToolOptions"), &Z_Registration_Info_UScriptStruct_TransformToolOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformToolOptions), 2823759935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_1103423495(TEXT("/Script/CurveEditorTools"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorTransformTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
