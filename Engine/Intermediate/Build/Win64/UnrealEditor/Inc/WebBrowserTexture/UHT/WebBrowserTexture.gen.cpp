// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../WebBrowserTexture/Public/WebBrowserTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserTexture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_WebBrowserTexture();
	WEBBROWSERTEXTURE_API UClass* Z_Construct_UClass_UWebBrowserTexture();
	WEBBROWSERTEXTURE_API UClass* Z_Construct_UClass_UWebBrowserTexture_NoRegister();
// End Cross Module References
	void UWebBrowserTexture::StaticRegisterNativesUWebBrowserTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowserTexture);
	UClass* Z_Construct_UClass_UWebBrowserTexture_NoRegister()
	{
		return UWebBrowserTexture::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowserTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowserTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowserTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements a texture asset for rendering webbrowser output for Android.\n* \n*  probably should have derived from UTexture2DDynamic (not UTexture)\n*/" },
		{ "HideCategories", "Adjustments Compositing LevelOfDetail Object" },
		{ "IncludePath", "WebBrowserTexture.h" },
		{ "ModuleRelativePath", "Public/WebBrowserTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering webbrowser output for Android.\n\n probably should have derived from UTexture2DDynamic (not UTexture)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowserTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowserTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowserTexture_Statics::ClassParams = {
		&UWebBrowserTexture::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebBrowserTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowserTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBrowserTexture()
	{
		if (!Z_Registration_Info_UClass_UWebBrowserTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowserTexture.OuterSingleton, Z_Construct_UClass_UWebBrowserTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowserTexture.OuterSingleton;
	}
	template<> WEBBROWSERTEXTURE_API UClass* StaticClass<UWebBrowserTexture>()
	{
		return UWebBrowserTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowserTexture);
	UWebBrowserTexture::~UWebBrowserTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowserTexture, UWebBrowserTexture::StaticClass, TEXT("UWebBrowserTexture"), &Z_Registration_Info_UClass_UWebBrowserTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowserTexture), 2614168716U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_1670973258(TEXT("/Script/WebBrowserTexture"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_WebBrowserTexture_Public_WebBrowserTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
