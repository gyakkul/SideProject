// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VirtualizationFilterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualizationFilterSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Virtualization();
	VIRTUALIZATION_API UClass* Z_Construct_UClass_UVirtualizationFilterSettings();
	VIRTUALIZATION_API UClass* Z_Construct_UClass_UVirtualizationFilterSettings_NoRegister();
// End Cross Module References
	void UVirtualizationFilterSettings::StaticRegisterNativesUVirtualizationFilterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualizationFilterSettings);
	UClass* Z_Construct_UClass_UVirtualizationFilterSettings_NoRegister()
	{
		return UVirtualizationFilterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualizationFilterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcludePackagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludePackagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludePackagePaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludePackagePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePackagePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludePackagePaths;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualizationFilterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Virtualization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualizationFilterSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Settings to use when determining if a package should be included/excluded from the\n * content virtualization process.\n */" },
		{ "IncludePath", "VirtualizationFilterSettings.h" },
		{ "ModuleRelativePath", "Private/VirtualizationFilterSettings.h" },
		{ "ToolTip", "Settings to use when determining if a package should be included/excluded from the\ncontent virtualization process." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths_Inner = { "ExcludePackagePaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * A list of package paths that we should always prevent being virtualized .\n\x09 * Each path can either be a full package path to a specific package or it can be a\n\x09 * path to a directory, in which case all packages under that directory (and subdirectories)\n\x09 * will be excluded from the virtualization process.\n\x09 */" },
		{ "ModuleRelativePath", "Private/VirtualizationFilterSettings.h" },
		{ "ToolTip", "A list of package paths that we should always prevent being virtualized .\nEach path can either be a full package path to a specific package or it can be a\npath to a directory, in which case all packages under that directory (and subdirectories)\nwill be excluded from the virtualization process." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths = { "ExcludePackagePaths", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualizationFilterSettings, ExcludePackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths_Inner = { "IncludePackagePaths", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * A list of package paths that we should always attempt to virtualize.\n\x09 * Each path can either be a full package path to a specific package or it can be a\n\x09 * path to a directory, in which case all packages under that directory (and subdirectories)\n\x09 * will be included in the virtualization process.\n\x09 */" },
		{ "ModuleRelativePath", "Private/VirtualizationFilterSettings.h" },
		{ "ToolTip", "A list of package paths that we should always attempt to virtualize.\nEach path can either be a full package path to a specific package or it can be a\npath to a directory, in which case all packages under that directory (and subdirectories)\nwill be included in the virtualization process." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths = { "IncludePackagePaths", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualizationFilterSettings, IncludePackagePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualizationFilterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_ExcludePackagePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualizationFilterSettings_Statics::NewProp_IncludePackagePaths,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualizationFilterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualizationFilterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualizationFilterSettings_Statics::ClassParams = {
		&UVirtualizationFilterSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualizationFilterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualizationFilterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualizationFilterSettings()
	{
		if (!Z_Registration_Info_UClass_UVirtualizationFilterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualizationFilterSettings.OuterSingleton, Z_Construct_UClass_UVirtualizationFilterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualizationFilterSettings.OuterSingleton;
	}
	template<> VIRTUALIZATION_API UClass* StaticClass<UVirtualizationFilterSettings>()
	{
		return UVirtualizationFilterSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualizationFilterSettings);
	UVirtualizationFilterSettings::~UVirtualizationFilterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualizationFilterSettings, UVirtualizationFilterSettings::StaticClass, TEXT("UVirtualizationFilterSettings"), &Z_Registration_Info_UClass_UVirtualizationFilterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualizationFilterSettings), 1143321340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_2614145756(TEXT("/Script/Virtualization"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_Virtualization_Private_VirtualizationFilterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
