// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserFrontEndFilterExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserFrontEndFilterExtension() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	void UContentBrowserFrontEndFilterExtension::StaticRegisterNativesUContentBrowserFrontEndFilterExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserFrontEndFilterExtension);
	UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_NoRegister()
	{
		return UContentBrowserFrontEndFilterExtension::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Override this class in order to make an additional front-end filter available in the Content Browser\n" },
		{ "IncludePath", "ContentBrowserFrontEndFilterExtension.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserFrontEndFilterExtension.h" },
		{ "ToolTip", "Override this class in order to make an additional front-end filter available in the Content Browser" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserFrontEndFilterExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::ClassParams = {
		&UContentBrowserFrontEndFilterExtension::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserFrontEndFilterExtension()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserFrontEndFilterExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserFrontEndFilterExtension.OuterSingleton, Z_Construct_UClass_UContentBrowserFrontEndFilterExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserFrontEndFilterExtension.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UContentBrowserFrontEndFilterExtension>()
	{
		return UContentBrowserFrontEndFilterExtension::StaticClass();
	}
	UContentBrowserFrontEndFilterExtension::UContentBrowserFrontEndFilterExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserFrontEndFilterExtension);
	UContentBrowserFrontEndFilterExtension::~UContentBrowserFrontEndFilterExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserFrontEndFilterExtension, UContentBrowserFrontEndFilterExtension::StaticClass, TEXT("UContentBrowserFrontEndFilterExtension"), &Z_Registration_Info_UClass_UContentBrowserFrontEndFilterExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserFrontEndFilterExtension), 3579784194U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_2884968525(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_ContentBrowserFrontEndFilterExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
