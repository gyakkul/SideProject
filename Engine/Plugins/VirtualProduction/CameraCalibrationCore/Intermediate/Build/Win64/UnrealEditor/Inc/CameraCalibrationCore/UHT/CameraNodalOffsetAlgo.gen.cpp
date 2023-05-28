// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraNodalOffsetAlgo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraNodalOffsetAlgo() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	void UCameraNodalOffsetAlgo::StaticRegisterNativesUCameraNodalOffsetAlgo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraNodalOffsetAlgo);
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister()
	{
		return UCameraNodalOffsetAlgo::StaticClass();
	}
	struct Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCameraNodalOffsetAlgo defines the interface that any nodal calibration point algorithm should implement\n * in order to be used and listed by the Nodal Offset Tool. \n */" },
		{ "IncludePath", "CameraNodalOffsetAlgo.h" },
		{ "ModuleRelativePath", "Public/CameraNodalOffsetAlgo.h" },
		{ "ToolTip", "UCameraNodalOffsetAlgo defines the interface that any nodal calibration point algorithm should implement\nin order to be used and listed by the Nodal Offset Tool." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraNodalOffsetAlgo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::ClassParams = {
		&UCameraNodalOffsetAlgo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo()
	{
		if (!Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.OuterSingleton, Z_Construct_UClass_UCameraNodalOffsetAlgo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraNodalOffsetAlgo.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraNodalOffsetAlgo>()
	{
		return UCameraNodalOffsetAlgo::StaticClass();
	}
	UCameraNodalOffsetAlgo::UCameraNodalOffsetAlgo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraNodalOffsetAlgo);
	UCameraNodalOffsetAlgo::~UCameraNodalOffsetAlgo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraNodalOffsetAlgo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraNodalOffsetAlgo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraNodalOffsetAlgo, UCameraNodalOffsetAlgo::StaticClass, TEXT("UCameraNodalOffsetAlgo"), &Z_Registration_Info_UClass_UCameraNodalOffsetAlgo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraNodalOffsetAlgo), 3643259670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraNodalOffsetAlgo_h_3071148539(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraNodalOffsetAlgo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraNodalOffsetAlgo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
