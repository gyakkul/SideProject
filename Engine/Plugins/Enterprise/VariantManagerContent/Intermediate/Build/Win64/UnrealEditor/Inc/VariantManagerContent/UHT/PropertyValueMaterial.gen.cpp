// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyValueMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueMaterial() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister();
// End Cross Module References
	void UPropertyValueMaterial::StaticRegisterNativesUPropertyValueMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueMaterial);
	UClass* Z_Construct_UClass_UPropertyValueMaterial_NoRegister()
	{
		return UPropertyValueMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PropertyValueMaterial.h" },
		{ "ModuleRelativePath", "Public/PropertyValueMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams = {
		&UPropertyValueMaterial::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueMaterial()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton, Z_Construct_UClass_UPropertyValueMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueMaterial.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueMaterial>()
	{
		return UPropertyValueMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueMaterial);
	UPropertyValueMaterial::~UPropertyValueMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValueMaterial, UPropertyValueMaterial::StaticClass, TEXT("UPropertyValueMaterial"), &Z_Registration_Info_UClass_UPropertyValueMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueMaterial), 3418768227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_885028440(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
