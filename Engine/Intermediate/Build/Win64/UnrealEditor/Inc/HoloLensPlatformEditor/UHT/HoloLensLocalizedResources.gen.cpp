// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoloLensLocalizedResources.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoloLensLocalizedResources() {}
// Cross Module References
	HOLOLENSPLATFORMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources();
	HOLOLENSPLATFORMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources();
	HOLOLENSPLATFORMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources();
	UPackage* Z_Construct_UPackage__Script_HoloLensPlatformEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources;
class UScriptStruct* FHoloLensCorePackageStringResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources, (UObject*)Z_Construct_UPackage__Script_HoloLensPlatformEditor(), TEXT("HoloLensCorePackageStringResources"));
	}
	return Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.OuterSingleton;
}
template<> HOLOLENSPLATFORMEDITOR_API UScriptStruct* StaticStruct<FHoloLensCorePackageStringResources>()
{
	return FHoloLensCorePackageStringResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PublisherDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PublisherDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApplicationDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloLensCorePackageStringResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDisplayName_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDisplayName = { "PackageDisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageStringResources, PackageDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PublisherDisplayName_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PublisherDisplayName = { "PublisherDisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageStringResources, PublisherDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PublisherDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PublisherDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDescription_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDescription = { "PackageDescription", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageStringResources, PackageDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDisplayName_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDisplayName = { "ApplicationDisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageStringResources, ApplicationDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDescription_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDescription = { "ApplicationDescription", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageStringResources, ApplicationDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PublisherDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_PackageDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewProp_ApplicationDescription,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensPlatformEditor,
		nullptr,
		&NewStructOps,
		"HoloLensCorePackageStringResources",
		sizeof(FHoloLensCorePackageStringResources),
		alignof(FHoloLensCorePackageStringResources),
		Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources()
	{
		if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.InnerSingleton, Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources;
class UScriptStruct* FHoloLensCorePackageImageResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources, (UObject*)Z_Construct_UPackage__Script_HoloLensPlatformEditor(), TEXT("HoloLensCorePackageImageResources"));
	}
	return Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.OuterSingleton;
}
template<> HOLOLENSPLATFORMEDITOR_API UScriptStruct* StaticStruct<FHoloLensCorePackageImageResources>()
{
	return FHoloLensCorePackageImageResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloLensCorePackageImageResources>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensPlatformEditor,
		nullptr,
		&NewStructOps,
		"HoloLensCorePackageImageResources",
		sizeof(FHoloLensCorePackageImageResources),
		alignof(FHoloLensCorePackageImageResources),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources()
	{
		if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.InnerSingleton, Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources;
class UScriptStruct* FHoloLensCorePackageLocalizedResources::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources, (UObject*)Z_Construct_UPackage__Script_HoloLensPlatformEditor(), TEXT("HoloLensCorePackageLocalizedResources"));
	}
	return Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.OuterSingleton;
}
template<> HOLOLENSPLATFORMEDITOR_API UScriptStruct* StaticStruct<FHoloLensCorePackageLocalizedResources>()
{
	return FHoloLensCorePackageLocalizedResources::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CultureId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CultureId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Strings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Strings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Images;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoloLensCorePackageLocalizedResources>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_CultureId_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_CultureId = { "CultureId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageLocalizedResources, CultureId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_CultureId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_CultureId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Strings_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Strings = { "Strings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageLocalizedResources, Strings), Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Strings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Strings_MetaData)) }; // 1122051743
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Images_MetaData[] = {
		{ "Category", "Packaging" },
		{ "ModuleRelativePath", "Private/HoloLensLocalizedResources.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoloLensCorePackageLocalizedResources, Images), Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Images_MetaData)) }; // 189401966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_CultureId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Strings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewProp_Images,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoloLensPlatformEditor,
		nullptr,
		&NewStructOps,
		"HoloLensCorePackageLocalizedResources",
		sizeof(FHoloLensCorePackageLocalizedResources),
		alignof(FHoloLensCorePackageLocalizedResources),
		Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources()
	{
		if (!Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.InnerSingleton, Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Platforms_Hololens_Source_Developer_HoloLensPlatformEditor_Private_HoloLensLocalizedResources_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Platforms_Hololens_Source_Developer_HoloLensPlatformEditor_Private_HoloLensLocalizedResources_h_Statics::ScriptStructInfo[] = {
		{ FHoloLensCorePackageStringResources::StaticStruct, Z_Construct_UScriptStruct_FHoloLensCorePackageStringResources_Statics::NewStructOps, TEXT("HoloLensCorePackageStringResources"), &Z_Registration_Info_UScriptStruct_HoloLensCorePackageStringResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoloLensCorePackageStringResources), 1122051743U) },
		{ FHoloLensCorePackageImageResources::StaticStruct, Z_Construct_UScriptStruct_FHoloLensCorePackageImageResources_Statics::NewStructOps, TEXT("HoloLensCorePackageImageResources"), &Z_Registration_Info_UScriptStruct_HoloLensCorePackageImageResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoloLensCorePackageImageResources), 189401966U) },
		{ FHoloLensCorePackageLocalizedResources::StaticStruct, Z_Construct_UScriptStruct_FHoloLensCorePackageLocalizedResources_Statics::NewStructOps, TEXT("HoloLensCorePackageLocalizedResources"), &Z_Registration_Info_UScriptStruct_HoloLensCorePackageLocalizedResources, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoloLensCorePackageLocalizedResources), 171947290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Platforms_Hololens_Source_Developer_HoloLensPlatformEditor_Private_HoloLensLocalizedResources_h_3483565639(TEXT("/Script/HoloLensPlatformEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Platforms_Hololens_Source_Developer_HoloLensPlatformEditor_Private_HoloLensLocalizedResources_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Platforms_Hololens_Source_Developer_HoloLensPlatformEditor_Private_HoloLensLocalizedResources_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
