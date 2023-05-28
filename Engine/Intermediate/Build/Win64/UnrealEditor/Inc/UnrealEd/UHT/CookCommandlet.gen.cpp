// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/CookCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCookCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCookCommandlet::StaticRegisterNativesUCookCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookCommandlet);
	UClass* Z_Construct_UClass_UCookCommandlet_NoRegister()
	{
		return UCookCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCookCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CookCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CookCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookCommandlet_Statics::ClassParams = {
		&UCookCommandlet::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCookCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookCommandlet.OuterSingleton, Z_Construct_UClass_UCookCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCookCommandlet>()
	{
		return UCookCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookCommandlet);
	UCookCommandlet::~UCookCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookCommandlet, UCookCommandlet::StaticClass, TEXT("UCookCommandlet"), &Z_Registration_Info_UClass_UCookCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookCommandlet), 3750428549U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_1239615503(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
