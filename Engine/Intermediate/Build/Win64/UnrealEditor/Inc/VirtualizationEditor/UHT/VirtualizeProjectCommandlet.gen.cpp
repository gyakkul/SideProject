// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VirtualizeProjectCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualizeProjectCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UPackage* Z_Construct_UPackage__Script_VirtualizationEditor();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UVirtualizeProjectCommandlet();
	VIRTUALIZATIONEDITOR_API UClass* Z_Construct_UClass_UVirtualizeProjectCommandlet_NoRegister();
// End Cross Module References
	void UVirtualizeProjectCommandlet::StaticRegisterNativesUVirtualizeProjectCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualizeProjectCommandlet);
	UClass* Z_Construct_UClass_UVirtualizeProjectCommandlet_NoRegister()
	{
		return UVirtualizeProjectCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualizationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Finds all packages in the project and attempts to virtualize them. If revision control\n * is enabled then the commandlet will attempt to checkout the packages that need modification.\n *\n * Because the commmandlet is the VirtualizationEditor module it needs to be invoked\n * with the command line:\n * -run=VirtualizationEditor.VirtualizeProject\n */" },
		{ "IncludePath", "VirtualizeProjectCommandlet.h" },
		{ "ModuleRelativePath", "Private/VirtualizeProjectCommandlet.h" },
		{ "ToolTip", "Finds all packages in the project and attempts to virtualize them. If revision control\nis enabled then the commandlet will attempt to checkout the packages that need modification.\n\nBecause the commmandlet is the VirtualizationEditor module it needs to be invoked\nwith the command line:\n-run=VirtualizationEditor.VirtualizeProject" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualizeProjectCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::ClassParams = {
		&UVirtualizeProjectCommandlet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualizeProjectCommandlet()
	{
		if (!Z_Registration_Info_UClass_UVirtualizeProjectCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualizeProjectCommandlet.OuterSingleton, Z_Construct_UClass_UVirtualizeProjectCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualizeProjectCommandlet.OuterSingleton;
	}
	template<> VIRTUALIZATIONEDITOR_API UClass* StaticClass<UVirtualizeProjectCommandlet>()
	{
		return UVirtualizeProjectCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualizeProjectCommandlet);
	UVirtualizeProjectCommandlet::~UVirtualizeProjectCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualizeProjectCommandlet, UVirtualizeProjectCommandlet::StaticClass, TEXT("UVirtualizeProjectCommandlet"), &Z_Registration_Info_UClass_UVirtualizeProjectCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualizeProjectCommandlet), 3281569446U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_2770770913(TEXT("/Script/VirtualizationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VirtualizationEditor_Private_VirtualizeProjectCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
