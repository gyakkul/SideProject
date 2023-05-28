// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialFunctionFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionFactoryNew_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionFactoryNew::StaticRegisterNativesUMaterialFunctionFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionFactoryNew);
	UClass* Z_Construct_UClass_UMaterialFunctionFactoryNew_NoRegister()
	{
		return UMaterialFunctionFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::ClassParams = {
		&UMaterialFunctionFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionFactoryNew.OuterSingleton, Z_Construct_UClass_UMaterialFunctionFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionFactoryNew>()
	{
		return UMaterialFunctionFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionFactoryNew);
	UMaterialFunctionFactoryNew::~UMaterialFunctionFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionFactoryNew, UMaterialFunctionFactoryNew::StaticClass, TEXT("UMaterialFunctionFactoryNew"), &Z_Registration_Info_UClass_UMaterialFunctionFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionFactoryNew), 3172547381U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_2773667360(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
