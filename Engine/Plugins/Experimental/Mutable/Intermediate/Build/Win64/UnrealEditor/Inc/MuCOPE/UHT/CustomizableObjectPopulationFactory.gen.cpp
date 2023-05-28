// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOPE/CustomizableObjectPopulationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationFactory() {}
// Cross Module References
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationFactory();
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor();
// End Cross Module References
	void UCustomizableObjectPopulationFactory::StaticRegisterNativesUCustomizableObjectPopulationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectPopulationFactory);
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationFactory_NoRegister()
	{
		return UCustomizableObjectPopulationFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOPE/CustomizableObjectPopulationFactory.h" },
		{ "ModuleRelativePath", "Classes/MuCOPE/CustomizableObjectPopulationFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectPopulationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::ClassParams = {
		&UCustomizableObjectPopulationFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationFactory()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectPopulationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectPopulationFactory.OuterSingleton, Z_Construct_UClass_UCustomizableObjectPopulationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectPopulationFactory.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* StaticClass<UCustomizableObjectPopulationFactory>()
	{
		return UCustomizableObjectPopulationFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectPopulationFactory);
	UCustomizableObjectPopulationFactory::~UCustomizableObjectPopulationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectPopulationFactory, UCustomizableObjectPopulationFactory::StaticClass, TEXT("UCustomizableObjectPopulationFactory"), &Z_Registration_Info_UClass_UCustomizableObjectPopulationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectPopulationFactory), 1182133672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationFactory_h_3508690039(TEXT("/Script/CustomizableObjectPopulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
