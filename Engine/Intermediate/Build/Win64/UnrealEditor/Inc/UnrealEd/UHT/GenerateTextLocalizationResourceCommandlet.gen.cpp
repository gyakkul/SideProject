// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GenerateTextLocalizationResourceCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateTextLocalizationResourceCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateTextLocalizationResourceCommandlet::StaticRegisterNativesUGenerateTextLocalizationResourceCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateTextLocalizationResourceCommandlet);
	UClass* Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_NoRegister()
	{
		return UGenerateTextLocalizationResourceCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGenerateTextLocalizationResourceCommandlet: Localization commandlet that generates a table of FText keys to localized string values.\n */" },
		{ "IncludePath", "Commandlets/GenerateTextLocalizationResourceCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateTextLocalizationResourceCommandlet.h" },
		{ "ToolTip", "UGenerateTextLocalizationResourceCommandlet: Localization commandlet that generates a table of FText keys to localized string values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateTextLocalizationResourceCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::ClassParams = {
		&UGenerateTextLocalizationResourceCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateTextLocalizationResourceCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateTextLocalizationResourceCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateTextLocalizationResourceCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGenerateTextLocalizationResourceCommandlet>()
	{
		return UGenerateTextLocalizationResourceCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateTextLocalizationResourceCommandlet);
	UGenerateTextLocalizationResourceCommandlet::~UGenerateTextLocalizationResourceCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateTextLocalizationResourceCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateTextLocalizationResourceCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateTextLocalizationResourceCommandlet, UGenerateTextLocalizationResourceCommandlet::StaticClass, TEXT("UGenerateTextLocalizationResourceCommandlet"), &Z_Registration_Info_UClass_UGenerateTextLocalizationResourceCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateTextLocalizationResourceCommandlet), 3179887360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateTextLocalizationResourceCommandlet_h_3633498166(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateTextLocalizationResourceCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateTextLocalizationResourceCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
