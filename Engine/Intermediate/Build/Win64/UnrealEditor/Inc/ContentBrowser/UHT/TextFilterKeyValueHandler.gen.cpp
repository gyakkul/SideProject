// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TextFilterKeyValueHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextFilterKeyValueHandler() {}
// Cross Module References
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandler();
	CONTENTBROWSER_API UClass* Z_Construct_UClass_UTextFilterKeyValueHandler_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowser();
// End Cross Module References
	void UTextFilterKeyValueHandler::StaticRegisterNativesUTextFilterKeyValueHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextFilterKeyValueHandler);
	UClass* Z_Construct_UClass_UTextFilterKeyValueHandler_NoRegister()
	{
		return UTextFilterKeyValueHandler::StaticClass();
	}
	struct Z_Construct_UClass_UTextFilterKeyValueHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TextFilterKeyValueHandler.h" },
		{ "ModuleRelativePath", "Public/TextFilterKeyValueHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextFilterKeyValueHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::ClassParams = {
		&UTextFilterKeyValueHandler::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextFilterKeyValueHandler()
	{
		if (!Z_Registration_Info_UClass_UTextFilterKeyValueHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextFilterKeyValueHandler.OuterSingleton, Z_Construct_UClass_UTextFilterKeyValueHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextFilterKeyValueHandler.OuterSingleton;
	}
	template<> CONTENTBROWSER_API UClass* StaticClass<UTextFilterKeyValueHandler>()
	{
		return UTextFilterKeyValueHandler::StaticClass();
	}
	UTextFilterKeyValueHandler::UTextFilterKeyValueHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextFilterKeyValueHandler);
	UTextFilterKeyValueHandler::~UTextFilterKeyValueHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterKeyValueHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterKeyValueHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextFilterKeyValueHandler, UTextFilterKeyValueHandler::StaticClass, TEXT("UTextFilterKeyValueHandler"), &Z_Registration_Info_UClass_UTextFilterKeyValueHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextFilterKeyValueHandler), 133934397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterKeyValueHandler_h_3815380504(TEXT("/Script/ContentBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterKeyValueHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowser_Public_TextFilterKeyValueHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
