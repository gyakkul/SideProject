// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTileMapPromotionFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMapPromotionFactory() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileMap_NoRegister();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileMapPromotionFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileMapPromotionFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperTileMapPromotionFactory::StaticRegisterNativesUPaperTileMapPromotionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileMapPromotionFactory);
	UClass* Z_Construct_UClass_UPaperTileMapPromotionFactory_NoRegister()
	{
		return UPaperTileMapPromotionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetToRename_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetToRename;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperTileMapPromotionFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMapPromotionFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::NewProp_AssetToRename_MetaData[] = {
		{ "Comment", "// Object being promoted to an asset\n" },
		{ "ModuleRelativePath", "Classes/PaperTileMapPromotionFactory.h" },
		{ "ToolTip", "Object being promoted to an asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::NewProp_AssetToRename = { "AssetToRename", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperTileMapPromotionFactory, AssetToRename), Z_Construct_UClass_UPaperTileMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::NewProp_AssetToRename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::NewProp_AssetToRename_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::NewProp_AssetToRename,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileMapPromotionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::ClassParams = {
		&UPaperTileMapPromotionFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileMapPromotionFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperTileMapPromotionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileMapPromotionFactory.OuterSingleton, Z_Construct_UClass_UPaperTileMapPromotionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTileMapPromotionFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperTileMapPromotionFactory>()
	{
		return UPaperTileMapPromotionFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileMapPromotionFactory);
	UPaperTileMapPromotionFactory::~UPaperTileMapPromotionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapPromotionFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapPromotionFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileMapPromotionFactory, UPaperTileMapPromotionFactory::StaticClass, TEXT("UPaperTileMapPromotionFactory"), &Z_Registration_Info_UClass_UPaperTileMapPromotionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileMapPromotionFactory), 3426139208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapPromotionFactory_h_3270035273(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapPromotionFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapPromotionFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
