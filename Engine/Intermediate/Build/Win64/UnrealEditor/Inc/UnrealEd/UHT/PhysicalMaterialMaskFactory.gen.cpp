// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PhysicalMaterialMaskFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialMaskFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialMaskFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialMaskFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicalMaterialMaskFactory::StaticRegisterNativesUPhysicalMaterialMaskFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialMaskFactory);
	UClass* Z_Construct_UClass_UPhysicalMaterialMaskFactory_NoRegister()
	{
		return UPhysicalMaterialMaskFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMaskClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicalMaterialMaskClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PhysicalMaterialMaskFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialMaskFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::NewProp_PhysicalMaterialMaskClass_MetaData[] = {
		{ "Category", "PhysicalMaterialMaskFactory" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialMaskFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::NewProp_PhysicalMaterialMaskClass = { "PhysicalMaterialMaskClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialMaskFactory, PhysicalMaterialMaskClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::NewProp_PhysicalMaterialMaskClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::NewProp_PhysicalMaterialMaskClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::NewProp_PhysicalMaterialMaskClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialMaskFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::ClassParams = {
		&UPhysicalMaterialMaskFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialMaskFactory()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterialMaskFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialMaskFactory.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialMaskFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterialMaskFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicalMaterialMaskFactory>()
	{
		return UPhysicalMaterialMaskFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialMaskFactory);
	UPhysicalMaterialMaskFactory::~UPhysicalMaterialMaskFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialMaskFactory, UPhysicalMaterialMaskFactory::StaticClass, TEXT("UPhysicalMaterialMaskFactory"), &Z_Registration_Info_UClass_UPhysicalMaterialMaskFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialMaskFactory), 3251060158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_2173182296(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialMaskFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
