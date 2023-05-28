// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/AimOffsetBlendSpaceFactory1D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpaceFactory1D() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D();
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactory1D();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAimOffsetBlendSpaceFactory1D::StaticRegisterNativesUAimOffsetBlendSpaceFactory1D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimOffsetBlendSpaceFactory1D);
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_NoRegister()
	{
		return UAimOffsetBlendSpaceFactory1D::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceFactory1D,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AimOffsetBlendSpaceFactory1D.h" },
		{ "ModuleRelativePath", "Classes/Factories/AimOffsetBlendSpaceFactory1D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpaceFactory1D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::ClassParams = {
		&UAimOffsetBlendSpaceFactory1D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D()
	{
		if (!Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactory1D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactory1D.OuterSingleton, Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactory1D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAimOffsetBlendSpaceFactory1D>()
	{
		return UAimOffsetBlendSpaceFactory1D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpaceFactory1D);
	UAimOffsetBlendSpaceFactory1D::~UAimOffsetBlendSpaceFactory1D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactory1D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactory1D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimOffsetBlendSpaceFactory1D, UAimOffsetBlendSpaceFactory1D::StaticClass, TEXT("UAimOffsetBlendSpaceFactory1D"), &Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactory1D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimOffsetBlendSpaceFactory1D), 1632376509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactory1D_h_1346194099(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactory1D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactory1D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
