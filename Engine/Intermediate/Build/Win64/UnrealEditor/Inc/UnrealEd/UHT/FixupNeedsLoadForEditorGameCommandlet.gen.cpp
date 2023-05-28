// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/FixupNeedsLoadForEditorGameCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixupNeedsLoadForEditorGameCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UResavePackagesCommandlet();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFixupNeedsLoadForEditorGameCommandlet::StaticRegisterNativesUFixupNeedsLoadForEditorGameCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFixupNeedsLoadForEditorGameCommandlet);
	UClass* Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_NoRegister()
	{
		return UFixupNeedsLoadForEditorGameCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UResavePackagesCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/FixupNeedsLoadForEditorGameCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/FixupNeedsLoadForEditorGameCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixupNeedsLoadForEditorGameCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::ClassParams = {
		&UFixupNeedsLoadForEditorGameCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet()
	{
		if (!Z_Registration_Info_UClass_UFixupNeedsLoadForEditorGameCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFixupNeedsLoadForEditorGameCommandlet.OuterSingleton, Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFixupNeedsLoadForEditorGameCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFixupNeedsLoadForEditorGameCommandlet>()
	{
		return UFixupNeedsLoadForEditorGameCommandlet::StaticClass();
	}
	UFixupNeedsLoadForEditorGameCommandlet::UFixupNeedsLoadForEditorGameCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixupNeedsLoadForEditorGameCommandlet);
	UFixupNeedsLoadForEditorGameCommandlet::~UFixupNeedsLoadForEditorGameCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFixupNeedsLoadForEditorGameCommandlet, UFixupNeedsLoadForEditorGameCommandlet::StaticClass, TEXT("UFixupNeedsLoadForEditorGameCommandlet"), &Z_Registration_Info_UClass_UFixupNeedsLoadForEditorGameCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFixupNeedsLoadForEditorGameCommandlet), 2439395432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_2021931729(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixupNeedsLoadForEditorGameCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
