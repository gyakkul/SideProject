// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClassViewerProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassViewerProjectSettings() {}
// Cross Module References
	CLASSVIEWER_API UClass* Z_Construct_UClass_UClassViewerProjectSettings();
	CLASSVIEWER_API UClass* Z_Construct_UClass_UClassViewerProjectSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	UPackage* Z_Construct_UPackage__Script_ClassViewer();
// End Cross Module References
	void UClassViewerProjectSettings::StaticRegisterNativesUClassViewerProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassViewerProjectSettings);
	UClass* Z_Construct_UClass_UClassViewerProjectSettings_NoRegister()
	{
		return UClassViewerProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UClassViewerProjectSettings_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalOnlyClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalOnlyClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalOnlyClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassViewerProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClassViewer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Class Viewer Project Settings\n */" },
		{ "IncludePath", "ClassViewerProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the Class Viewer Project Settings" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData[] = {
		{ "Category", "ClassVisibilityManagement" },
		{ "Comment", "/** The base directories to be considered Internal Only for the class picker.*/" },
		{ "ContentDir", "" },
		{ "DisplayName", "List of directories to consider Internal Only." },
		{ "LongPackageName", "" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ToolTip", "The base directories to be considered Internal Only for the class picker." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths = { "InternalOnlyPaths", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassViewerProjectSettings, InternalOnlyPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_Inner = { "InternalOnlyClasses", nullptr, (EPropertyFlags)0x0000000800004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData[] = {
		{ "AllowAbstract", "true" },
		{ "Category", "ClassVisibilityManagement" },
		{ "Comment", "/** The base classes to be considered Internal Only for the class picker.*/" },
		{ "DisplayName", "List of base classes to consider Internal Only." },
		{ "HideViewOptions", "" },
		{ "MetaClass", "/Script/CoreUObject.Object" },
		{ "ModuleRelativePath", "Public/ClassViewerProjectSettings.h" },
		{ "ShowTreeView", "" },
		{ "ToolTip", "The base classes to be considered Internal Only for the class picker." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses = { "InternalOnlyClasses", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassViewerProjectSettings, InternalOnlyClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassViewerProjectSettings_Statics::NewProp_InternalOnlyClasses,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassViewerProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassViewerProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassViewerProjectSettings_Statics::ClassParams = {
		&UClassViewerProjectSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::PropPointers), 0),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassViewerProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassViewerProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UClassViewerProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassViewerProjectSettings.OuterSingleton, Z_Construct_UClass_UClassViewerProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassViewerProjectSettings.OuterSingleton;
	}
	template<> CLASSVIEWER_API UClass* StaticClass<UClassViewerProjectSettings>()
	{
		return UClassViewerProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassViewerProjectSettings);
	UClassViewerProjectSettings::~UClassViewerProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassViewerProjectSettings, UClassViewerProjectSettings::StaticClass, TEXT("UClassViewerProjectSettings"), &Z_Registration_Info_UClass_UClassViewerProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassViewerProjectSettings), 2787638936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_3960312553(TEXT("/Script/ClassViewer"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClassViewer_Public_ClassViewerProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
