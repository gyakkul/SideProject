// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/LightWeightInstanceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightWeightInstanceFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_ULightWeightInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_ULightWeightInstanceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULightWeightInstanceFactory::StaticRegisterNativesULightWeightInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightWeightInstanceFactory);
	UClass* Z_Construct_UClass_ULightWeightInstanceFactory_NoRegister()
	{
		return ULightWeightInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULightWeightInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULightWeightInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightWeightInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/LightWeightInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/LightWeightInstanceFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULightWeightInstanceFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/Factories/LightWeightInstanceFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULightWeightInstanceFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULightWeightInstanceFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULightWeightInstanceFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULightWeightInstanceFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightWeightInstanceFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightWeightInstanceFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULightWeightInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightWeightInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightWeightInstanceFactory_Statics::ClassParams = {
		&ULightWeightInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULightWeightInstanceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULightWeightInstanceFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULightWeightInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULightWeightInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULightWeightInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_ULightWeightInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightWeightInstanceFactory.OuterSingleton, Z_Construct_UClass_ULightWeightInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULightWeightInstanceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULightWeightInstanceFactory>()
	{
		return ULightWeightInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULightWeightInstanceFactory);
	ULightWeightInstanceFactory::~ULightWeightInstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULightWeightInstanceFactory, ULightWeightInstanceFactory::StaticClass, TEXT("ULightWeightInstanceFactory"), &Z_Registration_Info_UClass_ULightWeightInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightWeightInstanceFactory), 3545187720U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_1625797397(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_LightWeightInstanceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
