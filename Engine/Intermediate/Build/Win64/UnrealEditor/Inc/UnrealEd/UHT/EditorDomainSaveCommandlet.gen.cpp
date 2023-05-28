// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/EditorDomainSaveCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorDomainSaveCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UEditorDomainSaveCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UEditorDomainSaveCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorDomainSaveCommandlet::StaticRegisterNativesUEditorDomainSaveCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorDomainSaveCommandlet);
	UClass* Z_Construct_UClass_UEditorDomainSaveCommandlet_NoRegister()
	{
		return UEditorDomainSaveCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runs the EditorDomainSave server for client Editor and CookCommandlet processes. */" },
		{ "IncludePath", "Commandlets/EditorDomainSaveCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/EditorDomainSaveCommandlet.h" },
		{ "ToolTip", "Runs the EditorDomainSave server for client Editor and CookCommandlet processes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorDomainSaveCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::ClassParams = {
		&UEditorDomainSaveCommandlet::StaticClass,
		"Editor",
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorDomainSaveCommandlet()
	{
		if (!Z_Registration_Info_UClass_UEditorDomainSaveCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorDomainSaveCommandlet.OuterSingleton, Z_Construct_UClass_UEditorDomainSaveCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorDomainSaveCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorDomainSaveCommandlet>()
	{
		return UEditorDomainSaveCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorDomainSaveCommandlet);
	UEditorDomainSaveCommandlet::~UEditorDomainSaveCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorDomainSaveCommandlet, UEditorDomainSaveCommandlet::StaticClass, TEXT("UEditorDomainSaveCommandlet"), &Z_Registration_Info_UClass_UEditorDomainSaveCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorDomainSaveCommandlet), 2626146260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_2542793948(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_EditorDomainSaveCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
