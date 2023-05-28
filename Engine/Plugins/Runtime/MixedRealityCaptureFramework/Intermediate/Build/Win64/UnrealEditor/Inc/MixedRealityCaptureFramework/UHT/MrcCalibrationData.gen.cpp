// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MrcCalibrationData.h"
#include "MrcVideoCaptureDevice.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMrcCalibrationData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationData();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationData_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationSaveGame();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationSaveGame_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcAlignmentSaveData();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcCompositingSaveData();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcLensCalibrationData();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoProcessingParams();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcLensCalibrationData;
class UScriptStruct* FMrcLensCalibrationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcLensCalibrationData, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcLensCalibrationData"));
	}
	return Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcLensCalibrationData>()
{
	return FMrcLensCalibrationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcLensCalibrationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_FOV_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcLensCalibrationData, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_DistortionParameters_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_DistortionParameters = { "DistortionParameters", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcLensCalibrationData, DistortionParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_DistortionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_DistortionParameters_MetaData)) }; // 1893023535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewProp_DistortionParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcLensCalibrationData",
		sizeof(FMrcLensCalibrationData),
		alignof(FMrcLensCalibrationData),
		Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcLensCalibrationData()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.InnerSingleton, Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcLensCalibrationData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData;
class UScriptStruct* FMrcAlignmentSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcAlignmentSaveData, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcAlignmentSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcAlignmentSaveData>()
{
	return FMrcAlignmentSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingAttachmentId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackingAttachmentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcAlignmentSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_CameraOrigin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_CameraOrigin = { "CameraOrigin", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcAlignmentSaveData, CameraOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_CameraOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_CameraOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcAlignmentSaveData, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_Orientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingAttachmentId_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingAttachmentId = { "TrackingAttachmentId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcAlignmentSaveData, TrackingAttachmentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingAttachmentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingAttachmentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingOrigin_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingOrigin = { "TrackingOrigin", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcAlignmentSaveData, TrackingOrigin), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingOrigin_MetaData)) }; // 3606177280
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_CameraOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingAttachmentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewProp_TrackingOrigin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcAlignmentSaveData",
		sizeof(FMrcAlignmentSaveData),
		alignof(FMrcAlignmentSaveData),
		Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcAlignmentSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData;
class UScriptStruct* FMrcGarbageMatteSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcGarbageMatteSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcGarbageMatteSaveData>()
{
	return FMrcGarbageMatteSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcGarbageMatteSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcGarbageMatteSaveData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcGarbageMatteSaveData",
		sizeof(FMrcGarbageMatteSaveData),
		alignof(FMrcGarbageMatteSaveData),
		Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams;
class UScriptStruct* FMrcVideoProcessingParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcVideoProcessingParams, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcVideoProcessingParams"));
	}
	return Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcVideoProcessingParams>()
{
	return FMrcVideoProcessingParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialScalarParams_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialScalarParams_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialScalarParams_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialScalarParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialVectorParams_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialVectorParams_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialVectorParams_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialVectorParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcVideoProcessingParams>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_ValueProp = { "MaterialScalarParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_Key_KeyProp = { "MaterialScalarParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams = { "MaterialScalarParams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcVideoProcessingParams, MaterialScalarParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_ValueProp = { "MaterialVectorParams", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_Key_KeyProp = { "MaterialVectorParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams = { "MaterialVectorParams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcVideoProcessingParams, MaterialVectorParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialScalarParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewProp_MaterialVectorParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcVideoProcessingParams",
		sizeof(FMrcVideoProcessingParams),
		alignof(FMrcVideoProcessingParams),
		Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoProcessingParams()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.InnerSingleton, Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcCompositingSaveData;
class UScriptStruct* FMrcCompositingSaveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcCompositingSaveData, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcCompositingSaveData"));
	}
	return Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcCompositingSaveData>()
{
	return FMrcCompositingSaveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureDeviceURL_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureDeviceURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingLatency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackingLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoProcessingParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoProcessingParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcCompositingSaveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_CaptureDeviceURL_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_CaptureDeviceURL = { "CaptureDeviceURL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcCompositingSaveData, CaptureDeviceURL), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_CaptureDeviceURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_CaptureDeviceURL_MetaData)) }; // 628712410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_DepthOffset_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcCompositingSaveData, DepthOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_DepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_DepthOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_TrackingLatency_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_TrackingLatency = { "TrackingLatency", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcCompositingSaveData, TrackingLatency), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_TrackingLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_TrackingLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_VideoProcessingParams_MetaData[] = {
		{ "Category", "Data" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_VideoProcessingParams = { "VideoProcessingParams", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcCompositingSaveData, VideoProcessingParams), Z_Construct_UScriptStruct_FMrcVideoProcessingParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_VideoProcessingParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_VideoProcessingParams_MetaData)) }; // 1034952718
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_CaptureDeviceURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_DepthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_TrackingLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewProp_VideoProcessingParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcCompositingSaveData",
		sizeof(FMrcCompositingSaveData),
		alignof(FMrcCompositingSaveData),
		Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcCompositingSaveData()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.InnerSingleton, Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcCompositingSaveData.InnerSingleton;
	}
	void UMrcCalibrationData::StaticRegisterNativesUMrcCalibrationData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMrcCalibrationData);
	UClass* Z_Construct_UClass_UMrcCalibrationData_NoRegister()
	{
		return UMrcCalibrationData::StaticClass();
	}
	struct Z_Construct_UClass_UMrcCalibrationData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteSaveDatas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteSaveDatas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GarbageMatteSaveDatas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositingData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompositingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMrcCalibrationData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MrcCalibrationData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_LensData_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_LensData = { "LensData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationData, LensData), Z_Construct_UScriptStruct_FMrcLensCalibrationData, METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_LensData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_LensData_MetaData)) }; // 268163780
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_AlignmentData_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_AlignmentData = { "AlignmentData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationData, AlignmentData), Z_Construct_UScriptStruct_FMrcAlignmentSaveData, METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_AlignmentData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_AlignmentData_MetaData)) }; // 2535183541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas_Inner = { "GarbageMatteSaveDatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(nullptr, 0) }; // 178379560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas = { "GarbageMatteSaveDatas", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationData, GarbageMatteSaveDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas_MetaData)) }; // 178379560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_CompositingData_MetaData[] = {
		{ "Category", "SaveData" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_CompositingData = { "CompositingData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationData, CompositingData), Z_Construct_UScriptStruct_FMrcCompositingSaveData, METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_CompositingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_CompositingData_MetaData)) }; // 3562621968
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMrcCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_LensData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_AlignmentData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_GarbageMatteSaveDatas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationData_Statics::NewProp_CompositingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMrcCalibrationData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMrcCalibrationData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMrcCalibrationData_Statics::ClassParams = {
		&UMrcCalibrationData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMrcCalibrationData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMrcCalibrationData()
	{
		if (!Z_Registration_Info_UClass_UMrcCalibrationData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMrcCalibrationData.OuterSingleton, Z_Construct_UClass_UMrcCalibrationData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMrcCalibrationData.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMrcCalibrationData>()
	{
		return UMrcCalibrationData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMrcCalibrationData);
	UMrcCalibrationData::~UMrcCalibrationData() {}
	void UMrcCalibrationSaveGame::StaticRegisterNativesUMrcCalibrationSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMrcCalibrationSaveGame);
	UClass* Z_Construct_UClass_UMrcCalibrationSaveGame_NoRegister()
	{
		return UMrcCalibrationSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UMrcCalibrationSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigurationSaveVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConfigurationSaveVersion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMrcCalibrationData,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MrcCalibrationData.h" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_SaveSlotName_MetaData[] = {
		{ "Category", "SaveMetadata" },
		{ "Comment", "// Metadata about the save file\n" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
		{ "ToolTip", "Metadata about the save file" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationSaveGame, SaveSlotName), METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_SaveSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_SaveSlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "SaveMetadata" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationSaveGame, UserIndex), METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_ConfigurationSaveVersion_MetaData[] = {
		{ "Category", "SaveMetadata" },
		{ "ModuleRelativePath", "Public/MrcCalibrationData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_ConfigurationSaveVersion = { "ConfigurationSaveVersion", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcCalibrationSaveGame, ConfigurationSaveVersion), METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_ConfigurationSaveVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_ConfigurationSaveVersion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::NewProp_ConfigurationSaveVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMrcCalibrationSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::ClassParams = {
		&UMrcCalibrationSaveGame::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMrcCalibrationSaveGame()
	{
		if (!Z_Registration_Info_UClass_UMrcCalibrationSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMrcCalibrationSaveGame.OuterSingleton, Z_Construct_UClass_UMrcCalibrationSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMrcCalibrationSaveGame.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMrcCalibrationSaveGame>()
	{
		return UMrcCalibrationSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMrcCalibrationSaveGame);
	UMrcCalibrationSaveGame::~UMrcCalibrationSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ScriptStructInfo[] = {
		{ FMrcLensCalibrationData::StaticStruct, Z_Construct_UScriptStruct_FMrcLensCalibrationData_Statics::NewStructOps, TEXT("MrcLensCalibrationData"), &Z_Registration_Info_UScriptStruct_MrcLensCalibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcLensCalibrationData), 268163780U) },
		{ FMrcAlignmentSaveData::StaticStruct, Z_Construct_UScriptStruct_FMrcAlignmentSaveData_Statics::NewStructOps, TEXT("MrcAlignmentSaveData"), &Z_Registration_Info_UScriptStruct_MrcAlignmentSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcAlignmentSaveData), 2535183541U) },
		{ FMrcGarbageMatteSaveData::StaticStruct, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData_Statics::NewStructOps, TEXT("MrcGarbageMatteSaveData"), &Z_Registration_Info_UScriptStruct_MrcGarbageMatteSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcGarbageMatteSaveData), 178379560U) },
		{ FMrcVideoProcessingParams::StaticStruct, Z_Construct_UScriptStruct_FMrcVideoProcessingParams_Statics::NewStructOps, TEXT("MrcVideoProcessingParams"), &Z_Registration_Info_UScriptStruct_MrcVideoProcessingParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcVideoProcessingParams), 1034952718U) },
		{ FMrcCompositingSaveData::StaticStruct, Z_Construct_UScriptStruct_FMrcCompositingSaveData_Statics::NewStructOps, TEXT("MrcCompositingSaveData"), &Z_Registration_Info_UScriptStruct_MrcCompositingSaveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcCompositingSaveData), 3562621968U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMrcCalibrationData, UMrcCalibrationData::StaticClass, TEXT("UMrcCalibrationData"), &Z_Registration_Info_UClass_UMrcCalibrationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMrcCalibrationData), 2805987917U) },
		{ Z_Construct_UClass_UMrcCalibrationSaveGame, UMrcCalibrationSaveGame::StaticClass, TEXT("UMrcCalibrationSaveGame"), &Z_Registration_Info_UClass_UMrcCalibrationSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMrcCalibrationSaveGame), 3322886135U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_2119120130(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcCalibrationData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
