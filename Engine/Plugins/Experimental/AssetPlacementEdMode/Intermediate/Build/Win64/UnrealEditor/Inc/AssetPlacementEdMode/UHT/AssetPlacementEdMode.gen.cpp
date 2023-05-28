// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetPlacementEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetPlacementEdMode() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UAssetPlacementEdMode();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UAssetPlacementEdMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdModeDefault();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UAssetPlacementEdMode::StaticRegisterNativesUAssetPlacementEdMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetPlacementEdMode);
	UClass* Z_Construct_UClass_UAssetPlacementEdMode_NoRegister()
	{
		return UAssetPlacementEdMode::StaticClass();
	}
	struct Z_Construct_UClass_UAssetPlacementEdMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetPlacementEdMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdModeDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetPlacementEdMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AssetPlacementEdMode.h" },
		{ "ModuleRelativePath", "Public/AssetPlacementEdMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetPlacementEdMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetPlacementEdMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetPlacementEdMode_Statics::ClassParams = {
		&UAssetPlacementEdMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAssetPlacementEdMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetPlacementEdMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetPlacementEdMode()
	{
		if (!Z_Registration_Info_UClass_UAssetPlacementEdMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetPlacementEdMode.OuterSingleton, Z_Construct_UClass_UAssetPlacementEdMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetPlacementEdMode.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UAssetPlacementEdMode>()
	{
		return UAssetPlacementEdMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetPlacementEdMode);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Public_AssetPlacementEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Public_AssetPlacementEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetPlacementEdMode, UAssetPlacementEdMode::StaticClass, TEXT("UAssetPlacementEdMode"), &Z_Registration_Info_UClass_UAssetPlacementEdMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetPlacementEdMode), 3088127478U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Public_AssetPlacementEdMode_h_590680272(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Public_AssetPlacementEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Public_AssetPlacementEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
