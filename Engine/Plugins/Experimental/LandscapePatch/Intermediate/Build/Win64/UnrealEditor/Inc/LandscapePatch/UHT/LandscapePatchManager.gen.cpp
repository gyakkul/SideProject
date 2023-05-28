// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapePatchManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapePatchManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ALandscapePatchManager();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ALandscapePatchManager_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	void ALandscapePatchManager::StaticRegisterNativesALandscapePatchManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapePatchManager);
	UClass* Z_Construct_UClass_ALandscapePatchManager_NoRegister()
	{
		return ALandscapePatchManager::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapePatchManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PatchComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatchComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapCoordsToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapCoordsToWorld;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailPanelLandscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DetailPanelLandscape;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapePatchManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePatchManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Acts as the \"blueprint brush\" as far as the owning edit layer is concerned. In reality, has its contained\n * patches edit the height/weight maps.\n *///~ The alternative to this approach is to have the individual patches act as independent brushes, which\n//~ we currently don't want to do because we think it will clutter the brush interface and may lose opportunities\n//~ for optimization... \n" },
		{ "IncludePath", "LandscapePatchManager.h" },
		{ "ModuleRelativePath", "Public/LandscapePatchManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Acts as the \"blueprint brush\" as far as the owning edit layer is concerned. In reality, has its contained\npatches edit the height/weight maps." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents_Inner = { "PatchComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapePatchComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapePatchManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents = { "PatchComponents", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapePatchManager, PatchComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_HeightmapCoordsToWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapePatchManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_HeightmapCoordsToWorld = { "HeightmapCoordsToWorld", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapePatchManager, HeightmapCoordsToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_HeightmapCoordsToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_HeightmapCoordsToWorld_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_DetailPanelLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/**\n\x09 * The owning landscape.\n\x09 */" },
		{ "DisplayName", "Landscape" },
		{ "ModuleRelativePath", "Public/LandscapePatchManager.h" },
		{ "ToolTip", "The owning landscape." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_DetailPanelLandscape = { "DetailPanelLandscape", nullptr, (EPropertyFlags)0x0024080800002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapePatchManager, DetailPanelLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_DetailPanelLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_DetailPanelLandscape_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapePatchManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_PatchComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_HeightmapCoordsToWorld,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapePatchManager_Statics::NewProp_DetailPanelLandscape,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapePatchManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapePatchManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapePatchManager_Statics::ClassParams = {
		&ALandscapePatchManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandscapePatchManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePatchManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapePatchManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePatchManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapePatchManager()
	{
		if (!Z_Registration_Info_UClass_ALandscapePatchManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapePatchManager.OuterSingleton, Z_Construct_UClass_ALandscapePatchManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapePatchManager.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ALandscapePatchManager>()
	{
		return ALandscapePatchManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapePatchManager);
	ALandscapePatchManager::~ALandscapePatchManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapePatchManager, ALandscapePatchManager::StaticClass, TEXT("ALandscapePatchManager"), &Z_Registration_Info_UClass_ALandscapePatchManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapePatchManager), 530004917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_2844160920(TEXT("/Script/LandscapePatch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
