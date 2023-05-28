// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/PreviewMaterial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewMaterial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterial();
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMaterial();
	UNREALED_API UClass* Z_Construct_UClass_UPreviewMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPreviewMaterial::StaticRegisterNativesUPreviewMaterial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreviewMaterial);
	UClass* Z_Construct_UClass_UPreviewMaterial_NoRegister()
	{
		return UPreviewMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterial,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "MaterialEditor/PreviewMaterial.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/PreviewMaterial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreviewMaterial_Statics::ClassParams = {
		&UPreviewMaterial::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewMaterial()
	{
		if (!Z_Registration_Info_UClass_UPreviewMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreviewMaterial.OuterSingleton, Z_Construct_UClass_UPreviewMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPreviewMaterial.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPreviewMaterial>()
	{
		return UPreviewMaterial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewMaterial);
	UPreviewMaterial::~UPreviewMaterial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPreviewMaterial, UPreviewMaterial::StaticClass, TEXT("UPreviewMaterial"), &Z_Registration_Info_UClass_UPreviewMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreviewMaterial), 358531615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_242914363(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_PreviewMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
