// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/BasicOverlaysFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicOverlaysFactoryNew() {}
// Cross Module References
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactoryNew();
	OVERLAYEDITOR_API UClass* Z_Construct_UClass_UBasicOverlaysFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_OverlayEditor();
// End Cross Module References
	void UBasicOverlaysFactoryNew::StaticRegisterNativesUBasicOverlaysFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicOverlaysFactoryNew);
	UClass* Z_Construct_UClass_UBasicOverlaysFactoryNew_NoRegister()
	{
		return UBasicOverlaysFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OverlayEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for new UBasicOverlays objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BasicOverlaysFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BasicOverlaysFactoryNew.h" },
		{ "ToolTip", "Implements a factory for new UBasicOverlays objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicOverlaysFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::ClassParams = {
		&UBasicOverlaysFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBasicOverlaysFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UBasicOverlaysFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicOverlaysFactoryNew.OuterSingleton, Z_Construct_UClass_UBasicOverlaysFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicOverlaysFactoryNew.OuterSingleton;
	}
	template<> OVERLAYEDITOR_API UClass* StaticClass<UBasicOverlaysFactoryNew>()
	{
		return UBasicOverlaysFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicOverlaysFactoryNew);
	UBasicOverlaysFactoryNew::~UBasicOverlaysFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicOverlaysFactoryNew, UBasicOverlaysFactoryNew::StaticClass, TEXT("UBasicOverlaysFactoryNew"), &Z_Registration_Info_UClass_UBasicOverlaysFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicOverlaysFactoryNew), 3914691954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_4196892769(TEXT("/Script/OverlayEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_OverlayEditor_Private_Factories_BasicOverlaysFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
