// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOPE/CustomizableObjectPopulationClassFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationClassFactory() {}
// Cross Module References
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationClassFactory();
	CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor();
// End Cross Module References
	void UCustomizableObjectPopulationClassFactory::StaticRegisterNativesUCustomizableObjectPopulationClassFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectPopulationClassFactory);
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_NoRegister()
	{
		return UCustomizableObjectPopulationClassFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOPE/CustomizableObjectPopulationClassFactory.h" },
		{ "ModuleRelativePath", "Classes/MuCOPE/CustomizableObjectPopulationClassFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectPopulationClassFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::ClassParams = {
		&UCustomizableObjectPopulationClassFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationClassFactory()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectPopulationClassFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectPopulationClassFactory.OuterSingleton, Z_Construct_UClass_UCustomizableObjectPopulationClassFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectPopulationClassFactory.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATIONEDITOR_API UClass* StaticClass<UCustomizableObjectPopulationClassFactory>()
	{
		return UCustomizableObjectPopulationClassFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectPopulationClassFactory);
	UCustomizableObjectPopulationClassFactory::~UCustomizableObjectPopulationClassFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationClassFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationClassFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectPopulationClassFactory, UCustomizableObjectPopulationClassFactory::StaticClass, TEXT("UCustomizableObjectPopulationClassFactory"), &Z_Registration_Info_UClass_UCustomizableObjectPopulationClassFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectPopulationClassFactory), 1996742062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationClassFactory_h_4150264346(TEXT("/Script/CustomizableObjectPopulationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationClassFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulationEditor_Classes_MuCOPE_CustomizableObjectPopulationClassFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
