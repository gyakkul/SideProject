// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/AimOffsetBlendSpaceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpaceFactoryNew() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew();
	UNREALED_API UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlendSpaceFactoryNew();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAimOffsetBlendSpaceFactoryNew::StaticRegisterNativesUAimOffsetBlendSpaceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimOffsetBlendSpaceFactoryNew);
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_NoRegister()
	{
		return UAimOffsetBlendSpaceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpaceFactoryNew,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AimOffsetBlendSpaceFactoryNew.h" },
		{ "ModuleRelativePath", "Classes/Factories/AimOffsetBlendSpaceFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpaceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::ClassParams = {
		&UAimOffsetBlendSpaceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactoryNew.OuterSingleton, Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactoryNew.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAimOffsetBlendSpaceFactoryNew>()
	{
		return UAimOffsetBlendSpaceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpaceFactoryNew);
	UAimOffsetBlendSpaceFactoryNew::~UAimOffsetBlendSpaceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimOffsetBlendSpaceFactoryNew, UAimOffsetBlendSpaceFactoryNew::StaticClass, TEXT("UAimOffsetBlendSpaceFactoryNew"), &Z_Registration_Info_UClass_UAimOffsetBlendSpaceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimOffsetBlendSpaceFactoryNew), 4036887677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactoryNew_h_2628367552(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AimOffsetBlendSpaceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
