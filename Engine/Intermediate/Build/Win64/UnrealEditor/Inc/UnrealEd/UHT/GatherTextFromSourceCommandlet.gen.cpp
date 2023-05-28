// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GatherTextFromSourceCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGatherTextFromSourceCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGatherTextFromSourceCommandlet::StaticRegisterNativesUGatherTextFromSourceCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGatherTextFromSourceCommandlet);
	UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet_NoRegister()
	{
		return UGatherTextFromSourceCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGatherTextFromSourceCommandlet: Localization commandlet that collects all text to be localized from the source code.\n */" },
		{ "IncludePath", "Commandlets/GatherTextFromSourceCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GatherTextFromSourceCommandlet.h" },
		{ "ToolTip", "UGatherTextFromSourceCommandlet: Localization commandlet that collects all text to be localized from the source code." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGatherTextFromSourceCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::ClassParams = {
		&UGatherTextFromSourceCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGatherTextFromSourceCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGatherTextFromSourceCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGatherTextFromSourceCommandlet.OuterSingleton, Z_Construct_UClass_UGatherTextFromSourceCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGatherTextFromSourceCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGatherTextFromSourceCommandlet>()
	{
		return UGatherTextFromSourceCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGatherTextFromSourceCommandlet);
	UGatherTextFromSourceCommandlet::~UGatherTextFromSourceCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGatherTextFromSourceCommandlet, UGatherTextFromSourceCommandlet::StaticClass, TEXT("UGatherTextFromSourceCommandlet"), &Z_Registration_Info_UClass_UGatherTextFromSourceCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGatherTextFromSourceCommandlet), 3385613383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_1054977501(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GatherTextFromSourceCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
