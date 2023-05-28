// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/STMapTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTMapTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDerivedDistortionData();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionData();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapZoomPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DerivedDistortionData;
class UScriptStruct* FDerivedDistortionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DerivedDistortionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DerivedDistortionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDerivedDistortionData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DerivedDistortionData"));
	}
	return Z_Registration_Info_UScriptStruct_DerivedDistortionData.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDerivedDistortionData>()
{
	return FDerivedDistortionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDerivedDistortionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortionDisplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndistortionDisplacementMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionDisplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionDisplacementMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Derived data computed from parameters or stmap\n */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Derived data computed from parameters or stmap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDerivedDistortionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionData_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Precomputed data about distortion */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Precomputed data about distortion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionData = { "DistortionData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDerivedDistortionData, DistortionData), Z_Construct_UScriptStruct_FDistortionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionData_MetaData)) }; // 2629747395
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_UndistortionDisplacementMap_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Computed displacement map based on undistortion data */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Computed displacement map based on undistortion data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_UndistortionDisplacementMap = { "UndistortionDisplacementMap", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDerivedDistortionData, UndistortionDisplacementMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_UndistortionDisplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_UndistortionDisplacementMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionDisplacementMap_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Computed displacement map based on distortion data */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Computed displacement map based on distortion data" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionDisplacementMap = { "DistortionDisplacementMap", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDerivedDistortionData, DistortionDisplacementMap), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionDisplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionDisplacementMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_UndistortionDisplacementMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewProp_DistortionDisplacementMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DerivedDistortionData",
		sizeof(FDerivedDistortionData),
		alignof(FDerivedDistortionData),
		Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDerivedDistortionData()
	{
		if (!Z_Registration_Info_UScriptStruct_DerivedDistortionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DerivedDistortionData.InnerSingleton, Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DerivedDistortionData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_STMapZoomPoint;
class UScriptStruct* FSTMapZoomPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_STMapZoomPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_STMapZoomPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTMapZoomPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("STMapZoomPoint"));
	}
	return Z_Registration_Info_UScriptStruct_STMapZoomPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSTMapZoomPoint>()
{
	return FSTMapZoomPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STMapInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_STMapInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DerivedDistortionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DerivedDistortionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCalibrationPoint_MetaData[];
#endif
		static void NewProp_bIsCalibrationPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCalibrationPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * STMap data associated to a zoom input value\n */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "STMap data associated to a zoom input value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTMapZoomPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_Zoom_MetaData[] = {
		{ "Comment", "/** Input zoom value for this point */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Input zoom value for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapZoomPoint, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_STMapInfo_MetaData[] = {
		{ "Comment", "/** Data for this zoom point */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Data for this zoom point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_STMapInfo = { "STMapInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapZoomPoint, STMapInfo), Z_Construct_UScriptStruct_FSTMapInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_STMapInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_STMapInfo_MetaData)) }; // 434622991
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_DerivedDistortionData_MetaData[] = {
		{ "Comment", "/** Derived distortion data associated with this point */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Derived distortion data associated with this point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_DerivedDistortionData = { "DerivedDistortionData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapZoomPoint, DerivedDistortionData), Z_Construct_UScriptStruct_FDerivedDistortionData, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_DerivedDistortionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_DerivedDistortionData_MetaData)) }; // 1553248318
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData[] = {
		{ "Comment", "/** Whether this point was added in calibration along distortion */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Whether this point was added in calibration along distortion" },
	};
