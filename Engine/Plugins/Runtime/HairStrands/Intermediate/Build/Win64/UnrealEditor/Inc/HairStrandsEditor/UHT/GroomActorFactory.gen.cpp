// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomActorFactory() {}
// Cross Module References
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomActorFactory();
	HAIRSTRANDSEDITOR_API UClass* Z_Construct_UClass_UGroomActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_HairStrandsEditor();
// End Cross Module References
	void UGroomActorFactory::StaticRegisterNativesUGroomActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGroomActorFactory);
	UClass* Z_Construct_UClass_UGroomActorFactory_NoRegister()
	{
		return UGroomActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGroomActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGroomActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGroomActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "GroomActorFactory.h" },
		{ "ModuleRelativePath", "Public/GroomActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGroomActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGroomActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGroomActorFactory_Statics::ClassParams = {
		&UGroomActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UGroomActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGroomActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGroomActorFactory()
	{
		if (!Z_Registration_Info_UClass_UGroomActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGroomActorFactory.OuterSingleton, Z_Construct_UClass_UGroomActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGroomActorFactory.OuterSingleton;
	}
	template<> HAIRSTRANDSEDITOR_API UClass* StaticClass<UGroomActorFactory>()
	{
		return UGroomActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGroomActorFactory);
	UGroomActorFactory::~UGroomActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGroomActorFactory, UGroomActorFactory::StaticClass, TEXT("UGroomActorFactory"), &Z_Registration_Info_UClass_UGroomActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGroomActorFactory), 3045137261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_231425614(TEXT("/Script/HairStrandsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsEditor_Public_GroomActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
