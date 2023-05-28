// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ARKitGeoTrackingSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARKitGeoTrackingSupport() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitGeoTrackingSupport();
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitGeoTrackingSupport_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARGeoTrackingSupport();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	void UARKitGeoTrackingSupport::StaticRegisterNativesUARKitGeoTrackingSupport()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARKitGeoTrackingSupport);
	UClass* Z_Construct_UClass_UARKitGeoTrackingSupport_NoRegister()
	{
		return UARKitGeoTrackingSupport::StaticClass();
	}
	struct Z_Construct_UClass_UARKitGeoTrackingSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARGeoTrackingSupport,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARKitGeoTrackingSupport.h" },
		{ "ModuleRelativePath", "Private/ARKitGeoTrackingSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARKitGeoTrackingSupport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::ClassParams = {
		&UARKitGeoTrackingSupport::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARKitGeoTrackingSupport()
	{
		if (!Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton, Z_Construct_UClass_UARKitGeoTrackingSupport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARKitGeoTrackingSupport.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UARKitGeoTrackingSupport>()
	{
		return UARKitGeoTrackingSupport::StaticClass();
	}
	UARKitGeoTrackingSupport::UARKitGeoTrackingSupport(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARKitGeoTrackingSupport);
	UARKitGeoTrackingSupport::~UARKitGeoTrackingSupport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARKitGeoTrackingSupport, UARKitGeoTrackingSupport::StaticClass, TEXT("UARKitGeoTrackingSupport"), &Z_Registration_Info_UClass_UARKitGeoTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARKitGeoTrackingSupport), 3094956723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h_3775555641(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitGeoTrackingSupport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
