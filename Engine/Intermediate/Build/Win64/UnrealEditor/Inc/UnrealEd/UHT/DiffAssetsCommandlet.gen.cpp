// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/DiffAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiffAssetsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffAssetsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDiffAssetsCommandlet::StaticRegisterNativesUDiffAssetsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiffAssetsCommandlet);
	UClass* Z_Construct_UClass_UDiffAssetsCommandlet_NoRegister()
	{
		return UDiffAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDiffAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiffAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DiffAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DiffAssetsCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiffAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiffAssetsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiffAssetsCommandlet_Statics::ClassParams = {
		&UDiffAssetsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDiffAssetsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiffAssetsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDiffAssetsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiffAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UDiffAssetsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiffAssetsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDiffAssetsCommandlet>()
	{
		return UDiffAssetsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiffAssetsCommandlet);
	UDiffAssetsCommandlet::~UDiffAssetsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDiffAssetsCommandlet, UDiffAssetsCommandlet::StaticClass, TEXT("UDiffAssetsCommandlet"), &Z_Registration_Info_UClass_UDiffAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiffAssetsCommandlet), 854319945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_2580984773(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffAssetsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
