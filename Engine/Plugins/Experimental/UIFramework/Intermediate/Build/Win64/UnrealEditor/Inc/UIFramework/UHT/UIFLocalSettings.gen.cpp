// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIFLocalSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFLocalSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkLocalSettings();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkLocalSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	void UUIFrameworkLocalSettings::StaticRegisterNativesUUIFrameworkLocalSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkLocalSettings);
	UClass* Z_Construct_UClass_UUIFrameworkLocalSettings_NoRegister()
	{
		return UUIFrameworkLocalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkLocalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorResource_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ErrorResource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingResource_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LoadingResource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "UI Framework Local Settings" },
		{ "IncludePath", "UIFLocalSettings.h" },
		{ "ModuleRelativePath", "Public/UIFLocalSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_ErrorResource_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "Comment", "/**\n\x09 * The image to render for when a requested resource is inaccessible.\n\x09 * It can be a UTexture or UMaterialInterface or an object implementing the AtlasedTextureInterface.\n\x09 */" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/UIFLocalSettings.h" },
		{ "ToolTip", "The image to render for when a requested resource is inaccessible.\nIt can be a UTexture or UMaterialInterface or an object implementing the AtlasedTextureInterface." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_ErrorResource = { "ErrorResource", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkLocalSettings, ErrorResource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_ErrorResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_ErrorResource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_LoadingResource_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture,/Script/Engine.MaterialInterface,/Script/Engine.SlateTextureAtlasInterface" },
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "Comment", "/**\n\x09 * The image to render while a resource is loading.\n\x09 * It can be a UTexture or UMaterialInterface or an object implementing the AtlasedTextureInterface.\n\x09 */" },
		{ "DisallowedClasses", "/Script/MediaAssets.MediaTexture" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/UIFLocalSettings.h" },
		{ "ToolTip", "The image to render while a resource is loading.\nIt can be a UTexture or UMaterialInterface or an object implementing the AtlasedTextureInterface." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_LoadingResource = { "LoadingResource", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkLocalSettings, LoadingResource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_LoadingResource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_LoadingResource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_ErrorResource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::NewProp_LoadingResource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkLocalSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::ClassParams = {
		&UUIFrameworkLocalSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkLocalSettings()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkLocalSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkLocalSettings.OuterSingleton, Z_Construct_UClass_UUIFrameworkLocalSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkLocalSettings.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkLocalSettings>()
	{
		return UUIFrameworkLocalSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkLocalSettings);
	UUIFrameworkLocalSettings::~UUIFrameworkLocalSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkLocalSettings, UUIFrameworkLocalSettings::StaticClass, TEXT("UUIFrameworkLocalSettings"), &Z_Registration_Info_UClass_UUIFrameworkLocalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkLocalSettings), 3799606167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_1559125596(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFLocalSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
