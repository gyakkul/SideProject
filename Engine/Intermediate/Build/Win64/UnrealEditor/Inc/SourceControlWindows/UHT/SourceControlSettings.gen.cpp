// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SourceControlSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceControlSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOURCECONTROLWINDOWS_API UClass* Z_Construct_UClass_USourceControlSettings();
	SOURCECONTROLWINDOWS_API UClass* Z_Construct_UClass_USourceControlSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceControlWindows();
// End Cross Module References
	void USourceControlSettings::StaticRegisterNativesUSourceControlSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceControlSettings);
	UClass* Z_Construct_UClass_USourceControlSettings_NoRegister()
	{
		return USourceControlSettings::StaticClass();
	}
	struct Z_Construct_UClass_USourceControlSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAssetTypeColumn_MetaData[];
#endif
		static void NewProp_bShowAssetTypeColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAssetTypeColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAssetLastModifiedTimeColumn_MetaData[];
#endif
		static void NewProp_bShowAssetLastModifiedTimeColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAssetLastModifiedTimeColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAssetCheckedOutByColumn_MetaData[];
#endif
		static void NewProp_bShowAssetCheckedOutByColumn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAssetCheckedOutByColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubmitContentMenuAction_MetaData[];
#endif
		static void NewProp_bEnableSubmitContentMenuAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubmitContentMenuAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceControlSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceControlWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Serializes source control window settings. */" },
		{ "IncludePath", "SourceControlSettings.h" },
		{ "ModuleRelativePath", "Private/SourceControlSettings.h" },
		{ "ToolTip", "Serializes source control window settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn_MetaData[] = {
		{ "Category", "Revision Control Changelist View" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Private/SourceControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn_SetBit(void* Obj)
	{
		((USourceControlSettings*)Obj)->bShowAssetTypeColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn = { "bShowAssetTypeColumn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USourceControlSettings), &Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn_MetaData[] = {
		{ "Category", "Revision Control Changelist View" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Private/SourceControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn_SetBit(void* Obj)
	{
		((USourceControlSettings*)Obj)->bShowAssetLastModifiedTimeColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn = { "bShowAssetLastModifiedTimeColumn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USourceControlSettings), &Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn_MetaData[] = {
		{ "Category", "Revision Control Changelist View" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Private/SourceControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn_SetBit(void* Obj)
	{
		((USourceControlSettings*)Obj)->bShowAssetCheckedOutByColumn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn = { "bShowAssetCheckedOutByColumn", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USourceControlSettings), &Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn_SetBit, METADATA_PARAMS(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction_MetaData[] = {
		{ "Category", "Revision Control Tools" },
		{ "Keywords", "Source Control" },
		{ "ModuleRelativePath", "Private/SourceControlSettings.h" },
	};
#endif
	void Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction_SetBit(void* Obj)
	{
		((USourceControlSettings*)Obj)->bEnableSubmitContentMenuAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction = { "bEnableSubmitContentMenuAction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USourceControlSettings), &Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceControlSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetTypeColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetLastModifiedTimeColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bShowAssetCheckedOutByColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceControlSettings_Statics::NewProp_bEnableSubmitContentMenuAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceControlSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceControlSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceControlSettings_Statics::ClassParams = {
		&USourceControlSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USourceControlSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USourceControlSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceControlSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceControlSettings()
	{
		if (!Z_Registration_Info_UClass_USourceControlSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceControlSettings.OuterSingleton, Z_Construct_UClass_USourceControlSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceControlSettings.OuterSingleton;
	}
	template<> SOURCECONTROLWINDOWS_API UClass* StaticClass<USourceControlSettings>()
	{
		return USourceControlSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceControlSettings);
	USourceControlSettings::~USourceControlSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceControlSettings, USourceControlSettings::StaticClass, TEXT("USourceControlSettings"), &Z_Registration_Info_UClass_USourceControlSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceControlSettings), 265251153U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_1548773616(TEXT("/Script/SourceControlWindows"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SourceControlWindows_Private_SourceControlSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
