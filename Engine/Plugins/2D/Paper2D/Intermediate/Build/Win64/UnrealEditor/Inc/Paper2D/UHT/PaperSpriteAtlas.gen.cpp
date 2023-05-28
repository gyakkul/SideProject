// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteAtlas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteAtlas() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister();
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot;
class UScriptStruct* FPaperSpriteAtlasSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperSpriteAtlasSlot"));
	}
	return Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperSpriteAtlasSlot>()
{
	return FPaperSpriteAtlasSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteRef_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SpriteRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AtlasIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperSpriteAtlasSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef = { "SpriteRef", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, SpriteRef), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex = { "AtlasIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, AtlasIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperSpriteAtlasSlot",
		sizeof(FPaperSpriteAtlasSlot),
		alignof(FPaperSpriteAtlasSlot),
		Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding;
	static UEnum* EPaperSpriteAtlasPadding_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("EPaperSpriteAtlasPadding"));
		}
		return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.OuterSingleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<EPaperSpriteAtlasPadding>()
	{
		return EPaperSpriteAtlasPadding_StaticEnum();
	}
	struct Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enumerators[] = {
		{ "EPaperSpriteAtlasPadding::DilateBorder", (int64)EPaperSpriteAtlasPadding::DilateBorder },
		{ "EPaperSpriteAtlasPadding::PadWithZero", (int64)EPaperSpriteAtlasPadding::PadWithZero },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enum_MetaDataParams[] = {
		{ "DilateBorder.Comment", "/** Dilate the texture to pad the atlas. */" },
		{ "DilateBorder.Name", "EPaperSpriteAtlasPadding::DilateBorder" },
		{ "DilateBorder.ToolTip", "Dilate the texture to pad the atlas." },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "PadWithZero.Comment", "/** Padding border filled with zeros. */" },
		{ "PadWithZero.Name", "EPaperSpriteAtlasPadding::PadWithZero" },
		{ "PadWithZero.ToolTip", "Padding border filled with zeros." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		"EPaperSpriteAtlasPadding",
		"EPaperSpriteAtlasPadding",
		Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding()
	{
		if (!Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton, Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding.InnerSingleton;
	}
	void UPaperSpriteAtlas::StaticRegisterNativesUPaperSpriteAtlas()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteAtlas);
	UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister()
	{
		return UPaperSpriteAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AtlasDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MipCount;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PaddingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PaddingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Filter;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasGUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasGUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtlas_MetaData[];
#endif
		static void NewProp_bRebuildAtlas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtlas;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AtlasSlots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumIncrementalBuilds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumIncrementalBuilds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltPadding_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BuiltPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSpriteAtlas.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Description of this atlas, which shows up in the content browser tooltip\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Description of this atlas, which shows up in the content browser tooltip" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription = { "AtlasDescription", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasDescription), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page width (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page width (single pages might be smaller)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, MaxWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount = { "MipCount", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, MipCount), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The type of padding performed on this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The type of padding performed on this atlas" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType = { "PaddingType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, PaddingType), Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData)) }; // 1005249885
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The number of pixels of padding\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The number of pixels of padding" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, Padding), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Compression settings to use on atlas texture\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Compression settings to use on atlas texture" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData)) }; // 3296291951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Texture filtering mode when sampling these textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Texture filtering mode when sampling these textures" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData)) }; // 1243172109
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0004000800020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// List of generated atlas textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "List of generated atlas textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0014000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, GeneratedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID = { "AtlasGUID", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
#endif
	void Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit(void* Obj)
	{
		((UPaperSpriteAtlas*)Obj)->bRebuildAtlas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas = { "bRebuildAtlas", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPaperSpriteAtlas), &Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner = { "AtlasSlots", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, METADATA_PARAMS(nullptr, 0) }; // 2083667832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData[] = {
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots = { "AtlasSlots", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData)) }; // 2083667832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData[] = {
		{ "Comment", "// Track the number of incremental builds\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Track the number of incremental builds" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds = { "NumIncrementalBuilds", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, NumIncrementalBuilds), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData[] = {
		{ "Comment", "// Values used when building this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Values used when building this atlas" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth = { "BuiltWidth", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight = { "BuiltHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding = { "BuiltPadding", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltPadding), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteAtlas>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams = {
		&UPaperSpriteAtlas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers), 0),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteAtlas()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton, Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteAtlas.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperSpriteAtlas>()
	{
		return UPaperSpriteAtlas::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteAtlas);
	UPaperSpriteAtlas::~UPaperSpriteAtlas() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::EnumInfo[] = {
		{ EPaperSpriteAtlasPadding_StaticEnum, TEXT("EPaperSpriteAtlasPadding"), &Z_Registration_Info_UEnum_EPaperSpriteAtlasPadding, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1005249885U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ScriptStructInfo[] = {
		{ FPaperSpriteAtlasSlot::StaticStruct, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewStructOps, TEXT("PaperSpriteAtlasSlot"), &Z_Registration_Info_UScriptStruct_PaperSpriteAtlasSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperSpriteAtlasSlot), 2083667832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteAtlas, UPaperSpriteAtlas::StaticClass, TEXT("UPaperSpriteAtlas"), &Z_Registration_Info_UClass_UPaperSpriteAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteAtlas), 1563994034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_1366795430(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperSpriteAtlas_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
