// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HairStrandsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHairStrandsFactory() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UHairStrandsFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UHairStrandsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UHairStrandsFactory::StaticRegisterNativesUHairStrandsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHairStrandsFactory);
	UClass* Z_Construct_UClass_UHairStrandsFactory_NoRegister()
	{
		return UHairStrandsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHairStrandsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHairStrandsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHairStrandsFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UHairStrands objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "HairStrandsFactory.h" },
		{ "ModuleRelativePath", "Public/HairStrandsFactory.h" },
		{ "ToolTip", "Implements a factory for UHairStrands objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHairStrandsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHairStrandsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHairStrandsFactory_Statics::ClassParams = {
		&UHairStrandsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHairStrandsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHairStrandsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHairStrandsFactory()
	{
		if (!Z_Registration_Info_UClass_UHairStrandsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHairStrandsFactory.OuterSingleton, Z_Construct_UClass_UHairStrandsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHairStrandsFactory.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UHairStrandsFactory>()
	{
		return UHairStrandsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHairStrandsFactory);
	UHairStrandsFactory::~UHairStrandsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_HairStrandsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_HairStrandsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHairStrandsFactory, UHairStrandsFactory::StaticClass, TEXT("UHairStrandsFactory"), &Z_Registration_Info_UClass_UHairStrandsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHairStrandsFactory), 5091952U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_HairStrandsFactory_h_1662683403(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_HairStrandsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_HairStrandsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
