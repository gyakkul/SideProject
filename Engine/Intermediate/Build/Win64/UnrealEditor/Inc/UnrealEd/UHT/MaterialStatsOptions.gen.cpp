// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/MaterialStatsOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialStatsOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialStatsOptions();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialStatsOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialStatsOptions::StaticRegisterNativesUMaterialStatsOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialStatsOptions);
	UClass* Z_Construct_UClass_UMaterialStatsOptions_NoRegister()
	{
		return UMaterialStatsOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialStatsOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlatformUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bPlatformUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialQualityUsed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_bMaterialQualityUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialStatsOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/MaterialStatsOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed = { "bPlatformUsed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(bPlatformUsed, UMaterialStatsOptions), nullptr, nullptr, STRUCT_OFFSET(UMaterialStatsOptions, bPlatformUsed), METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialStatsOptions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed = { "bMaterialQualityUsed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(bMaterialQualityUsed, UMaterialStatsOptions), nullptr, nullptr, STRUCT_OFFSET(UMaterialStatsOptions, bMaterialQualityUsed), METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bPlatformUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialStatsOptions_Statics::NewProp_bMaterialQualityUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialStatsOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialStatsOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialStatsOptions_Statics::ClassParams = {
		&UMaterialStatsOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialStatsOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialStatsOptions()
	{
		if (!Z_Registration_Info_UClass_UMaterialStatsOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialStatsOptions.OuterSingleton, Z_Construct_UClass_UMaterialStatsOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialStatsOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialStatsOptions>()
	{
		return UMaterialStatsOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialStatsOptions);
	UMaterialStatsOptions::~UMaterialStatsOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialStatsOptions, UMaterialStatsOptions::StaticClass, TEXT("UMaterialStatsOptions"), &Z_Registration_Info_UClass_UMaterialStatsOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialStatsOptions), 2288093831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_2916402158(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialStatsOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
