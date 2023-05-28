// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraNodalOffsetAlgoCheckerboard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgoCheckerboard() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_NoRegister();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UCameraNodalOffsetAlgoCheckerboard::StaticRegisterNativesUCameraNodalOffsetAlgoCheckerboard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgoCheckerboard);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_NoRegister()
	{
		return UCameraNodalOffsetAlgoCheckerboard::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraNodalOffsetAlgoPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Implements a nodal offset calibration algorithm based on a checkerboard.\n * It requires the checkerboard to be upright in the image due to symmetry ambiguity.\n */" },
		{ "IncludePath", "Calibrators/CameraNodalOffsetAlgoCheckerboard.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoCheckerboard.h" },
		{ "ToolTip", "Implements a nodal offset calibration algorithm based on a checkerboard.\nIt requires the checkerboard to be upright in the image due to symmetry ambiguity." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgoCheckerboard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::ClassParams = {
		&UCameraNodalOffsetAlgoCheckerboard::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgoCheckerboard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgoCheckerboard.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgoCheckerboard.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraNodalOffsetAlgoCheckerboard>()
	{
		return UCameraNodalOffsetAlgoCheckerboard::StaticClass();
	}
	UCameraNodalOffsetAlgoCheckerboard::UCameraNodalOffsetAlgoCheckerboard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgoCheckerboard);
	UCameraNodalOffsetAlgoCheckerboard::~UCameraNodalOffsetAlgoCheckerboard() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoCheckerboard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoCheckerboard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgoCheckerboard, UCameraNodalOffsetAlgoCheckerboard::StaticClass, TEXT("UCameraNodalOffsetAlgoCheckerboard"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgoCheckerboard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgoCheckerboard), 2558473459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoCheckerboard_h_1547514996(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoCheckerboard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoCheckerboard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
