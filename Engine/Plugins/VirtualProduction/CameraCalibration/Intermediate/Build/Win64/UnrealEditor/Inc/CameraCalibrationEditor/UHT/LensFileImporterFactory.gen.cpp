// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/LensFileImporterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensFileImporterFactory() {}
// Cross Module References
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensFileImporterFactory();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensFileImporterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void ULensFileImporterFactory::StaticRegisterNativesULensFileImporterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensFileImporterFactory);
	UClass* Z_Construct_UClass_ULensFileImporterFactory_NoRegister()
	{
		return ULensFileImporterFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULensFileImporterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensFileImporterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensFileImporterFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/LensFileImporterFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/LensFileImporterFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensFileImporterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensFileImporterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensFileImporterFactory_Statics::ClassParams = {
		&ULensFileImporterFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULensFileImporterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensFileImporterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensFileImporterFactory()
	{
		if (!Z_Registration_Info_UClass_ULensFileImporterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensFileImporterFactory.OuterSingleton, Z_Construct_UClass_ULensFileImporterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensFileImporterFactory.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<ULensFileImporterFactory>()
	{
		return ULensFileImporterFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensFileImporterFactory);
	ULensFileImporterFactory::~ULensFileImporterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Factories_LensFileImporterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Factories_LensFileImporterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensFileImporterFactory, ULensFileImporterFactory::StaticClass, TEXT("ULensFileImporterFactory"), &Z_Registration_Info_UClass_ULensFileImporterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensFileImporterFactory), 589725092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Factories_LensFileImporterFactory_h_872088482(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Factories_LensFileImporterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_Factories_LensFileImporterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
