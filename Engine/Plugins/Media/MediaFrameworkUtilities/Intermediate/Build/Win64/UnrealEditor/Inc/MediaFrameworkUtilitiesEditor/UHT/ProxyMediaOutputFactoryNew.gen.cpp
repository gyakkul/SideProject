// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/ProxyMediaOutputFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProxyMediaOutputFactoryNew() {}
// Cross Module References
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UProxyMediaOutputFactoryNew();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UProxyMediaOutputFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	void UProxyMediaOutputFactoryNew::StaticRegisterNativesUProxyMediaOutputFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProxyMediaOutputFactoryNew);
	UClass* Z_Construct_UClass_UProxyMediaOutputFactoryNew_NoRegister()
	{
		return UProxyMediaOutputFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UProxyMediaOutput objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/ProxyMediaOutputFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/ProxyMediaOutputFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UProxyMediaOutput objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProxyMediaOutputFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::ClassParams = {
		&UProxyMediaOutputFactoryNew::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProxyMediaOutputFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UProxyMediaOutputFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProxyMediaOutputFactoryNew.OuterSingleton, Z_Construct_UClass_UProxyMediaOutputFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProxyMediaOutputFactoryNew.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UProxyMediaOutputFactoryNew>()
	{
		return UProxyMediaOutputFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProxyMediaOutputFactoryNew);
	UProxyMediaOutputFactoryNew::~UProxyMediaOutputFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaOutputFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaOutputFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProxyMediaOutputFactoryNew, UProxyMediaOutputFactoryNew::StaticClass, TEXT("UProxyMediaOutputFactoryNew"), &Z_Registration_Info_UClass_UProxyMediaOutputFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProxyMediaOutputFactoryNew), 1208648753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaOutputFactoryNew_h_1123138082(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaOutputFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_Factories_ProxyMediaOutputFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
