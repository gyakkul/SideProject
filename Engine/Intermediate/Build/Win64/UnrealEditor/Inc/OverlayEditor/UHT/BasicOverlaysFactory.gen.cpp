// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/BasicOverlaysFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlaysFactory() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void UBasicOverlaysFactory::StaticRegisterNativesUBasicOverlaysFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicOverlaysFactory);
	UClass* Z_Construct_UClass_UBasicOverlaysFactory_NoRegister()
	{
		return UBasicOverlaysFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBasicOverlaysFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicOverlaysFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UBasicOverlays objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BasicOverlaysFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/BasicOverlaysFactory.h" },
		{ "ToolTip", "Implements a factory for UBasicOverlays objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicOverlaysFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicOverlaysFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicOverlaysFactory_Statics::ClassParams = {
		&UBasicOverlaysFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlaysFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicOverlaysFactory()
	{
		if (!Z_Registration_Info_UClass_UBasicOverlaysFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicOverlaysFactory.OuterSingleton, Z_Construct_UClass_UBasicOverlaysFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicOverlaysFactory.OuterSingleton;
	}
	template<> OVERLAYEDITOR_API UClass* StaticClass<UBasicOverlaysFactory>()
	{
		return UBasicOverlaysFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlaysFactory);
	UBasicOverlaysFactory::~UBasicOverlaysFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicOverlaysFactory, UBasicOverlaysFactory::StaticClass, TEXT("UBasicOverlaysFactory"), &Z_Registration_Info_UClass_UBasicOverlaysFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicOverlaysFactory), 2401069557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_876292685(TEXT("/Script/OverlayEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
