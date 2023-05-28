// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnamorphicLensDistortionModelHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnamorphicLensDistortionModelHandler() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UAnamorphicLensDistortionModelHandler();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void UAnamorphicLensDistortionModelHandler::StaticRegisterNativesUAnamorphicLensDistortionModelHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnamorphicLensDistortionModelHandler);
	UClass* Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_NoRegister()
	{
		return UAnamorphicLensDistortionModelHandler::StaticClass();
	}
	struct Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULensDistortionModelHandlerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Lens distortion handler for an Anamorphic lens model that implements the 3DE4 Anamorphic - Standard Degree 4 model */" },
		{ "IncludePath", "AnamorphicLensDistortionModelHandler.h" },
		{ "ModuleRelativePath", "Public/AnamorphicLensDistortionModelHandler.h" },
		{ "ToolTip", "Lens distortion handler for an Anamorphic lens model that implements the 3DE4 Anamorphic - Standard Degree 4 model" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnamorphicLensDistortionModelHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::ClassParams = {
		&UAnamorphicLensDistortionModelHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnamorphicLensDistortionModelHandler()
	{
		if (!Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.OuterSingleton, Z_Construct_UClass_UAnamorphicLensDistortionModelHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UAnamorphicLensDistortionModelHandler>()
	{
		return UAnamorphicLensDistortionModelHandler::StaticClass();
	}
	UAnamorphicLensDistortionModelHandler::UAnamorphicLensDistortionModelHandler() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnamorphicLensDistortionModelHandler);
	UAnamorphicLensDistortionModelHandler::~UAnamorphicLensDistortionModelHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_AnamorphicLensDistortionModelHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_AnamorphicLensDistortionModelHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnamorphicLensDistortionModelHandler, UAnamorphicLensDistortionModelHandler::StaticClass, TEXT("UAnamorphicLensDistortionModelHandler"), &Z_Registration_Info_UClass_UAnamorphicLensDistortionModelHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnamorphicLensDistortionModelHandler), 511782814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_AnamorphicLensDistortionModelHandler_h_2536154688(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_AnamorphicLensDistortionModelHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_AnamorphicLensDistortionModelHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
