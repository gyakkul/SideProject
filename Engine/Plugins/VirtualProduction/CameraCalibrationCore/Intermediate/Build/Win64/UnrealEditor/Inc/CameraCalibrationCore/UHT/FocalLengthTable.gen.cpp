// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/FocalLengthTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFocalLengthTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthZoomPoint();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint;
class UScriptStruct* FFocalLengthZoomPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthZoomPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("FocalLengthZoomPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FFocalLengthZoomPoint>()
{
	return FFocalLengthZoomPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLengthInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCalibrationPoint_MetaData[];
#endif
		static void NewProp_bIsCalibrationPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCalibrationPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Focal length associated to a zoom value\n */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Focal length associated to a zoom value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocalLengthZoomPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_Zoom_MetaData[] = {
		{ "Comment", "/** Input zoom value for this point */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Input zoom value for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthZoomPoint, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_FocalLengthInfo_MetaData[] = {
		{ "Comment", "/** Value expected to be normalized (unitless) */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Value expected to be normalized (unitless)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_FocalLengthInfo = { "FocalLengthInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthZoomPoint, FocalLengthInfo), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_FocalLengthInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_FocalLengthInfo_MetaData)) }; // 256946379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData[] = {
		{ "Comment", "/** Whether this focal length was added along calibrated distortion parameters */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Whether this focal length was added along calibrated distortion parameters" },
	};
#endif
	void Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint_SetBit(void* Obj)
	{
		((FFocalLengthZoomPoint*)Obj)->bIsCalibrationPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint = { "bIsCalibrationPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFocalLengthZoomPoint), &Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_FocalLengthInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewProp_bIsCalibrationPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"FocalLengthZoomPoint",
		sizeof(FFocalLengthZoomPoint),
		alignof(FFocalLengthZoomPoint),
		Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthZoomPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.InnerSingleton, Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFocalLengthFocusPoint>() == std::is_polymorphic<FBaseFocusPoint>(), "USTRUCT FFocalLengthFocusPoint cannot be polymorphic unless super FBaseFocusPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint;
class UScriptStruct* FFocalLengthFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("FocalLengthFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FFocalLengthFocusPoint>()
{
	return FFocalLengthFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fx_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fy;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ZoomPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Contains list of focal length points associated to zoom value\n */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Contains list of focal length points associated to zoom value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocalLengthFocusPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Input focus for this point */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Input focus for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthFocusPoint, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fx_MetaData[] = {
		{ "Comment", "/** Curves mapping normalized Fx value to Zoom value (Time) */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Curves mapping normalized Fx value to Zoom value (Time)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fx = { "Fx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthFocusPoint, Fx), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fx_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fy_MetaData[] = {
		{ "Comment", "/** Curves mapping normalized Fy value to Zoom value (Time) */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Curves mapping normalized Fy value to Zoom value (Time)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fy = { "Fy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthFocusPoint, Fy), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fy_MetaData)) }; // 778017158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints_Inner = { "ZoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFocalLengthZoomPoint, METADATA_PARAMS(nullptr, 0) }; // 2755015898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints_MetaData[] = {
		{ "Comment", "/** Used to know points that are locked */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Used to know points that are locked" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints = { "ZoomPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthFocusPoint, ZoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints_MetaData)) }; // 2755015898
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_Fy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewProp_ZoomPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseFocusPoint,
		&NewStructOps,
		"FocalLengthFocusPoint",
		sizeof(FFocalLengthFocusPoint),
		alignof(FFocalLengthFocusPoint),
		Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFocalLengthTable>() == std::is_polymorphic<FBaseLensTable>(), "USTRUCT FFocalLengthTable cannot be polymorphic unless super FBaseLensTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocalLengthTable;
class UScriptStruct* FFocalLengthTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocalLengthTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocalLengthTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocalLengthTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("FocalLengthTable"));
	}
	return Z_Registration_Info_UScriptStruct_FocalLengthTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FFocalLengthTable>()
{
	return FFocalLengthTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocalLengthTable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Focal Length table containing FxFy values for each focus and zoom input values\n */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Focal Length table containing FxFy values for each focus and zoom input values" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocalLengthTable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFocalLengthFocusPoint, METADATA_PARAMS(nullptr, 0) }; // 1760272969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints_MetaData[] = {
		{ "Comment", "/** Lists of focus points */" },
		{ "ModuleRelativePath", "Public/Tables/FocalLengthTable.h" },
		{ "ToolTip", "Lists of focus points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFocalLengthTable, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints_MetaData)) }; // 1760272969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFocalLengthTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewProp_FocusPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocalLengthTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseLensTable,
		&NewStructOps,
		"FocalLengthTable",
		sizeof(FFocalLengthTable),
		alignof(FFocalLengthTable),
		Z_Construct_UScriptStruct_FFocalLengthTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocalLengthTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocalLengthTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthTable()
	{
		if (!Z_Registration_Info_UScriptStruct_FocalLengthTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocalLengthTable.InnerSingleton, Z_Construct_UScriptStruct_FFocalLengthTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocalLengthTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_FocalLengthTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_FocalLengthTable_h_Statics::ScriptStructInfo[] = {
		{ FFocalLengthZoomPoint::StaticStruct, Z_Construct_UScriptStruct_FFocalLengthZoomPoint_Statics::NewStructOps, TEXT("FocalLengthZoomPoint"), &Z_Registration_Info_UScriptStruct_FocalLengthZoomPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocalLengthZoomPoint), 2755015898U) },
		{ FFocalLengthFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FFocalLengthFocusPoint_Statics::NewStructOps, TEXT("FocalLengthFocusPoint"), &Z_Registration_Info_UScriptStruct_FocalLengthFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocalLengthFocusPoint), 1760272969U) },
		{ FFocalLengthTable::StaticStruct, Z_Construct_UScriptStruct_FFocalLengthTable_Statics::NewStructOps, TEXT("FocalLengthTable"), &Z_Registration_Info_UScriptStruct_FocalLengthTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocalLengthTable), 533134938U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_FocalLengthTable_h_2111206289(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_FocalLengthTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_FocalLengthTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
