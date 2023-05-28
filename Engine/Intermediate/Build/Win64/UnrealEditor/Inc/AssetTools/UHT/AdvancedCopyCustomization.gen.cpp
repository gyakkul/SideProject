// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvancedCopyCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvancedCopyCustomization() {}
// Cross Module References
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAdvancedCopyCustomization();
	ASSETTOOLS_API UClass* Z_Construct_UClass_UAdvancedCopyCustomization_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetTools();
// End Cross Module References
	void UAdvancedCopyCustomization::StaticRegisterNativesUAdvancedCopyCustomization()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAdvancedCopyCustomization);
	UClass* Z_Construct_UClass_UAdvancedCopyCustomization_NoRegister()
	{
		return UAdvancedCopyCustomization::StaticClass();
	}
	struct Z_Construct_UClass_UAdvancedCopyCustomization_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAdvancedCopyCustomization_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AdvancedCopyCustomization.h" },
		{ "ModuleRelativePath", "Public/AdvancedCopyCustomization.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAdvancedCopyCustomization_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAdvancedCopyCustomization>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAdvancedCopyCustomization_Statics::ClassParams = {
		&UAdvancedCopyCustomization::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAdvancedCopyCustomization_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAdvancedCopyCustomization()
	{
		if (!Z_Registration_Info_UClass_UAdvancedCopyCustomization.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAdvancedCopyCustomization.OuterSingleton, Z_Construct_UClass_UAdvancedCopyCustomization_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAdvancedCopyCustomization.OuterSingleton;
	}
	template<> ASSETTOOLS_API UClass* StaticClass<UAdvancedCopyCustomization>()
	{
		return UAdvancedCopyCustomization::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAdvancedCopyCustomization);
	UAdvancedCopyCustomization::~UAdvancedCopyCustomization() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AdvancedCopyCustomization_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AdvancedCopyCustomization_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAdvancedCopyCustomization, UAdvancedCopyCustomization::StaticClass, TEXT("UAdvancedCopyCustomization"), &Z_Registration_Info_UClass_UAdvancedCopyCustomization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAdvancedCopyCustomization), 1938419021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AdvancedCopyCustomization_h_987901616(TEXT("/Script/AssetTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AdvancedCopyCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AssetTools_Public_AdvancedCopyCustomization_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
