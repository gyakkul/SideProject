// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraNodalOffsetAlgoAruco.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgoAruco() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoAruco();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_NoRegister();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UCameraNodalOffsetAlgoAruco::StaticRegisterNativesUCameraNodalOffsetAlgoAruco()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgoAruco);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_NoRegister()
	{
		return UCameraNodalOffsetAlgoAruco::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraNodalOffsetAlgoPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Implements a nodal offset calibration algorithm. It uses 3d points (UCalibrationPointComponent) \n * specified in a selectable calibrator that should be named after the correponding Aruco markers.\n */" },
		{ "IncludePath", "Calibrators/CameraNodalOffsetAlgoAruco.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoAruco.h" },
		{ "ToolTip", "Implements a nodal offset calibration algorithm. It uses 3d points (UCalibrationPointComponent)\nspecified in a selectable calibrator that should be named after the correponding Aruco markers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgoAruco>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::ClassParams = {
		&UCameraNodalOffsetAlgoAruco::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoAruco()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgoAruco.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgoAruco.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgoAruco_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgoAruco.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraNodalOffsetAlgoAruco>()
	{
		return UCameraNodalOffsetAlgoAruco::StaticClass();
	}
	UCameraNodalOffsetAlgoAruco::UCameraNodalOffsetAlgoAruco(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgoAruco);
	UCameraNodalOffsetAlgoAruco::~UCameraNodalOffsetAlgoAruco() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoAruco_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoAruco_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgoAruco, UCameraNodalOffsetAlgoAruco::StaticClass, TEXT("UCameraNodalOffsetAlgoAruco"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgoAruco, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgoAruco), 3455096579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoAruco_h_3403335439(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoAruco_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoAruco_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
