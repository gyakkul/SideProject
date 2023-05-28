// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/FixConflictingLocalizationKeys.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixConflictingLocalizationKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UFixConflictingLocalizationKeysCommandlet::StaticRegisterNativesUFixConflictingLocalizationKeysCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFixConflictingLocalizationKeysCommandlet);
	UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_NoRegister()
	{
		return UFixConflictingLocalizationKeysCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Internal commandlet to fix any conflicting localization keys that are found in a manifest.\n * @note Hard-coded to work with the \"Game\" localization target.\n */" },
		{ "IncludePath", "Commandlets/FixConflictingLocalizationKeys.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/FixConflictingLocalizationKeys.h" },
		{ "ToolTip", "Internal commandlet to fix any conflicting localization keys that are found in a manifest.\n@note Hard-coded to work with the \"Game\" localization target." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixConflictingLocalizationKeysCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::ClassParams = {
		&UFixConflictingLocalizationKeysCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet()
	{
		if (!Z_Registration_Info_UClass_UFixConflictingLocalizationKeysCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFixConflictingLocalizationKeysCommandlet.OuterSingleton, Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFixConflictingLocalizationKeysCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFixConflictingLocalizationKeysCommandlet>()
	{
		return UFixConflictingLocalizationKeysCommandlet::StaticClass();
	}
	UFixConflictingLocalizationKeysCommandlet::UFixConflictingLocalizationKeysCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixConflictingLocalizationKeysCommandlet);
	UFixConflictingLocalizationKeysCommandlet::~UFixConflictingLocalizationKeysCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixConflictingLocalizationKeys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixConflictingLocalizationKeys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFixConflictingLocalizationKeysCommandlet, UFixConflictingLocalizationKeysCommandlet::StaticClass, TEXT("UFixConflictingLocalizationKeysCommandlet"), &Z_Registration_Info_UClass_UFixConflictingLocalizationKeysCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFixConflictingLocalizationKeysCommandlet), 3043275732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixConflictingLocalizationKeys_h_3885081441(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixConflictingLocalizationKeys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_FixConflictingLocalizationKeys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
