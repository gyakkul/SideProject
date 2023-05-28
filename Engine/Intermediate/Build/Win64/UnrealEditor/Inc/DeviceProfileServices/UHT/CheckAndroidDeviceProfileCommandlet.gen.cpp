// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CheckAndroidDeviceProfileCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckAndroidDeviceProfileCommandlet() {}
// Cross Module References
	DEVICEPROFILESERVICES_API UClass* Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet();
	DEVICEPROFILESERVICES_API UClass* Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_DeviceProfileServices();
// End Cross Module References
	void UCheckAndroidDeviceProfileCommandlet::StaticRegisterNativesUCheckAndroidDeviceProfileCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckAndroidDeviceProfileCommandlet);
	UClass* Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_NoRegister()
	{
		return UCheckAndroidDeviceProfileCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_DeviceProfileServices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * CheckAndroidDeviceProfile\n *   Commandlet that runs the rules in [/Script/AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules]\n *      against the supplied parameters and outputs the device profile that will be matched.\n * Usage:\n * ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile DeviceModel\n * ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile DeviceMake DeviceModel\n * ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile [-DeviceMake=...] [-DeviceModel=...] [-GPUFamily=...] [-GLVersion=...]\n\x09  [-VulkanAvailable=True|False] [-VulkanVersion=...] [-AndroidVersion=...] [-DeviceBuildNumber=...] [-UsingHoudini=True|False] [-Hardware=...] [-Chipset=...]\n * Running against \n * ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile\n\x09\x09-DeviceSpecsFolder=<directory containing device.json files> \n\x09\x09-DeviceSpecsFile=<path to a single device.json file>\n\x09\x09-OutDir=<output directory>\n\x09\x09[-OverrideDP=<optional DP name to override device profile selection>]\n*/" },
		{ "IncludePath", "CheckAndroidDeviceProfileCommandlet.h" },
		{ "ModuleRelativePath", "Public/CheckAndroidDeviceProfileCommandlet.h" },
		{ "ToolTip", "* CheckAndroidDeviceProfile\n*   Commandlet that runs the rules in [/Script/AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules]\n*      against the supplied parameters and outputs the device profile that will be matched.\n* Usage:\n* ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile DeviceModel\n* ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile DeviceMake DeviceModel\n* ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile [-DeviceMake=...] [-DeviceModel=...] [-GPUFamily=...] [-GLVersion=...]\n        [-VulkanAvailable=True|False] [-VulkanVersion=...] [-AndroidVersion=...] [-DeviceBuildNumber=...] [-UsingHoudini=True|False] [-Hardware=...] [-Chipset=...]\n* Running against\n* ProjectName -run=DeviceProfileServices.CheckAndroidDeviceProfile\n              -DeviceSpecsFolder=<directory containing device.json files>\n              -DeviceSpecsFile=<path to a single device.json file>\n              -OutDir=<output directory>\n              [-OverrideDP=<optional DP name to override device profile selection>]" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckAndroidDeviceProfileCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::ClassParams = {
		&UCheckAndroidDeviceProfileCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCheckAndroidDeviceProfileCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckAndroidDeviceProfileCommandlet.OuterSingleton, Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckAndroidDeviceProfileCommandlet.OuterSingleton;
	}
	template<> DEVICEPROFILESERVICES_API UClass* StaticClass<UCheckAndroidDeviceProfileCommandlet>()
	{
		return UCheckAndroidDeviceProfileCommandlet::StaticClass();
	}
	UCheckAndroidDeviceProfileCommandlet::UCheckAndroidDeviceProfileCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckAndroidDeviceProfileCommandlet);
	UCheckAndroidDeviceProfileCommandlet::~UCheckAndroidDeviceProfileCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckAndroidDeviceProfileCommandlet, UCheckAndroidDeviceProfileCommandlet::StaticClass, TEXT("UCheckAndroidDeviceProfileCommandlet"), &Z_Registration_Info_UClass_UCheckAndroidDeviceProfileCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckAndroidDeviceProfileCommandlet), 639955302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_3762216958(TEXT("/Script/DeviceProfileServices"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DeviceProfileServices_Public_CheckAndroidDeviceProfileCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
