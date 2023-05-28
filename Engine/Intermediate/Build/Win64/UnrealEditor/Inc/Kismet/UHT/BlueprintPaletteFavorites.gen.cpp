// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintPaletteFavorites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintPaletteFavorites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites();
	KISMET_API UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister();
	KISMET_API UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem();
	UPackage* Z_Construct_UPackage__Script_Kismet();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem;
class UScriptStruct* FFavoritedBlueprintPaletteItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem, (UObject*)Z_Construct_UPackage__Script_Kismet(), TEXT("FavoritedBlueprintPaletteItem"));
	}
	return Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.OuterSingleton;
}
template<> KISMET_API UScriptStruct* StaticStruct<FFavoritedBlueprintPaletteItem>()
{
	return FFavoritedBlueprintPaletteItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*******************************************************************************\n* FFavoritedPaletteItem\n*******************************************************************************/" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "FFavoritedPaletteItem" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFavoritedBlueprintPaletteItem>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
		nullptr,
		&NewStructOps,
		"FavoritedBlueprintPaletteItem",
		sizeof(FFavoritedBlueprintPaletteItem),
		alignof(FFavoritedBlueprintPaletteItem),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem()
	{
		if (!Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.InnerSingleton, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem.InnerSingleton;
	}
	void UBlueprintPaletteFavorites::StaticRegisterNativesUBlueprintPaletteFavorites()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintPaletteFavorites);
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites_NoRegister()
	{
		return UBlueprintPaletteFavorites::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintPaletteFavorites_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomFavorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomFavorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomFavorites;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentFavorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFavorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentFavorites;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Kismet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*******************************************************************************\n* FBlueprintPaletteFavorites\n*******************************************************************************/" },
		{ "IncludePath", "BlueprintPaletteFavorites.h" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "FBlueprintPaletteFavorites" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_Inner = { "CustomFavorites", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData[] = {
		{ "Comment", "/** \n\x09 * A list of strings that are used to identify specific palette actions. \n\x09 * This is what gets saved out when the user has customized their own set, \n\x09 * and is not updated until PreSave.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "A list of strings that are used to identify specific palette actions.\nThis is what gets saved out when the user has customized their own set,\nand is not updated until PreSave." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites = { "CustomFavorites", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintPaletteFavorites, CustomFavorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_Inner = { "CurrentFavorites", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem, METADATA_PARAMS(nullptr, 0) }; // 996113610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData[] = {
		{ "Comment", "/** \n\x09 * A list of favorites that is constructed in PostLoad() (either from a \n\x09 * profile or the user's set of CustomFavorites). This list is up to date \n\x09 * and maintained at runtime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "A list of favorites that is constructed in PostLoad() (either from a\nprofile or the user's set of CustomFavorites). This list is up to date\nand maintained at runtime." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites = { "CurrentFavorites", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintPaletteFavorites, CurrentFavorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_MetaData)) }; // 996113610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData[] = {
		{ "Comment", "/** \n\x09 * Users could load pre-existing profiles (intended to share favorites, and \n\x09 * hook into tutorials). If empty, the default profile will be loaded; if \n\x09 * the user has customized a pre-existing profile, then this will be \"CustomProfile\".\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintPaletteFavorites.h" },
		{ "ToolTip", "Users could load pre-existing profiles (intended to share favorites, and\nhook into tutorials). If empty, the default profile will be loaded; if\nthe user has customized a pre-existing profile, then this will be \"CustomProfile\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile = { "CurrentProfile", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintPaletteFavorites, CurrentProfile), METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CustomFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::NewProp_CurrentProfile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintPaletteFavorites>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::ClassParams = {
		&UBlueprintPaletteFavorites::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintPaletteFavorites()
	{
		if (!Z_Registration_Info_UClass_UBlueprintPaletteFavorites.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintPaletteFavorites.OuterSingleton, Z_Construct_UClass_UBlueprintPaletteFavorites_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintPaletteFavorites.OuterSingleton;
	}
	template<> KISMET_API UClass* StaticClass<UBlueprintPaletteFavorites>()
	{
		return UBlueprintPaletteFavorites::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintPaletteFavorites);
	UBlueprintPaletteFavorites::~UBlueprintPaletteFavorites() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ScriptStructInfo[] = {
		{ FFavoritedBlueprintPaletteItem::StaticStruct, Z_Construct_UScriptStruct_FFavoritedBlueprintPaletteItem_Statics::NewStructOps, TEXT("FavoritedBlueprintPaletteItem"), &Z_Registration_Info_UScriptStruct_FavoritedBlueprintPaletteItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFavoritedBlueprintPaletteItem), 996113610U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintPaletteFavorites, UBlueprintPaletteFavorites::StaticClass, TEXT("UBlueprintPaletteFavorites"), &Z_Registration_Info_UClass_UBlueprintPaletteFavorites, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintPaletteFavorites), 1712995445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_133854420(TEXT("/Script/Kismet"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Kismet_Classes_BlueprintPaletteFavorites_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
