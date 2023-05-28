// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../Plugins/Runtime/AndroidDeviceProfileSelector/Source/AndroidDeviceProfileCommandlets/Private/CreateAndroidPreviewDataFromADBCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateAndroidPreviewDataFromADBCommandlet() {}
// Cross Module References
	ANDROIDDEVICEPROFILECOMMANDLETS_API UClass* Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet();
	ANDROIDDEVICEPROFILECOMMANDLETS_API UClass* Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_AndroidDeviceProfileCommandlets();
// End Cross Module References
	void UCreateAndroidPreviewDataFromADBCommandlet::StaticRegisterNativesUCreateAndroidPreviewDataFromADBCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateAndroidPreviewDataFromADBCommandlet);
	UClass* Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_NoRegister()
	{
		return UCreateAndroidPreviewDataFromADBCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileCommandlets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* This commandlet runs in an infinite loop. It waits for new devices to be plugged in (or to become visible to adb)\n* When a new device is encountered it is queried and a new .json containing it's particulars is saved.\n* The json file is then usable by editor for device preview and also for the android device profile matching system.\n* Usage commandline:\n*\n* <game> -run=AndroidDeviceDetection.CreateAndroidPreviewDataFromADB -ConfigRules=[path to configrules.txt] -DeviceSpecsFolder=[Path to json output folder, e.g.\"\\Engine\\Content\\Editor\\PIEPreviewDeviceSpecs\\Android\"]\n */" },
		{ "IncludePath", "CreateAndroidPreviewDataFromADBCommandlet.h" },
		{ "ModuleRelativePath", "Private/CreateAndroidPreviewDataFromADBCommandlet.h" },
		{ "ToolTip", "* This commandlet runs in an infinite loop. It waits for new devices to be plugged in (or to become visible to adb)\n* When a new device is encountered it is queried and a new .json containing it's particulars is saved.\n* The json file is then usable by editor for device preview and also for the android device profile matching system.\n* Usage commandline:\n*\n* <game> -run=AndroidDeviceDetection.CreateAndroidPreviewDataFromADB -ConfigRules=[path to configrules.txt] -DeviceSpecsFolder=[Path to json output folder, e.g.\"\\Engine\\Content\\Editor\\PIEPreviewDeviceSpecs\\Android\"]" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateAndroidPreviewDataFromADBCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::ClassParams = {
		&UCreateAndroidPreviewDataFromADBCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCreateAndroidPreviewDataFromADBCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateAndroidPreviewDataFromADBCommandlet.OuterSingleton, Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateAndroidPreviewDataFromADBCommandlet.OuterSingleton;
	}
	template<> ANDROIDDEVICEPROFILECOMMANDLETS_API UClass* StaticClass<UCreateAndroidPreviewDataFromADBCommandlet>()
	{
		return UCreateAndroidPreviewDataFromADBCommandlet::StaticClass();
	}
	UCreateAndroidPreviewDataFromADBCommandlet::UCreateAndroidPreviewDataFromADBCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateAndroidPreviewDataFromADBCommandlet);
	UCreateAndroidPreviewDataFromADBCommandlet::~UCreateAndroidPreviewDataFromADBCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileCommandlets_Private_CreateAndroidPreviewDataFromADBCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileCommandlets_Private_CreateAndroidPreviewDataFromADBCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateAndroidPreviewDataFromADBCommandlet, UCreateAndroidPreviewDataFromADBCommandlet::StaticClass, TEXT("UCreateAndroidPreviewDataFromADBCommandlet"), &Z_Registration_Info_UClass_UCreateAndroidPreviewDataFromADBCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateAndroidPreviewDataFromADBCommandlet), 3167864140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileCommandlets_Private_CreateAndroidPreviewDataFromADBCommandlet_h_2109173773(TEXT("/Script/AndroidDeviceProfileCommandlets"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileCommandlets_Private_CreateAndroidPreviewDataFromADBCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileCommandlets_Private_CreateAndroidPreviewDataFromADBCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
