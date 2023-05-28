// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraLensDistortionAlgoPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLensDistortionAlgoPoints() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgoPoints();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgoPoints_NoRegister();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsCameraData();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsRowData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData;
class UScriptStruct* FLensDistortionPointsCalibratorPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensDistortionPointsCalibratorPointData"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensDistortionPointsCalibratorPointData>()
{
	return FLensDistortionPointsCalibratorPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point3d_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point3d;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point2d_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point2d;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the identified calibrator 2d point for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Holds information of the identified calibrator 2d point for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionPointsCalibratorPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// True if the rest of the contents are valid.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "True if the rest of the contents are valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FLensDistortionPointsCalibratorPointData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLensDistortionPointsCalibratorPointData), &Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the 3d calibrator point, as defined in the mesh\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "The name of the 3d calibrator point, as defined in the mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCalibratorPointData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point3d_MetaData[] = {
		{ "Comment", "// 3D location of the calibrator point\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "3D location of the calibrator point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point3d = { "Point3d", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCalibratorPointData, Point3d), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point3d_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point3d_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point2d_MetaData[] = {
		{ "Comment", "// 2D location of the calibrator point\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "2D location of the calibrator point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point2d = { "Point2d", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCalibratorPointData, Point2d), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point2d_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point2d_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point3d,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewProp_Point2d,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensDistortionPointsCalibratorPointData",
		sizeof(FLensDistortionPointsCalibratorPointData),
		alignof(FLensDistortionPointsCalibratorPointData),
		Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData;
class UScriptStruct* FLensDistortionPointsCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensDistortionPointsCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensDistortionPointsCameraData>()
{
	return FLensDistortionPointsCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CalibratorUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFocus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the camera pose for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Holds information of the camera pose for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionPointsCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// True if the rest of the contents are valid.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "True if the rest of the contents are valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FLensDistortionPointsCameraData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLensDistortionPointsCameraData), &Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "// The unique id of the camera object. Used to detect camera selection changes during a calibration session.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "The unique id of the camera object. Used to detect camera selection changes during a calibration session." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCameraData, UniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData[] = {
		{ "Comment", "// The unique id of the calibrator object. Used to detect calibrator selection changes during a calibration session.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "The unique id of the calibrator object. Used to detect calibrator selection changes during a calibration session." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_CalibratorUniqueId = { "CalibratorUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCameraData, CalibratorUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputFocus_MetaData[] = {
		{ "Comment", "// Input focus from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Input focus from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputFocus = { "InputFocus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCameraData, InputFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputZoom_MetaData[] = {
		{ "Comment", "// Input zoom from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Input zoom from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputZoom = { "InputZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsCameraData, InputZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputZoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_CalibratorUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewProp_InputZoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensDistortionPointsCameraData",
		sizeof(FLensDistortionPointsCameraData),
		alignof(FLensDistortionPointsCameraData),
		Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData;
class UScriptStruct* FLensDistortionPointsRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionPointsRowData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("LensDistortionPointsRowData"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FLensDistortionPointsRowData>()
{
	return FLensDistortionPointsRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorPointData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratorPointData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatternIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PatternIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the calibrator 3d point for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Holds information of the calibrator 3d point for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionPointsRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "// Index to display in list\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Index to display in list" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsRowData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CalibratorPointData_MetaData[] = {
		{ "Comment", "// The 3D-2D point correspondences for each of the calibrator points in the chosen calibrator for a single pose\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "The 3D-2D point correspondences for each of the calibrator points in the chosen calibrator for a single pose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CalibratorPointData = { "CalibratorPointData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsRowData, CalibratorPointData), Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CalibratorPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CalibratorPointData_MetaData)) }; // 3236170954
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "// Holds information of the camera data for this sample\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Holds information of the camera data for this sample" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsRowData, CameraData), Z_Construct_UScriptStruct_FLensDistortionPointsCameraData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CameraData_MetaData)) }; // 2256696313
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_PatternIndex_MetaData[] = {
		{ "Comment", "// Index of the calibration pattern this row is associated with\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Index of the calibration pattern this row is associated with" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_PatternIndex = { "PatternIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionPointsRowData, PatternIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_PatternIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_PatternIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CalibratorPointData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_CameraData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewProp_PatternIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"LensDistortionPointsRowData",
		sizeof(FLensDistortionPointsRowData),
		alignof(FLensDistortionPointsRowData),
		Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionPointsRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData.InnerSingleton;
	}
	void UCameraLensDistortionAlgoPoints::StaticRegisterNativesUCameraLensDistortionAlgoPoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensDistortionAlgoPoints);
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgoPoints_NoRegister()
	{
		return UCameraLensDistortionAlgoPoints::StaticClass();
	}
	struct Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraLensDistortionAlgo,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a lens distortion calibration algorithm. It uses 3d points (UCalibrationPointComponent)\n * specified in a selectable calibrator with features that the user can identify by clicking on the\n * simulcam viewport, and after enough points have been identified, it can calculate the lens distortion\n * and camera intrinsics that need to be applied to the associated camera in order to align its CG with \n * the live action media plate.\n *\n * Limitations:\n * - Only supports Brown\xe2\x80\x93""Conrady model lens model (FSphericalDistortionParameters)\n * - The camera or the lens should not be moved during the calibration of each lens distortion sample.\n */" },
		{ "IncludePath", "Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraLensDistortionAlgoPoints.h" },
		{ "ToolTip", "Implements a lens distortion calibration algorithm. It uses 3d points (UCalibrationPointComponent)\nspecified in a selectable calibrator with features that the user can identify by clicking on the\nsimulcam viewport, and after enough points have been identified, it can calculate the lens distortion\nand camera intrinsics that need to be applied to the associated camera in order to align its CG with\nthe live action media plate.\n\nLimitations:\n- Only supports Brown\xe2\x80\x93""Conrady model lens model (FSphericalDistortionParameters)\n- The camera or the lens should not be moved during the calibration of each lens distortion sample." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLensDistortionAlgoPoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::ClassParams = {
		&UCameraLensDistortionAlgoPoints::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgoPoints()
	{
		if (!Z_Registration_Info_UClass_UCameraLensDistortionAlgoPoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensDistortionAlgoPoints.OuterSingleton, Z_Construct_UClass_UCameraLensDistortionAlgoPoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraLensDistortionAlgoPoints.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraLensDistortionAlgoPoints>()
	{
		return UCameraLensDistortionAlgoPoints::StaticClass();
	}
	UCameraLensDistortionAlgoPoints::UCameraLensDistortionAlgoPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensDistortionAlgoPoints);
	UCameraLensDistortionAlgoPoints::~UCameraLensDistortionAlgoPoints() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ScriptStructInfo[] = {
		{ FLensDistortionPointsCalibratorPointData::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionPointsCalibratorPointData_Statics::NewStructOps, TEXT("LensDistortionPointsCalibratorPointData"), &Z_Registration_Info_UScriptStruct_LensDistortionPointsCalibratorPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionPointsCalibratorPointData), 3236170954U) },
		{ FLensDistortionPointsCameraData::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionPointsCameraData_Statics::NewStructOps, TEXT("LensDistortionPointsCameraData"), &Z_Registration_Info_UScriptStruct_LensDistortionPointsCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionPointsCameraData), 2256696313U) },
		{ FLensDistortionPointsRowData::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionPointsRowData_Statics::NewStructOps, TEXT("LensDistortionPointsRowData"), &Z_Registration_Info_UScriptStruct_LensDistortionPointsRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionPointsRowData), 512062041U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLensDistortionAlgoPoints, UCameraLensDistortionAlgoPoints::StaticClass, TEXT("UCameraLensDistortionAlgoPoints"), &Z_Registration_Info_UClass_UCameraLensDistortionAlgoPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensDistortionAlgoPoints), 794431510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_2803889180(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraLensDistortionAlgoPoints_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
