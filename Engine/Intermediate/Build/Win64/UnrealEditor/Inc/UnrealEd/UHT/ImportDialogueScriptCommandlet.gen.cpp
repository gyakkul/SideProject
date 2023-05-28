// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ImportDialogueScriptCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportDialogueScriptCommandlet() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UGatherTextCommandletBase();
	UNREALED_API UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UImportDialogueScriptCommandlet::StaticRegisterNativesUImportDialogueScriptCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportDialogueScriptCommandlet);
	UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet_NoRegister()
	{
		return UImportDialogueScriptCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGatherTextCommandletBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09UImportDialogueScriptCommandlet: Handles importing localized script sheets to update the translated archive text.\n */" },
		{ "IncludePath", "Commandlets/ImportDialogueScriptCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ImportDialogueScriptCommandlet.h" },
		{ "ToolTip", "UImportDialogueScriptCommandlet: Handles importing localized script sheets to update the translated archive text." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportDialogueScriptCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::ClassParams = {
		&UImportDialogueScriptCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportDialogueScriptCommandlet()
	{
		if (!Z_Registration_Info_UClass_UImportDialogueScriptCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportDialogueScriptCommandlet.OuterSingleton, Z_Construct_UClass_UImportDialogueScriptCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportDialogueScriptCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UImportDialogueScriptCommandlet>()
	{
		return UImportDialogueScriptCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportDialogueScriptCommandlet);
	UImportDialogueScriptCommandlet::~UImportDialogueScriptCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportDialogueScriptCommandlet, UImportDialogueScriptCommandlet::StaticClass, TEXT("UImportDialogueScriptCommandlet"), &Z_Registration_Info_UClass_UImportDialogueScriptCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportDialogueScriptCommandlet), 3503578624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_3222630517(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ImportDialogueScriptCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
