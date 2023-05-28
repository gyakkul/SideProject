// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialParameterCollectionFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialParameterCollectionFactoryNew::StaticRegisterNativesUMaterialParameterCollectionFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialParameterCollectionFactoryNew);
	UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_NoRegister()
	{
		return UMaterialParameterCollectionFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialParameterCollectionFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialParameterCollectionFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollectionFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::ClassParams = {
		&UMaterialParameterCollectionFactoryNew::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollectionFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMaterialParameterCollectionFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialParameterCollectionFactoryNew.OuterSingleton, Z_Construct_UClass_UMaterialParameterCollectionFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialParameterCollectionFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialParameterCollectionFactoryNew>()
	{
		return UMaterialParameterCollectionFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionFactoryNew);
	UMaterialParameterCollectionFactoryNew::~UMaterialParameterCollectionFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialParameterCollectionFactoryNew, UMaterialParameterCollectionFactoryNew::StaticClass, TEXT("UMaterialParameterCollectionFactoryNew"), &Z_Registration_Info_UClass_UMaterialParameterCollectionFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialParameterCollectionFactoryNew), 3984727797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_888923071(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialParameterCollectionFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
