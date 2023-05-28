// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructViewerProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructViewerProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	STRUCTVIEWER_API UClass* Z_Construct_UClass_UStructViewerProjectSettings();
	STRUCTVIEWER_API UClass* Z_Construct_UClass_UStructViewerProjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StructViewer();
// End Cross Module References
	void UStructViewerProjectSettings::StaticRegisterNativesUStructViewerProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructViewerProjectSettings);
	UClass* Z_Construct_UClass_UStructViewerProjectSettings_NoRegister()
	{
		return UStructViewerProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStructViewerProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalOnlyPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalOnlyPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalOnlyPaths;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InternalOnlyStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalOnlyStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalOnlyStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructViewerProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Struct Viewer Project Settings\n */" },
		{ "IncludePath", "StructViewerProjectSettings.h" },
		{ "ModuleRelativePath", "Public/StructViewerProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the Struct Viewer Project Settings" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData[] = {
		{ "Category", "StructVisibilityManagement" },
		{ "Comment", "/** The base directories to be considered Internal Only for the struct picker.*/" },
		{ "ContentDir", "" },
		{ "DisplayName", "List of directories to consider Internal Only." },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/StructViewerProjectSettings.h" },
		{ "ToolTip", "The base directories to be considered Internal Only for the struct picker." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStructViewerProjectSettings, InternalOnlyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs_Inner = { "InternalOnlyStructs", nullptr, (EPropertyFlags)0x0004000800004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs_MetaData[] = {
		{ "Category", "StructVisibilityManagement" },
		{ "Comment", "/** The base classes to be considered Internal Only for the struct picker.*/" },
		{ "DisplayName", "List of base structs to consider Internal Only." },
		{ "HideViewOptions", "" },
		{ "ModuleRelativePath", "Public/StructViewerProjectSettings.h" },
		{ "ShowTreeView", "" },
		{ "ToolTip", "The base classes to be considered Internal Only for the struct picker." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs = { "InternalOnlyStructs", nullptr, (EPropertyFlags)0x0014000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStructViewerProjectSettings, InternalOnlyStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStructViewerProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStructViewerProjectSettings_Statics::NewProp_InternalOnlyStructs,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructViewerProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructViewerProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructViewerProjectSettings_Statics::ClassParams = {
		&UStructViewerProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UStructViewerProjectSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerProjectSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UStructViewerProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructViewerProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructViewerProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UStructViewerProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructViewerProjectSettings.OuterSingleton, Z_Construct_UClass_UStructViewerProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructViewerProjectSettings.OuterSingleton;
	}
	template<> STRUCTVIEWER_API UClass* StaticClass<UStructViewerProjectSettings>()
	{
		return UStructViewerProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructViewerProjectSettings);
	UStructViewerProjectSettings::~UStructViewerProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructViewerProjectSettings, UStructViewerProjectSettings::StaticClass, TEXT("UStructViewerProjectSettings"), &Z_Registration_Info_UClass_UStructViewerProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructViewerProjectSettings), 1692679556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_3373666371(TEXT("/Script/StructViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_StructViewer_Public_StructViewerProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
