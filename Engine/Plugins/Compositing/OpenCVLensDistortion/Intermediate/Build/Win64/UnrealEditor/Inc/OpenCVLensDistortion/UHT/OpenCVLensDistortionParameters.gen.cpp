// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVLensDistortionParameters() {}
// Cross Module References
	OPENCVHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_OpenCVLensDistortion();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo;
class UScriptStruct* FOpenCVCameraViewInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo, (UObject*)Z_Construct_UPackage__Script_OpenCVLensDistortion(), TEXT("OpenCVCameraViewInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.OuterSingleton;
}
template<> OPENCVLENSDISTORTION_API UScriptStruct* StaticStruct<FOpenCVCameraViewInfo>()
{
	return FOpenCVCameraViewInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLengthRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionParameters.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenCVCameraViewInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_HorizontalFOV_MetaData[] = {
		{ "Category", "Camera Info" },
		{ "Comment", "/** Horizontal Field Of View in degrees */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionParameters.h" },
		{ "ToolTip", "Horizontal Field Of View in degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_HorizontalFOV = { "HorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVCameraViewInfo, HorizontalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_HorizontalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_HorizontalFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_VerticalFOV_MetaData[] = {
		{ "Category", "Camera Info" },
		{ "Comment", "/** Vertical Field Of View in degrees */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionParameters.h" },
		{ "ToolTip", "Vertical Field Of View in degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_VerticalFOV = { "VerticalFOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVCameraViewInfo, VerticalFOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_VerticalFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_VerticalFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_FocalLengthRatio_MetaData[] = {
		{ "Category", "Camera Info" },
		{ "Comment", "/** Focal length aspect ratio -> Fy / Fx */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionParameters.h" },
		{ "ToolTip", "Focal length aspect ratio -> Fy / Fx" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_FocalLengthRatio = { "FocalLengthRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVCameraViewInfo, FocalLengthRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_FocalLengthRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_FocalLengthRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_HorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_VerticalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewProp_FocalLengthRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVLensDistortion,
		nullptr,
		&NewStructOps,
		"OpenCVCameraViewInfo",
		sizeof(FOpenCVCameraViewInfo),
		alignof(FOpenCVCameraViewInfo),
		Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenCVCameraViewInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.InnerSingleton, Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOpenCVLensDistortionParameters>() == std::is_polymorphic<FOpenCVLensDistortionParametersBase>(), "USTRUCT FOpenCVLensDistortionParameters cannot be polymorphic unless super FOpenCVLensDistortionParametersBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters;
class UScriptStruct* FOpenCVLensDistortionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, (UObject*)Z_Construct_UPackage__Script_OpenCVLensDistortion(), TEXT("OpenCVLensDistortionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.OuterSingleton;
}
template<> OPENCVLENSDISTORTION_API UScriptStruct* StaticStruct<FOpenCVLensDistortionParameters>()
{
	return FOpenCVLensDistortionParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mathematic camera model for lens distortion/undistortion.\n * Camera matrix =\n *  | F.X  0  C.x |\n *  |  0  F.Y C.Y |\n *  |  0   0   1  |\n * where F and C are normalized.\n */" },
		{ "ModuleRelativePath", "Public/OpenCVLensDistortionParameters.h" },
		{ "ToolTip", "Mathematic camera model for lens distortion/undistortion.\nCamera matrix =\n | F.X  0  C.x |\n |  0  F.Y C.Y |\n |  0   0   1  |\nwhere F and C are normalized." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenCVLensDistortionParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVLensDistortion,
		Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase,
		&NewStructOps,
		"OpenCVLensDistortionParameters",
		sizeof(FOpenCVLensDistortionParameters),
		alignof(FOpenCVLensDistortionParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.InnerSingleton, Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h_Statics::ScriptStructInfo[] = {
		{ FOpenCVCameraViewInfo::StaticStruct, Z_Construct_UScriptStruct_FOpenCVCameraViewInfo_Statics::NewStructOps, TEXT("OpenCVCameraViewInfo"), &Z_Registration_Info_UScriptStruct_OpenCVCameraViewInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenCVCameraViewInfo), 2776755653U) },
		{ FOpenCVLensDistortionParameters::StaticStruct, Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters_Statics::NewStructOps, TEXT("OpenCVLensDistortionParameters"), &Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenCVLensDistortionParameters), 1893023535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h_965105976(TEXT("/Script/OpenCVLensDistortion"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensDistortion_Public_OpenCVLensDistortionParameters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
