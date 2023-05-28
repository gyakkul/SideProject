// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReferenceViewer/ReferenceViewerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReferenceViewerSettings() {}
// Cross Module References
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UReferenceViewerSettings();
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_UReferenceViewerSettings_NoRegister();
	ASSETMANAGEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FilterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTopLevelAssetPath();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ilterState;
class UScriptStruct* FilterState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ilterState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ilterState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FilterState, (UObject*)Z_Construct_UPackage__Script_AssetManagerEditor(), TEXT("ilterState"));
	}
	return Z_Registration_Info_UScriptStruct_ilterState.OuterSingleton;
}
template<> ASSETMANAGEREDITOR_API UScriptStruct* StaticStruct<FilterState>()
{
	return FilterState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FilterState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FilterState_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  Project based Reference Viewer Saved Settings \n */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Project based Reference Viewer Saved Settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FilterState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FilterState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FilterState_Statics::NewProp_FilterPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FilterState_Statics::NewProp_FilterPath = { "FilterPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FilterState, FilterPath), Z_Construct_UScriptStruct_FTopLevelAssetPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FilterState_Statics::NewProp_FilterPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FilterState_Statics::NewProp_FilterPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((FilterState*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FilterState), &Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FilterState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FilterState_Statics::NewProp_FilterPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FilterState_Statics::NewProp_bIsEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FilterState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEditor,
		nullptr,
		&NewStructOps,
		"ilterState",
		sizeof(FilterState),
		alignof(FilterState),
		Z_Construct_UScriptStruct_FilterState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FilterState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FilterState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FilterState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FilterState()
	{
		if (!Z_Registration_Info_UScriptStruct_ilterState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ilterState.InnerSingleton, Z_Construct_UScriptStruct_FilterState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ilterState.InnerSingleton;
	}
	void UReferenceViewerSettings::StaticRegisterNativesUReferenceViewerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReferenceViewerSettings);
	UClass* Z_Construct_UClass_UReferenceViewerSettings_NoRegister()
	{
		return UReferenceViewerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReferenceViewerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitSearchDepth_MetaData[];
#endif
		static void NewProp_bLimitSearchDepth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitSearchDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowReferencers_MetaData[];
#endif
		static void NewProp_bIsShowReferencers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowReferencers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchReferencerDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchReferencerDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowDependencies_MetaData[];
#endif
		static void NewProp_bIsShowDependencies_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowDependencies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchDependencyDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchDependencyDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitSearchBreadth_MetaData[];
#endif
		static void NewProp_bLimitSearchBreadth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitSearchBreadth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSearchBreadth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSearchBreadth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCollectionFilter_MetaData[];
#endif
		static void NewProp_bEnableCollectionFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCollectionFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowSoftReferences_MetaData[];
#endif
		static void NewProp_bIsShowSoftReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowSoftReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowHardReferences_MetaData[];
#endif
		static void NewProp_bIsShowHardReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowHardReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowEditorOnlyReferences_MetaData[];
#endif
		static void NewProp_bIsShowEditorOnlyReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowEditorOnlyReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowManagementReferences_MetaData[];
#endif
		static void NewProp_bIsShowManagementReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowManagementReferences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowSearchableNames_MetaData[];
#endif
		static void NewProp_bIsShowSearchableNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowSearchableNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowCodePackages_MetaData[];
#endif
		static void NewProp_bIsShowCodePackages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowCodePackages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowDuplicates_MetaData[];
#endif
		static void NewProp_bIsShowDuplicates_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowDuplicates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowFilteredPackagesOnly_MetaData[];
#endif
		static void NewProp_bIsShowFilteredPackagesOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowFilteredPackagesOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompactMode_MetaData[];
#endif
		static void NewProp_bIsCompactMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompactMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShowPath_MetaData[];
#endif
		static void NewProp_bIsShowPath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShowPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFiltersEnabled_MetaData[];
#endif
		static void NewProp_bFiltersEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFiltersEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateFilters_MetaData[];
#endif
		static void NewProp_bAutoUpdateFilters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateFilters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserFilters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserFilters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFindPathEnabled_MetaData[];
#endif
		static void NewProp_bFindPathEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFindPathEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReferenceViewerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth_MetaData[] = {
		{ "Comment", "/* Whether to limit the search depth for Referencers & Dependencies */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to limit the search depth for Referencers & Dependencies" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bLimitSearchDepth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth = { "bLimitSearchDepth", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers_MetaData[] = {
		{ "Comment", "/* Whether to display the Referencers */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to display the Referencers" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowReferencers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers = { "bIsShowReferencers", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchReferencerDepth_MetaData[] = {
		{ "Comment", "/* How deep to search references */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "How deep to search references" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchReferencerDepth = { "MaxSearchReferencerDepth", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReferenceViewerSettings, MaxSearchReferencerDepth), METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchReferencerDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchReferencerDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies_MetaData[] = {
		{ "Comment", "/* Whether to display the Dependencies */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to display the Dependencies" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowDependencies = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies = { "bIsShowDependencies", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchDependencyDepth_MetaData[] = {
		{ "Comment", "/* How deep to search dependanies */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "How deep to search dependanies" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchDependencyDepth = { "MaxSearchDependencyDepth", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReferenceViewerSettings, MaxSearchDependencyDepth), METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchDependencyDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchDependencyDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth_MetaData[] = {
		{ "Comment", "/* Whether or not to limit how many siblings can appear */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether or not to limit how many siblings can appear" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bLimitSearchBreadth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth = { "bLimitSearchBreadth", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchBreadth_MetaData[] = {
		{ "Comment", "/* The max number of siblings that can appear from a node */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "The max number of siblings that can appear from a node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchBreadth = { "MaxSearchBreadth", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReferenceViewerSettings, MaxSearchBreadth), METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchBreadth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchBreadth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter_MetaData[] = {
		{ "Comment", "/* Whether or not to filter from a collection */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether or not to filter from a collection" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bEnableCollectionFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter = { "bEnableCollectionFilter", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences_MetaData[] = {
		{ "Comment", "/* Show/Hide Soft References */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide Soft References" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowSoftReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences = { "bIsShowSoftReferences", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences_MetaData[] = {
		{ "Comment", "/* Show/Hide Hard References */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide Hard References" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowHardReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences = { "bIsShowHardReferences", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences_MetaData[] = {
		{ "Comment", "/* Show/Hide EditorOnly References */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide EditorOnly References" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowEditorOnlyReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences = { "bIsShowEditorOnlyReferences", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences_MetaData[] = {
		{ "Comment", "/* Show/Hide Management Assets (i.e. PrimaryAssetIds) */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide Management Assets (i.e. PrimaryAssetIds)" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowManagementReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences = { "bIsShowManagementReferences", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames_MetaData[] = {
		{ "Comment", "/* Show/Hide Searchable Names (i.e. Gameplay Tags) */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide Searchable Names (i.e. Gameplay Tags)" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowSearchableNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames = { "bIsShowSearchableNames", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages_MetaData[] = {
		{ "Comment", "/* Show/Hide Native Packages  */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Show/Hide Native Packages" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowCodePackages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages = { "bIsShowCodePackages", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates_MetaData[] = {
		{ "Comment", "/* Whether to show duplicate asset references */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to show duplicate asset references" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowDuplicates = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates = { "bIsShowDuplicates", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly_MetaData[] = {
		{ "Comment", "/* Whether to filter the search results or just select them  */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to filter the search results or just select them" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowFilteredPackagesOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly = { "bIsShowFilteredPackagesOnly", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode_MetaData[] = {
		{ "Comment", "/* Whether to show the nodes in a compact (no thumbnail) view */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to show the nodes in a compact (no thumbnail) view" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsCompactMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode = { "bIsCompactMode", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath_MetaData[] = {
		{ "Comment", "/* Whether to show the package's path as a comment */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Whether to show the package's path as a comment" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bIsShowPath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath = { "bIsShowPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled_MetaData[] = {
		{ "Comment", "/* This turns on/off any filtering done though the SFilterBar */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "This turns on/off any filtering done though the SFilterBar" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bFiltersEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled = { "bFiltersEnabled", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters_MetaData[] = {
		{ "Comment", "/* When true, the filters bar auto updates based on the node types, otherwise user filters will be used */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "When true, the filters bar auto updates based on the node types, otherwise user filters will be used" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bAutoUpdateFilters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters = { "bAutoUpdateFilters", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters_Inner = { "UserFilters", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FilterState, METADATA_PARAMS(nullptr, 0) }; // 16498595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters_MetaData[] = {
		{ "Comment", "/* The list of filters the user has built up */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "The list of filters the user has built up" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters = { "UserFilters", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReferenceViewerSettings, UserFilters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters_MetaData)) }; // 16498595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled_MetaData[] = {
		{ "Comment", "/* Enable the Find Path tool */" },
		{ "ModuleRelativePath", "Public/ReferenceViewer/ReferenceViewerSettings.h" },
		{ "ToolTip", "Enable the Find Path tool" },
	};
#endif
	void Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled_SetBit(void* Obj)
	{
		((UReferenceViewerSettings*)Obj)->bFindPathEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled = { "bFindPathEnabled", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReferenceViewerSettings), &Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReferenceViewerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowReferencers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchReferencerDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchDependencyDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bLimitSearchBreadth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_MaxSearchBreadth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bEnableCollectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSoftReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowHardReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowEditorOnlyReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowManagementReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowSearchableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowCodePackages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowDuplicates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowFilteredPackagesOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsCompactMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bIsShowPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFiltersEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bAutoUpdateFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_UserFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReferenceViewerSettings_Statics::NewProp_bFindPathEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReferenceViewerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReferenceViewerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReferenceViewerSettings_Statics::ClassParams = {
		&UReferenceViewerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReferenceViewerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReferenceViewerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReferenceViewerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReferenceViewerSettings()
	{
		if (!Z_Registration_Info_UClass_UReferenceViewerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReferenceViewerSettings.OuterSingleton, Z_Construct_UClass_UReferenceViewerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReferenceViewerSettings.OuterSingleton;
	}
	template<> ASSETMANAGEREDITOR_API UClass* StaticClass<UReferenceViewerSettings>()
	{
		return UReferenceViewerSettings::StaticClass();
	}
	UReferenceViewerSettings::UReferenceViewerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReferenceViewerSettings);
	UReferenceViewerSettings::~UReferenceViewerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ScriptStructInfo[] = {
		{ FilterState::StaticStruct, Z_Construct_UScriptStruct_FilterState_Statics::NewStructOps, TEXT("ilterState"), &Z_Registration_Info_UScriptStruct_ilterState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FilterState), 16498595U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReferenceViewerSettings, UReferenceViewerSettings::StaticClass, TEXT("UReferenceViewerSettings"), &Z_Registration_Info_UClass_UReferenceViewerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReferenceViewerSettings), 3485216154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_361563326(TEXT("/Script/AssetManagerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Public_ReferenceViewer_ReferenceViewerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
