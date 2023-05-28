// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraLensDistortionAlgo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLensDistortionAlgo() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void UCameraLensDistortionAlgo::StaticRegisterNativesUCameraLensDistortionAlgo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensDistortionAlgo);
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister()
	{
		return UCameraLensDistortionAlgo::StaticClass();
	}
	struct Z_Construct_UClass_UCameraLensDistortionAlgo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines the interface that any lens distortion algorithm should implement\n * in order to be used and listed by the Lens Distortion Tool. \n */" },
		{ "IncludePath", "CameraLensDistortionAlgo.h" },
		{ "ModuleRelativePath", "Public/CameraLensDistortionAlgo.h" },
		{ "ToolTip", "Defines the interface that any lens distortion algorithm should implement\nin order to be used and listed by the Lens Distortion Tool." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLensDistortionAlgo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::ClassParams = {
		&UCameraLensDistortionAlgo::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraLensDistortionAlgo()
	{
		if (!Z_Registration_Info_UClass_UCameraLensDistortionAlgo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensDistortionAlgo.OuterSingleton, Z_Construct_UClass_UCameraLensDistortionAlgo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraLensDistortionAlgo.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraLensDistortionAlgo>()
	{
		return UCameraLensDistortionAlgo::StaticClass();
	}
	UCameraLensDistortionAlgo::UCameraLensDistortionAlgo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensDistortionAlgo);
	UCameraLensDistortionAlgo::~UCameraLensDistortionAlgo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLensDistortionAlgo, UCameraLensDistortionAlgo::StaticClass, TEXT("UCameraLensDistortionAlgo"), &Z_Registration_Info_UClass_UCameraLensDistortionAlgo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensDistortionAlgo), 1575135718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_4209729962(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraLensDistortionAlgo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
