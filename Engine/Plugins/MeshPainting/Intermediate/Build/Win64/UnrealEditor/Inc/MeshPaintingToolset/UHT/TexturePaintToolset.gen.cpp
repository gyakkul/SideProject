// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TexturePaintToolset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexturePaintToolset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTexturePaintToolset();
	MESHPAINTINGTOOLSET_API UClass* Z_Construct_UClass_UTexturePaintToolset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshPaintingToolset();
// End Cross Module References
	void UTexturePaintToolset::StaticRegisterNativesUTexturePaintToolset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexturePaintToolset);
	UClass* Z_Construct_UClass_UTexturePaintToolset_NoRegister()
	{
		return UTexturePaintToolset::StaticClass();
	}
	struct Z_Construct_UClass_UTexturePaintToolset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexturePaintToolset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshPaintingToolset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexturePaintToolset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Helpers functions for texture painting functionality */" },
		{ "IncludePath", "TexturePaintToolset.h" },
		{ "ModuleRelativePath", "Public/TexturePaintToolset.h" },
		{ "ToolTip", "Helpers functions for texture painting functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexturePaintToolset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexturePaintToolset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexturePaintToolset_Statics::ClassParams = {
		&UTexturePaintToolset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexturePaintToolset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexturePaintToolset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexturePaintToolset()
	{
		if (!Z_Registration_Info_UClass_UTexturePaintToolset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexturePaintToolset.OuterSingleton, Z_Construct_UClass_UTexturePaintToolset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexturePaintToolset.OuterSingleton;
	}
	template<> MESHPAINTINGTOOLSET_API UClass* StaticClass<UTexturePaintToolset>()
	{
		return UTexturePaintToolset::StaticClass();
	}
	UTexturePaintToolset::UTexturePaintToolset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexturePaintToolset);
	UTexturePaintToolset::~UTexturePaintToolset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexturePaintToolset, UTexturePaintToolset::StaticClass, TEXT("UTexturePaintToolset"), &Z_Registration_Info_UClass_UTexturePaintToolset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexturePaintToolset), 2071973756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_1940611430(TEXT("/Script/MeshPaintingToolset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MeshPainting_Source_MeshPaintingToolset_Public_TexturePaintToolset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
