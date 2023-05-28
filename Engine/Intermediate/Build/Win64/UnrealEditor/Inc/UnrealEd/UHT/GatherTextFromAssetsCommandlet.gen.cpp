// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GatherTextFromAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextFromAssetsCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextFromAssetsCommandlet::StaticRegisterNativesUGatherTextFromAssetsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGatherTextFromAssetsCommandlet);
	UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet_NoRegister()
	{
		return UGatherTextFromAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGatherTextFromAssetsCommandlet: Localization commandlet that collects all text to be localized from the game assets.\n */" },
		{ "IncludePath", "Commandlets/GatherTextFromAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextFromAssetsCommandlet.h" },
		{ "ToolTip", "UGatherTextFromAssetsCommandlet: Localization commandlet that collects all text to be localized from the game assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextFromAssetsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::ClassParams = {
		&UGatherTextFromAssetsCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextFromAssetsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGatherTextFromAssetsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGatherTextFromAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UGatherTextFromAssetsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGatherTextFromAssetsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGatherTextFromAssetsCommandlet>()
	{
		return UGatherTextFromAssetsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextFromAssetsCommandlet);
	UGatherTextFromAssetsCommandlet::~UGatherTextFromAssetsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGatherTextFromAssetsCommandlet, UGatherTextFromAssetsCommandlet::StaticClass, TEXT("UGatherTextFromAssetsCommandlet"), &Z_Registration_Info_UClass_UGatherTextFromAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGatherTextFromAssetsCommandlet), 2337434315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_240690462(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromAssetsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
