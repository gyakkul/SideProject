// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/DistortionParametersTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistortionParametersTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionZoomPoint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionZoomPoint;
class UScriptStruct* FDistortionZoomPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionZoomPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionZoomPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionZoomPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionZoomPoint"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionZoomPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionZoomPoint>()
{
	return FDistortionZoomPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Distortion parameters associated to a zoom value\n */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Distortion parameters associated to a zoom value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionZoomPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_Zoom_MetaData[] = {
		{ "Comment", "/** Input zoom value for this point */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Input zoom value for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionZoomPoint, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_DistortionInfo_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Distortion parameters for this point */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Distortion parameters for this point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_DistortionInfo = { "DistortionInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionZoomPoint, DistortionInfo), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_DistortionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_DistortionInfo_MetaData)) }; // 2058170602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewProp_DistortionInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DistortionZoomPoint",
		sizeof(FDistortionZoomPoint),
		alignof(FDistortionZoomPoint),
		Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionZoomPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionZoomPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionZoomPoint.InnerSingleton, Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionZoomPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDistortionFocusPoint>() == std::is_polymorphic<FBaseFocusPoint>(), "USTRUCT FDistortionFocusPoint cannot be polymorphic unless super FBaseFocusPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionFocusPoint;
class UScriptStruct* FDistortionFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionFocusPoint>()
{
	return FDistortionFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBlendingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapBlendingCurve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoomPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains list of distortion parameters points associated to zoom value\n */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Contains list of distortion parameters points associated to zoom value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionFocusPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Input focus value for this point */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Input focus value for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionFocusPoint, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData[] = {
		{ "Comment", "/** Curves describing desired blending between resulting displacement maps */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Curves describing desired blending between resulting displacement maps" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_MapBlendingCurve = { "MapBlendingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionFocusPoint, MapBlendingCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData)) }; // 778017158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints_Inner = { "ZoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDistortionZoomPoint, METADATA_PARAMS(nullptr, 0) }; // 3929612771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints_MetaData[] = {
		{ "Comment", "/** List of zoom points */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "List of zoom points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints = { "ZoomPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionFocusPoint, ZoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints_MetaData)) }; // 3929612771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_MapBlendingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewProp_ZoomPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseFocusPoint,
		&NewStructOps,
		"DistortionFocusPoint",
		sizeof(FDistortionFocusPoint),
		alignof(FDistortionFocusPoint),
		Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionFocusPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDistortionTable>() == std::is_polymorphic<FBaseLensTable>(), "USTRUCT FDistortionTable cannot be polymorphic unless super FBaseLensTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionTable;
class UScriptStruct* FDistortionTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionTable"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionTable>()
{
	return FDistortionTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Distortion table containing list of points for each focus and zoom input\n */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Distortion table containing list of points for each focus and zoom input" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionTable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDistortionFocusPoint, METADATA_PARAMS(nullptr, 0) }; // 183537051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints_MetaData[] = {
		{ "Comment", "/** Lists of focus points */" },
		{ "ModuleRelativePath", "Public/Tables/DistortionParametersTable.h" },
		{ "ToolTip", "Lists of focus points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionTable, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints_MetaData)) }; // 183537051
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionTable_Statics::NewProp_FocusPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseLensTable,
		&NewStructOps,
		"DistortionTable",
		sizeof(FDistortionTable),
		alignof(FDistortionTable),
		Z_Construct_UScriptStruct_FDistortionTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionTable()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionTable.InnerSingleton, Z_Construct_UScriptStruct_FDistortionTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_DistortionParametersTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_DistortionParametersTable_h_Statics::ScriptStructInfo[] = {
		{ FDistortionZoomPoint::StaticStruct, Z_Construct_UScriptStruct_FDistortionZoomPoint_Statics::NewStructOps, TEXT("DistortionZoomPoint"), &Z_Registration_Info_UScriptStruct_DistortionZoomPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionZoomPoint), 3929612771U) },
		{ FDistortionFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FDistortionFocusPoint_Statics::NewStructOps, TEXT("DistortionFocusPoint"), &Z_Registration_Info_UScriptStruct_DistortionFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionFocusPoint), 183537051U) },
		{ FDistortionTable::StaticStruct, Z_Construct_UScriptStruct_FDistortionTable_Statics::NewStructOps, TEXT("DistortionTable"), &Z_Registration_Info_UScriptStruct_DistortionTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionTable), 4287373436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_DistortionParametersTable_h_1285889725(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_DistortionParametersTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_DistortionParametersTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
