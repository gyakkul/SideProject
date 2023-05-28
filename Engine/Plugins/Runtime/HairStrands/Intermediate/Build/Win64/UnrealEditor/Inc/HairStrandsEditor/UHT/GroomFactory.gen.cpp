// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomFactory() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UGroomFactory::StaticRegisterNativesUGroomFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomFactory);
	UClass* Z_Construct_UClass_UGroomFactory_NoRegister()
	{
		return UGroomFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGroomFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GroomFactory.h" },
		{ "ModuleRelativePath", "Public/GroomFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomFactory_Statics::ClassParams = {
		&UGroomFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGroomFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomFactory()
	{
		if (!Z_Registration_Info_UClass_UGroomFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomFactory.OuterSingleton, Z_Construct_UClass_UGroomFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomFactory.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UGroomFactory>()
	{
		return UGroomFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomFactory);
	UGroomFactory::~UGroomFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomFactory, UGroomFactory::StaticClass, TEXT("UGroomFactory"), &Z_Registration_Info_UClass_UGroomFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomFactory), 1715529855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomFactory_h_638710637(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
