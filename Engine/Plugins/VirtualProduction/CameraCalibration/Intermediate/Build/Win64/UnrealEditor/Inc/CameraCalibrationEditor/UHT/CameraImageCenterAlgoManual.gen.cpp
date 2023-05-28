// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Calibrators/CameraImageCenterAlgoManual.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraImageCenterAlgoManual() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraImageCenterAlgo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterInfo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraImageCenterAlgoManual();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UCameraImageCenterAlgoManual_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UCameraImageCenterAlgoManual::StaticRegisterNativesUCameraImageCenterAlgoManual()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraImageCenterAlgoManual);
	UClass* Z_Construct_UClass_UCameraImageCenterAlgoManual_NoRegister()
	{
		return UCameraImageCenterAlgoManual::StaticClass();
	}
	struct Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalImageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalImageCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdjustedImageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdjustedImageCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraImageCenterAlgo,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements an image center adjustment algorithm.\n * The Manual algorithm simply takes manual input from the user and adjusts the image center by small increments\n */" },
		{ "IncludePath", "Calibrators/CameraImageCenterAlgoManual.h" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraImageCenterAlgoManual.h" },
		{ "ToolTip", "Implements an image center adjustment algorithm.\nThe Manual algorithm simply takes manual input from the user and adjusts the image center by small increments" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_OriginalImageCenter_MetaData[] = {
		{ "Comment", "/** Cached original image center that was evaluated at the current focus and zoom */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraImageCenterAlgoManual.h" },
		{ "ToolTip", "Cached original image center that was evaluated at the current focus and zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_OriginalImageCenter = { "OriginalImageCenter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraImageCenterAlgoManual, OriginalImageCenter), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_OriginalImageCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_OriginalImageCenter_MetaData)) }; // 1446709430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_AdjustedImageCenter_MetaData[] = {
		{ "Comment", "/** Latest image center that may have been adjusted by manual user input */" },
		{ "ModuleRelativePath", "Private/Calibrators/CameraImageCenterAlgoManual.h" },
		{ "ToolTip", "Latest image center that may have been adjusted by manual user input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_AdjustedImageCenter = { "AdjustedImageCenter", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraImageCenterAlgoManual, AdjustedImageCenter), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_AdjustedImageCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_AdjustedImageCenter_MetaData)) }; // 1446709430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_OriginalImageCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::NewProp_AdjustedImageCenter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraImageCenterAlgoManual>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::ClassParams = {
		&UCameraImageCenterAlgoManual::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraImageCenterAlgoManual()
	{
		if (!Z_Registration_Info_UClass_UCameraImageCenterAlgoManual.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraImageCenterAlgoManual.OuterSingleton, Z_Construct_UClass_UCameraImageCenterAlgoManual_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraImageCenterAlgoManual.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UCameraImageCenterAlgoManual>()
	{
		return UCameraImageCenterAlgoManual::StaticClass();
	}
	UCameraImageCenterAlgoManual::UCameraImageCenterAlgoManual(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraImageCenterAlgoManual);
	UCameraImageCenterAlgoManual::~UCameraImageCenterAlgoManual() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraImageCenterAlgoManual_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraImageCenterAlgoManual_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraImageCenterAlgoManual, UCameraImageCenterAlgoManual::StaticClass, TEXT("UCameraImageCenterAlgoManual"), &Z_Registration_Info_UClass_UCameraImageCenterAlgoManual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraImageCenterAlgoManual), 2911226137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraImageCenterAlgoManual_h_1364695157(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraImageCenterAlgoManual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Calibrators_CameraImageCenterAlgoManual_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
