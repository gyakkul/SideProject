// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditor/LensInfoStep.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensInfoStep() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationStep();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensInfo();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensInfoStep();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensInfoStep_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void ULensInfoStep::StaticRegisterNativesULensInfoStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensInfoStep);
	UClass* Z_Construct_UClass_ULensInfoStep_NoRegister()
	{
		return ULensInfoStep::StaticClass();
	}
	struct Z_Construct_UClass_ULensInfoStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLensInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLensInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensInfoStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraCalibrationStep,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensInfoStep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULensInfoStep is used as the initial step to provide information about the lens you are going to calibrate\n */" },
		{ "IncludePath", "AssetEditor/LensInfoStep.h" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensInfoStep.h" },
		{ "ToolTip", "ULensInfoStep is used as the initial step to provide information about the lens you are going to calibrate" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensInfoStep_Statics::NewProp_CachedLensInfo_MetaData[] = {
		{ "Comment", "/** Cached previous LensInfo, used to trigger correct transactions to allow for undo operations */" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensInfoStep.h" },
		{ "ToolTip", "Cached previous LensInfo, used to trigger correct transactions to allow for undo operations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensInfoStep_Statics::NewProp_CachedLensInfo = { "CachedLensInfo", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensInfoStep, CachedLensInfo), Z_Construct_UScriptStruct_FLensInfo, METADATA_PARAMS(Z_Construct_UClass_ULensInfoStep_Statics::NewProp_CachedLensInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensInfoStep_Statics::NewProp_CachedLensInfo_MetaData)) }; // 2880303412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensInfoStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensInfoStep_Statics::NewProp_CachedLensInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensInfoStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensInfoStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensInfoStep_Statics::ClassParams = {
		&ULensInfoStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULensInfoStep_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensInfoStep_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULensInfoStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensInfoStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensInfoStep()
	{
		if (!Z_Registration_Info_UClass_ULensInfoStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensInfoStep.OuterSingleton, Z_Construct_UClass_ULensInfoStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensInfoStep.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<ULensInfoStep>()
	{
		return ULensInfoStep::StaticClass();
	}
	ULensInfoStep::ULensInfoStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensInfoStep);
	ULensInfoStep::~ULensInfoStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensInfoStep, ULensInfoStep::StaticClass, TEXT("ULensInfoStep"), &Z_Registration_Info_UClass_ULensInfoStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensInfoStep), 877528416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_3777699736(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensInfoStep_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
