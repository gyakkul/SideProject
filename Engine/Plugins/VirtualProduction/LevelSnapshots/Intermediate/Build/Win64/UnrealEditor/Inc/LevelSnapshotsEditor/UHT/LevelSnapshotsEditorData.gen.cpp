// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/LevelSnapshotsEditorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsEditorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFavoriteFilterContainer_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilteredResults_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilterLoader_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorData();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorData_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsFilterPreset_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UNegatableFilter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void ULevelSnapshotsEditorData::StaticRegisterNativesULevelSnapshotsEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsEditorData);
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorData_NoRegister()
	{
		return ULevelSnapshotsEditorData::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoriteFilters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FavoriteFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedFilters_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserDefinedFilters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterLoader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFilterDirty_MetaData[];
#endif
		static void NewProp_bIsFilterDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFilterDirty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsApplyingSnapshot_MetaData[];
#endif
		static void NewProp_bIsApplyingSnapshot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsApplyingSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterResults_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterResults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSnapshot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveSnapshot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditedFilter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditedFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Stores all data shared across the editor's UI. */" },
		{ "IncludePath", "Data/LevelSnapshotsEditorData.h" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Stores all data shared across the editor's UI." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FavoriteFilters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FavoriteFilters = { "FavoriteFilters", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, FavoriteFilters), Z_Construct_UClass_UFavoriteFilterContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FavoriteFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FavoriteFilters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_UserDefinedFilters_MetaData[] = {
		{ "Comment", "/* Stores user-defined filters in chain of ORs of ANDs. */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Stores user-defined filters in chain of ORs of ANDs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_UserDefinedFilters = { "UserDefinedFilters", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, UserDefinedFilters), Z_Construct_UClass_ULevelSnapshotsFilterPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_UserDefinedFilters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_UserDefinedFilters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterLoader_MetaData[] = {
		{ "Comment", "/* Handles save & load requests for exchanging UserDefinedFilters. */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Handles save & load requests for exchanging UserDefinedFilters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterLoader = { "FilterLoader", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, FilterLoader), Z_Construct_UClass_UFilterLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterLoader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty_MetaData[] = {
		{ "Comment", "/* Used for determining whether the filter state has changed since it was last refreshed. */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Used for determining whether the filter state has changed since it was last refreshed." },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty_SetBit(void* Obj)
	{
		((ULevelSnapshotsEditorData*)Obj)->bIsFilterDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty = { "bIsFilterDirty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshotsEditorData), &Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot_MetaData[] = {
		{ "Comment", "/** Whether ActiveSnapshot is currently being restored. Does not allow changing the active snapshot while true.  */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Whether ActiveSnapshot is currently being restored. Does not allow changing the active snapshot while true." },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot_SetBit(void* Obj)
	{
		((ULevelSnapshotsEditorData*)Obj)->bIsApplyingSnapshot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot = { "bIsApplyingSnapshot", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshotsEditorData), &Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterResults_MetaData[] = {
		{ "Comment", "/* Converts UserDefinedFilters into ULevelSnapshotsSelectionSet display in results view. */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Converts UserDefinedFilters into ULevelSnapshotsSelectionSet display in results view." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterResults = { "FilterResults", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, FilterResults), Z_Construct_UClass_UFilteredResults_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterResults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_ActiveSnapshot_MetaData[] = {
		{ "Comment", "/* Snapshot selected by user */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Snapshot selected by user" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_ActiveSnapshot = { "ActiveSnapshot", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, ActiveSnapshot), Z_Construct_UClass_ULevelSnapshot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_ActiveSnapshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_ActiveSnapshot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_EditedFilter_MetaData[] = {
		{ "Comment", "/* Filter visible in details panel */" },
		{ "ModuleRelativePath", "Private/Data/LevelSnapshotsEditorData.h" },
		{ "ToolTip", "Filter visible in details panel" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_EditedFilter = { "EditedFilter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorData, EditedFilter), Z_Construct_UClass_UNegatableFilter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_EditedFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_EditedFilter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FavoriteFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_UserDefinedFilters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterLoader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsFilterDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_bIsApplyingSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_FilterResults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_ActiveSnapshot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::NewProp_EditedFilter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::ClassParams = {
		&ULevelSnapshotsEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorData()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsEditorData.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsEditorData.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<ULevelSnapshotsEditorData>()
	{
		return ULevelSnapshotsEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsEditorData);
	ULevelSnapshotsEditorData::~ULevelSnapshotsEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_LevelSnapshotsEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_LevelSnapshotsEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsEditorData, ULevelSnapshotsEditorData::StaticClass, TEXT("ULevelSnapshotsEditorData"), &Z_Registration_Info_UClass_ULevelSnapshotsEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsEditorData), 1391165038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_LevelSnapshotsEditorData_h_2512703017(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_LevelSnapshotsEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_LevelSnapshotsEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
