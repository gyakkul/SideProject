// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicOverlays.h"
#include "Overlays.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlays() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays();
	OVERLAY_API UClass* Z_Construct_UClass_UBasicOverlays_NoRegister();
	OVERLAY_API UClass* Z_Construct_UClass_UOverlays();
	OVERLAY_API UScriptStruct* Z_Construct_UScriptStruct_FOverlayItem();
	UPackage* Z_Construct_UPackage__Script_Overlay();
// End Cross Module References
	void UBasicOverlays::StaticRegisterNativesUBasicOverlays()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicOverlays);
	UClass* Z_Construct_UClass_UBasicOverlays_NoRegister()
	{
		return UBasicOverlays::StaticClass();
	}
	struct Z_Construct_UClass_UBasicOverlays_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overlays_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overlays_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Overlays;
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
	UObject* (*const Z_Construct_UClass_UBasicOverlays_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlays,
		(UObject* (*)())Z_Construct_UPackage__Script_Overlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that contains a set of overlay data (which includes timing, text, and position) to be displayed for any\n * given source (including, but not limited to, audio, dialog, and movies)\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "BasicOverlays.h" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "Implements an asset that contains a set of overlay data (which includes timing, text, and position) to be displayed for any\ngiven source (including, but not limited to, audio, dialog, and movies)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_Inner = { "Overlays", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOverlayItem, METADATA_PARAMS(nullptr, 0) }; // 426197151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData[] = {
		{ "Category", "Overlay Data" },
		{ "Comment", "/** The overlay data held by this asset. Contains info on timing, position, and the subtitle to display */" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "The overlay data held by this asset. Contains info on timing, position, and the subtitle to display" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays = { "Overlays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicOverlays, Overlays), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_MetaData)) }; // 426197151
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import Settings" },
		{ "Comment", "/** The import data used to make this overlays asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BasicOverlays.h" },
		{ "ToolTip", "The import data used to make this overlays asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBasicOverlays, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicOverlays_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_Overlays,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicOverlays_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicOverlays_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicOverlays>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicOverlays_Statics::ClassParams = {
		&UBasicOverlays::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicOverlays_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlays_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicOverlays()
	{
		if (!Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton, Z_Construct_UClass_UBasicOverlays_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicOverlays.OuterSingleton;
	}
	template<> OVERLAY_API UClass* StaticClass<UBasicOverlays>()
	{
		return UBasicOverlays::StaticClass();
	}
	UBasicOverlays::UBasicOverlays(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlays);
	UBasicOverlays::~UBasicOverlays() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicOverlays, UBasicOverlays::StaticClass, TEXT("UBasicOverlays"), &Z_Registration_Info_UClass_UBasicOverlays, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicOverlays), 1848517154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_1353138032(TEXT("/Script/Overlay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Overlay_Public_BasicOverlays_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
