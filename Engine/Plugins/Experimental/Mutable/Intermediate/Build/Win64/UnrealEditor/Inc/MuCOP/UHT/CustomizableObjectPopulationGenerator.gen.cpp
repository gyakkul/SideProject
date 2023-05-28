// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOP/CustomizableObjectPopulationGenerator.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationGenerator();
	CUSTOMIZABLEOBJECTPOPULATION_API UClass* Z_Construct_UClass_UCustomizableObjectPopulationGenerator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulation();
// End Cross Module References
	void UCustomizableObjectPopulationGenerator::StaticRegisterNativesUCustomizableObjectPopulationGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectPopulationGenerator);
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationGenerator_NoRegister()
	{
		return UCustomizableObjectPopulationGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PopulationObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PopulationObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PopulationObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOP/CustomizableObjectPopulationGenerator.h" },
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects_Inner = { "PopulationObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOP/CustomizableObjectPopulationGenerator.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects = { "PopulationObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectPopulationGenerator, PopulationObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::NewProp_PopulationObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectPopulationGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::ClassParams = {
		&UCustomizableObjectPopulationGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectPopulationGenerator()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton, Z_Construct_UClass_UCustomizableObjectPopulationGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATION_API UClass* StaticClass<UCustomizableObjectPopulationGenerator>()
	{
		return UCustomizableObjectPopulationGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectPopulationGenerator);
	UCustomizableObjectPopulationGenerator::~UCustomizableObjectPopulationGenerator() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectPopulationGenerator)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectPopulationGenerator, UCustomizableObjectPopulationGenerator::StaticClass, TEXT("UCustomizableObjectPopulationGenerator"), &Z_Registration_Info_UClass_UCustomizableObjectPopulationGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectPopulationGenerator), 3285202412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationGenerator_h_3685684797(TEXT("/Script/CustomizableObjectPopulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Classes_MuCOP_CustomizableObjectPopulationGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
