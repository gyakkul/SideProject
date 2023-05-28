// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/BaseIteratePackagesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseIteratePackagesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UBaseIteratePackagesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UBaseIteratePackagesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBaseIteratePackagesCommandlet::StaticRegisterNativesUBaseIteratePackagesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseIteratePackagesCommandlet);
	UClass* Z_Construct_UClass_UBaseIteratePackagesCommandlet_NoRegister()
	{
		return UBaseIteratePackagesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/BaseIteratePackagesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/BaseIteratePackagesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseIteratePackagesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::ClassParams = {
		&UBaseIteratePackagesCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseIteratePackagesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UBaseIteratePackagesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseIteratePackagesCommandlet.OuterSingleton, Z_Construct_UClass_UBaseIteratePackagesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseIteratePackagesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBaseIteratePackagesCommandlet>()
	{
		return UBaseIteratePackagesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseIteratePackagesCommandlet);
	UBaseIteratePackagesCommandlet::~UBaseIteratePackagesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_BaseIteratePackagesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_BaseIteratePackagesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseIteratePackagesCommandlet, UBaseIteratePackagesCommandlet::StaticClass, TEXT("UBaseIteratePackagesCommandlet"), &Z_Registration_Info_UClass_UBaseIteratePackagesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseIteratePackagesCommandlet), 3867810570U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_BaseIteratePackagesCommandlet_h_1713276146(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_BaseIteratePackagesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_BaseIteratePackagesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
