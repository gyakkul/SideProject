// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraNodalOffsetAlgoPoints.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgoPoints() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_NoRegister();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsRowData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData;
class UScriptStruct* FNodalOffsetPointsCalibratorPointData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("NodalOffsetPointsCalibratorPointData"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FNodalOffsetPointsCalibratorPointData>()
{
	return FNodalOffsetPointsCalibratorPointData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the identified calibrator 2d point for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Holds information of the identified calibrator 2d point for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetPointsCalibratorPointData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// True if the rest of the contents are valid.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "True if the rest of the contents are valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FNodalOffsetPointsCalibratorPointData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNodalOffsetPointsCalibratorPointData), &Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// The name of the 3d calibrator point, as defined in the mesh\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The name of the 3d calibrator point, as defined in the mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCalibratorPointData, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Location_MetaData[] = {
		{ "Comment", "// The world space 3d location of the point\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The world space 3d location of the point" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCalibratorPointData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"NodalOffsetPointsCalibratorPointData",
		sizeof(FNodalOffsetPointsCalibratorPointData),
		alignof(FNodalOffsetPointsCalibratorPointData),
		Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData;
class UScriptStruct* FNodalOffsetPointsCameraData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("NodalOffsetPointsCameraData"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FNodalOffsetPointsCameraData>()
{
	return FNodalOffsetPointsCameraData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasNodalOffsetApplied_MetaData[];
#endif
		static void NewProp_bWasNodalOffsetApplied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasNodalOffsetApplied;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasDistortionEvaluated_MetaData[];
#endif
		static void NewProp_bWasDistortionEvaluated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasDistortionEvaluated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFocus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ParentUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratorPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorParentPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratorParentPose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratorComponentPoses_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CalibratorComponentPoses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorComponentPoses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CalibratorComponentPoses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CalibratorUniqueId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorParentUniqueId_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CalibratorParentUniqueId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the camera pose for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Holds information of the camera pose for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetPointsCameraData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Comment", "// True if the rest of the contents are valid.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "True if the rest of the contents are valid." },
	};
#endif
	void Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FNodalOffsetPointsCameraData*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNodalOffsetPointsCameraData), &Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "// The unique id of the camera object. Used to detect camera selection changes during a calibration session.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The unique id of the camera object. Used to detect camera selection changes during a calibration session." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, UniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_Pose_MetaData[] = {
		{ "Comment", "// The camera pose\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The camera pose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, Pose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_Pose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied_MetaData[] = {
		{ "Comment", "// True if the cached camera pose included a nodal offset\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "True if the cached camera pose included a nodal offset" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied_SetBit(void* Obj)
	{
		((FNodalOffsetPointsCameraData*)Obj)->bWasNodalOffsetApplied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied = { "bWasNodalOffsetApplied", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNodalOffsetPointsCameraData), &Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated_MetaData[] = {
		{ "Comment", "// True if distortion was evaluated (using this LensFile) \n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "True if distortion was evaluated (using this LensFile)" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated_SetBit(void* Obj)
	{
		((FNodalOffsetPointsCameraData*)Obj)->bWasDistortionEvaluated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated = { "bWasDistortionEvaluated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNodalOffsetPointsCameraData), &Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputFocus_MetaData[] = {
		{ "Comment", "// Input focus from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Input focus from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputFocus = { "InputFocus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, InputFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputZoom_MetaData[] = {
		{ "Comment", "// Input zoom from lens file evaluation data\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Input zoom from lens file evaluation data" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputZoom = { "InputZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, InputZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentPose_MetaData[] = {
		{ "Comment", "// The parent pose (expected to be the tracker origin)\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The parent pose (expected to be the tracker origin)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentPose = { "ParentPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, ParentPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentUniqueId_MetaData[] = {
		{ "Comment", "// The parent unique id\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "The parent unique id" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentUniqueId = { "ParentUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, ParentUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentUniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorPose_MetaData[] = {
		{ "Comment", "// Calibrator Pose\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Calibrator Pose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorPose = { "CalibratorPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, CalibratorPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentPose_MetaData[] = {
		{ "Comment", "// Calibrator ParentPose\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Calibrator ParentPose" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentPose = { "CalibratorParentPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, CalibratorParentPose), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentPose_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_ValueProp = { "CalibratorComponentPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_Key_KeyProp = { "CalibratorComponentPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_MetaData[] = {
		{ "Comment", "// Calibrator ComponentPose\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Calibrator ComponentPose" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses = { "CalibratorComponentPoses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, CalibratorComponentPoses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData[] = {
		{ "Comment", "// Calibrator unique id\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Calibrator unique id" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorUniqueId = { "CalibratorUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, CalibratorUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorUniqueId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentUniqueId_MetaData[] = {
		{ "Comment", "// Calibrator parent unique id\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Calibrator parent unique id" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentUniqueId = { "CalibratorParentUniqueId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsCameraData, CalibratorParentUniqueId), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentUniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentUniqueId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_UniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasNodalOffsetApplied,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_bWasDistortionEvaluated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_InputZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_ParentUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorComponentPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorUniqueId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewProp_CalibratorParentUniqueId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"NodalOffsetPointsCameraData",
		sizeof(FNodalOffsetPointsCameraData),
		alignof(FNodalOffsetPointsCameraData),
		Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData;
class UScriptStruct* FNodalOffsetPointsRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("NodalOffsetPointsRowData"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FNodalOffsetPointsRowData>()
{
	return FNodalOffsetPointsRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortedPoint2D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UndistortedPoint2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUndistortedIsValid_MetaData[];
#endif
		static void NewProp_bUndistortedIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUndistortedIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibratorPointData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalibratorPointData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds information of the calibrator 3d point for a given sample of a 2d-3d correlation */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Holds information of the calibrator 3d point for a given sample of a 2d-3d correlation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetPointsRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "// Index of this calibration row\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Index of this calibration row" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsRowData, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Point2D_MetaData[] = {
		{ "Comment", "// Normalized 0~1 2d location of the identified calibrator point in the media plate.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Normalized 0~1 2d location of the identified calibrator point in the media plate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Point2D = { "Point2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsRowData, Point2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Point2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Point2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_UndistortedPoint2D_MetaData[] = {
		{ "Comment", "// Location of Point2D after it has been undistorted\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Location of Point2D after it has been undistorted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_UndistortedPoint2D = { "UndistortedPoint2D", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsRowData, UndistortedPoint2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_UndistortedPoint2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_UndistortedPoint2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid_MetaData[] = {
		{ "Comment", "// True if this row has had its Point2D undistorted\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "True if this row has had its Point2D undistorted" },
	};
#endif
	void Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid_SetBit(void* Obj)
	{
		((FNodalOffsetPointsRowData*)Obj)->bUndistortedIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid = { "bUndistortedIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNodalOffsetPointsRowData), &Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CalibratorPointData_MetaData[] = {
		{ "Comment", "// Holds information of the calibrator point data for this sample.\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Holds information of the calibrator point data for this sample." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CalibratorPointData = { "CalibratorPointData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsRowData, CalibratorPointData), Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CalibratorPointData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CalibratorPointData_MetaData)) }; // 2697764768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CameraData_MetaData[] = {
		{ "Comment", "// Holds information of the camera data for this sample\n" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Holds information of the camera data for this sample" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CameraData = { "CameraData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetPointsRowData, CameraData), Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CameraData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CameraData_MetaData)) }; // 3349991928
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_Point2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_UndistortedPoint2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_bUndistortedIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CalibratorPointData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewProp_CameraData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"NodalOffsetPointsRowData",
		sizeof(FNodalOffsetPointsRowData),
		alignof(FNodalOffsetPointsRowData),
		Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointsRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData.InnerSingleton;
	}
	void UCameraNodalOffsetAlgoPoints::StaticRegisterNativesUCameraNodalOffsetAlgoPoints()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgoPoints);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_NoRegister()
	{
		return UCameraNodalOffsetAlgoPoints::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraNodalOffsetAlgo,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Implements a nodal offset calibration algorithm. It uses 3d points (UCalibrationPointComponent) \n * specified in a selectable calibrator with features that the user can identify by clicking on the \n * simulcam viewport, and after enough points have been identified, it can calculate the nodal offset\n * that needs to be applied to the associated camera in order to align its CG with the live action media plate.\n * \n * Limitations:\n * - Only supports Brown\xe2\x80\x93""Conrady model lens model (FSphericalDistortionParameters)\n * - The camera or the lens should not be moved during the calibration of each nodal offset sample.\n */" },
		{ "IncludePath", "Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoPoints.h" },
		{ "ToolTip", "Implements a nodal offset calibration algorithm. It uses 3d points (UCalibrationPointComponent)\nspecified in a selectable calibrator with features that the user can identify by clicking on the\nsimulcam viewport, and after enough points have been identified, it can calculate the nodal offset\nthat needs to be applied to the associated camera in order to align its CG with the live action media plate.\n\nLimitations:\n- Only supports Brown\xe2\x80\x93""Conrady model lens model (FSphericalDistortionParameters)\n- The camera or the lens should not be moved during the calibration of each nodal offset sample." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgoPoints>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::ClassParams = {
		&UCameraNodalOffsetAlgoPoints::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgoPoints.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgoPoints.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgoPoints_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgoPoints.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraNodalOffsetAlgoPoints>()
	{
		return UCameraNodalOffsetAlgoPoints::StaticClass();
	}
	UCameraNodalOffsetAlgoPoints::UCameraNodalOffsetAlgoPoints(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgoPoints);
	UCameraNodalOffsetAlgoPoints::~UCameraNodalOffsetAlgoPoints() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ScriptStructInfo[] = {
		{ FNodalOffsetPointsCalibratorPointData::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetPointsCalibratorPointData_Statics::NewStructOps, TEXT("NodalOffsetPointsCalibratorPointData"), &Z_Registration_Info_UScriptStruct_NodalOffsetPointsCalibratorPointData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetPointsCalibratorPointData), 2697764768U) },
		{ FNodalOffsetPointsCameraData::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetPointsCameraData_Statics::NewStructOps, TEXT("NodalOffsetPointsCameraData"), &Z_Registration_Info_UScriptStruct_NodalOffsetPointsCameraData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetPointsCameraData), 3349991928U) },
		{ FNodalOffsetPointsRowData::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetPointsRowData_Statics::NewStructOps, TEXT("NodalOffsetPointsRowData"), &Z_Registration_Info_UScriptStruct_NodalOffsetPointsRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetPointsRowData), 3031487031U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgoPoints, UCameraNodalOffsetAlgoPoints::StaticClass, TEXT("UCameraNodalOffsetAlgoPoints"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgoPoints, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgoPoints), 967726775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_3954072717(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoPoints_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
