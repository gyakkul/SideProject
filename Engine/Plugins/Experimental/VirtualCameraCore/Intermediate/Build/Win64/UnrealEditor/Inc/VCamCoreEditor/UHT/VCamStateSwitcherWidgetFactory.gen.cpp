// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/VCamStateSwitcherWidgetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamStateSwitcherWidgetFactory() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamStateSwitcherWidgetFactory();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_NoRegister();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamWidgetFactory();
// End Cross Module References
	void UVCamStateSwitcherWidgetFactory::StaticRegisterNativesUVCamStateSwitcherWidgetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamStateSwitcherWidgetFactory);
	UClass* Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_NoRegister()
	{
		return UVCamStateSwitcherWidgetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamWidgetFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VCamStateSwitcherWidgetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VCamStateSwitcherWidgetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamStateSwitcherWidgetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::ClassParams = {
		&UVCamStateSwitcherWidgetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamStateSwitcherWidgetFactory()
	{
		if (!Z_Registration_Info_UClass_UVCamStateSwitcherWidgetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamStateSwitcherWidgetFactory.OuterSingleton, Z_Construct_UClass_UVCamStateSwitcherWidgetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamStateSwitcherWidgetFactory.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UVCamStateSwitcherWidgetFactory>()
	{
		return UVCamStateSwitcherWidgetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamStateSwitcherWidgetFactory);
	UVCamStateSwitcherWidgetFactory::~UVCamStateSwitcherWidgetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamStateSwitcherWidgetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamStateSwitcherWidgetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamStateSwitcherWidgetFactory, UVCamStateSwitcherWidgetFactory::StaticClass, TEXT("UVCamStateSwitcherWidgetFactory"), &Z_Registration_Info_UClass_UVCamStateSwitcherWidgetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamStateSwitcherWidgetFactory), 1278608250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamStateSwitcherWidgetFactory_h_3977769933(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamStateSwitcherWidgetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamStateSwitcherWidgetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
