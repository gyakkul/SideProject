// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ARKitTrackables.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARKitTrackables() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitMeshGeometry();
	APPLEARKIT_API UClass* Z_Construct_UClass_UARKitMeshGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARMeshGeometry();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	void UARKitMeshGeometry::StaticRegisterNativesUARKitMeshGeometry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARKitMeshGeometry);
	UClass* Z_Construct_UClass_UARKitMeshGeometry_NoRegister()
	{
		return UARKitMeshGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UARKitMeshGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARKitMeshGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARMeshGeometry,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARKitMeshGeometry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARKitTrackables.h" },
		{ "ModuleRelativePath", "Private/ARKitTrackables.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARKitMeshGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARKitMeshGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARKitMeshGeometry_Statics::ClassParams = {
		&UARKitMeshGeometry::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARKitMeshGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARKitMeshGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARKitMeshGeometry()
	{
		if (!Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton, Z_Construct_UClass_UARKitMeshGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARKitMeshGeometry.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UARKitMeshGeometry>()
	{
		return UARKitMeshGeometry::StaticClass();
	}
	UARKitMeshGeometry::UARKitMeshGeometry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARKitMeshGeometry);
	UARKitMeshGeometry::~UARKitMeshGeometry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARKitMeshGeometry, UARKitMeshGeometry::StaticClass, TEXT("UARKitMeshGeometry"), &Z_Registration_Info_UClass_UARKitMeshGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARKitMeshGeometry), 2254114208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_3302441684(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Private_ARKitTrackables_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
