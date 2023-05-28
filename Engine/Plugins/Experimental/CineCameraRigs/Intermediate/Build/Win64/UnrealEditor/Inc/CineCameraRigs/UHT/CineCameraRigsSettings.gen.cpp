// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraRigsSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraRigsSettings() {}
// Cross Module References
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineCameraRigRailSettings();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineCameraRigRailSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	void UCineCameraRigRailSettings::StaticRegisterNativesUCineCameraRigRailSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCameraRigRailSettings);
	UClass* Z_Construct_UClass_UCineCameraRigRailSettings_NoRegister()
	{
		return UCineCameraRigRailSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCineCameraRigRailSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSplineMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSplineMeshMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSplineMeshTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultSplineMeshTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCineCameraRigRailSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraRigRailSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CineCameraRigsSettings.h" },
		{ "ModuleRelativePath", "Public/CineCameraRigsSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshMaterial_MetaData[] = {
		{ "Category", "CineCameraRigRail" },
		{ "ModuleRelativePath", "Public/CineCameraRigsSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshMaterial = { "DefaultSplineMeshMaterial", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraRigRailSettings, DefaultSplineMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshTexture_MetaData[] = {
		{ "Category", "CineCameraRigRail" },
		{ "ModuleRelativePath", "Public/CineCameraRigsSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshTexture = { "DefaultSplineMeshTexture", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCineCameraRigRailSettings, DefaultSplineMeshTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCameraRigRailSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraRigRailSettings_Statics::NewProp_DefaultSplineMeshTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCineCameraRigRailSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraRigRailSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraRigRailSettings_Statics::ClassParams = {
		&UCineCameraRigRailSettings::StaticClass,
		"CineCameraRigs",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCineCameraRigRailSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraRigRailSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCineCameraRigRailSettings()
	{
		if (!Z_Registration_Info_UClass_UCineCameraRigRailSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCameraRigRailSettings.OuterSingleton, Z_Construct_UClass_UCineCameraRigRailSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCineCameraRigRailSettings.OuterSingleton;
	}
	template<> CINECAMERARIGS_API UClass* StaticClass<UCineCameraRigRailSettings>()
	{
		return UCineCameraRigRailSettings::StaticClass();
	}
	UCineCameraRigRailSettings::UCineCameraRigRailSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraRigRailSettings);
	UCineCameraRigRailSettings::~UCineCameraRigRailSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigsSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigsSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCineCameraRigRailSettings, UCineCameraRigRailSettings::StaticClass, TEXT("UCineCameraRigRailSettings"), &Z_Registration_Info_UClass_UCineCameraRigRailSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCameraRigRailSettings), 2561686616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigsSettings_h_2261212940(TEXT("/Script/CineCameraRigs"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigsSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigsSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
