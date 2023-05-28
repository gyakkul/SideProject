// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/TileSetEditor/TileSheetPaddingFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileSheetPaddingFactory() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTileSet_NoRegister();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileSheetPaddingFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileSheetPaddingFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UTileSheetPaddingFactory::StaticRegisterNativesUTileSheetPaddingFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileSheetPaddingFactory);
	UClass* Z_Construct_UClass_UTileSheetPaddingFactory_NoRegister()
	{
		return UTileSheetPaddingFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTileSheetPaddingFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTileSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTileSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtrusionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ExtrusionAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPadToPowerOf2_MetaData[];
#endif
		static void NewProp_bPadToPowerOf2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPadToPowerOf2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillWithTransparentBlack_MetaData[];
#endif
		static void NewProp_bFillWithTransparentBlack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillWithTransparentBlack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileSheetPaddingFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSheetPaddingFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory used to pad out each individual tile in a tile sheet texture\n */" },
		{ "IncludePath", "TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ToolTip", "Factory used to pad out each individual tile in a tile sheet texture" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_SourceTileSet_MetaData[] = {
		{ "Comment", "// Source tile sheet texture\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ToolTip", "Source tile sheet texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_SourceTileSet = { "SourceTileSet", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileSheetPaddingFactory, SourceTileSet), Z_Construct_UClass_UPaperTileSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_SourceTileSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_SourceTileSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_ExtrusionAmount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "// The amount to extrude out from each tile (in pixels)\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ToolTip", "The amount to extrude out from each tile (in pixels)" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_ExtrusionAmount = { "ExtrusionAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileSheetPaddingFactory, ExtrusionAmount), METADATA_PARAMS(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_ExtrusionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_ExtrusionAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should we pad the texture to the next power of 2?\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ToolTip", "Should we pad the texture to the next power of 2?" },
	};
#endif
	void Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2_SetBit(void* Obj)
	{
		((UTileSheetPaddingFactory*)Obj)->bPadToPowerOf2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2 = { "bPadToPowerOf2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileSheetPaddingFactory), &Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should we use transparent black or white when filling the texture areas that aren't covered by tiles?\n" },
		{ "ModuleRelativePath", "Private/TileSetEditor/TileSheetPaddingFactory.h" },
		{ "ToolTip", "Should we use transparent black or white when filling the texture areas that aren't covered by tiles?" },
	};
#endif
	void Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack_SetBit(void* Obj)
	{
		((UTileSheetPaddingFactory*)Obj)->bFillWithTransparentBlack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack = { "bFillWithTransparentBlack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileSheetPaddingFactory), &Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileSheetPaddingFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_SourceTileSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_ExtrusionAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bPadToPowerOf2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileSheetPaddingFactory_Statics::NewProp_bFillWithTransparentBlack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileSheetPaddingFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileSheetPaddingFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileSheetPaddingFactory_Statics::ClassParams = {
		&UTileSheetPaddingFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileSheetPaddingFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSheetPaddingFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileSheetPaddingFactory()
	{
		if (!Z_Registration_Info_UClass_UTileSheetPaddingFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileSheetPaddingFactory.OuterSingleton, Z_Construct_UClass_UTileSheetPaddingFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileSheetPaddingFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTileSheetPaddingFactory>()
	{
		return UTileSheetPaddingFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileSheetPaddingFactory);
	UTileSheetPaddingFactory::~UTileSheetPaddingFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSheetPaddingFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSheetPaddingFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileSheetPaddingFactory, UTileSheetPaddingFactory::StaticClass, TEXT("UTileSheetPaddingFactory"), &Z_Registration_Info_UClass_UTileSheetPaddingFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileSheetPaddingFactory), 2842656919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSheetPaddingFactory_h_1886897756(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSheetPaddingFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_TileSetEditor_TileSheetPaddingFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
