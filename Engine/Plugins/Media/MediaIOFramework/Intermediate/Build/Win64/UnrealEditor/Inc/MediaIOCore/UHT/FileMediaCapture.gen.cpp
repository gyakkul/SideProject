// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FileMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaCapture() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaCapture();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UFileMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	void UFileMediaCapture::StaticRegisterNativesUFileMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileMediaCapture);
	UClass* Z_Construct_UClass_UFileMediaCapture_NoRegister()
	{
		return UFileMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FileMediaCapture.h" },
		{ "ModuleRelativePath", "Public/FileMediaCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaCapture_Statics::ClassParams = {
		&UFileMediaCapture::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaCapture()
	{
		if (!Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton, Z_Construct_UClass_UFileMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileMediaCapture.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UFileMediaCapture>()
	{
		return UFileMediaCapture::StaticClass();
	}
	UFileMediaCapture::UFileMediaCapture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaCapture);
	UFileMediaCapture::~UFileMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileMediaCapture, UFileMediaCapture::StaticClass, TEXT("UFileMediaCapture"), &Z_Registration_Info_UClass_UFileMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileMediaCapture), 1309984481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_226811078(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_FileMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
