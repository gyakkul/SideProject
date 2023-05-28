// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SphericalLensDistortionModelHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphericalLensDistortionModelHandler() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_USphericalLensDistortionModelHandler();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_USphericalLensDistortionModelHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void USphericalLensDistortionModelHandler::StaticRegisterNativesUSphericalLensDistortionModelHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USphericalLensDistortionModelHandler);
	UClass* Z_Construct_UClass_USphericalLensDistortionModelHandler_NoRegister()
	{
		return USphericalLensDistortionModelHandler::StaticClass();
	}
	struct Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULensDistortionModelHandlerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Lens distortion handler for a spherical lens model that implements the Brown-Conrady polynomial model */" },
		{ "IncludePath", "SphericalLensDistortionModelHandler.h" },
		{ "ModuleRelativePath", "Public/SphericalLensDistortionModelHandler.h" },
		{ "ToolTip", "Lens distortion handler for a spherical lens model that implements the Brown-Conrady polynomial model" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USphericalLensDistortionModelHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::ClassParams = {
		&USphericalLensDistortionModelHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USphericalLensDistortionModelHandler()
	{
		if (!Z_Registration_Info_UClass_USphericalLensDistortionModelHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USphericalLensDistortionModelHandler.OuterSingleton, Z_Construct_UClass_USphericalLensDistortionModelHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USphericalLensDistortionModelHandler.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<USphericalLensDistortionModelHandler>()
	{
		return USphericalLensDistortionModelHandler::StaticClass();
	}
	USphericalLensDistortionModelHandler::USphericalLensDistortionModelHandler() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphericalLensDistortionModelHandler);
	USphericalLensDistortionModelHandler::~USphericalLensDistortionModelHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_SphericalLensDistortionModelHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_SphericalLensDistortionModelHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USphericalLensDistortionModelHandler, USphericalLensDistortionModelHandler::StaticClass, TEXT("USphericalLensDistortionModelHandler"), &Z_Registration_Info_UClass_USphericalLensDistortionModelHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USphericalLensDistortionModelHandler), 4097022211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_SphericalLensDistortionModelHandler_h_2552554407(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_SphericalLensDistortionModelHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_SphericalLensDistortionModelHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
