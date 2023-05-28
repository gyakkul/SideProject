// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LightMixerObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightMixerObjectFilter() {}
// Cross Module References
	LIGHTMIXER_API UClass* Z_Construct_UClass_ULightMixerObjectFilter();
	LIGHTMIXER_API UClass* Z_Construct_UClass_ULightMixerObjectFilter_NoRegister();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerObjectFilter();
	UPackage* Z_Construct_UPackage__Script_LightMixer();
// End Cross Module References
	void ULightMixerObjectFilter::StaticRegisterNativesULightMixerObjectFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightMixerObjectFilter);
	UClass* Z_Construct_UClass_ULightMixerObjectFilter_NoRegister()
	{
		return ULightMixerObjectFilter::StaticClass();
	}
	struct Z_Construct_UClass_ULightMixerObjectFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightMixerObjectFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectMixerObjectFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_LightMixer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightMixerObjectFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LightMixerObjectFilter.h" },
		{ "ModuleRelativePath", "Public/LightMixerObjectFilter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightMixerObjectFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightMixerObjectFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightMixerObjectFilter_Statics::ClassParams = {
		&ULightMixerObjectFilter::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightMixerObjectFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightMixerObjectFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightMixerObjectFilter()
	{
		if (!Z_Registration_Info_UClass_ULightMixerObjectFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightMixerObjectFilter.OuterSingleton, Z_Construct_UClass_ULightMixerObjectFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightMixerObjectFilter.OuterSingleton;
	}
	template<> LIGHTMIXER_API UClass* StaticClass<ULightMixerObjectFilter>()
	{
		return ULightMixerObjectFilter::StaticClass();
	}
	ULightMixerObjectFilter::ULightMixerObjectFilter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightMixerObjectFilter);
	ULightMixerObjectFilter::~ULightMixerObjectFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerObjectFilter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerObjectFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightMixerObjectFilter, ULightMixerObjectFilter::StaticClass, TEXT("ULightMixerObjectFilter"), &Z_Registration_Info_UClass_ULightMixerObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightMixerObjectFilter), 1413417790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerObjectFilter_h_2502420157(TEXT("/Script/LightMixer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_LightMixer_Source_LightMixer_Public_LightMixerObjectFilter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
