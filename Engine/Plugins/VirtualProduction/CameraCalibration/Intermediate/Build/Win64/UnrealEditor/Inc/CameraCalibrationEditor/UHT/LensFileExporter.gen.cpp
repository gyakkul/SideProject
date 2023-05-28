// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exporters/LensFileExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensFileExporter() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensFileExporter();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensFileExporter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void ULensFileExporter::StaticRegisterNativesULensFileExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensFileExporter);
	UClass* Z_Construct_UClass_ULensFileExporter_NoRegister()
	{
		return ULensFileExporter::StaticClass();
	}
	struct Z_Construct_UClass_ULensFileExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensFileExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFileExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/LensFileExporter.h" },
		{ "ModuleRelativePath", "Private/Exporters/LensFileExporter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensFileExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensFileExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensFileExporter_Statics::ClassParams = {
		&ULensFileExporter::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULensFileExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFileExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensFileExporter()
	{
		if (!Z_Registration_Info_UClass_ULensFileExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensFileExporter.OuterSingleton, Z_Construct_UClass_ULensFileExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensFileExporter.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<ULensFileExporter>()
	{
		return ULensFileExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensFileExporter);
	ULensFileExporter::~ULensFileExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensFileExporter, ULensFileExporter::StaticClass, TEXT("ULensFileExporter"), &Z_Registration_Info_UClass_ULensFileExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensFileExporter), 793209774U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_455889319(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Exporters_LensFileExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
