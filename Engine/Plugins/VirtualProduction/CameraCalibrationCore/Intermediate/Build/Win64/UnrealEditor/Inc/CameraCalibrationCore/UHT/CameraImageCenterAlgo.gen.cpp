// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraImageCenterAlgo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraImageCenterAlgo() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraImageCenterAlgo();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void UCameraImageCenterAlgo::StaticRegisterNativesUCameraImageCenterAlgo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraImageCenterAlgo);
	UClass* Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister()
	{
		return UCameraImageCenterAlgo::StaticClass();
	}
	struct Z_Construct_UClass_UCameraImageCenterAlgo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraImageCenterAlgo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraImageCenterAlgo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCameraImageCenterAlgo defines the interface that any image center algorithm should implement\n * in order to be used and listed by the Image Center Tool.\n */" },
		{ "IncludePath", "CameraImageCenterAlgo.h" },
		{ "ModuleRelativePath", "Public/CameraImageCenterAlgo.h" },
		{ "ToolTip", "UCameraImageCenterAlgo defines the interface that any image center algorithm should implement\nin order to be used and listed by the Image Center Tool." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraImageCenterAlgo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraImageCenterAlgo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraImageCenterAlgo_Statics::ClassParams = {
		&UCameraImageCenterAlgo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraImageCenterAlgo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraImageCenterAlgo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraImageCenterAlgo()
	{
		if (!Z_Registration_Info_UClass_UCameraImageCenterAlgo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraImageCenterAlgo.OuterSingleton, Z_Construct_UClass_UCameraImageCenterAlgo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraImageCenterAlgo.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraImageCenterAlgo>()
	{
		return UCameraImageCenterAlgo::StaticClass();
	}
	UCameraImageCenterAlgo::UCameraImageCenterAlgo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraImageCenterAlgo);
	UCameraImageCenterAlgo::~UCameraImageCenterAlgo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraImageCenterAlgo, UCameraImageCenterAlgo::StaticClass, TEXT("UCameraImageCenterAlgo"), &Z_Registration_Info_UClass_UCameraImageCenterAlgo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraImageCenterAlgo), 1296024319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_2741645264(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraImageCenterAlgo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
