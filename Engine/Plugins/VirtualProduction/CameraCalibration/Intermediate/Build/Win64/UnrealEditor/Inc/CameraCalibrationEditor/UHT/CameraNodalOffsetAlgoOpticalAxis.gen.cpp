// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraNodalOffsetAlgoOpticalAxis.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgoOpticalAxis() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalPointOffset();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_NoRegister();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoPoints();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UCameraNodalOffsetAlgoOpticalAxis::StaticRegisterNativesUCameraNodalOffsetAlgoOpticalAxis()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgoOpticalAxis);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_NoRegister()
	{
		return UCameraNodalOffsetAlgoOpticalAxis::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustedNodalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustedNodalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedNodalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastSavedNodalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntrancePupilPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntrancePupilPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedEntrancePupilPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSavedEntrancePupilPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraNodalOffsetAlgoPoints,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a nodal offset calibration algorithm that relies on the idea that the nodal point of the lens\n * lies along the optical axis of the lens, and that the optical axis can be found by finding multiple points\n * in 3D that map to the principal point of the lens in 2D.\n *\n * The algorithm uses 3d points (UCalibrationPointComponent) specified in a selectable calibrator with features \n * that the user can identify. By aligning that feature such that it projects to the principal point of the lens\n * (easily identifiable using the automatically enabled crosshair overlay), the user captures two or more 3D\n * points. The algorithm computes a line that connects those points, pointing away from the camera, which will\n * be the optical axis. The nodal point is then found by moving the camera along that optical axis until the \n * calibrator appears perfectly aligned in the composite image (CG + Media).\n */" },
		{ "IncludePath", "Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "Implements a nodal offset calibration algorithm that relies on the idea that the nodal point of the lens\nlies along the optical axis of the lens, and that the optical axis can be found by finding multiple points\nin 3D that map to the principal point of the lens in 2D.\n\nThe algorithm uses 3d points (UCalibrationPointComponent) specified in a selectable calibrator with features\nthat the user can identify. By aligning that feature such that it projects to the principal point of the lens\n(easily identifiable using the automatically enabled crosshair overlay), the user captures two or more 3D\npoints. The algorithm computes a line that connects those points, pointing away from the camera, which will\nbe the optical axis. The nodal point is then found by moving the camera along that optical axis until the\ncalibrator appears perfectly aligned in the composite image (CG + Media)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_AdjustedNodalOffset_MetaData[] = {
		{ "Comment", "/** The current value of the nodal offset that has been written to the lens file, but not necessarily transacted */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "The current value of the nodal offset that has been written to the lens file, but not necessarily transacted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_AdjustedNodalOffset = { "AdjustedNodalOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraNodalOffsetAlgoOpticalAxis, AdjustedNodalOffset), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_AdjustedNodalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_AdjustedNodalOffset_MetaData)) }; // 3989063233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedNodalOffset_MetaData[] = {
		{ "Comment", "/** The last nodal offset to have been saved and transacted */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "The last nodal offset to have been saved and transacted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedNodalOffset = { "LastSavedNodalOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraNodalOffsetAlgoOpticalAxis, LastSavedNodalOffset), Z_Construct_UScriptStruct_FNodalPointOffset, METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedNodalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedNodalOffset_MetaData)) }; // 3989063233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_EntrancePupilPosition_MetaData[] = {
		{ "Comment", "/** The parametric position along the optical axis where the nodal points sits */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "The parametric position along the optical axis where the nodal points sits" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_EntrancePupilPosition = { "EntrancePupilPosition", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraNodalOffsetAlgoOpticalAxis, EntrancePupilPosition), METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_EntrancePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_EntrancePupilPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedEntrancePupilPosition_MetaData[] = {
		{ "Comment", "/** The last entrance pupil position to have been saved and transacted */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "The last entrance pupil position to have been saved and transacted" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedEntrancePupilPosition = { "LastSavedEntrancePupilPosition", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraNodalOffsetAlgoOpticalAxis, LastSavedEntrancePupilPosition), METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedEntrancePupilPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedEntrancePupilPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_OverlayTexture_MetaData[] = {
		{ "Comment", "/** Texture used to draw the crosshair overlay */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraNodalOffsetAlgoOpticalAxis.h" },
		{ "ToolTip", "Texture used to draw the crosshair overlay" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_OverlayTexture = { "OverlayTexture", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraNodalOffsetAlgoOpticalAxis, OverlayTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_OverlayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_OverlayTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_AdjustedNodalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedNodalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_EntrancePupilPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_LastSavedEntrancePupilPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::NewProp_OverlayTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgoOpticalAxis>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::ClassParams = {
		&UCameraNodalOffsetAlgoOpticalAxis::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgoOpticalAxis.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgoOpticalAxis.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgoOpticalAxis.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraNodalOffsetAlgoOpticalAxis>()
	{
		return UCameraNodalOffsetAlgoOpticalAxis::StaticClass();
	}
	UCameraNodalOffsetAlgoOpticalAxis::UCameraNodalOffsetAlgoOpticalAxis(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgoOpticalAxis);
	UCameraNodalOffsetAlgoOpticalAxis::~UCameraNodalOffsetAlgoOpticalAxis() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoOpticalAxis_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoOpticalAxis_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgoOpticalAxis, UCameraNodalOffsetAlgoOpticalAxis::StaticClass, TEXT("UCameraNodalOffsetAlgoOpticalAxis"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgoOpticalAxis, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgoOpticalAxis), 3877097312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoOpticalAxis_h_812202430(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoOpticalAxis_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraNodalOffsetAlgoOpticalAxis_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
