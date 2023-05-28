// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContentBrowserDataMenuContexts.h"
#include "ContentBrowserItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBrowserDataMenuContexts() {}
// Cross Module References
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_NoRegister();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_NoRegister();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_NoRegister();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu();
	CONTENTBROWSERDATA_API UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_NoRegister();
	CONTENTBROWSERDATA_API UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain();
	CONTENTBROWSERDATA_API UScriptStruct* Z_Construct_UScriptStruct_FContentBrowserItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContentBrowserData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain;
	static UEnum* EContentBrowserDataMenuContext_AddNewMenuDomain_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain, (UObject*)Z_Construct_UPackage__Script_ContentBrowserData(), TEXT("EContentBrowserDataMenuContext_AddNewMenuDomain"));
		}
		return Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UEnum* StaticEnum<EContentBrowserDataMenuContext_AddNewMenuDomain>()
	{
		return EContentBrowserDataMenuContext_AddNewMenuDomain_StaticEnum();
	}
	struct Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enumerators[] = {
		{ "EContentBrowserDataMenuContext_AddNewMenuDomain::Toolbar", (int64)EContentBrowserDataMenuContext_AddNewMenuDomain::Toolbar },
		{ "EContentBrowserDataMenuContext_AddNewMenuDomain::AssetView", (int64)EContentBrowserDataMenuContext_AddNewMenuDomain::AssetView },
		{ "EContentBrowserDataMenuContext_AddNewMenuDomain::PathView", (int64)EContentBrowserDataMenuContext_AddNewMenuDomain::PathView },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enum_MetaDataParams[] = {
		{ "AssetView.Name", "EContentBrowserDataMenuContext_AddNewMenuDomain::AssetView" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
		{ "PathView.Name", "EContentBrowserDataMenuContext_AddNewMenuDomain::PathView" },
		{ "Toolbar.Name", "EContentBrowserDataMenuContext_AddNewMenuDomain::Toolbar" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ContentBrowserData,
		nullptr,
		"EContentBrowserDataMenuContext_AddNewMenuDomain",
		"EContentBrowserDataMenuContext_AddNewMenuDomain",
		Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain()
	{
		if (!Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.InnerSingleton, Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain.InnerSingleton;
	}
	void UContentBrowserDataMenuContext_AddNewMenu::StaticRegisterNativesUContentBrowserDataMenuContext_AddNewMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataMenuContext_AddNewMenu);
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_NoRegister()
	{
		return UContentBrowserDataMenuContext_AddNewMenu::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SelectedPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContainsValidPackagePath_MetaData[];
#endif
		static void NewProp_bContainsValidPackagePath_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsValidPackagePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeModified_MetaData[];
#endif
		static void NewProp_bCanBeModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeModified;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OwnerDomain_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerDomain_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OwnerDomain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserDataMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths_Inner = { "SelectedPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths = { "SelectedPaths", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_AddNewMenu, SelectedPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "Comment", "// At least one of the selected paths maps to a mounted content root\n" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
		{ "ToolTip", "At least one of the selected paths maps to a mounted content root" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_AddNewMenu*)Obj)->bContainsValidPackagePath = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath = { "bContainsValidPackagePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_AddNewMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_AddNewMenu*)Obj)->bCanBeModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified = { "bCanBeModified", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_AddNewMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain = { "OwnerDomain", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_AddNewMenu, OwnerDomain), Z_Construct_UEnum_ContentBrowserData_EContentBrowserDataMenuContext_AddNewMenuDomain, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain_MetaData)) }; // 232637225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_SelectedPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bContainsValidPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_bCanBeModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::NewProp_OwnerDomain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataMenuContext_AddNewMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::ClassParams = {
		&UContentBrowserDataMenuContext_AddNewMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataMenuContext_AddNewMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataMenuContext_AddNewMenu.OuterSingleton, Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataMenuContext_AddNewMenu.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataMenuContext_AddNewMenu>()
	{
		return UContentBrowserDataMenuContext_AddNewMenu::StaticClass();
	}
	UContentBrowserDataMenuContext_AddNewMenu::UContentBrowserDataMenuContext_AddNewMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataMenuContext_AddNewMenu);
	UContentBrowserDataMenuContext_AddNewMenu::~UContentBrowserDataMenuContext_AddNewMenu() {}
	void UContentBrowserDataMenuContext_FolderMenu::StaticRegisterNativesUContentBrowserDataMenuContext_FolderMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataMenuContext_FolderMenu);
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_NoRegister()
	{
		return UContentBrowserDataMenuContext_FolderMenu::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeModified_MetaData[];
#endif
		static void NewProp_bCanBeModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeModified;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserDataMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems_Inner = { "SelectedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems = { "SelectedItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_FolderMenu, SelectedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems_MetaData)) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_FolderMenu*)Obj)->bCanBeModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified = { "bCanBeModified", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_FolderMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_SelectedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::NewProp_bCanBeModified,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataMenuContext_FolderMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::ClassParams = {
		&UContentBrowserDataMenuContext_FolderMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FolderMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FolderMenu.OuterSingleton, Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FolderMenu.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataMenuContext_FolderMenu>()
	{
		return UContentBrowserDataMenuContext_FolderMenu::StaticClass();
	}
	UContentBrowserDataMenuContext_FolderMenu::UContentBrowserDataMenuContext_FolderMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataMenuContext_FolderMenu);
	UContentBrowserDataMenuContext_FolderMenu::~UContentBrowserDataMenuContext_FolderMenu() {}
	void UContentBrowserDataMenuContext_FileMenu::StaticRegisterNativesUContentBrowserDataMenuContext_FileMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataMenuContext_FileMenu);
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_NoRegister()
	{
		return UContentBrowserDataMenuContext_FileMenu::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeModified_MetaData[];
#endif
		static void NewProp_bCanBeModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeModified;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserDataMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems_Inner = { "SelectedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems = { "SelectedItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_FileMenu, SelectedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems_MetaData)) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_FileMenu*)Obj)->bCanBeModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified = { "bCanBeModified", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_FileMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_SelectedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::NewProp_bCanBeModified,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataMenuContext_FileMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::ClassParams = {
		&UContentBrowserDataMenuContext_FileMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FileMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FileMenu.OuterSingleton, Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FileMenu.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataMenuContext_FileMenu>()
	{
		return UContentBrowserDataMenuContext_FileMenu::StaticClass();
	}
	UContentBrowserDataMenuContext_FileMenu::UContentBrowserDataMenuContext_FileMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataMenuContext_FileMenu);
	UContentBrowserDataMenuContext_FileMenu::~UContentBrowserDataMenuContext_FileMenu() {}
	void UContentBrowserDataMenuContext_DragDropMenu::StaticRegisterNativesUContentBrowserDataMenuContext_DragDropMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBrowserDataMenuContext_DragDropMenu);
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_NoRegister()
	{
		return UContentBrowserDataMenuContext_DragDropMenu::StaticClass();
	}
	struct Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DropTargetItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DropTargetItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DraggedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DraggedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DraggedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCopy_MetaData[];
