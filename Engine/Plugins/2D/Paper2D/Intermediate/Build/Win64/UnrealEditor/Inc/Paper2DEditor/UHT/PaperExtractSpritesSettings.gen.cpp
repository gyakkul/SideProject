// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ExtractSprites/PaperExtractSpritesSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperExtractSpritesSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperExtractSpriteGridSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperExtractSpriteGridSettings_NoRegister();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperExtractSpritesSettings();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperExtractSpritesSettings_NoRegister();
	PAPER2DEDITOR_API UEnum* Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpriteExtractMode;
	static UEnum* ESpriteExtractMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpriteExtractMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpriteExtractMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode, (UObject*)Z_Construct_UPackage__Script_Paper2DEditor(), TEXT("ESpriteExtractMode"));
		}
		return Z_Registration_Info_UEnum_ESpriteExtractMode.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UEnum* StaticEnum<ESpriteExtractMode>()
	{
		return ESpriteExtractMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enumerators[] = {
		{ "ESpriteExtractMode::Auto", (int64)ESpriteExtractMode::Auto },
		{ "ESpriteExtractMode::Grid", (int64)ESpriteExtractMode::Grid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Automatically extract sprites by detecting using alpha */" },
		{ "Auto.Name", "ESpriteExtractMode::Auto" },
		{ "Auto.ToolTip", "Automatically extract sprites by detecting using alpha" },
		{ "Grid.Comment", "/** Extract sprites in a grid defined in the properties below */" },
		{ "Grid.Name", "ESpriteExtractMode::Grid" },
		{ "Grid.ToolTip", "Extract sprites in a grid defined in the properties below" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2DEditor,
		nullptr,
		"ESpriteExtractMode",
		"ESpriteExtractMode",
		Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode()
	{
		if (!Z_Registration_Info_UEnum_ESpriteExtractMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpriteExtractMode.InnerSingleton, Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpriteExtractMode.InnerSingleton;
	}
	void UPaperExtractSpritesSettings::StaticRegisterNativesUPaperExtractSpritesSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperExtractSpritesSettings);
	UClass* Z_Construct_UClass_UPaperExtractSpritesSettings_NoRegister()
	{
		return UPaperExtractSpritesSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaperExtractSpritesSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpriteExtractMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteExtractMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SpriteExtractMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportTextureTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportTextureTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamingTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamingTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamingStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NamingStartIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Sprite extract mode\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Sprite extract mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode = { "SpriteExtractMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, SpriteExtractMode), Z_Construct_UEnum_Paper2DEditor_ESpriteExtractMode, METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode_MetaData)) }; // 3893174936
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_OutlineColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The color of the sprite boundary outlines\n" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The color of the sprite boundary outlines" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_OutlineColor = { "OutlineColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, OutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_OutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_OutlineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_ViewportTextureTint_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Apply a tint to the texture in the viewport to improve outline visibility in this editor\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Apply a tint to the texture in the viewport to improve outline visibility in this editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_ViewportTextureTint = { "ViewportTextureTint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, ViewportTextureTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_ViewportTextureTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_ViewportTextureTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The viewport background color\n" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The viewport background color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingTemplate_MetaData[] = {
		{ "Category", "Naming" },
		{ "Comment", "// The name of the sprite that will be created. {0} will get replaced by the sprite number.\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The name of the sprite that will be created. {0} will get replaced by the sprite number." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingTemplate = { "NamingTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, NamingTemplate), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingStartIndex_MetaData[] = {
		{ "Category", "Naming" },
		{ "Comment", "// The number to start naming with\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The number to start naming with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingStartIndex = { "NamingStartIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpritesSettings, NamingStartIndex), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingStartIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_SpriteExtractMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_OutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_ViewportTextureTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::NewProp_NamingStartIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperExtractSpritesSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::ClassParams = {
		&UPaperExtractSpritesSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperExtractSpritesSettings()
	{
		if (!Z_Registration_Info_UClass_UPaperExtractSpritesSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperExtractSpritesSettings.OuterSingleton, Z_Construct_UClass_UPaperExtractSpritesSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperExtractSpritesSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperExtractSpritesSettings>()
	{
		return UPaperExtractSpritesSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperExtractSpritesSettings);
	UPaperExtractSpritesSettings::~UPaperExtractSpritesSettings() {}
	void UPaperExtractSpriteGridSettings::StaticRegisterNativesUPaperExtractSpriteGridSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperExtractSpriteGridSettings);
	UClass* Z_Construct_UClass_UPaperExtractSpriteGridSettings_NoRegister()
	{
		return UPaperExtractSpriteGridSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCellsY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCellsY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MarginX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarginY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MarginY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpacingX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpacingY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellWidth_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "Comment", "// The width of each sprite in grid mode\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The width of each sprite in grid mode" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellWidth = { "CellWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, CellWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellHeight_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "1" },
		{ "Comment", "// The height of each sprite in grid mode\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "The height of each sprite in grid mode" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellHeight = { "CellHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, CellHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsX_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of cells extracted horizontally. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Number of cells extracted horizontally. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsX = { "NumCellsX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, NumCellsX), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Number of cells extracted vertically. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Number of cells extracted vertically. Can be used to limit the number of sprites extracted. Set to 0 to extract all sprites" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsY = { "NumCellsY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, NumCellsY), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginX_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Margin from the left of the texture to the first sprite\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Margin from the left of the texture to the first sprite" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginX = { "MarginX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, MarginX), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Margin from the top of the texture to the first sprite\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Margin from the top of the texture to the first sprite" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginY = { "MarginY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, MarginY), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingX_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Horizontal spacing between sprites\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Horizontal spacing between sprites" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingX = { "SpacingX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, SpacingX), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingY_MetaData[] = {
		{ "Category", "Grid" },
		{ "ClampMin", "0" },
		{ "Comment", "// Vertical spacing between sprites\n" },
		{ "ModuleRelativePath", "Private/ExtractSprites/PaperExtractSpritesSettings.h" },
		{ "ToolTip", "Vertical spacing between sprites" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingY = { "SpacingY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperExtractSpriteGridSettings, SpacingY), METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_CellHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_NumCellsY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_MarginY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::NewProp_SpacingY,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperExtractSpriteGridSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::ClassParams = {
		&UPaperExtractSpriteGridSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperExtractSpriteGridSettings()
	{
		if (!Z_Registration_Info_UClass_UPaperExtractSpriteGridSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperExtractSpriteGridSettings.OuterSingleton, Z_Construct_UClass_UPaperExtractSpriteGridSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperExtractSpriteGridSettings.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperExtractSpriteGridSettings>()
	{
		return UPaperExtractSpriteGridSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperExtractSpriteGridSettings);
	UPaperExtractSpriteGridSettings::~UPaperExtractSpriteGridSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::EnumInfo[] = {
		{ ESpriteExtractMode_StaticEnum, TEXT("ESpriteExtractMode"), &Z_Registration_Info_UEnum_ESpriteExtractMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3893174936U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperExtractSpritesSettings, UPaperExtractSpritesSettings::StaticClass, TEXT("UPaperExtractSpritesSettings"), &Z_Registration_Info_UClass_UPaperExtractSpritesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperExtractSpritesSettings), 491678655U) },
		{ Z_Construct_UClass_UPaperExtractSpriteGridSettings, UPaperExtractSpriteGridSettings::StaticClass, TEXT("UPaperExtractSpriteGridSettings"), &Z_Registration_Info_UClass_UPaperExtractSpriteGridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperExtractSpriteGridSettings), 2876165824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_2532958856(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_ExtractSprites_PaperExtractSpritesSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
