// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/ReimportBasicOverlaysFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportBasicOverlaysFactory() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactory();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void UReimportBasicOverlaysFactory::StaticRegisterNativesUReimportBasicOverlaysFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportBasicOverlaysFactory);
	UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory_NoRegister()
	{
		return UReimportBasicOverlaysFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBasicOverlaysFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A factory for reimporting basic overlays\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/ReimportBasicOverlaysFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/ReimportBasicOverlaysFactory.h" },
		{ "ToolTip", "A factory for reimporting basic overlays" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportBasicOverlaysFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::ClassParams = {
		&UReimportBasicOverlaysFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportBasicOverlaysFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportBasicOverlaysFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportBasicOverlaysFactory.OuterSingleton, Z_Construct_UClass_UReimportBasicOverlaysFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportBasicOverlaysFactory.OuterSingleton;
	}
	template<> OVERLAYEDITOR_API UClass* StaticClass<UReimportBasicOverlaysFactory>()
	{
		return UReimportBasicOverlaysFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportBasicOverlaysFactory);
	UReimportBasicOverlaysFactory::~UReimportBasicOverlaysFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportBasicOverlaysFactory, UReimportBasicOverlaysFactory::StaticClass, TEXT("UReimportBasicOverlaysFactory"), &Z_Registration_Info_UClass_UReimportBasicOverlaysFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportBasicOverlaysFactory), 2309309053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_2539669471(TEXT("/Script/OverlayEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_ReimportBasicOverlaysFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
