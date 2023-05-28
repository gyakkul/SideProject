// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ImportLocalizedDialogueCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportLocalizedDialogueCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UImportLocalizedDialogueCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UImportLocalizedDialogueCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UImportLocalizedDialogueCommandlet::StaticRegisterNativesUImportLocalizedDialogueCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportLocalizedDialogueCommandlet);
	UClass* Z_Construct_UClass_UImportLocalizedDialogueCommandlet_NoRegister()
	{
		return UImportLocalizedDialogueCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UImportLocalizedDialogueCommandlet: Handles synchronizing localized raw audio files with dialogue and sound wave assets.\n */" },
		{ "IncludePath", "Commandlets/ImportLocalizedDialogueCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ImportLocalizedDialogueCommandlet.h" },
		{ "ToolTip", "UImportLocalizedDialogueCommandlet: Handles synchronizing localized raw audio files with dialogue and sound wave assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportLocalizedDialogueCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::ClassParams = {
		&UImportLocalizedDialogueCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportLocalizedDialogueCommandlet()
	{
		if (!Z_Registration_Info_UClass_UImportLocalizedDialogueCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportLocalizedDialogueCommandlet.OuterSingleton, Z_Construct_UClass_UImportLocalizedDialogueCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportLocalizedDialogueCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UImportLocalizedDialogueCommandlet>()
	{
		return UImportLocalizedDialogueCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportLocalizedDialogueCommandlet);
	UImportLocalizedDialogueCommandlet::~UImportLocalizedDialogueCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportLocalizedDialogueCommandlet, UImportLocalizedDialogueCommandlet::StaticClass, TEXT("UImportLocalizedDialogueCommandlet"), &Z_Registration_Info_UClass_UImportLocalizedDialogueCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportLocalizedDialogueCommandlet), 1610311557U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_3430053562(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportLocalizedDialogueCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
