// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/PkgInfoCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePkgInfoCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UPkgInfoCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UPkgInfoCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPkgInfoCommandlet::StaticRegisterNativesUPkgInfoCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPkgInfoCommandlet);
	UClass* Z_Construct_UClass_UPkgInfoCommandlet_NoRegister()
	{
		return UPkgInfoCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UPkgInfoCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPkgInfoCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPkgInfoCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/PkgInfoCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/PkgInfoCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPkgInfoCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPkgInfoCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPkgInfoCommandlet_Statics::ClassParams = {
		&UPkgInfoCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPkgInfoCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPkgInfoCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPkgInfoCommandlet()
	{
		if (!Z_Registration_Info_UClass_UPkgInfoCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPkgInfoCommandlet.OuterSingleton, Z_Construct_UClass_UPkgInfoCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPkgInfoCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPkgInfoCommandlet>()
	{
		return UPkgInfoCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPkgInfoCommandlet);
	UPkgInfoCommandlet::~UPkgInfoCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_PkgInfoCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_PkgInfoCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPkgInfoCommandlet, UPkgInfoCommandlet::StaticClass, TEXT("UPkgInfoCommandlet"), &Z_Registration_Info_UClass_UPkgInfoCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPkgInfoCommandlet), 954139323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_PkgInfoCommandlet_h_749191009(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_PkgInfoCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_PkgInfoCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