#endif
		static void NewProp_bCanCopy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContentBrowserData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ContentBrowserDataMenuContexts.h" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DropTargetItem_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DropTargetItem = { "DropTargetItem", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_DragDropMenu, DropTargetItem), Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DropTargetItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DropTargetItem_MetaData)) }; // 804007509
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems_Inner = { "DraggedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FContentBrowserItem, METADATA_PARAMS(nullptr, 0) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems = { "DraggedItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBrowserDataMenuContext_DragDropMenu, DraggedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems_MetaData)) }; // 804007509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_DragDropMenu*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_DragDropMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy_MetaData[] = {
		{ "Category", "ContentBrowser" },
		{ "ModuleRelativePath", "Public/ContentBrowserDataMenuContexts.h" },
	};
#endif
	void Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy_SetBit(void* Obj)
	{
		((UContentBrowserDataMenuContext_DragDropMenu*)Obj)->bCanCopy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy = { "bCanCopy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UContentBrowserDataMenuContext_DragDropMenu), &Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy_SetBit, METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DropTargetItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_DraggedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::NewProp_bCanCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBrowserDataMenuContext_DragDropMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::ClassParams = {
		&UContentBrowserDataMenuContext_DragDropMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu()
	{
		if (!Z_Registration_Info_UClass_UContentBrowserDataMenuContext_DragDropMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBrowserDataMenuContext_DragDropMenu.OuterSingleton, Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBrowserDataMenuContext_DragDropMenu.OuterSingleton;
	}
	template<> CONTENTBROWSERDATA_API UClass* StaticClass<UContentBrowserDataMenuContext_DragDropMenu>()
	{
		return UContentBrowserDataMenuContext_DragDropMenu::StaticClass();
	}
	UContentBrowserDataMenuContext_DragDropMenu::UContentBrowserDataMenuContext_DragDropMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBrowserDataMenuContext_DragDropMenu);
	UContentBrowserDataMenuContext_DragDropMenu::~UContentBrowserDataMenuContext_DragDropMenu() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::EnumInfo[] = {
		{ EContentBrowserDataMenuContext_AddNewMenuDomain_StaticEnum, TEXT("EContentBrowserDataMenuContext_AddNewMenuDomain"), &Z_Registration_Info_UEnum_EContentBrowserDataMenuContext_AddNewMenuDomain, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 232637225U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBrowserDataMenuContext_AddNewMenu, UContentBrowserDataMenuContext_AddNewMenu::StaticClass, TEXT("UContentBrowserDataMenuContext_AddNewMenu"), &Z_Registration_Info_UClass_UContentBrowserDataMenuContext_AddNewMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataMenuContext_AddNewMenu), 1156905652U) },
		{ Z_Construct_UClass_UContentBrowserDataMenuContext_FolderMenu, UContentBrowserDataMenuContext_FolderMenu::StaticClass, TEXT("UContentBrowserDataMenuContext_FolderMenu"), &Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FolderMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataMenuContext_FolderMenu), 581352648U) },
		{ Z_Construct_UClass_UContentBrowserDataMenuContext_FileMenu, UContentBrowserDataMenuContext_FileMenu::StaticClass, TEXT("UContentBrowserDataMenuContext_FileMenu"), &Z_Registration_Info_UClass_UContentBrowserDataMenuContext_FileMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataMenuContext_FileMenu), 1046954858U) },
		{ Z_Construct_UClass_UContentBrowserDataMenuContext_DragDropMenu, UContentBrowserDataMenuContext_DragDropMenu::StaticClass, TEXT("UContentBrowserDataMenuContext_DragDropMenu"), &Z_Registration_Info_UClass_UContentBrowserDataMenuContext_DragDropMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBrowserDataMenuContext_DragDropMenu), 790832038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_1567396403(TEXT("/Script/ContentBrowserData"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ContentBrowserData_Public_ContentBrowserDataMenuContexts_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
