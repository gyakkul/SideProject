// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/DiffFilesCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiffFilesCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffFilesCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UDiffFilesCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDiffFilesCommandlet::StaticRegisterNativesUDiffFilesCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDiffFilesCommandlet);
	UClass* Z_Construct_UClass_UDiffFilesCommandlet_NoRegister()
	{
		return UDiffFilesCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UDiffFilesCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDiffFilesCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDiffFilesCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/DiffFilesCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/DiffFilesCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDiffFilesCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiffFilesCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDiffFilesCommandlet_Statics::ClassParams = {
		&UDiffFilesCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDiffFilesCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDiffFilesCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDiffFilesCommandlet()
	{
		if (!Z_Registration_Info_UClass_UDiffFilesCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiffFilesCommandlet.OuterSingleton, Z_Construct_UClass_UDiffFilesCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDiffFilesCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDiffFilesCommandlet>()
	{
		return UDiffFilesCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDiffFilesCommandlet);
	UDiffFilesCommandlet::~UDiffFilesCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDiffFilesCommandlet, UDiffFilesCommandlet::StaticClass, TEXT("UDiffFilesCommandlet"), &Z_Registration_Info_UClass_UDiffFilesCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiffFilesCommandlet), 1744507727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_2050959838(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_DiffFilesCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
