// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidJavaSurfaceViewDevices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidJavaSurfaceViewDevices() {}
// Cross Module References
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister();
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice;
class UScriptStruct* FJavaSurfaceViewDevice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice, (UObject*)Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("JavaSurfaceViewDevice"));
	}
	return Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.OuterSingleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FJavaSurfaceViewDevice>()
{
	return FJavaSurfaceViewDevice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Manufacturer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Manufacturer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJavaSurfaceViewDevice>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer = { "Manufacturer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJavaSurfaceViewDevice, Manufacturer), METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJavaSurfaceViewDevice, Model), METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Manufacturer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewProp_Model,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"JavaSurfaceViewDevice",
		sizeof(FJavaSurfaceViewDevice),
		alignof(FJavaSurfaceViewDevice),
		Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJavaSurfaceViewDevice()
	{
		if (!Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.InnerSingleton, Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice.InnerSingleton;
	}
	void UAndroidJavaSurfaceViewDevices::StaticRegisterNativesUAndroidJavaSurfaceViewDevices()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidJavaSurfaceViewDevices);
	UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_NoRegister()
	{
		return UAndroidJavaSurfaceViewDevices::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceViewDevices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceViewDevices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SurfaceViewDevices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidJavaSurfaceViewDevices.h" },
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_Inner = { "SurfaceViewDevices", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FJavaSurfaceViewDevice, METADATA_PARAMS(nullptr, 0) }; // 445545095
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData[] = {
		{ "Category", "Matching Rules" },
		{ "Comment", "/** Array of devices that require the java view scaling workaround */" },
		{ "ModuleRelativePath", "Public/AndroidJavaSurfaceViewDevices.h" },
		{ "ToolTip", "Array of devices that require the java view scaling workaround" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices = { "SurfaceViewDevices", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidJavaSurfaceViewDevices, SurfaceViewDevices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_MetaData)) }; // 445545095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::NewProp_SurfaceViewDevices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidJavaSurfaceViewDevices>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::ClassParams = {
		&UAndroidJavaSurfaceViewDevices::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidJavaSurfaceViewDevices()
	{
		if (!Z_Registration_Info_UClass_UAndroidJavaSurfaceViewDevices.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidJavaSurfaceViewDevices.OuterSingleton, Z_Construct_UClass_UAndroidJavaSurfaceViewDevices_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidJavaSurfaceViewDevices.OuterSingleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UClass* StaticClass<UAndroidJavaSurfaceViewDevices>()
	{
		return UAndroidJavaSurfaceViewDevices::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidJavaSurfaceViewDevices);
	UAndroidJavaSurfaceViewDevices::~UAndroidJavaSurfaceViewDevices() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ScriptStructInfo[] = {
		{ FJavaSurfaceViewDevice::StaticStruct, Z_Construct_UScriptStruct_FJavaSurfaceViewDevice_Statics::NewStructOps, TEXT("JavaSurfaceViewDevice"), &Z_Registration_Info_UScriptStruct_JavaSurfaceViewDevice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJavaSurfaceViewDevice), 445545095U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidJavaSurfaceViewDevices, UAndroidJavaSurfaceViewDevices::StaticClass, TEXT("UAndroidJavaSurfaceViewDevices"), &Z_Registration_Info_UClass_UAndroidJavaSurfaceViewDevices, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidJavaSurfaceViewDevices), 538624003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_681018649(TEXT("/Script/AndroidDeviceProfileSelector"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Public_AndroidJavaSurfaceViewDevices_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
