// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmarkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmarkSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPBookmarkSettings();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPBookmarkSettings_NoRegister();
// End Cross Module References
	void UVPBookmarkSettings::StaticRegisterNativesUVPBookmarkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBookmarkSettings);
	UClass* Z_Construct_UClass_UVPBookmarkSettings_NoRegister()
	{
		return UVPBookmarkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVPBookmarkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkMaterialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkSplineMeshPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkSplineMeshPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkSplineMeshMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkSplineMeshMaterialPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkLabelMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkLabelMaterialPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBookmarkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPBookmarkSettings.h" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMeshPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "VP Bookmark" },
		{ "Comment", "/** Bookmark mesh to use for Bookmark actor */" },
		{ "DisplayName", "Bookmark Mesh" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
		{ "ToolTip", "Bookmark mesh to use for Bookmark actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMeshPath = { "BookmarkMeshPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmarkSettings, BookmarkMeshPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "VP Bookmark" },
		{ "Comment", "/** Bookmark mesh material to use for Bookmark actor */" },
		{ "DisplayName", "Bookmark Mesh Material" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
		{ "ToolTip", "Bookmark mesh material to use for Bookmark actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMaterialPath = { "BookmarkMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmarkSettings, BookmarkMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMaterialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.StaticMesh" },
		{ "Category", "VP Bookmark" },
		{ "Comment", "/** Bookmark spline mesh to use for Bookmark actor */" },
		{ "DisplayName", "Bookmark Spline Mesh" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
		{ "ToolTip", "Bookmark spline mesh to use for Bookmark actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshPath = { "BookmarkSplineMeshPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmarkSettings, BookmarkSplineMeshPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "VP Bookmark" },
		{ "Comment", "/** Bookmark spline mesh material to use for Bookmark actor */" },
		{ "DisplayName", "Bookmark Spline Material" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
		{ "ToolTip", "Bookmark spline mesh material to use for Bookmark actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshMaterialPath = { "BookmarkSplineMeshMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmarkSettings, BookmarkSplineMeshMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshMaterialPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkLabelMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.MaterialInterface" },
		{ "Category", "VP Bookmark" },
		{ "Comment", "/** Bookmark label material class to use for Bookmark actor */" },
		{ "DisplayName", "Bookmark Label Material" },
		{ "ModuleRelativePath", "Public/VPBookmarkSettings.h" },
		{ "ToolTip", "Bookmark label material class to use for Bookmark actor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkLabelMaterialPath = { "BookmarkLabelMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmarkSettings, BookmarkLabelMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkLabelMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkLabelMaterialPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPBookmarkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkMaterialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkSplineMeshMaterialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmarkSettings_Statics::NewProp_BookmarkLabelMaterialPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBookmarkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPBookmarkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBookmarkSettings_Statics::ClassParams = {
		&UVPBookmarkSettings::StaticClass,
		"VirtualProductionUtilities",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPBookmarkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPBookmarkSettings()
	{
		if (!Z_Registration_Info_UClass_UVPBookmarkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBookmarkSettings.OuterSingleton, Z_Construct_UClass_UVPBookmarkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBookmarkSettings.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPBookmarkSettings>()
	{
		return UVPBookmarkSettings::StaticClass();
	}
	UVPBookmarkSettings::UVPBookmarkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBookmarkSettings);
	UVPBookmarkSettings::~UVPBookmarkSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBookmarkSettings, UVPBookmarkSettings::StaticClass, TEXT("UVPBookmarkSettings"), &Z_Registration_Info_UClass_UVPBookmarkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBookmarkSettings), 320864299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_4106125009(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
