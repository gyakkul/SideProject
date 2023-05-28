// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BookMark.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FBookmarkJumpToSettings>() == std::is_polymorphic<FBookmarkBaseJumpToSettings>(), "USTRUCT FBookmarkJumpToSettings cannot be polymorphic unless super FBookmarkBaseJumpToSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings;
class UScriptStruct* FBookmarkJumpToSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmarkJumpToSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BookmarkJumpToSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmarkJumpToSettings>()
{
	return FBookmarkJumpToSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmarkJumpToSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings,
		&NewStructOps,
		"BookmarkJumpToSettings",
		sizeof(FBookmarkJumpToSettings),
		alignof(FBookmarkJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBookmarkJumpToSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.InnerSingleton, Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings.InnerSingleton;
	}
	void UBookMark::StaticRegisterNativesUBookMark()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBookMark);
	UClass* Z_Construct_UClass_UBookMark_NoRegister()
	{
		return UBookMark::StaticClass();
	}
	struct Z_Construct_UClass_UBookMark_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HiddenLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBookMark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A camera position the current level.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/BookMark.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "A camera position the current level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "BookMark" },
		{ "Comment", "/** Camera position */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Camera position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBookMark, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "BookMark" },
		{ "Comment", "/** Camera rotation */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Camera rotation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBookMark, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_Inner = { "HiddenLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData[] = {
		{ "Category", "BookMark" },
		{ "Comment", "/** Array of levels that are hidden */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark.h" },
		{ "ToolTip", "Array of levels that are hidden" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels = { "HiddenLevels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBookMark, HiddenLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBookMark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark_Statics::NewProp_HiddenLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBookMark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookMark>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBookMark_Statics::ClassParams = {
		&UBookMark::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBookMark_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBookMark()
	{
		if (!Z_Registration_Info_UClass_UBookMark.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBookMark.OuterSingleton, Z_Construct_UClass_UBookMark_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBookMark.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBookMark>()
	{
		return UBookMark::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark);
	UBookMark::~UBookMark() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ScriptStructInfo[] = {
		{ FBookmarkJumpToSettings::StaticStruct, Z_Construct_UScriptStruct_FBookmarkJumpToSettings_Statics::NewStructOps, TEXT("BookmarkJumpToSettings"), &Z_Registration_Info_UScriptStruct_BookmarkJumpToSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBookmarkJumpToSettings), 1384273U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBookMark, UBookMark::StaticClass, TEXT("UBookMark"), &Z_Registration_Info_UClass_UBookMark, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBookMark), 920046064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_845496164(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
