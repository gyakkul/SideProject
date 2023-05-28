// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ShotgridSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgridSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SHOTGRID_API UClass* Z_Construct_UClass_UShotgridSettings();
	SHOTGRID_API UClass* Z_Construct_UClass_UShotgridSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Shotgrid();
// End Cross Module References
	void UShotgridSettings::StaticRegisterNativesUShotgridSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShotgridSettings);
	UClass* Z_Construct_UClass_UShotgridSettings_NoRegister()
	{
		return UShotgridSettings::StaticClass();
	}
	struct Z_Construct_UClass_UShotgridSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaDataTagsForAssetRegistry_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaDataTagsForAssetRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MetaDataTagsForAssetRegistry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShotgridSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Shotgrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgridSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ShotgridSettings.h" },
		{ "ModuleRelativePath", "Private/ShotgridSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData[] = {
		{ "Category", "Asset Registry" },
		{ "Comment", "/** The metadata tags to be transferred to the Asset Registry. */" },
		{ "DisplayName", "Metadata Tags For Asset Registry" },
		{ "ModuleRelativePath", "Private/ShotgridSettings.h" },
		{ "ToolTip", "The metadata tags to be transferred to the Asset Registry." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry = { "MetaDataTagsForAssetRegistry", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShotgridSettings, MetaDataTagsForAssetRegistry), METADATA_PARAMS(Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShotgridSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridSettings_Statics::NewProp_MetaDataTagsForAssetRegistry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShotgridSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotgridSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShotgridSettings_Statics::ClassParams = {
		&UShotgridSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShotgridSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UShotgridSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShotgridSettings()
	{
		if (!Z_Registration_Info_UClass_UShotgridSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShotgridSettings.OuterSingleton, Z_Construct_UClass_UShotgridSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShotgridSettings.OuterSingleton;
	}
	template<> SHOTGRID_API UClass* StaticClass<UShotgridSettings>()
	{
		return UShotgridSettings::StaticClass();
	}
	UShotgridSettings::UShotgridSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShotgridSettings);
	UShotgridSettings::~UShotgridSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShotgridSettings, UShotgridSettings::StaticClass, TEXT("UShotgridSettings"), &Z_Registration_Info_UClass_UShotgridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShotgridSettings), 3521624198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridSettings_h_96417878(TEXT("/Script/Shotgrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
