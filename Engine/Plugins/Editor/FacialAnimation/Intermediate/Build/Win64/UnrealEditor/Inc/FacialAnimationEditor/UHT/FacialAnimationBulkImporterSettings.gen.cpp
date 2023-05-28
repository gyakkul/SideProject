// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FacialAnimationBulkImporterSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacialAnimationBulkImporterSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	FACIALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UFacialAnimationBulkImporterSettings();
	FACIALANIMATIONEDITOR_API UClass* Z_Construct_UClass_UFacialAnimationBulkImporterSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FacialAnimationEditor();
// End Cross Module References
	void UFacialAnimationBulkImporterSettings::StaticRegisterNativesUFacialAnimationBulkImporterSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFacialAnimationBulkImporterSettings);
	UClass* Z_Construct_UClass_UFacialAnimationBulkImporterSettings_NoRegister()
	{
		return UFacialAnimationBulkImporterSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FacialAnimationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "FacialAnimationBulkImporterSettings.h" },
		{ "ModuleRelativePath", "Private/FacialAnimationBulkImporterSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_SourceImportPath_MetaData[] = {
		{ "Category", "Directories" },
		{ "Comment", "/** The path to import files from */" },
		{ "ModuleRelativePath", "Private/FacialAnimationBulkImporterSettings.h" },
		{ "ToolTip", "The path to import files from" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_SourceImportPath = { "SourceImportPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFacialAnimationBulkImporterSettings, SourceImportPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_SourceImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_SourceImportPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_TargetImportPath_MetaData[] = {
		{ "Category", "Directories" },
		{ "Comment", "/** The path to import files to */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/FacialAnimationBulkImporterSettings.h" },
		{ "ToolTip", "The path to import files to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_TargetImportPath = { "TargetImportPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFacialAnimationBulkImporterSettings, TargetImportPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_TargetImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_TargetImportPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_CurveNodeName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Node in the FBX scene that contains the curves we are interested in */" },
		{ "ModuleRelativePath", "Private/FacialAnimationBulkImporterSettings.h" },
		{ "ToolTip", "Node in the FBX scene that contains the curves we are interested in" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_CurveNodeName = { "CurveNodeName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFacialAnimationBulkImporterSettings, CurveNodeName), METADATA_PARAMS(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_CurveNodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_CurveNodeName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_SourceImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_TargetImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::NewProp_CurveNodeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFacialAnimationBulkImporterSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::ClassParams = {
		&UFacialAnimationBulkImporterSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFacialAnimationBulkImporterSettings()
	{
		if (!Z_Registration_Info_UClass_UFacialAnimationBulkImporterSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFacialAnimationBulkImporterSettings.OuterSingleton, Z_Construct_UClass_UFacialAnimationBulkImporterSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFacialAnimationBulkImporterSettings.OuterSingleton;
	}
	template<> FACIALANIMATIONEDITOR_API UClass* StaticClass<UFacialAnimationBulkImporterSettings>()
	{
		return UFacialAnimationBulkImporterSettings::StaticClass();
	}
	UFacialAnimationBulkImporterSettings::UFacialAnimationBulkImporterSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFacialAnimationBulkImporterSettings);
	UFacialAnimationBulkImporterSettings::~UFacialAnimationBulkImporterSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimationEditor_Private_FacialAnimationBulkImporterSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimationEditor_Private_FacialAnimationBulkImporterSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFacialAnimationBulkImporterSettings, UFacialAnimationBulkImporterSettings::StaticClass, TEXT("UFacialAnimationBulkImporterSettings"), &Z_Registration_Info_UClass_UFacialAnimationBulkImporterSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFacialAnimationBulkImporterSettings), 2915905872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimationEditor_Private_FacialAnimationBulkImporterSettings_h_3293705089(TEXT("/Script/FacialAnimationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimationEditor_Private_FacialAnimationBulkImporterSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_FacialAnimation_Source_FacialAnimationEditor_Private_FacialAnimationBulkImporterSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
