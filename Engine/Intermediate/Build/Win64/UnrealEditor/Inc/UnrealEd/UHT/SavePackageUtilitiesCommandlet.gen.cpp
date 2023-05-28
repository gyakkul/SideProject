// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/SavePackageUtilitiesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavePackageUtilitiesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_USavePackageUtilitiesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_USavePackageUtilitiesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USavePackageUtilitiesCommandlet::StaticRegisterNativesUSavePackageUtilitiesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USavePackageUtilitiesCommandlet);
	UClass* Z_Construct_UClass_USavePackageUtilitiesCommandlet_NoRegister()
	{
		return USavePackageUtilitiesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Commandlet used to validate the package saving mechanism. \n * It can currently compare two back to back saves of a package (or folder of packages)\n */" },
		{ "IncludePath", "Commandlets/SavePackageUtilitiesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/SavePackageUtilitiesCommandlet.h" },
		{ "ToolTip", "* Commandlet used to validate the package saving mechanism.\n* It can currently compare two back to back saves of a package (or folder of packages)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USavePackageUtilitiesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::ClassParams = {
		&USavePackageUtilitiesCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USavePackageUtilitiesCommandlet()
	{
		if (!Z_Registration_Info_UClass_USavePackageUtilitiesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USavePackageUtilitiesCommandlet.OuterSingleton, Z_Construct_UClass_USavePackageUtilitiesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USavePackageUtilitiesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USavePackageUtilitiesCommandlet>()
	{
		return USavePackageUtilitiesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USavePackageUtilitiesCommandlet);
	USavePackageUtilitiesCommandlet::~USavePackageUtilitiesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USavePackageUtilitiesCommandlet, USavePackageUtilitiesCommandlet::StaticClass, TEXT("USavePackageUtilitiesCommandlet"), &Z_Registration_Info_UClass_USavePackageUtilitiesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USavePackageUtilitiesCommandlet), 2203807872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_1135720026(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_SavePackageUtilitiesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
