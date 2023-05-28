// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PhysicalMaterialFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicalMaterialFactoryNew() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicalMaterialFactoryNew::StaticRegisterNativesUPhysicalMaterialFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicalMaterialFactoryNew);
	UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew_NoRegister()
	{
		return UPhysicalMaterialFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PhysicalMaterialClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PhysicalMaterialFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData[] = {
		{ "Category", "PhysicalMaterialFactory" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicalMaterialFactoryNew.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass = { "PhysicalMaterialClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicalMaterialFactoryNew, PhysicalMaterialClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::NewProp_PhysicalMaterialClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicalMaterialFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::ClassParams = {
		&UPhysicalMaterialFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicalMaterialFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UPhysicalMaterialFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicalMaterialFactoryNew.OuterSingleton, Z_Construct_UClass_UPhysicalMaterialFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicalMaterialFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicalMaterialFactoryNew>()
	{
		return UPhysicalMaterialFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicalMaterialFactoryNew);
	UPhysicalMaterialFactoryNew::~UPhysicalMaterialFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicalMaterialFactoryNew, UPhysicalMaterialFactoryNew::StaticClass, TEXT("UPhysicalMaterialFactoryNew"), &Z_Registration_Info_UClass_UPhysicalMaterialFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicalMaterialFactoryNew), 427516844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_947442908(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicalMaterialFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
