// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GoogleARCoreTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreTexture() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreCameraTexture();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreCameraTexture_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreDepthTexture();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreDepthTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	void UARCoreCameraTexture::StaticRegisterNativesUARCoreCameraTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARCoreCameraTexture);
	UClass* Z_Construct_UClass_UARCoreCameraTexture_NoRegister()
	{
		return UARCoreCameraTexture::StaticClass();
	}
	struct Z_Construct_UClass_UARCoreCameraTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCoreCameraTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCoreCameraTexture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleARCoreTexture.h" },
		{ "ModuleRelativePath", "Private/GoogleARCoreTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCoreCameraTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCoreCameraTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARCoreCameraTexture_Statics::ClassParams = {
		&UARCoreCameraTexture::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCoreCameraTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARCoreCameraTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCoreCameraTexture()
	{
		if (!Z_Registration_Info_UClass_UARCoreCameraTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARCoreCameraTexture.OuterSingleton, Z_Construct_UClass_UARCoreCameraTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARCoreCameraTexture.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UARCoreCameraTexture>()
	{
		return UARCoreCameraTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCoreCameraTexture);
	UARCoreCameraTexture::~UARCoreCameraTexture() {}
	void UARCoreDepthTexture::StaticRegisterNativesUARCoreDepthTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARCoreDepthTexture);
	UClass* Z_Construct_UClass_UARCoreDepthTexture_NoRegister()
	{
		return UARCoreDepthTexture::StaticClass();
	}
	struct Z_Construct_UClass_UARCoreDepthTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCoreDepthTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCoreDepthTexture_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleARCoreTexture.h" },
		{ "ModuleRelativePath", "Private/GoogleARCoreTexture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCoreDepthTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCoreDepthTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARCoreDepthTexture_Statics::ClassParams = {
		&UARCoreDepthTexture::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCoreDepthTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARCoreDepthTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCoreDepthTexture()
	{
		if (!Z_Registration_Info_UClass_UARCoreDepthTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARCoreDepthTexture.OuterSingleton, Z_Construct_UClass_UARCoreDepthTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARCoreDepthTexture.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UARCoreDepthTexture>()
	{
		return UARCoreDepthTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCoreDepthTexture);
	UARCoreDepthTexture::~UARCoreDepthTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARCoreCameraTexture, UARCoreCameraTexture::StaticClass, TEXT("UARCoreCameraTexture"), &Z_Registration_Info_UClass_UARCoreCameraTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARCoreCameraTexture), 1935815360U) },
		{ Z_Construct_UClass_UARCoreDepthTexture, UARCoreDepthTexture::StaticClass, TEXT("UARCoreDepthTexture"), &Z_Registration_Info_UClass_UARCoreDepthTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARCoreDepthTexture), 2543174363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreTexture_h_3002903436(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
