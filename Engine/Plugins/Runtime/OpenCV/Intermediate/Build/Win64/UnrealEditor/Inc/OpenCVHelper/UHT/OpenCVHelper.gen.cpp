// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenCVHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenCVHelper() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OPENCVHELPER_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase();
	UPackage* Z_Construct_UPackage__Script_OpenCVHelper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase;
class UScriptStruct* FOpenCVLensDistortionParametersBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase, (UObject*)Z_Construct_UPackage__Script_OpenCVHelper(), TEXT("OpenCVLensDistortionParametersBase"));
	}
	return Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.OuterSingleton;
}
template<> OPENCVHELPER_API UScriptStruct* StaticStruct<FOpenCVLensDistortionParametersBase>()
{
	return FOpenCVLensDistortionParametersBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K4_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K5_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K6_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_F;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_C;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFisheyeModel_MetaData[];
#endif
		static void NewProp_bUseFisheyeModel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFisheyeModel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Mathematic camera model for lens distortion/undistortion.\n * Camera matrix =\n *  | F.X  0  C.x |\n *  |  0  F.Y C.Y |\n *  |  0   0   1  |\n * where F and C are normalized.\n */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Mathematic camera model for lens distortion/undistortion.\nCamera matrix =\n | F.X  0  C.x |\n |  0  F.Y C.Y |\n |  0   0   1  |\nwhere F and C are normalized." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenCVLensDistortionParametersBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K1_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #1. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K1), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K2_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #2. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K2), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P1_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Tangential parameter #1. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Tangential parameter #1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, P1), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P2_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Tangential parameter #2. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Tangential parameter #2." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, P2), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K3_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #3. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #3." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K3), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K4_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #4. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #4." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K4 = { "K4", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K4), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K4_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K5_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #5. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #5." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K5 = { "K5", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K5), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K5_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K6_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Radial parameter #6. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Radial parameter #6." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K6 = { "K6", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, K6), METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K6_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_F_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Camera matrix's normalized Fx and Fy. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Camera matrix's normalized Fx and Fy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, F), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_F_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_F_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_C_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Camera matrix's normalized Cx and Cy. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Camera matrix's normalized Cx and Cy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOpenCVLensDistortionParametersBase, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel_MetaData[] = {
		{ "Category", "Lens Distortion|Parameters" },
		{ "Comment", "/** Camera lens needs Fisheye camera model. */" },
		{ "ModuleRelativePath", "Public/OpenCVHelper.h" },
		{ "ToolTip", "Camera lens needs Fisheye camera model." },
	};
#endif
	void Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel_SetBit(void* Obj)
	{
		((FOpenCVLensDistortionParametersBase*)Obj)->bUseFisheyeModel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel = { "bUseFisheyeModel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOpenCVLensDistortionParametersBase), &Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_P2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_K6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_F,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_C,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewProp_bUseFisheyeModel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OpenCVHelper,
		nullptr,
		&NewStructOps,
		"OpenCVLensDistortionParametersBase",
		sizeof(FOpenCVLensDistortionParametersBase),
		alignof(FOpenCVLensDistortionParametersBase),
		Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.InnerSingleton, Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_Statics::ScriptStructInfo[] = {
		{ FOpenCVLensDistortionParametersBase::StaticStruct, Z_Construct_UScriptStruct_FOpenCVLensDistortionParametersBase_Statics::NewStructOps, TEXT("OpenCVLensDistortionParametersBase"), &Z_Registration_Info_UScriptStruct_OpenCVLensDistortionParametersBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenCVLensDistortionParametersBase), 3281058648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_2073973215(TEXT("/Script/OpenCVHelper"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenCV_Source_OpenCVHelper_Public_OpenCVHelper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
