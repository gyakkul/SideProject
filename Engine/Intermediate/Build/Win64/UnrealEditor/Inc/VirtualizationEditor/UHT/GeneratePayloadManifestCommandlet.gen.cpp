// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GeneratePayloadManifestCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneratePayloadManifestCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_VirtualizationEditor();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UGeneratePayloadManifestCommandlet();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UGeneratePayloadManifestCommandlet_NoRegister();
// End Cross Module References
	void UGeneratePayloadManifestCommandlet::StaticRegisterNativesUGeneratePayloadManifestCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeneratePayloadManifestCommandlet);
	UClass* Z_Construct_UClass_UGeneratePayloadManifestCommandlet_NoRegister()
	{
		return UGeneratePayloadManifestCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualizationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Creates a csv file containing info about all of the payloads in a set of packages.\n * By default the commandlet will parse the payloads of all packages in the current\n * project but this can be overriden with the cmdline switch -PackageDir=XYZ which\n * will allow the commandlet to parse the payloads of the packages in a given directory.\n * \n * Because the commmandlet is the VirtualizationEditor module it needs to be invoked \n * with the command line:\n * -run=VirtualizationEditor.GeneratePayloadManifest\n */" },
		{ "IncludePath", "GeneratePayloadManifestCommandlet.h" },
		{ "ModuleRelativePath", "Private/GeneratePayloadManifestCommandlet.h" },
		{ "ToolTip", "Creates a csv file containing info about all of the payloads in a set of packages.\nBy default the commandlet will parse the payloads of all packages in the current\nproject but this can be overriden with the cmdline switch -PackageDir=XYZ which\nwill allow the commandlet to parse the payloads of the packages in a given directory.\n\nBecause the commmandlet is the VirtualizationEditor module it needs to be invoked\nwith the command line:\n-run=VirtualizationEditor.GeneratePayloadManifest" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeneratePayloadManifestCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::ClassParams = {
		&UGeneratePayloadManifestCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeneratePayloadManifestCommandlet()
	{
		if (!Z_Registration_Info_UClass_UGeneratePayloadManifestCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeneratePayloadManifestCommandlet.OuterSingleton, Z_Construct_UClass_UGeneratePayloadManifestCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeneratePayloadManifestCommandlet.OuterSingleton;
	}
	template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<UGeneratePayloadManifestCommandlet>()
	{
		return UGeneratePayloadManifestCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeneratePayloadManifestCommandlet);
	UGeneratePayloadManifestCommandlet::~UGeneratePayloadManifestCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeneratePayloadManifestCommandlet, UGeneratePayloadManifestCommandlet::StaticClass, TEXT("UGeneratePayloadManifestCommandlet"), &Z_Registration_Info_UClass_UGeneratePayloadManifestCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeneratePayloadManifestCommandlet), 754580833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_178172426(TEXT("/Script/VirtualizationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_GeneratePayloadManifestCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
