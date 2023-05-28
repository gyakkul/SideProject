// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/MaterialEditorOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorOptions();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialEditorOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialEditorOptions::StaticRegisterNativesUMaterialEditorOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorOptions);
	UClass* Z_Construct_UClass_UMaterialEditorOptions_NoRegister()
	{
		return UMaterialEditorOptions::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGrid_MetaData[];
#endif
		static void NewProp_bShowGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnusedConnectorsSetting_MetaData[];
#endif
		static void NewProp_bHideUnusedConnectorsSetting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnusedConnectorsSetting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRealtimeMaterialViewport_MetaData[];
#endif
		static void NewProp_bRealtimeMaterialViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRealtimeMaterialViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRealtimeExpressionViewport_MetaData[];
#endif
		static void NewProp_bRealtimeExpressionViewport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRealtimeExpressionViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLivePreviewUpdate_MetaData[];
#endif
		static void NewProp_bLivePreviewUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLivePreviewUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideUnrelatedNodes_MetaData[];
#endif
		static void NewProp_bHideUnrelatedNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideUnrelatedNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRefreshAllPreviews_MetaData[];
#endif
		static void NewProp_bAlwaysRefreshAllPreviews_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRefreshAllPreviews;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnsortedMenus_MetaData[];
#endif
		static void NewProp_bUseUnsortedMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnsortedMenus;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FavoriteExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoriteExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FavoriteExpressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/MaterialEditorOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, render grid the preview scene. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, render grid the preview scene." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bShowGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid = { "bShowGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, don't render connectors that are not connected to anything. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, don't render connectors that are not connected to anything." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bHideUnusedConnectorsSetting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting = { "bHideUnusedConnectorsSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the 3D material preview viewport updates in realtime. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, the 3D material preview viewport updates in realtime." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bRealtimeMaterialViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport = { "bRealtimeMaterialViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, the linked object viewport updates in realtime. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, the linked object viewport updates in realtime." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bRealtimeExpressionViewport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport = { "bRealtimeExpressionViewport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, always refresh the material preview. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, always refresh the material preview." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bLivePreviewUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate = { "bLivePreviewUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, fade nodes which are not connected to the selected nodes */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, fade nodes which are not connected to the selected nodes" },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bHideUnrelatedNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes = { "bHideUnrelatedNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If true, always refresh all expression previews. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If true, always refresh all expression previews." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bAlwaysRefreshAllPreviews = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews = { "bAlwaysRefreshAllPreviews", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** If false, use expression categorized menus. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "If false, use expression categorized menus." },
	};
#endif
	void Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_SetBit(void* Obj)
	{
		((UMaterialEditorOptions*)Obj)->bUseUnsortedMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus = { "bUseUnsortedMenus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialEditorOptions), &Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_Inner = { "FavoriteExpressions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** The users favorite material expressions. */" },
		{ "ModuleRelativePath", "Classes/Preferences/MaterialEditorOptions.h" },
		{ "ToolTip", "The users favorite material expressions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions = { "FavoriteExpressions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorOptions, FavoriteExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bShowGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnusedConnectorsSetting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeMaterialViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bRealtimeExpressionViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bLivePreviewUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bHideUnrelatedNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bAlwaysRefreshAllPreviews,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_bUseUnsortedMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOptions_Statics::NewProp_FavoriteExpressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorOptions_Statics::ClassParams = {
		&UMaterialEditorOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorOptions()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorOptions.OuterSingleton, Z_Construct_UClass_UMaterialEditorOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialEditorOptions>()
	{
		return UMaterialEditorOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorOptions);
	UMaterialEditorOptions::~UMaterialEditorOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorOptions, UMaterialEditorOptions::StaticClass, TEXT("UMaterialEditorOptions"), &Z_Registration_Info_UClass_UMaterialEditorOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorOptions), 3393128425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_2238866991(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_MaterialEditorOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
