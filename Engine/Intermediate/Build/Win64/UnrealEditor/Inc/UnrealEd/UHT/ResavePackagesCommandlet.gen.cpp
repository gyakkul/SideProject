// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ResavePackagesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResavePackagesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UResavePackagesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UResavePackagesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UResavePackagesCommandlet::StaticRegisterNativesUResavePackagesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UResavePackagesCommandlet);
	UClass* Z_Construct_UClass_UResavePackagesCommandlet_NoRegister()
	{
		return UResavePackagesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UResavePackagesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResavePackagesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResavePackagesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/ResavePackagesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ResavePackagesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResavePackagesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResavePackagesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UResavePackagesCommandlet_Statics::ClassParams = {
		&UResavePackagesCommandlet::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UResavePackagesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResavePackagesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResavePackagesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UResavePackagesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UResavePackagesCommandlet.OuterSingleton, Z_Construct_UClass_UResavePackagesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UResavePackagesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UResavePackagesCommandlet>()
	{
		return UResavePackagesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResavePackagesCommandlet);
	UResavePackagesCommandlet::~UResavePackagesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UResavePackagesCommandlet, UResavePackagesCommandlet::StaticClass, TEXT("UResavePackagesCommandlet"), &Z_Registration_Info_UClass_UResavePackagesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UResavePackagesCommandlet), 2201284023U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_3995751229(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ResavePackagesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
