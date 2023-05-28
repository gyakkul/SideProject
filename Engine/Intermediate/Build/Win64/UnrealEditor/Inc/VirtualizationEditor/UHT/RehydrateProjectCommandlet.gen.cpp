// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RehydrateProjectCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRehydrateProjectCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_VirtualizationEditor();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_URehydrateProjectCommandlet();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_URehydrateProjectCommandlet_NoRegister();
// End Cross Module References
	void URehydrateProjectCommandlet::StaticRegisterNativesURehydrateProjectCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URehydrateProjectCommandlet);
	UClass* Z_Construct_UClass_URehydrateProjectCommandlet_NoRegister()
	{
		return URehydrateProjectCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_URehydrateProjectCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URehydrateProjectCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualizationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URehydrateProjectCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Finds all packages in the project and attempts to rehydrate them. If revision control\n * is enabled then the commandlet will attempt to checkout the packages that need modification.\n *\n * Because the commmandlet is the VirtualizationEditor module it needs to be invoked\n * with the command line:\n * -run=VirtualizationEditor.RehydrateProject\n */" },
		{ "IncludePath", "RehydrateProjectCommandlet.h" },
		{ "ModuleRelativePath", "Private/RehydrateProjectCommandlet.h" },
		{ "ToolTip", "Finds all packages in the project and attempts to rehydrate them. If revision control\nis enabled then the commandlet will attempt to checkout the packages that need modification.\n\nBecause the commmandlet is the VirtualizationEditor module it needs to be invoked\nwith the command line:\n-run=VirtualizationEditor.RehydrateProject" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URehydrateProjectCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URehydrateProjectCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URehydrateProjectCommandlet_Statics::ClassParams = {
		&URehydrateProjectCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URehydrateProjectCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URehydrateProjectCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URehydrateProjectCommandlet()
	{
		if (!Z_Registration_Info_UClass_URehydrateProjectCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URehydrateProjectCommandlet.OuterSingleton, Z_Construct_UClass_URehydrateProjectCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URehydrateProjectCommandlet.OuterSingleton;
	}
	template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<URehydrateProjectCommandlet>()
	{
		return URehydrateProjectCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URehydrateProjectCommandlet);
	URehydrateProjectCommandlet::~URehydrateProjectCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URehydrateProjectCommandlet, URehydrateProjectCommandlet::StaticClass, TEXT("URehydrateProjectCommandlet"), &Z_Registration_Info_UClass_URehydrateProjectCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URehydrateProjectCommandlet), 2735507680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_722940722(TEXT("/Script/VirtualizationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_RehydrateProjectCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
