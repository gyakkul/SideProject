// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialInstanceConstantFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstantFactoryNew() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialInstanceConstantFactoryNew::StaticRegisterNativesUMaterialInstanceConstantFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceConstantFactoryNew);
	UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_NoRegister()
	{
		return UMaterialInstanceConstantFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialInstanceConstantFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialInstanceConstantFactoryNew.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MaterialInstanceConstantFactoryNew.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent = { "InitialParent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialInstanceConstantFactoryNew, InitialParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::NewProp_InitialParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceConstantFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::ClassParams = {
		&UMaterialInstanceConstantFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInstanceConstantFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMaterialInstanceConstantFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceConstantFactoryNew.OuterSingleton, Z_Construct_UClass_UMaterialInstanceConstantFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialInstanceConstantFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialInstanceConstantFactoryNew>()
	{
		return UMaterialInstanceConstantFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstantFactoryNew);
	UMaterialInstanceConstantFactoryNew::~UMaterialInstanceConstantFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceConstantFactoryNew, UMaterialInstanceConstantFactoryNew::StaticClass, TEXT("UMaterialInstanceConstantFactoryNew"), &Z_Registration_Info_UClass_UMaterialInstanceConstantFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceConstantFactoryNew), 334742516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_3856866946(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialInstanceConstantFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
