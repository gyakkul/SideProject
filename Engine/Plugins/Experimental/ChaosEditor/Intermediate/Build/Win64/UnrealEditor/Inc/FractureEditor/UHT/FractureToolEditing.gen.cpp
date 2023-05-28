// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolEditing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolEditing() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureActionTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolDeleteBranch();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolDeleteBranch_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolHide();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolHide_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMergeSelected();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolMergeSelected_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSplitSelected();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSplitSelected_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUnhide();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolUnhide_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolValidate();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolValidate_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureValidateSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureValidateSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureToolDeleteBranch::StaticRegisterNativesUFractureToolDeleteBranch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolDeleteBranch);
	UClass* Z_Construct_UClass_UFractureToolDeleteBranch_NoRegister()
	{
		return UFractureToolDeleteBranch::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolDeleteBranch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolDeleteBranch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolDeleteBranch_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Delete Branch" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolDeleteBranch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolDeleteBranch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolDeleteBranch_Statics::ClassParams = {
		&UFractureToolDeleteBranch::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolDeleteBranch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolDeleteBranch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolDeleteBranch()
	{
		if (!Z_Registration_Info_UClass_UFractureToolDeleteBranch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolDeleteBranch.OuterSingleton, Z_Construct_UClass_UFractureToolDeleteBranch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolDeleteBranch.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolDeleteBranch>()
	{
		return UFractureToolDeleteBranch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolDeleteBranch);
	UFractureToolDeleteBranch::~UFractureToolDeleteBranch() {}
	void UFractureToolMergeSelected::StaticRegisterNativesUFractureToolMergeSelected()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolMergeSelected);
	UClass* Z_Construct_UClass_UFractureToolMergeSelected_NoRegister()
	{
		return UFractureToolMergeSelected::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolMergeSelected_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolMergeSelected_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolMergeSelected_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Merge Selected" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolMergeSelected_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolMergeSelected>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolMergeSelected_Statics::ClassParams = {
		&UFractureToolMergeSelected::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolMergeSelected_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolMergeSelected_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolMergeSelected()
	{
		if (!Z_Registration_Info_UClass_UFractureToolMergeSelected.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolMergeSelected.OuterSingleton, Z_Construct_UClass_UFractureToolMergeSelected_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolMergeSelected.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolMergeSelected>()
	{
		return UFractureToolMergeSelected::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolMergeSelected);
	UFractureToolMergeSelected::~UFractureToolMergeSelected() {}
	void UFractureToolSplitSelected::StaticRegisterNativesUFractureToolSplitSelected()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolSplitSelected);
	UClass* Z_Construct_UClass_UFractureToolSplitSelected_NoRegister()
	{
		return UFractureToolSplitSelected::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolSplitSelected_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolSplitSelected_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolSplitSelected_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Split Selected" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolSplitSelected_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolSplitSelected>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolSplitSelected_Statics::ClassParams = {
		&UFractureToolSplitSelected::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolSplitSelected_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolSplitSelected_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolSplitSelected()
	{
		if (!Z_Registration_Info_UClass_UFractureToolSplitSelected.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolSplitSelected.OuterSingleton, Z_Construct_UClass_UFractureToolSplitSelected_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolSplitSelected.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolSplitSelected>()
	{
		return UFractureToolSplitSelected::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolSplitSelected);
	UFractureToolSplitSelected::~UFractureToolSplitSelected() {}
	void UFractureToolHide::StaticRegisterNativesUFractureToolHide()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolHide);
	UClass* Z_Construct_UClass_UFractureToolHide_NoRegister()
	{
		return UFractureToolHide::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolHide_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolHide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolHide_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Hide" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolHide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolHide>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolHide_Statics::ClassParams = {
		&UFractureToolHide::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolHide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolHide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolHide()
	{
		if (!Z_Registration_Info_UClass_UFractureToolHide.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolHide.OuterSingleton, Z_Construct_UClass_UFractureToolHide_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolHide.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolHide>()
	{
		return UFractureToolHide::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolHide);
	UFractureToolHide::~UFractureToolHide() {}
	void UFractureToolUnhide::StaticRegisterNativesUFractureToolUnhide()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolUnhide);
	UClass* Z_Construct_UClass_UFractureToolUnhide_NoRegister()
	{
		return UFractureToolUnhide::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolUnhide_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolUnhide_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureActionTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolUnhide_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Unhide" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolUnhide_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolUnhide>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolUnhide_Statics::ClassParams = {
		&UFractureToolUnhide::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolUnhide_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolUnhide_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolUnhide()
	{
		if (!Z_Registration_Info_UClass_UFractureToolUnhide.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolUnhide.OuterSingleton, Z_Construct_UClass_UFractureToolUnhide_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolUnhide.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolUnhide>()
	{
		return UFractureToolUnhide::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolUnhide);
	UFractureToolUnhide::~UFractureToolUnhide() {}
	void UFractureValidateSettings::StaticRegisterNativesUFractureValidateSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureValidateSettings);
	UClass* Z_Construct_UClass_UFractureValidateSettings_NoRegister()
	{
		return UFractureValidateSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureValidateSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveUnreferencedGeometry_MetaData[];
#endif
		static void NewProp_bRemoveUnreferencedGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveUnreferencedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveClustersOfOne_MetaData[];
#endif
		static void NewProp_bRemoveClustersOfOne_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveClustersOfOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDanglingClusters_MetaData[];
#endif
		static void NewProp_bRemoveDanglingClusters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDanglingClusters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureValidateSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureValidateSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Validate tool **/" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for the Validate tool *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry_MetaData[] = {
		{ "Category", "CleanUnused" },
		{ "Comment", "/** Find and remove any unused geometry data */" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ToolTip", "Find and remove any unused geometry data" },
	};
#endif
	void Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry_SetBit(void* Obj)
	{
		((UFractureValidateSettings*)Obj)->bRemoveUnreferencedGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry = { "bRemoveUnreferencedGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureValidateSettings), &Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Whether to collapse any clusters with only a single child */" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ToolTip", "Whether to collapse any clusters with only a single child" },
	};
#endif
	void Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne_SetBit(void* Obj)
	{
		((UFractureValidateSettings*)Obj)->bRemoveClustersOfOne = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne = { "bRemoveClustersOfOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureValidateSettings), &Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters_MetaData[] = {
		{ "Category", "Clustering" },
		{ "Comment", "/** Remove dangling clusters -- Note this can invalidate caches */" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ToolTip", "Remove dangling clusters -- Note this can invalidate caches" },
	};
#endif
	void Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters_SetBit(void* Obj)
	{
		((UFractureValidateSettings*)Obj)->bRemoveDanglingClusters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters = { "bRemoveDanglingClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureValidateSettings), &Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureValidateSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveUnreferencedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveClustersOfOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureValidateSettings_Statics::NewProp_bRemoveDanglingClusters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureValidateSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureValidateSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureValidateSettings_Statics::ClassParams = {
		&UFractureValidateSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureValidateSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureValidateSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureValidateSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureValidateSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureValidateSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureValidateSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureValidateSettings.OuterSingleton, Z_Construct_UClass_UFractureValidateSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureValidateSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureValidateSettings>()
	{
		return UFractureValidateSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureValidateSettings);
	UFractureValidateSettings::~UFractureValidateSettings() {}
	void UFractureToolValidate::StaticRegisterNativesUFractureToolValidate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolValidate);
	UClass* Z_Construct_UClass_UFractureToolValidate_NoRegister()
	{
		return UFractureToolValidate::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolValidate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ValidationSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolValidate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolValidate_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Validate" },
		{ "IncludePath", "FractureToolEditing.h" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolValidate_Statics::NewProp_ValidationSettings_MetaData[] = {
		{ "Category", "Validation" },
		{ "ModuleRelativePath", "Private/FractureToolEditing.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolValidate_Statics::NewProp_ValidationSettings = { "ValidationSettings", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolValidate, ValidationSettings), Z_Construct_UClass_UFractureValidateSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolValidate_Statics::NewProp_ValidationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolValidate_Statics::NewProp_ValidationSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolValidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolValidate_Statics::NewProp_ValidationSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolValidate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolValidate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolValidate_Statics::ClassParams = {
		&UFractureToolValidate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolValidate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolValidate_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolValidate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolValidate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolValidate()
	{
		if (!Z_Registration_Info_UClass_UFractureToolValidate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolValidate.OuterSingleton, Z_Construct_UClass_UFractureToolValidate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolValidate.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolValidate>()
	{
		return UFractureToolValidate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolValidate);
	UFractureToolValidate::~UFractureToolValidate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolEditing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolEditing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureToolDeleteBranch, UFractureToolDeleteBranch::StaticClass, TEXT("UFractureToolDeleteBranch"), &Z_Registration_Info_UClass_UFractureToolDeleteBranch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolDeleteBranch), 1217707260U) },
		{ Z_Construct_UClass_UFractureToolMergeSelected, UFractureToolMergeSelected::StaticClass, TEXT("UFractureToolMergeSelected"), &Z_Registration_Info_UClass_UFractureToolMergeSelected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolMergeSelected), 3184953634U) },
		{ Z_Construct_UClass_UFractureToolSplitSelected, UFractureToolSplitSelected::StaticClass, TEXT("UFractureToolSplitSelected"), &Z_Registration_Info_UClass_UFractureToolSplitSelected, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolSplitSelected), 2865959009U) },
		{ Z_Construct_UClass_UFractureToolHide, UFractureToolHide::StaticClass, TEXT("UFractureToolHide"), &Z_Registration_Info_UClass_UFractureToolHide, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolHide), 3742647743U) },
		{ Z_Construct_UClass_UFractureToolUnhide, UFractureToolUnhide::StaticClass, TEXT("UFractureToolUnhide"), &Z_Registration_Info_UClass_UFractureToolUnhide, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolUnhide), 3148777403U) },
		{ Z_Construct_UClass_UFractureValidateSettings, UFractureValidateSettings::StaticClass, TEXT("UFractureValidateSettings"), &Z_Registration_Info_UClass_UFractureValidateSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureValidateSettings), 1652903793U) },
		{ Z_Construct_UClass_UFractureToolValidate, UFractureToolValidate::StaticClass, TEXT("UFractureToolValidate"), &Z_Registration_Info_UClass_UFractureToolValidate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolValidate), 3937856389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolEditing_h_201241603(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolEditing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolEditing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
