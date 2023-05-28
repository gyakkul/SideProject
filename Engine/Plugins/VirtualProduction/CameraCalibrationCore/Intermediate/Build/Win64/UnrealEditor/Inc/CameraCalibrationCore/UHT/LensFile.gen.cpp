// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensFile.h"
#include "CineCameraSettings.h"
#include "LensData.h"
#include "Tables/DistortionParametersTable.h"
#include "Tables/EncodersTable.h"
#include "Tables/FocalLengthTable.h"
#include "Tables/ImageCenterTable.h"
#include "Tables/NodalOffsetTable.h"
#include "Tables/STMapTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensFile() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory();
	CAMERACALIBRATIONCORE_API UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFeedInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncodersTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFileEvaluationInputs();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFilePicker();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalPointOffset();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSimulcamInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapPointInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSTMapTable();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELensDataMode;
	static UEnum* ELensDataMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELensDataMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELensDataMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ELensDataMode"));
		}
		return Z_Registration_Info_UEnum_ELensDataMode.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ELensDataMode>()
	{
		return ELensDataMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enumerators[] = {
		{ "ELensDataMode::Parameters", (int64)ELensDataMode::Parameters },
		{ "ELensDataMode::STMap", (int64)ELensDataMode::STMap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Mode of operation of Lens File */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "Parameters.Name", "ELensDataMode::Parameters" },
		{ "STMap.Name", "ELensDataMode::STMap" },
		{ "ToolTip", "Mode of operation of Lens File" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ELensDataMode",
		"ELensDataMode",
		Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode()
	{
		if (!Z_Registration_Info_UEnum_ELensDataMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELensDataMode.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELensDataMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELensDataCategory;
	static UEnum* ELensDataCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELensDataCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELensDataCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ELensDataCategory"));
		}
		return Z_Registration_Info_UEnum_ELensDataCategory.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UEnum* StaticEnum<ELensDataCategory>()
	{
		return ELensDataCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enumerators[] = {
		{ "ELensDataCategory::Focus", (int64)ELensDataCategory::Focus },
		{ "ELensDataCategory::Iris", (int64)ELensDataCategory::Iris },
		{ "ELensDataCategory::Zoom", (int64)ELensDataCategory::Zoom },
		{ "ELensDataCategory::Distortion", (int64)ELensDataCategory::Distortion },
		{ "ELensDataCategory::ImageCenter", (int64)ELensDataCategory::ImageCenter },
		{ "ELensDataCategory::STMap", (int64)ELensDataCategory::STMap },
		{ "ELensDataCategory::NodalOffset", (int64)ELensDataCategory::NodalOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data categories manipulated in the camera calibration tools */" },
		{ "Distortion.Name", "ELensDataCategory::Distortion" },
		{ "Focus.Name", "ELensDataCategory::Focus" },
		{ "ImageCenter.Name", "ELensDataCategory::ImageCenter" },
		{ "Iris.Name", "ELensDataCategory::Iris" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "NodalOffset.Name", "ELensDataCategory::NodalOffset" },
		{ "STMap.Name", "ELensDataCategory::STMap" },
		{ "ToolTip", "Data categories manipulated in the camera calibration tools" },
		{ "Zoom.Name", "ELensDataCategory::Zoom" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		"ELensDataCategory",
		"ELensDataCategory",
		Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory()
	{
		if (!Z_Registration_Info_UEnum_ELensDataCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELensDataCategory.InnerSingleton, Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELensDataCategory.InnerSingleton;
	}
	DEFINE_FUNCTION(ULensFile::execGetTotalPointNum)
	{
		P_GET_ENUM(ELensDataCategory,Z_Param_InDataCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalPointNum(ELensDataCategory(Z_Param_InDataCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execHasSamples)
	{
		P_GET_ENUM(ELensDataCategory,Z_Param_InDataCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSamples(ELensDataCategory(Z_Param_InDataCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execClearData)
	{
		P_GET_ENUM(ELensDataCategory,Z_Param_InDataCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearData(ELensDataCategory(Z_Param_InDataCategory));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execClearAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execRemoveZoomPoint)
	{
		P_GET_ENUM(ELensDataCategory,Z_Param_InDataCategory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveZoomPoint(ELensDataCategory(Z_Param_InDataCategory),Z_Param_InFocus,Z_Param_InZoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execRemoveFocusPoint)
	{
		P_GET_ENUM(ELensDataCategory,Z_Param_InDataCategory);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFocusPoint(ELensDataCategory(Z_Param_InDataCategory),Z_Param_InFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execAddSTMapPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_STRUCT_REF(FSTMapInfo,Z_Param_Out_NewPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSTMapPoint(Z_Param_NewFocus,Z_Param_NewZoom,Z_Param_Out_NewPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execAddNodalOffsetPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_STRUCT_REF(FNodalPointOffset,Z_Param_Out_NewPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNodalOffsetPoint(Z_Param_NewFocus,Z_Param_NewZoom,Z_Param_Out_NewPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execAddImageCenterPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_STRUCT_REF(FImageCenterInfo,Z_Param_Out_NewPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddImageCenterPoint(Z_Param_NewFocus,Z_Param_NewZoom,Z_Param_Out_NewPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execAddFocalLengthPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_STRUCT_REF(FFocalLengthInfo,Z_Param_Out_NewFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFocalLengthPoint(Z_Param_NewFocus,Z_Param_NewZoom,Z_Param_Out_NewFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execAddDistortionPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_STRUCT_REF(FDistortionInfo,Z_Param_Out_NewPoint);
		P_GET_STRUCT_REF(FFocalLengthInfo,Z_Param_Out_NewFocalLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDistortionPoint(Z_Param_NewFocus,Z_Param_NewZoom,Z_Param_Out_NewPoint,Z_Param_Out_NewFocalLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetSTMapPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FSTMapInfo,Z_Param_Out_OutSTMapInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSTMapPoint(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutSTMapInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetNodalOffsetPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FNodalPointOffset,Z_Param_Out_OutNodalPointOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNodalOffsetPoint(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutNodalPointOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetImageCenterPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FImageCenterInfo,Z_Param_Out_OutImageCenterInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetImageCenterPoint(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutImageCenterInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetFocalLengthPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FFocalLengthInfo,Z_Param_Out_OutFocalLengthInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetFocalLengthPoint(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutFocalLengthInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetDistortionPoint)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FDistortionInfo,Z_Param_Out_OutDistortionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDistortionPoint(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutDistortionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetNodalOffsetPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FNodalOffsetPointInfo>*)Z_Param__Result=P_THIS->GetNodalOffsetPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetImageCenterPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FImageCenterPointInfo>*)Z_Param__Result=P_THIS->GetImageCenterPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetSTMapPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSTMapPointInfo>*)Z_Param__Result=P_THIS->GetSTMapPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetFocalLengthPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFocalLengthPointInfo>*)Z_Param__Result=P_THIS->GetFocalLengthPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execGetDistortionPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FDistortionPointInfo>*)Z_Param__Result=P_THIS->GetDistortionPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateNormalizedIris)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->EvaluateNormalizedIris(Z_Param_InNormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execHasIrisEncoderMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasIrisEncoderMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateNormalizedFocus)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InNormalizedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->EvaluateNormalizedFocus(Z_Param_InNormalizedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execHasFocusEncoderMapping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFocusEncoderMapping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateNodalPointOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FNodalPointOffset,Z_Param_Out_OutEvaluatedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateNodalPointOffset(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutEvaluatedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateDistortionData)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT(FVector2D,Z_Param_InFilmback);
		P_GET_OBJECT(ULensDistortionModelHandlerBase,Z_Param_InLensHandler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateDistortionData(Z_Param_InFocus,Z_Param_InZoom,Z_Param_InFilmback,Z_Param_InLensHandler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateImageCenterParameters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FImageCenterInfo,Z_Param_Out_OutEvaluatedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateImageCenterParameters(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutEvaluatedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateFocalLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FFocalLengthInfo,Z_Param_Out_OutEvaluatedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateFocalLength(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutEvaluatedValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensFile::execEvaluateDistortionParameters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFocus);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InZoom);
		P_GET_STRUCT_REF(FDistortionInfo,Z_Param_Out_OutEvaluatedValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EvaluateDistortionParameters(Z_Param_InFocus,Z_Param_InZoom,Z_Param_Out_OutEvaluatedValue);
		P_NATIVE_END;
	}
	void ULensFile::StaticRegisterNativesULensFile()
	{
		UClass* Class = ULensFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDistortionPoint", &ULensFile::execAddDistortionPoint },
			{ "AddFocalLengthPoint", &ULensFile::execAddFocalLengthPoint },
			{ "AddImageCenterPoint", &ULensFile::execAddImageCenterPoint },
			{ "AddNodalOffsetPoint", &ULensFile::execAddNodalOffsetPoint },
			{ "AddSTMapPoint", &ULensFile::execAddSTMapPoint },
			{ "ClearAll", &ULensFile::execClearAll },
			{ "ClearData", &ULensFile::execClearData },
			{ "EvaluateDistortionData", &ULensFile::execEvaluateDistortionData },
			{ "EvaluateDistortionParameters", &ULensFile::execEvaluateDistortionParameters },
			{ "EvaluateFocalLength", &ULensFile::execEvaluateFocalLength },
			{ "EvaluateImageCenterParameters", &ULensFile::execEvaluateImageCenterParameters },
			{ "EvaluateNodalPointOffset", &ULensFile::execEvaluateNodalPointOffset },
			{ "EvaluateNormalizedFocus", &ULensFile::execEvaluateNormalizedFocus },
			{ "EvaluateNormalizedIris", &ULensFile::execEvaluateNormalizedIris },
			{ "GetDistortionPoint", &ULensFile::execGetDistortionPoint },
			{ "GetDistortionPoints", &ULensFile::execGetDistortionPoints },
			{ "GetFocalLengthPoint", &ULensFile::execGetFocalLengthPoint },
			{ "GetFocalLengthPoints", &ULensFile::execGetFocalLengthPoints },
			{ "GetImageCenterPoint", &ULensFile::execGetImageCenterPoint },
			{ "GetImageCenterPoints", &ULensFile::execGetImageCenterPoints },
			{ "GetNodalOffsetPoint", &ULensFile::execGetNodalOffsetPoint },
			{ "GetNodalOffsetPoints", &ULensFile::execGetNodalOffsetPoints },
			{ "GetSTMapPoint", &ULensFile::execGetSTMapPoint },
			{ "GetSTMapPoints", &ULensFile::execGetSTMapPoints },
			{ "GetTotalPointNum", &ULensFile::execGetTotalPointNum },
			{ "HasFocusEncoderMapping", &ULensFile::execHasFocusEncoderMapping },
			{ "HasIrisEncoderMapping", &ULensFile::execHasIrisEncoderMapping },
			{ "HasSamples", &ULensFile::execHasSamples },
			{ "RemoveFocusPoint", &ULensFile::execRemoveFocusPoint },
			{ "RemoveZoomPoint", &ULensFile::execRemoveZoomPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics
	{
		struct LensFile_eventAddDistortionPoint_Parms
		{
			float NewFocus;
			float NewZoom;
			FDistortionInfo NewPoint;
			FFocalLengthInfo NewFocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddDistortionPoint_Parms, NewFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddDistortionPoint_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewPoint = { "NewPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddDistortionPoint_Parms, NewPoint), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewPoint_MetaData)) }; // 2058170602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocalLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocalLength = { "NewFocalLength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddDistortionPoint_Parms, NewFocalLength), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocalLength_MetaData)) }; // 256946379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::NewProp_NewFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Adds a distortion point in our map. If a point already exist at the location, it is updated */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Adds a distortion point in our map. If a point already exist at the location, it is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "AddDistortionPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::LensFile_eventAddDistortionPoint_Parms), Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_AddDistortionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_AddDistortionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics
	{
		struct LensFile_eventAddFocalLengthPoint_Parms
		{
			float NewFocus;
			float NewZoom;
			FFocalLengthInfo NewFocalLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewFocalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddFocalLengthPoint_Parms, NewFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddFocalLengthPoint_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocalLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocalLength = { "NewFocalLength", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddFocalLengthPoint_Parms, NewFocalLength), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocalLength_MetaData)) }; // 256946379
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::NewProp_NewFocalLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Adds a focal length point in our map. If a point already exist at the location, it is updated */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Adds a focal length point in our map. If a point already exist at the location, it is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "AddFocalLengthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::LensFile_eventAddFocalLengthPoint_Parms), Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_AddFocalLengthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_AddFocalLengthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics
	{
		struct LensFile_eventAddImageCenterPoint_Parms
		{
			float NewFocus;
			float NewZoom;
			FImageCenterInfo NewPoint;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddImageCenterPoint_Parms, NewFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddImageCenterPoint_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewPoint = { "NewPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddImageCenterPoint_Parms, NewPoint), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewPoint_MetaData)) }; // 1446709430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::NewProp_NewPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Adds an ImageCenter point in our map. If a point already exist at the location, it is updated */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Adds an ImageCenter point in our map. If a point already exist at the location, it is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "AddImageCenterPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::LensFile_eventAddImageCenterPoint_Parms), Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_AddImageCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_AddImageCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics
	{
		struct LensFile_eventAddNodalOffsetPoint_Parms
		{
			float NewFocus;
			float NewZoom;
			FNodalPointOffset NewPoint;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddNodalOffsetPoint_Parms, NewFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddNodalOffsetPoint_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewPoint = { "NewPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddNodalOffsetPoint_Parms, NewPoint), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewPoint_MetaData)) }; // 3989063233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::NewProp_NewPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Adds an NodalOffset point in our map. If a point already exist at the location, it is updated */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Adds an NodalOffset point in our map. If a point already exist at the location, it is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "AddNodalOffsetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::LensFile_eventAddNodalOffsetPoint_Parms), Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics
	{
		struct LensFile_eventAddSTMapPoint_Parms
		{
			float NewFocus;
			float NewZoom;
			FSTMapInfo NewPoint;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddSTMapPoint_Parms, NewFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddSTMapPoint_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewPoint = { "NewPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventAddSTMapPoint_Parms, NewPoint), Z_Construct_UScriptStruct_FSTMapInfo, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewPoint_MetaData)) }; // 434622991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::NewProp_NewPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Adds an STMap point in our map. If a point already exist at the location, it is updated */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Adds an STMap point in our map. If a point already exist at the location, it is updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "AddSTMapPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::LensFile_eventAddSTMapPoint_Parms), Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_AddSTMapPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_AddSTMapPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_ClearAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_ClearAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Removes all points of all tables */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Removes all points of all tables" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_ClearAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "ClearAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_ClearAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_ClearAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_ClearAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_ClearAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_ClearData_Statics
	{
		struct LensFile_eventClearData_Parms
		{
			ELensDataCategory InDataCategory;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataCategory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDataCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensFile_ClearData_Statics::NewProp_InDataCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensFile_ClearData_Statics::NewProp_InDataCategory = { "InDataCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventClearData_Parms, InDataCategory), Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, METADATA_PARAMS(nullptr, 0) }; // 2988378116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_ClearData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_ClearData_Statics::NewProp_InDataCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_ClearData_Statics::NewProp_InDataCategory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_ClearData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Removes table associated to data category */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Removes table associated to data category" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_ClearData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "ClearData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_ClearData_Statics::LensFile_eventClearData_Parms), Z_Construct_UFunction_ULensFile_ClearData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_ClearData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_ClearData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_ClearData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_ClearData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_ClearData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics
	{
		struct LensFile_eventEvaluateDistortionData_Parms
		{
			float InFocus;
			float InZoom;
			FVector2D InFilmback;
			ULensDistortionModelHandlerBase* InLensHandler;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFilmback;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLensHandler;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionData_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionData_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InFilmback = { "InFilmback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionData_Parms, InFilmback), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InLensHandler = { "InLensHandler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionData_Parms, InLensHandler), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventEvaluateDistortionData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventEvaluateDistortionData_Parms), &Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_InLensHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Draws the distortion map based on evaluation point*/" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Draws the distortion map based on evaluation point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateDistortionData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::LensFile_eventEvaluateDistortionData_Parms), Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateDistortionData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateDistortionData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics
	{
		struct LensFile_eventEvaluateDistortionParameters_Parms
		{
			float InFocus;
			float InZoom;
			FDistortionInfo OutEvaluatedValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEvaluatedValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionParameters_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionParameters_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_OutEvaluatedValue = { "OutEvaluatedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateDistortionParameters_Parms, OutEvaluatedValue), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(nullptr, 0) }; // 2058170602
	void Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventEvaluateDistortionParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventEvaluateDistortionParameters_Parms), &Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_OutEvaluatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated distortion parameters */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated distortion parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateDistortionParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::LensFile_eventEvaluateDistortionParameters_Parms), Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics
	{
		struct LensFile_eventEvaluateFocalLength_Parms
		{
			float InFocus;
			float InZoom;
			FFocalLengthInfo OutEvaluatedValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEvaluatedValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateFocalLength_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateFocalLength_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_OutEvaluatedValue = { "OutEvaluatedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateFocalLength_Parms, OutEvaluatedValue), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(nullptr, 0) }; // 256946379
	void Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventEvaluateFocalLength_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventEvaluateFocalLength_Parms), &Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_OutEvaluatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated focal length */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated focal length" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::LensFile_eventEvaluateFocalLength_Parms), Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics
	{
		struct LensFile_eventEvaluateImageCenterParameters_Parms
		{
			float InFocus;
			float InZoom;
			FImageCenterInfo OutEvaluatedValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEvaluatedValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateImageCenterParameters_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateImageCenterParameters_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_OutEvaluatedValue = { "OutEvaluatedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateImageCenterParameters_Parms, OutEvaluatedValue), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(nullptr, 0) }; // 1446709430
	void Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventEvaluateImageCenterParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventEvaluateImageCenterParameters_Parms), &Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_OutEvaluatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated image center parameters based on input focus and zoom */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated image center parameters based on input focus and zoom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateImageCenterParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::LensFile_eventEvaluateImageCenterParameters_Parms), Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics
	{
		struct LensFile_eventEvaluateNodalPointOffset_Parms
		{
			float InFocus;
			float InZoom;
			FNodalPointOffset OutEvaluatedValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutEvaluatedValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNodalPointOffset_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNodalPointOffset_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_OutEvaluatedValue = { "OutEvaluatedValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNodalPointOffset_Parms, OutEvaluatedValue), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(nullptr, 0) }; // 3989063233
	void Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventEvaluateNodalPointOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventEvaluateNodalPointOffset_Parms), &Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_OutEvaluatedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated nodal point offset based on input focus and zoom */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated nodal point offset based on input focus and zoom" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateNodalPointOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::LensFile_eventEvaluateNodalPointOffset_Parms), Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics
	{
		struct LensFile_eventEvaluateNormalizedFocus_Parms
		{
			float InNormalizedValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNormalizedValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::NewProp_InNormalizedValue = { "InNormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNormalizedFocus_Parms, InNormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNormalizedFocus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::NewProp_InNormalizedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated focus based on input normalized value and mapping */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated focus based on input normalized value and mapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateNormalizedFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::LensFile_eventEvaluateNormalizedFocus_Parms), Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics
	{
		struct LensFile_eventEvaluateNormalizedIris_Parms
		{
			float InNormalizedValue;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InNormalizedValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::NewProp_InNormalizedValue = { "InNormalizedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNormalizedIris_Parms, InNormalizedValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventEvaluateNormalizedIris_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::NewProp_InNormalizedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utility" },
		{ "Comment", "/** Returns interpolated iris based on input normalized value and mapping */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns interpolated iris based on input normalized value and mapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "EvaluateNormalizedIris", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::LensFile_eventEvaluateNormalizedIris_Parms), Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics
	{
		struct LensFile_eventGetDistortionPoint_Parms
		{
			float InFocus;
			float InZoom;
			FDistortionInfo OutDistortionInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDistortionInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetDistortionPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetDistortionPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_OutDistortionInfo = { "OutDistortionInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetDistortionPoint_Parms, OutDistortionInfo), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(nullptr, 0) }; // 2058170602
	void Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventGetDistortionPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventGetDistortionPoint_Parms), &Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_OutDistortionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets a Distortion point by given focus and zoom, if point does not exists returns false */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets a Distortion point by given focus and zoom, if point does not exists returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetDistortionPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::LensFile_eventGetDistortionPoint_Parms), Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetDistortionPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetDistortionPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics
	{
		struct LensFile_eventGetDistortionPoints_Parms
		{
			TArray<FDistortionPointInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDistortionPointInfo, METADATA_PARAMS(nullptr, 0) }; // 2261805438
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetDistortionPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2261805438
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets all Distortion points struct with focus, zoom and info  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets all Distortion points struct with focus, zoom and info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetDistortionPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::LensFile_eventGetDistortionPoints_Parms), Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetDistortionPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetDistortionPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics
	{
		struct LensFile_eventGetFocalLengthPoint_Parms
		{
			float InFocus;
			float InZoom;
			FFocalLengthInfo OutFocalLengthInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFocalLengthInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetFocalLengthPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetFocalLengthPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_OutFocalLengthInfo = { "OutFocalLengthInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetFocalLengthPoint_Parms, OutFocalLengthInfo), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(nullptr, 0) }; // 256946379
	void Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventGetFocalLengthPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventGetFocalLengthPoint_Parms), &Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_OutFocalLengthInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets a Focal Length point by given focus and zoom, if point does not exists returns false */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets a Focal Length point by given focus and zoom, if point does not exists returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetFocalLengthPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::LensFile_eventGetFocalLengthPoint_Parms), Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetFocalLengthPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetFocalLengthPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics
	{
		struct LensFile_eventGetFocalLengthPoints_Parms
		{
			TArray<FFocalLengthPointInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFocalLengthPointInfo, METADATA_PARAMS(nullptr, 0) }; // 2261895319
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetFocalLengthPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2261895319
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets all Focal Length points struct with focus, zoom and info  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets all Focal Length points struct with focus, zoom and info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetFocalLengthPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::LensFile_eventGetFocalLengthPoints_Parms), Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetFocalLengthPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetFocalLengthPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics
	{
		struct LensFile_eventGetImageCenterPoint_Parms
		{
			float InFocus;
			float InZoom;
			FImageCenterInfo OutImageCenterInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutImageCenterInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetImageCenterPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetImageCenterPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_OutImageCenterInfo = { "OutImageCenterInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetImageCenterPoint_Parms, OutImageCenterInfo), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(nullptr, 0) }; // 1446709430
	void Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventGetImageCenterPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventGetImageCenterPoint_Parms), &Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_OutImageCenterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets a Image Center point by given focus and zoom, if point does not exists returns false */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets a Image Center point by given focus and zoom, if point does not exists returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetImageCenterPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::LensFile_eventGetImageCenterPoint_Parms), Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetImageCenterPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetImageCenterPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics
	{
		struct LensFile_eventGetImageCenterPoints_Parms
		{
			TArray<FImageCenterPointInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImageCenterPointInfo, METADATA_PARAMS(nullptr, 0) }; // 931720700
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetImageCenterPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 931720700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets all Image Center points struct with focus, zoom and info  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets all Image Center points struct with focus, zoom and info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetImageCenterPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::LensFile_eventGetImageCenterPoints_Parms), Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetImageCenterPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetImageCenterPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics
	{
		struct LensFile_eventGetNodalOffsetPoint_Parms
		{
			float InFocus;
			float InZoom;
			FNodalPointOffset OutNodalPointOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNodalPointOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetNodalOffsetPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetNodalOffsetPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_OutNodalPointOffset = { "OutNodalPointOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetNodalOffsetPoint_Parms, OutNodalPointOffset), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(nullptr, 0) }; // 3989063233
	void Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventGetNodalOffsetPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventGetNodalOffsetPoint_Parms), &Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_OutNodalPointOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets a Nodal Offset point by given focus and zoom, if point does not exists returns false */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets a Nodal Offset point by given focus and zoom, if point does not exists returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetNodalOffsetPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::LensFile_eventGetNodalOffsetPoint_Parms), Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics
	{
		struct LensFile_eventGetNodalOffsetPoints_Parms
		{
			TArray<FNodalOffsetPointInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNodalOffsetPointInfo, METADATA_PARAMS(nullptr, 0) }; // 1184798778
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetNodalOffsetPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1184798778
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets all Nodal Offset points struct with focus, zoom and info  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets all Nodal Offset points struct with focus, zoom and info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetNodalOffsetPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::LensFile_eventGetNodalOffsetPoints_Parms), Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics
	{
		struct LensFile_eventGetSTMapPoint_Parms
		{
			float InFocus;
			float InZoom;
			FSTMapInfo OutSTMapInfo;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSTMapInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetSTMapPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetSTMapPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_OutSTMapInfo = { "OutSTMapInfo", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetSTMapPoint_Parms, OutSTMapInfo), Z_Construct_UScriptStruct_FSTMapInfo, METADATA_PARAMS(nullptr, 0) }; // 434622991
	void Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventGetSTMapPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventGetSTMapPoint_Parms), &Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_InZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_OutSTMapInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets a ST Map point by given focus and zoom, if point does not exists returns false */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets a ST Map point by given focus and zoom, if point does not exists returns false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetSTMapPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::LensFile_eventGetSTMapPoint_Parms), Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetSTMapPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetSTMapPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics
	{
		struct LensFile_eventGetSTMapPoints_Parms
		{
			TArray<FSTMapPointInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSTMapPointInfo, METADATA_PARAMS(nullptr, 0) }; // 1761273936
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetSTMapPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1761273936
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Gets all ST Map points struct with focus, zoom and info  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Gets all ST Map points struct with focus, zoom and info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetSTMapPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::LensFile_eventGetSTMapPoints_Parms), Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetSTMapPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetSTMapPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics
	{
		struct LensFile_eventGetTotalPointNum_Parms
		{
			ELensDataCategory InDataCategory;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataCategory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDataCategory;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_InDataCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_InDataCategory = { "InDataCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetTotalPointNum_Parms, InDataCategory), Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, METADATA_PARAMS(nullptr, 0) }; // 2988378116
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventGetTotalPointNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_InDataCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_InDataCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Returns total number of the points for given category */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns total number of the points for given category" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "GetTotalPointNum", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::LensFile_eventGetTotalPointNum_Parms), Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_GetTotalPointNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_GetTotalPointNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics
	{
		struct LensFile_eventHasFocusEncoderMapping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventHasFocusEncoderMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventHasFocusEncoderMapping_Parms), &Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Whether focus encoder mapping is configured */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Whether focus encoder mapping is configured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "HasFocusEncoderMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::LensFile_eventHasFocusEncoderMapping_Parms), Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics
	{
		struct LensFile_eventHasIrisEncoderMapping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventHasIrisEncoderMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventHasIrisEncoderMapping_Parms), &Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Whether iris encoder mapping is configured */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Whether iris encoder mapping is configured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "HasIrisEncoderMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::LensFile_eventHasIrisEncoderMapping_Parms), Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_HasSamples_Statics
	{
		struct LensFile_eventHasSamples_Parms
		{
			ELensDataCategory InDataCategory;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataCategory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDataCategory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_InDataCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_InDataCategory = { "InDataCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventHasSamples_Parms, InDataCategory), Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, METADATA_PARAMS(nullptr, 0) }; // 2988378116
	void Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensFile_eventHasSamples_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensFile_eventHasSamples_Parms), &Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_HasSamples_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_InDataCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_InDataCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_HasSamples_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_HasSamples_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Returns whether a category has data samples */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Returns whether a category has data samples" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_HasSamples_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "HasSamples", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_HasSamples_Statics::LensFile_eventHasSamples_Parms), Z_Construct_UFunction_ULensFile_HasSamples_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasSamples_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_HasSamples_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_HasSamples_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_HasSamples()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_HasSamples_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics
	{
		struct LensFile_eventRemoveFocusPoint_Parms
		{
			ELensDataCategory InDataCategory;
			float InFocus;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataCategory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDataCategory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InDataCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InDataCategory = { "InDataCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventRemoveFocusPoint_Parms, InDataCategory), Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, METADATA_PARAMS(nullptr, 0) }; // 2988378116
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventRemoveFocusPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InDataCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InDataCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::NewProp_InFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Removes a focus point */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Removes a focus point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "RemoveFocusPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::LensFile_eventRemoveFocusPoint_Parms), Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_RemoveFocusPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_RemoveFocusPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics
	{
		struct LensFile_eventRemoveZoomPoint_Parms
		{
			ELensDataCategory InDataCategory;
			float InFocus;
			float InZoom;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InDataCategory_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InDataCategory;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocus;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InDataCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InDataCategory = { "InDataCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventRemoveZoomPoint_Parms, InDataCategory), Z_Construct_UEnum_CameraCalibrationCore_ELensDataCategory, METADATA_PARAMS(nullptr, 0) }; // 2988378116
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InFocus = { "InFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventRemoveZoomPoint_Parms, InFocus), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InZoom = { "InZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensFile_eventRemoveZoomPoint_Parms, InZoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InDataCategory_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InDataCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::NewProp_InZoom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Table" },
		{ "Comment", "/** Removes a zoom point */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Removes a zoom point" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensFile, nullptr, "RemoveZoomPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::LensFile_eventRemoveZoomPoint_Parms), Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensFile_RemoveZoomPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensFile_RemoveZoomPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensFile);
	UClass* Z_Construct_UClass_ULensFile_NoRegister()
	{
		return ULensFile::StaticClass();
	}
	struct Z_Construct_UClass_ULensFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensInfo;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFeedInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraFeedInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulcamInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulcamInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserMetadata_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EncodersTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EncodersTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLengthTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCenterTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCenterTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodalOffsetTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodalOffsetTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_STMapTable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_STMapTable;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndistortionDisplacementMapHolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortionDisplacementMapHolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UndistortionDisplacementMapHolders;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionDisplacementMapHolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionDisplacementMapHolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DistortionDisplacementMapHolders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULensFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensFile_AddDistortionPoint, "AddDistortionPoint" }, // 1347772575
		{ &Z_Construct_UFunction_ULensFile_AddFocalLengthPoint, "AddFocalLengthPoint" }, // 1725499051
		{ &Z_Construct_UFunction_ULensFile_AddImageCenterPoint, "AddImageCenterPoint" }, // 2302825871
		{ &Z_Construct_UFunction_ULensFile_AddNodalOffsetPoint, "AddNodalOffsetPoint" }, // 2089354175
		{ &Z_Construct_UFunction_ULensFile_AddSTMapPoint, "AddSTMapPoint" }, // 3877866474
		{ &Z_Construct_UFunction_ULensFile_ClearAll, "ClearAll" }, // 1929783163
		{ &Z_Construct_UFunction_ULensFile_ClearData, "ClearData" }, // 3060166641
		{ &Z_Construct_UFunction_ULensFile_EvaluateDistortionData, "EvaluateDistortionData" }, // 89440233
		{ &Z_Construct_UFunction_ULensFile_EvaluateDistortionParameters, "EvaluateDistortionParameters" }, // 3605174604
		{ &Z_Construct_UFunction_ULensFile_EvaluateFocalLength, "EvaluateFocalLength" }, // 2858062200
		{ &Z_Construct_UFunction_ULensFile_EvaluateImageCenterParameters, "EvaluateImageCenterParameters" }, // 1298941894
		{ &Z_Construct_UFunction_ULensFile_EvaluateNodalPointOffset, "EvaluateNodalPointOffset" }, // 3327768158
		{ &Z_Construct_UFunction_ULensFile_EvaluateNormalizedFocus, "EvaluateNormalizedFocus" }, // 3137447517
		{ &Z_Construct_UFunction_ULensFile_EvaluateNormalizedIris, "EvaluateNormalizedIris" }, // 1033474296
		{ &Z_Construct_UFunction_ULensFile_GetDistortionPoint, "GetDistortionPoint" }, // 3383976809
		{ &Z_Construct_UFunction_ULensFile_GetDistortionPoints, "GetDistortionPoints" }, // 2283604126
		{ &Z_Construct_UFunction_ULensFile_GetFocalLengthPoint, "GetFocalLengthPoint" }, // 2616835458
		{ &Z_Construct_UFunction_ULensFile_GetFocalLengthPoints, "GetFocalLengthPoints" }, // 4254820211
		{ &Z_Construct_UFunction_ULensFile_GetImageCenterPoint, "GetImageCenterPoint" }, // 1264370523
		{ &Z_Construct_UFunction_ULensFile_GetImageCenterPoints, "GetImageCenterPoints" }, // 4013432576
		{ &Z_Construct_UFunction_ULensFile_GetNodalOffsetPoint, "GetNodalOffsetPoint" }, // 3825728781
		{ &Z_Construct_UFunction_ULensFile_GetNodalOffsetPoints, "GetNodalOffsetPoints" }, // 899689066
		{ &Z_Construct_UFunction_ULensFile_GetSTMapPoint, "GetSTMapPoint" }, // 1182779773
		{ &Z_Construct_UFunction_ULensFile_GetSTMapPoints, "GetSTMapPoints" }, // 1353718084
		{ &Z_Construct_UFunction_ULensFile_GetTotalPointNum, "GetTotalPointNum" }, // 754752485
		{ &Z_Construct_UFunction_ULensFile_HasFocusEncoderMapping, "HasFocusEncoderMapping" }, // 2977400200
		{ &Z_Construct_UFunction_ULensFile_HasIrisEncoderMapping, "HasIrisEncoderMapping" }, // 1620419125
		{ &Z_Construct_UFunction_ULensFile_HasSamples, "HasSamples" }, // 2303531687
		{ &Z_Construct_UFunction_ULensFile_RemoveFocusPoint, "RemoveFocusPoint" }, // 2079384106
		{ &Z_Construct_UFunction_ULensFile_RemoveZoomPoint, "RemoveZoomPoint" }, // 1472658763
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Lens file containing calibration mapping from FIZ data\n */" },
		{ "IncludePath", "LensFile.h" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "A Lens file containing calibration mapping from FIZ data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_LensInfo_MetaData[] = {
		{ "Category", "Lens info" },
		{ "Comment", "/** Lens information */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Lens information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_LensInfo = { "LensInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, LensInfo), Z_Construct_UScriptStruct_FLensInfo, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_LensInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_LensInfo_MetaData)) }; // 2880303412
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_CameraFeedInfo_MetaData[] = {
		{ "Category", "Camera Feed" },
		{ "Comment", "/** Camera feed information */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Camera feed information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_CameraFeedInfo = { "CameraFeedInfo", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, CameraFeedInfo), Z_Construct_UScriptStruct_FCameraFeedInfo, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_CameraFeedInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_CameraFeedInfo_MetaData)) }; // 3693041444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_SimulcamInfo_MetaData[] = {
		{ "Category", "Simulcam info" },
		{ "Comment", "/** Simulcam information */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Simulcam information" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_SimulcamInfo = { "SimulcamInfo", nullptr, (EPropertyFlags)0x0010000800020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, SimulcamInfo), Z_Construct_UScriptStruct_FSimulcamInfo, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_SimulcamInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_SimulcamInfo_MetaData)) }; // 3369030845
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode_MetaData[] = {
		{ "Category", "Lens mapping" },
		{ "Comment", "/** Type of data used for lens mapping */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Type of data used for lens mapping" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode = { "DataMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, DataMode), Z_Construct_UEnum_CameraCalibrationCore_ELensDataMode, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode_MetaData)) }; // 3049161637
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_ValueProp = { "UserMetadata", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_Key_KeyProp = { "UserMetadata_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_MetaData[] = {
		{ "Category", "Metadata" },
		{ "Comment", "/** Metadata user could enter for its lens */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Metadata user could enter for its lens" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata = { "UserMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, UserMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_EncodersTable_MetaData[] = {
		{ "Comment", "/** Encoder mapping table */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Encoder mapping table" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_EncodersTable = { "EncodersTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, EncodersTable), Z_Construct_UScriptStruct_FEncodersTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_EncodersTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_EncodersTable_MetaData)) }; // 3226447244
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionTable_MetaData[] = {
		{ "Comment", "/** Distortion parameters table mapping to input focus/zoom  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Distortion parameters table mapping to input focus/zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionTable = { "DistortionTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, DistortionTable), Z_Construct_UScriptStruct_FDistortionTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionTable_MetaData)) }; // 4287373436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_FocalLengthTable_MetaData[] = {
		{ "Comment", "/** Focal length table mapping to input focus/zoom  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Focal length table mapping to input focus/zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_FocalLengthTable = { "FocalLengthTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, FocalLengthTable), Z_Construct_UScriptStruct_FFocalLengthTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_FocalLengthTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_FocalLengthTable_MetaData)) }; // 533134938
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_ImageCenterTable_MetaData[] = {
		{ "Comment", "/** Image center table mapping to input focus/zoom  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Image center table mapping to input focus/zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_ImageCenterTable = { "ImageCenterTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, ImageCenterTable), Z_Construct_UScriptStruct_FImageCenterTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_ImageCenterTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_ImageCenterTable_MetaData)) }; // 4078964539
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_NodalOffsetTable_MetaData[] = {
		{ "Comment", "/** Nodal offset table mapping to input focus/zoom  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Nodal offset table mapping to input focus/zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_NodalOffsetTable = { "NodalOffsetTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, NodalOffsetTable), Z_Construct_UScriptStruct_FNodalOffsetTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_NodalOffsetTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_NodalOffsetTable_MetaData)) }; // 2182329906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_STMapTable_MetaData[] = {
		{ "Comment", "/** STMap table mapping to input focus/zoom  */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "STMap table mapping to input focus/zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_STMapTable = { "STMapTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, STMapTable), Z_Construct_UScriptStruct_FSTMapTable, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_STMapTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_STMapTable_MetaData)) }; // 3715282072
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for importing ulens files. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Importing data and options used for importing ulens files." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders_Inner = { "UndistortionDisplacementMapHolders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders_MetaData[] = {
		{ "Comment", "/** Texture used to store temporary undistortion displacement map when using map blending */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Texture used to store temporary undistortion displacement map when using map blending" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders = { "UndistortionDisplacementMapHolders", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, UndistortionDisplacementMapHolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders_Inner = { "DistortionDisplacementMapHolders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders_MetaData[] = {
		{ "Comment", "/** Texture used to store temporary distortion displacement map when using map blending */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Texture used to store temporary distortion displacement map when using map blending" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders = { "DistortionDisplacementMapHolders", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensFile, DistortionDisplacementMapHolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_LensInfo,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_CameraFeedInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_SimulcamInfo,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_DataMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_UserMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_EncodersTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_FocalLengthTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_ImageCenterTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_NodalOffsetTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_STMapTable,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_UndistortionDisplacementMapHolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensFile_Statics::NewProp_DistortionDisplacementMapHolders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensFile_Statics::ClassParams = {
		&ULensFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULensFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULensFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensFile()
	{
		if (!Z_Registration_Info_UClass_ULensFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensFile.OuterSingleton, Z_Construct_UClass_ULensFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensFile.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<ULensFile>()
	{
		return ULensFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensFile);
	ULensFile::~ULensFile() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFilePicker;
class UScriptStruct* FLensFilePicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFilePicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFilePicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFilePicker, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("LensFilePicker"));
	}
	return Z_Registration_Info_UScriptStruct_LensFilePicker.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FLensFilePicker>()
{
	return FLensFilePicker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFilePicker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseDefaultLensFile_MetaData[];
#endif
		static void NewProp_bUseDefaultLensFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDefaultLensFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFilePicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper to facilitate default LensFile vs picker\n */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "Wrapper to facilitate default LensFile vs picker" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFilePicker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile_MetaData[] = {
		{ "Category", "Lens File" },
		{ "Comment", "/** If true, default LensFile will be used, if one is set */" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "If true, default LensFile will be used, if one is set" },
	};
#endif
	void Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile_SetBit(void* Obj)
	{
		((FLensFilePicker*)Obj)->bUseDefaultLensFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile = { "bUseDefaultLensFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLensFilePicker), &Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_LensFile_MetaData[] = {
		{ "Category", "Lens File" },
		{ "Comment", "/** LensFile asset to use if DefaultLensFile is not desired */" },
		{ "EditCondition", "!bUseDefaultLensFile" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
		{ "ToolTip", "LensFile asset to use if DefaultLensFile is not desired" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_LensFile = { "LensFile", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFilePicker, LensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_LensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_LensFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFilePicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_bUseDefaultLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewProp_LensFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFilePicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"LensFilePicker",
		sizeof(FLensFilePicker),
		alignof(FLensFilePicker),
		Z_Construct_UScriptStruct_FLensFilePicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFilePicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFilePicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFilePicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFilePicker()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFilePicker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFilePicker.InnerSingleton, Z_Construct_UScriptStruct_FLensFilePicker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFilePicker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs;
class UScriptStruct* FLensFileEvaluationInputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensFileEvaluationInputs, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("LensFileEvaluationInputs"));
	}
	return Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FLensFileEvaluationInputs>()
{
	return FLensFileEvaluationInputs::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iris_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Iris;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensFileEvaluationInputs>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "Lens File" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileEvaluationInputs, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Iris_MetaData[] = {
		{ "Category", "Lens File" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Iris = { "Iris", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileEvaluationInputs, Iris), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Iris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Iris_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Zoom_MetaData[] = {
		{ "Category", "Lens File" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileEvaluationInputs, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Filmback_MetaData[] = {
		{ "Category", "Lens File" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000200020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensFileEvaluationInputs, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Filmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Filmback_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid_MetaData[] = {
		{ "Category", "Lens File" },
		{ "ModuleRelativePath", "Public/LensFile.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FLensFileEvaluationInputs*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLensFileEvaluationInputs), &Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Iris,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_Filmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"LensFileEvaluationInputs",
		sizeof(FLensFileEvaluationInputs),
		alignof(FLensFileEvaluationInputs),
		Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensFileEvaluationInputs()
	{
		if (!Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.InnerSingleton, Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::EnumInfo[] = {
		{ ELensDataMode_StaticEnum, TEXT("ELensDataMode"), &Z_Registration_Info_UEnum_ELensDataMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3049161637U) },
		{ ELensDataCategory_StaticEnum, TEXT("ELensDataCategory"), &Z_Registration_Info_UEnum_ELensDataCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2988378116U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ScriptStructInfo[] = {
		{ FLensFilePicker::StaticStruct, Z_Construct_UScriptStruct_FLensFilePicker_Statics::NewStructOps, TEXT("LensFilePicker"), &Z_Registration_Info_UScriptStruct_LensFilePicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFilePicker), 209465330U) },
		{ FLensFileEvaluationInputs::StaticStruct, Z_Construct_UScriptStruct_FLensFileEvaluationInputs_Statics::NewStructOps, TEXT("LensFileEvaluationInputs"), &Z_Registration_Info_UScriptStruct_LensFileEvaluationInputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensFileEvaluationInputs), 3633621898U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensFile, ULensFile::StaticClass, TEXT("ULensFile"), &Z_Registration_Info_UClass_ULensFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensFile), 4252556790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_2093143358(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensFile_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
