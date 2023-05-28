// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/GenerateGatherArchiveCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerateGatherArchiveCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherArchiveCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UGenerateGatherArchiveCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UGenerateGatherArchiveCommandlet::StaticRegisterNativesUGenerateGatherArchiveCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGenerateGatherArchiveCommandlet);
	UClass* Z_Construct_UClass_UGenerateGatherArchiveCommandlet_NoRegister()
	{
		return UGenerateGatherArchiveCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UGenerateGatherArchiveCommandlet: Generates a localisation archive; generally used as a gather step.\n */" },
		{ "IncludePath", "Commandlets/GenerateGatherArchiveCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/GenerateGatherArchiveCommandlet.h" },
		{ "ToolTip", "UGenerateGatherArchiveCommandlet: Generates a localisation archive; generally used as a gather step." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGenerateGatherArchiveCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::ClassParams = {
		&UGenerateGatherArchiveCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGenerateGatherArchiveCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGenerateGatherArchiveCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGenerateGatherArchiveCommandlet.OuterSingleton, Z_Construct_UClass_UGenerateGatherArchiveCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGenerateGatherArchiveCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UGenerateGatherArchiveCommandlet>()
	{
		return UGenerateGatherArchiveCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGenerateGatherArchiveCommandlet);
	UGenerateGatherArchiveCommandlet::~UGenerateGatherArchiveCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGenerateGatherArchiveCommandlet, UGenerateGatherArchiveCommandlet::StaticClass, TEXT("UGenerateGatherArchiveCommandlet"), &Z_Registration_Info_UClass_UGenerateGatherArchiveCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGenerateGatherArchiveCommandlet), 2319353175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_4293042100(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_GenerateGatherArchiveCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
