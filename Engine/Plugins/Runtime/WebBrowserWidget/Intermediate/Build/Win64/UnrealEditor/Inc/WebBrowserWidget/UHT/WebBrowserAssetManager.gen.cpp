// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebBrowserAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserAssetManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebBrowserWidget();
	WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowserAssetManager();
	WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowserAssetManager_NoRegister();
// End Cross Module References
	void UWebBrowserAssetManager::StaticRegisterNativesUWebBrowserAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowserAssetManager);
	UClass* Z_Construct_UClass_UWebBrowserAssetManager_NoRegister()
	{
		return UWebBrowserAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowserAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowserAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserAssetManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebBrowserAssetManager.h" },
		{ "ModuleRelativePath", "Public/WebBrowserAssetManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WebBrowserAssetManager.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWebBrowserAssetManager_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebBrowserAssetManager, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserAssetManager_Statics::NewProp_DefaultMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebBrowserAssetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowserAssetManager_Statics::NewProp_DefaultMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowserAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowserAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowserAssetManager_Statics::ClassParams = {
		&UWebBrowserAssetManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebBrowserAssetManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserAssetManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebBrowserAssetManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserAssetManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBrowserAssetManager()
	{
		if (!Z_Registration_Info_UClass_UWebBrowserAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowserAssetManager.OuterSingleton, Z_Construct_UClass_UWebBrowserAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowserAssetManager.OuterSingleton;
	}
	template<> WEBBROWSERWIDGET_API UClass* StaticClass<UWebBrowserAssetManager>()
	{
		return UWebBrowserAssetManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowserAssetManager);
	UWebBrowserAssetManager::~UWebBrowserAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowserAssetManager, UWebBrowserAssetManager::StaticClass, TEXT("UWebBrowserAssetManager"), &Z_Registration_Info_UClass_UWebBrowserAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowserAssetManager), 1694160859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_609098297(TEXT("/Script/WebBrowserWidget"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowserAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
