// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void UPaperRuntimeSettings::StaticRegisterNativesUPaperRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperRuntimeSettings);
	UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister()
	{
		return UPaperRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaperRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSpriteAtlasGroups_MetaData[];
#endif
		static void NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSpriteAtlasGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTerrainSplineEditing_MetaData[];
#endif
		static void NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTerrainSplineEditing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResizeSpriteDataToMatchTextures_MetaData[];
#endif
		static void NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizeSpriteDataToMatchTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Paper2D plugin.\n */" },
		{ "IncludePath", "PaperRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Paper2D plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to" },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bEnableSpriteAtlasGroups = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups = { "bEnableSpriteAtlasGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect." },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bEnableTerrainSplineEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing = { "bEnableTerrainSplineEditing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)" },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bResizeSpriteDataToMatchTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures = { "bResizeSpriteDataToMatchTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams = {
		&UPaperRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton, Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperRuntimeSettings.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperRuntimeSettings>()
	{
		return UPaperRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperRuntimeSettings);
	UPaperRuntimeSettings::~UPaperRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperRuntimeSettings, UPaperRuntimeSettings::StaticClass, TEXT("UPaperRuntimeSettings"), &Z_Registration_Info_UClass_UPaperRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperRuntimeSettings), 10596277U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_3693148182(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