#endif
	void Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint_SetBit(void* Obj)
	{
		((FSTMapZoomPoint*)Obj)->bIsCalibrationPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint = { "bIsCalibrationPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSTMapZoomPoint), &Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_STMapInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_DerivedDistortionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewProp_bIsCalibrationPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"STMapZoomPoint",
		sizeof(FSTMapZoomPoint),
		alignof(FSTMapZoomPoint),
		Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSTMapZoomPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_STMapZoomPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_STMapZoomPoint.InnerSingleton, Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_STMapZoomPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSTMapFocusPoint>() == std::is_polymorphic<FBaseFocusPoint>(), "USTRUCT FSTMapFocusPoint cannot be polymorphic unless super FBaseFocusPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_STMapFocusPoint;
class UScriptStruct* FSTMapFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_STMapFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_STMapFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTMapFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("STMapFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_STMapFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSTMapFocusPoint>()
{
	return FSTMapFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A data point associating focus and zoom to lens parameters\n */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "A data point associating focus and zoom to lens parameters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTMapFocusPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Input focus for this point */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Input focus for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapFocusPoint, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData[] = {
		{ "Comment", "/** Curve used to blend displacement map together to give user more flexibility */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Curve used to blend displacement map together to give user more flexibility" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_MapBlendingCurve = { "MapBlendingCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapFocusPoint, MapBlendingCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_MapBlendingCurve_MetaData)) }; // 778017158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints_Inner = { "ZoomPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSTMapZoomPoint, METADATA_PARAMS(nullptr, 0) }; // 380472429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints_MetaData[] = {
		{ "Comment", "/** Zoom points for this focus */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Zoom points for this focus" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints = { "ZoomPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapFocusPoint, ZoomPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints_MetaData)) }; // 380472429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_MapBlendingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewProp_ZoomPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseFocusPoint,
		&NewStructOps,
		"STMapFocusPoint",
		sizeof(FSTMapFocusPoint),
		alignof(FSTMapFocusPoint),
		Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSTMapFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_STMapFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_STMapFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_STMapFocusPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSTMapTable>() == std::is_polymorphic<FBaseLensTable>(), "USTRUCT FSTMapTable cannot be polymorphic unless super FBaseLensTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_STMapTable;
class UScriptStruct* FSTMapTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_STMapTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_STMapTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSTMapTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("STMapTable"));
	}
	return Z_Registration_Info_UScriptStruct_STMapTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSTMapTable>()
{
	return FSTMapTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSTMapTable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * STMap table containing list of points for each focus and zoom inputs\n */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "STMap table containing list of points for each focus and zoom inputs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSTMapTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSTMapTable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSTMapFocusPoint, METADATA_PARAMS(nullptr, 0) }; // 2647344794
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints_MetaData[] = {
		{ "Comment", "/** Lists of focus points */" },
		{ "ModuleRelativePath", "Public/Tables/STMapTable.h" },
		{ "ToolTip", "Lists of focus points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSTMapTable, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints_MetaData)) }; // 2647344794
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSTMapTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSTMapTable_Statics::NewProp_FocusPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSTMapTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseLensTable,
		&NewStructOps,
		"STMapTable",
		sizeof(FSTMapTable),
		alignof(FSTMapTable),
		Z_Construct_UScriptStruct_FSTMapTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSTMapTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSTMapTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSTMapTable()
	{
		if (!Z_Registration_Info_UScriptStruct_STMapTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_STMapTable.InnerSingleton, Z_Construct_UScriptStruct_FSTMapTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_STMapTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_STMapTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_STMapTable_h_Statics::ScriptStructInfo[] = {
		{ FDerivedDistortionData::StaticStruct, Z_Construct_UScriptStruct_FDerivedDistortionData_Statics::NewStructOps, TEXT("DerivedDistortionData"), &Z_Registration_Info_UScriptStruct_DerivedDistortionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDerivedDistortionData), 1553248318U) },
		{ FSTMapZoomPoint::StaticStruct, Z_Construct_UScriptStruct_FSTMapZoomPoint_Statics::NewStructOps, TEXT("STMapZoomPoint"), &Z_Registration_Info_UScriptStruct_STMapZoomPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTMapZoomPoint), 380472429U) },
		{ FSTMapFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FSTMapFocusPoint_Statics::NewStructOps, TEXT("STMapFocusPoint"), &Z_Registration_Info_UScriptStruct_STMapFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTMapFocusPoint), 2647344794U) },
		{ FSTMapTable::StaticStruct, Z_Construct_UScriptStruct_FSTMapTable_Statics::NewStructOps, TEXT("STMapTable"), &Z_Registration_Info_UScriptStruct_STMapTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSTMapTable), 3715282072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_STMapTable_h_2860701701(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_STMapTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_STMapTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
