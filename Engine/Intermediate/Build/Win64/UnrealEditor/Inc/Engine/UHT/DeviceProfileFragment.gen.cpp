// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeviceProfileFragment() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment();
	ENGINE_API UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDeviceProfileFragment::StaticRegisterNativesUDeviceProfileFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeviceProfileFragment);
	UClass* Z_Construct_UClass_UDeviceProfileFragment_NoRegister()
	{
		return UDeviceProfileFragment::StaticClass();
	}
	struct Z_Construct_UClass_UDeviceProfileFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CVars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CVars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CVars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeviceProfileFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeviceProfiles/DeviceProfileFragment.h" },
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileFragment.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_Inner = { "CVars", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_MetaData[] = {
		{ "ModuleRelativePath", "Classes/DeviceProfiles/DeviceProfileFragment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars = { "CVars", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeviceProfileFragment, CVars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeviceProfileFragment_Statics::NewProp_CVars,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeviceProfileFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeviceProfileFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams = {
		&UDeviceProfileFragment::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeviceProfileFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeviceProfileFragment()
	{
		if (!Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton, Z_Construct_UClass_UDeviceProfileFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeviceProfileFragment.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDeviceProfileFragment>()
	{
		return UDeviceProfileFragment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeviceProfileFragment);
	UDeviceProfileFragment::~UDeviceProfileFragment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeviceProfileFragment, UDeviceProfileFragment::StaticClass, TEXT("UDeviceProfileFragment"), &Z_Registration_Info_UClass_UDeviceProfileFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeviceProfileFragment), 2368895218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_118590717(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
