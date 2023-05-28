// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BookMark2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBookMark2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D();
	ENGINE_API UClass* Z_Construct_UClass_UBookMark2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings;
class UScriptStruct* FBookmark2DJumpToSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Bookmark2DJumpToSettings"));
	}
	return Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBookmark2DJumpToSettings>()
{
	return FBookmark2DJumpToSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBookmark2DJumpToSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"Bookmark2DJumpToSettings",
		sizeof(FBookmark2DJumpToSettings),
		alignof(FBookmark2DJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBookmark2DJumpToSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton, Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings.InnerSingleton;
	}
	void UBookMark2D::StaticRegisterNativesUBookMark2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBookMark2D);
	UClass* Z_Construct_UClass_UBookMark2D_NoRegister()
	{
		return UBookMark2D::StaticClass();
	}
	struct Z_Construct_UClass_UBookMark2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom2D_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBookMark2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple class to store 2D camera information.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Engine/BookMark2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Simple class to store 2D camera information." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "Comment", "/** Zoom of the camera */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Zoom of the camera" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D = { "Zoom2D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBookMark2D, Zoom2D), METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "BookMark2D" },
		{ "Comment", "/** Location of the camera */" },
		{ "ModuleRelativePath", "Classes/Engine/BookMark2D.h" },
		{ "ToolTip", "Location of the camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBookMark2D, Location), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBookMark2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Zoom2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBookMark2D_Statics::NewProp_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBookMark2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBookMark2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBookMark2D_Statics::ClassParams = {
		&UBookMark2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBookMark2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBookMark2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBookMark2D()
	{
		if (!Z_Registration_Info_UClass_UBookMark2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBookMark2D.OuterSingleton, Z_Construct_UClass_UBookMark2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBookMark2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBookMark2D>()
	{
		return UBookMark2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBookMark2D);
	UBookMark2D::~UBookMark2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ScriptStructInfo[] = {
		{ FBookmark2DJumpToSettings::StaticStruct, Z_Construct_UScriptStruct_FBookmark2DJumpToSettings_Statics::NewStructOps, TEXT("Bookmark2DJumpToSettings"), &Z_Registration_Info_UScriptStruct_Bookmark2DJumpToSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBookmark2DJumpToSettings), 565084737U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBookMark2D, UBookMark2D::StaticClass, TEXT("UBookMark2D"), &Z_Registration_Info_UClass_UBookMark2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBookMark2D), 2254208178U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_3917213410(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BookMark2D_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
