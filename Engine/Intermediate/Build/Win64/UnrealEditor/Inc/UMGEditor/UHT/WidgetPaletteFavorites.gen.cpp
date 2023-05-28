// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetPaletteFavorites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPaletteFavorites() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetPaletteFavorites();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetPaletteFavorites::StaticRegisterNativesUWidgetPaletteFavorites()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetPaletteFavorites);
	UClass* Z_Construct_UClass_UWidgetPaletteFavorites_NoRegister()
	{
		return UWidgetPaletteFavorites::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetPaletteFavorites_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Favorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Favorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Favorites;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetPaletteFavorites_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetPaletteFavorites_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetPaletteFavorites.h" },
		{ "ModuleRelativePath", "Classes/WidgetPaletteFavorites.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites_Inner = { "Favorites", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites_MetaData[] = {
		{ "ModuleRelativePath", "Classes/WidgetPaletteFavorites.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites = { "Favorites", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetPaletteFavorites, Favorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetPaletteFavorites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetPaletteFavorites_Statics::NewProp_Favorites,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetPaletteFavorites_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetPaletteFavorites>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetPaletteFavorites_Statics::ClassParams = {
		&UWidgetPaletteFavorites::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetPaletteFavorites_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPaletteFavorites_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetPaletteFavorites_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetPaletteFavorites_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetPaletteFavorites()
	{
		if (!Z_Registration_Info_UClass_UWidgetPaletteFavorites.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetPaletteFavorites.OuterSingleton, Z_Construct_UClass_UWidgetPaletteFavorites_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetPaletteFavorites.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetPaletteFavorites>()
	{
		return UWidgetPaletteFavorites::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetPaletteFavorites);
	UWidgetPaletteFavorites::~UWidgetPaletteFavorites() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetPaletteFavorites, UWidgetPaletteFavorites::StaticClass, TEXT("UWidgetPaletteFavorites"), &Z_Registration_Info_UClass_UWidgetPaletteFavorites, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetPaletteFavorites), 70402656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_3595139438(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetPaletteFavorites_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
