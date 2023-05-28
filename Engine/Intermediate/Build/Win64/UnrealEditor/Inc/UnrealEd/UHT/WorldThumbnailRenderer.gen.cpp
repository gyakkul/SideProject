// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/WorldThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UDefaultSizedThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailRenderer();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UWorldThumbnailRenderer::StaticRegisterNativesUWorldThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldThumbnailRenderer);
	UClass* Z_Construct_UClass_UWorldThumbnailRenderer_NoRegister()
	{
		return UWorldThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UWorldThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOrbitPitchOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalOrbitPitchOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalOrbitYawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalOrbitYawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnlitScene_MetaData[];
#endif
		static void NewProp_bUseUnlitScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnlitScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowWorldThumbnails_MetaData[];
#endif
		static void NewProp_bAllowWorldThumbnails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldThumbnails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultSizedThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData[] = {
		{ "Comment", "/** Offset used to orient all worlds to show a more vertical camera, if necessary. Individual thumbnail infos can provide additional offset. */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "Offset used to orient all worlds to show a more vertical camera, if necessary. Individual thumbnail infos can provide additional offset." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset = { "GlobalOrbitPitchOffset", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitPitchOffset), METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData[] = {
		{ "Comment", "/** Offset used to orient all worlds to face the camera in degrees when using a perspective camera. Individual thumbnail infos can provide additional offset. */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "Offset used to orient all worlds to face the camera in degrees when using a perspective camera. Individual thumbnail infos can provide additional offset." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset = { "GlobalOrbitYawOffset", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldThumbnailRenderer, GlobalOrbitYawOffset), METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData[] = {
		{ "Comment", "/** If true, all world thumbnails will be rendered unlit. This is useful in games that have shared lighting in a common map */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "If true, all world thumbnails will be rendered unlit. This is useful in games that have shared lighting in a common map" },
	};
#endif
	void Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_SetBit(void* Obj)
	{
		((UWorldThumbnailRenderer*)Obj)->bUseUnlitScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene = { "bUseUnlitScene", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldThumbnailRenderer), &Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData[] = {
		{ "Comment", "/** If false, all world thumbnails rendering will be disabled */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailRenderer.h" },
		{ "ToolTip", "If false, all world thumbnails rendering will be disabled" },
	};
#endif
	void Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_SetBit(void* Obj)
	{
		((UWorldThumbnailRenderer*)Obj)->bAllowWorldThumbnails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails = { "bAllowWorldThumbnails", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWorldThumbnailRenderer), &Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitPitchOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_GlobalOrbitYawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bUseUnlitScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailRenderer_Statics::NewProp_bAllowWorldThumbnails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldThumbnailRenderer_Statics::ClassParams = {
		&UWorldThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UWorldThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UWorldThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldThumbnailRenderer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldThumbnailRenderer>()
	{
		return UWorldThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldThumbnailRenderer);
	UWorldThumbnailRenderer::~UWorldThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldThumbnailRenderer, UWorldThumbnailRenderer::StaticClass, TEXT("UWorldThumbnailRenderer"), &Z_Registration_Info_UClass_UWorldThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldThumbnailRenderer), 1379087191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_3506249036(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
