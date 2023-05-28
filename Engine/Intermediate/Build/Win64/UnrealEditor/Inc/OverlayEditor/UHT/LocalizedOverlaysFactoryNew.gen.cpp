// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/LocalizedOverlaysFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalizedOverlaysFactoryNew() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void ULocalizedOverlaysFactoryNew::StaticRegisterNativesULocalizedOverlaysFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalizedOverlaysFactoryNew);
	UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew_NoRegister()
	{
		return ULocalizedOverlaysFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements a factory for new ULocalizedOverlays objects.\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/LocalizedOverlaysFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/LocalizedOverlaysFactoryNew.h" },
		{ "ToolTip", "Implements a factory for new ULocalizedOverlays objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalizedOverlaysFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::ClassParams = {
		&ULocalizedOverlaysFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalizedOverlaysFactoryNew()
	{
		if (!Z_Registration_Info_UClass_ULocalizedOverlaysFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalizedOverlaysFactoryNew.OuterSingleton, Z_Construct_UClass_ULocalizedOverlaysFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalizedOverlaysFactoryNew.OuterSingleton;
	}
	template<> OVERLAYEDITOR_API UClass* StaticClass<ULocalizedOverlaysFactoryNew>()
	{
		return ULocalizedOverlaysFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalizedOverlaysFactoryNew);
	ULocalizedOverlaysFactoryNew::~ULocalizedOverlaysFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalizedOverlaysFactoryNew, ULocalizedOverlaysFactoryNew::StaticClass, TEXT("ULocalizedOverlaysFactoryNew"), &Z_Registration_Info_UClass_ULocalizedOverlaysFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalizedOverlaysFactoryNew), 2188886727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_2634637494(TEXT("/Script/OverlayEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_LocalizedOverlaysFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
