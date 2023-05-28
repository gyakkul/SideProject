// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/Components/DetailsView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailsView() {}
// Cross Module References
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView();
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UPropertyViewBase();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UDetailsView::StaticRegisterNativesUDetailsView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetailsView);
	UClass* Z_Construct_UClass_UDetailsView_NoRegister()
	{
		return UDetailsView::StaticClass();
	}
	struct Z_Construct_UClass_UDetailsView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFiltering_MetaData[];
#endif
		static void NewProp_bAllowFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFiltering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFavoriteSystem_MetaData[];
#endif
		static void NewProp_bAllowFavoriteSystem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFavoriteSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowModifiedPropertiesOption_MetaData[];
#endif
		static void NewProp_bShowModifiedPropertiesOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowModifiedPropertiesOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowKeyablePropertiesOption_MetaData[];
#endif
		static void NewProp_bShowKeyablePropertiesOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowKeyablePropertiesOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowAnimatedPropertiesOption_MetaData[];
#endif
		static void NewProp_bShowAnimatedPropertiesOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowAnimatedPropertiesOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColumnWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowScrollBar_MetaData[];
#endif
		static void NewProp_bShowScrollBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowScrollBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceHiddenPropertyVisibility_MetaData[];
#endif
		static void NewProp_bForceHiddenPropertyVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHiddenPropertyVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewIdentifier;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoriesToShow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoriesToShow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoriesToShow;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertiesToShow_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesToShow_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertiesToShow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOnlyAllowed_MetaData[];
#endif
		static void NewProp_bShowOnlyAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOnlyAllowed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetailsView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyViewBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The details view allows you to display the value of an object properties.\n */" },
		{ "IncludePath", "Components/DetailsView.h" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "The details view allows you to display the value of an object properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** True if we allow filtering through search and the filter dropdown menu. */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "True if we allow filtering through search and the filter dropdown menu." },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bAllowFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering = { "bAllowFiltering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** If false, the current properties editor will never display the favorite system */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "If false, the current properties editor will never display the favorite system" },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bAllowFavoriteSystem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem = { "bAllowFavoriteSystem", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** True if you want to show the 'Show Only Modified Properties'. Only valid in conjunction with bAllowFiltering */" },
		{ "EditCondition", "bAllowFiltering" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "True if you want to show the 'Show Only Modified Properties'. Only valid in conjunction with bAllowFiltering" },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bShowModifiedPropertiesOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption = { "bShowModifiedPropertiesOption", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** True if you want to show the 'Show Only Keyable Properties'. Only valid in conjunction with bAllowFiltering */" },
		{ "EditCondition", "bAllowFiltering" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "True if you want to show the 'Show Only Keyable Properties'. Only valid in conjunction with bAllowFiltering" },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bShowKeyablePropertiesOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption = { "bShowKeyablePropertiesOption", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** True if you want to show the 'Show Only Animated Properties'. Only valid in conjunction with bAllowFiltering */" },
		{ "EditCondition", "bAllowFiltering" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "True if you want to show the 'Show Only Animated Properties'. Only valid in conjunction with bAllowFiltering" },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bShowAnimatedPropertiesOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption = { "bShowAnimatedPropertiesOption", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_ColumnWidth_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** The default column width */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "The default column width" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_ColumnWidth = { "ColumnWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDetailsView, ColumnWidth), METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_ColumnWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_ColumnWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** If false, the details panel's scrollbar will always be hidden. Useful when embedding details panels in widgets that either grow to accommodate them, or with scrollbars of their own. */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "If false, the details panel's scrollbar will always be hidden. Useful when embedding details panels in widgets that either grow to accommodate them, or with scrollbars of their own." },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bShowScrollBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar = { "bShowScrollBar", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** If true, all properties will be visible, not just those with CPF_Edit */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "If true, all properties will be visible, not just those with CPF_Edit" },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bForceHiddenPropertyVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility = { "bForceHiddenPropertyVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_ViewIdentifier_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Identifier for this details view; NAME_None if this view is anonymous */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "Identifier for this details view; NAME_None if this view is anonymous" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_ViewIdentifier = { "ViewIdentifier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDetailsView, ViewIdentifier), METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_ViewIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_ViewIdentifier_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow_Inner = { "CategoriesToShow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Which categories to show in the details panel. If both this and the Properties To Show lists are empty, all properties will show. */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "Which categories to show in the details panel. If both this and the Properties To Show lists are empty, all properties will show." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow = { "CategoriesToShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDetailsView, CategoriesToShow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow_Inner = { "PropertiesToShow", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow_MetaData[] = {
		{ "Category", "View" },
		{ "Comment", "/** Which properties to show in the details panel. If both this and the Categories To Show lists are empty, all properties will show. */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "Which properties to show in the details panel. If both this and the Categories To Show lists are empty, all properties will show." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow = { "PropertiesToShow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDetailsView, PropertiesToShow), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed_MetaData[] = {
		{ "Comment", "/** Showing properties in this details panel works by allowing only specific categories and properties. This flag enables you to show all properties without needing to specify. */" },
		{ "ModuleRelativePath", "Public/Components/DetailsView.h" },
		{ "ToolTip", "Showing properties in this details panel works by allowing only specific categories and properties. This flag enables you to show all properties without needing to specify." },
	};
#endif
	void Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed_SetBit(void* Obj)
	{
		((UDetailsView*)Obj)->bShowOnlyAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed = { "bShowOnlyAllowed", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDetailsView), &Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDetailsView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bAllowFavoriteSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowModifiedPropertiesOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowKeyablePropertiesOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowAnimatedPropertiesOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_ColumnWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowScrollBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bForceHiddenPropertyVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_ViewIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_CategoriesToShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_PropertiesToShow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDetailsView_Statics::NewProp_bShowOnlyAllowed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetailsView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetailsView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetailsView_Statics::ClassParams = {
		&UDetailsView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDetailsView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDetailsView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetailsView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetailsView()
	{
		if (!Z_Registration_Info_UClass_UDetailsView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetailsView.OuterSingleton, Z_Construct_UClass_UDetailsView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDetailsView.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UDetailsView>()
	{
		return UDetailsView::StaticClass();
	}
	UDetailsView::UDetailsView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetailsView);
	UDetailsView::~UDetailsView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_DetailsView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_DetailsView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDetailsView, UDetailsView::StaticClass, TEXT("UDetailsView"), &Z_Registration_Info_UClass_UDetailsView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetailsView), 3905276704U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_DetailsView_h_2588363950(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_DetailsView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_Components_DetailsView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
