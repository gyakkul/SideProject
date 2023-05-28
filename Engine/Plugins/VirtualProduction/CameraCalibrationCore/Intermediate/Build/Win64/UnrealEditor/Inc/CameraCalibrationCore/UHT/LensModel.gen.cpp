// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Models/LensModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensModel() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void ULensModel::StaticRegisterNativesULensModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensModel);
	UClass* Z_Construct_UClass_ULensModel_NoRegister()
	{
		return ULensModel::StaticClass();
	}
	struct Z_Construct_UClass_ULensModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Abstract base class for lens models\n */" },
		{ "IncludePath", "Models/LensModel.h" },
		{ "ModuleRelativePath", "Public/Models/LensModel.h" },
		{ "ToolTip", "Abstract base class for lens models" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensModel_Statics::ClassParams = {
		&ULensModel::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULensModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensModel()
	{
		if (!Z_Registration_Info_UClass_ULensModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensModel.OuterSingleton, Z_Construct_UClass_ULensModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensModel.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<ULensModel>()
	{
		return ULensModel::StaticClass();
	}
	ULensModel::ULensModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensModel);
	ULensModel::~ULensModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensModel, ULensModel::StaticClass, TEXT("ULensModel"), &Z_Registration_Info_UClass_ULensModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensModel), 4083608076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_1953944542(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Models_LensModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
