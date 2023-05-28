// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomBindingFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomBindingFactory() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomBindingFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomBindingFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UGroomBindingFactory::StaticRegisterNativesUGroomBindingFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomBindingFactory);
	UClass* Z_Construct_UClass_UGroomBindingFactory_NoRegister()
	{
		return UGroomBindingFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGroomBindingFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomBindingFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomBindingFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomBindingFactory.h" },
		{ "ModuleRelativePath", "Public/GroomBindingFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomBindingFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomBindingFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomBindingFactory_Statics::ClassParams = {
		&UGroomBindingFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGroomBindingFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomBindingFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomBindingFactory()
	{
		if (!Z_Registration_Info_UClass_UGroomBindingFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomBindingFactory.OuterSingleton, Z_Construct_UClass_UGroomBindingFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomBindingFactory.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UGroomBindingFactory>()
	{
		return UGroomBindingFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomBindingFactory);
	UGroomBindingFactory::~UGroomBindingFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomBindingFactory, UGroomBindingFactory::StaticClass, TEXT("UGroomBindingFactory"), &Z_Registration_Info_UClass_UGroomBindingFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomBindingFactory), 1729426906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingFactory_h_394020038(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomBindingFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
