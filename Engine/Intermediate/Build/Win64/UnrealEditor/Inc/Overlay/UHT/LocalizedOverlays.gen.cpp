// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocalizedOverlays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlays() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	UPackage* Z_Construct_UPackage__Script_Overlay();
// End Cross Module References
	void ULocalizedOverlays::StaticRegisterNativesULocalizedOverlays()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizedOverlays);
	UClass* Z_Construct_UClass_ULocalizedOverlays_NoRegister()
	{
		return ULocalizedOverlays::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizedOverlays_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOverlays_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultOverlays;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocaleToOverlaysMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocaleToOverlaysMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocaleToOverlaysMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LocaleToOverlaysMap;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizedOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlays,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\n * the current locale, or a default set if an appropriate locale is not found\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "LocalizedOverlays.h" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Implements an asset that contains a set of Basic Overlays that will be displayed in accordance with\nthe current locale, or a default set if an appropriate locale is not found" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "Comment", "/** The overlays to use if no overlays are found for the current culture */" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The overlays to use if no overlays are found for the current culture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays = { "DefaultOverlays", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalizedOverlays, DefaultOverlays), Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UBasicOverlays_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp = { "LocaleToOverlaysMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "Comment", "/**\n\x09 * Maps a set of cultures to specific BasicOverlays assets.\n\x09 * Cultures are comprised of three hyphen-separated parts:\n\x09 *\x09\x09""A two-letter ISO 639-1 language code (e.g., \"zh\")\n\x09 *\x09\x09""An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n\x09 *\x09\x09""An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")\n\x09 */" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "Maps a set of cultures to specific BasicOverlays assets.\nCultures are comprised of three hyphen-separated parts:\n             A two-letter ISO 639-1 language code (e.g., \"zh\")\n             An optional four-letter ISO 15924 script code (e.g., \"Hans\")\n             An optional two-letter ISO 3166-1 country code  (e.g., \"CN\")" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap = { "LocaleToOverlaysMap", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalizedOverlays, LocaleToOverlaysMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** The import data used to make this overlays asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LocalizedOverlays.h" },
		{ "ToolTip", "The import data used to make this overlays asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULocalizedOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_DefaultOverlays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_LocaleToOverlaysMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalizedOverlays_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizedOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizedOverlays>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams = {
		&ULocalizedOverlays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizedOverlays()
	{
		if (!Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton, Z_Construct_UClass_ULocalizedOverlays_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalizedOverlays.OuterSingleton;
	}
	template<> OVERLAY_API UClass* StaticClass<ULocalizedOverlays>()
	{
		return ULocalizedOverlays::StaticClass();
	}
	ULocalizedOverlays::ULocalizedOverlays(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlays);
	ULocalizedOverlays::~ULocalizedOverlays() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizedOverlays, ULocalizedOverlays::StaticClass, TEXT("ULocalizedOverlays"), &Z_Registration_Info_UClass_ULocalizedOverlays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizedOverlays), 1295470302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_1394288684(TEXT("/Script/Overlay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_LocalizedOverlays_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
