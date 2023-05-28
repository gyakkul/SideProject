// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Models/SphericalLensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphericalLensModel() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_USphericalLensModel();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_USphericalLensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalDistortionParameters;
class UScriptStruct* FSphericalDistortionParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalDistortionParameters, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("SphericalDistortionParameters"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FSphericalDistortionParameters>()
{
	return FSphericalDistortionParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_P2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Spherical lens distortion parameters\n * All parameters are unitless and represent the coefficients used to undistort a distorted image\n * Refer to the OpenCV camera calibration documentation for the intended units/usage of these parameters:\n * https://docs.opencv.org/3.4/d9/d0c/group__calib3d.html\n */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Spherical lens distortion parameters\nAll parameters are unitless and represent the coefficients used to undistort a distorted image\nRefer to the OpenCV camera calibration documentation for the intended units/usage of these parameters:\nhttps://docs.opencv.org/3.4/d9/d0c/group__calib3d.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalDistortionParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K1_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Radial coefficient of the r^2 term */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Radial coefficient of the r^2 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalDistortionParameters, K1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K2_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Radial coefficient of the r^4 term */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Radial coefficient of the r^4 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalDistortionParameters, K2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K3_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Radial coefficient of the r^6 term */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Radial coefficient of the r^6 term" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalDistortionParameters, K3), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P1_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** First tangential coefficient */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "First tangential coefficient" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalDistortionParameters, P1), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P2_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Second tangential coefficient */" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Second tangential coefficient" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSphericalDistortionParameters, P2), METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P2_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_K3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewProp_P2,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"SphericalDistortionParameters",
		sizeof(FSphericalDistortionParameters),
		alignof(FSphericalDistortionParameters),
		Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSphericalDistortionParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.InnerSingleton, Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SphericalDistortionParameters.InnerSingleton;
	}
	void USphericalLensModel::StaticRegisterNativesUSphericalLensModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphericalLensModel);
	UClass* Z_Construct_UClass_USphericalLensModel_NoRegister()
	{
		return USphericalLensModel::StaticClass();
	}
	struct Z_Construct_UClass_USphericalLensModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphericalLensModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULensModel,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphericalLensModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Spherical lens model, using spherical lens distortion parameters\n */" },
		{ "DisplayName", "Spherical Lens Model" },
		{ "IncludePath", "Models/SphericalLensModel.h" },
		{ "ModuleRelativePath", "Public/Models/SphericalLensModel.h" },
		{ "ToolTip", "Spherical lens model, using spherical lens distortion parameters" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphericalLensModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphericalLensModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphericalLensModel_Statics::ClassParams = {
		&USphericalLensModel::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USphericalLensModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphericalLensModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphericalLensModel()
	{
		if (!Z_Registration_Info_UClass_USphericalLensModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphericalLensModel.OuterSingleton, Z_Construct_UClass_USphericalLensModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphericalLensModel.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<USphericalLensModel>()
	{
		return USphericalLensModel::StaticClass();
	}
	USphericalLensModel::USphericalLensModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphericalLensModel);
	USphericalLensModel::~USphericalLensModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ScriptStructInfo[] = {
		{ FSphericalDistortionParameters::StaticStruct, Z_Construct_UScriptStruct_FSphericalDistortionParameters_Statics::NewStructOps, TEXT("SphericalDistortionParameters"), &Z_Registration_Info_UScriptStruct_SphericalDistortionParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalDistortionParameters), 4068343498U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphericalLensModel, USphericalLensModel::StaticClass, TEXT("USphericalLensModel"), &Z_Registration_Info_UClass_USphericalLensModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphericalLensModel), 1784487309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_1290352441(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_SphericalLensModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
