// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraBakerOutputTexture2D.h"
#include "../Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerOutputTexture2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraBakerOutputTexture2D::StaticRegisterNativesUNiagaraBakerOutputTexture2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerOutputTexture2D);
	UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D_NoRegister()
	{
		return UNiagaraBakerOutputTexture2D::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateAtlas_MetaData[];
#endif
		static void NewProp_bGenerateAtlas_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateAtlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateFrames_MetaData[];
#endif
		static void NewProp_bGenerateFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportFrames_MetaData[];
#endif
		static void NewProp_bExportFrames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetTextureAddressX_MetaData[];
#endif
		static void NewProp_bSetTextureAddressX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTextureAddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetTextureAddressY_MetaData[];
#endif
		static void NewProp_bSetTextureAddressY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetTextureAddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureAddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureAddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureAddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AtlasAssetPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AtlasAssetPathFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesAssetPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesAssetPathFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesExportPathFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FramesExportPathFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraBakerOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Texture 2D Output" },
		{ "IncludePath", "NiagaraBakerOutputTexture2D.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Source visualization we should capture, i.e. Scene Color, World Normal, etc */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Source visualization we should capture, i.e. Scene Color, World Normal, etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding_MetaData)) }; // 3396379681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputTexture2D*)Obj)->bGenerateAtlas = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas = { "bGenerateAtlas", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputTexture2D*)Obj)->bGenerateFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames = { "bGenerateFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputTexture2D*)Obj)->bExportFrames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames = { "bExportFrames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputTexture2D*)Obj)->bSetTextureAddressX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX = { "bSetTextureAddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_MetaData[] = {
		{ "Category", "Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_SetBit(void* Obj)
	{
		((UNiagaraBakerOutputTexture2D*)Obj)->bSetTextureAddressY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY = { "bSetTextureAddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerOutputTexture2D), &Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Size of each frame we generate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Size of each frame we generate." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Size of the atlas texture when generating an atlas. */" },
		{ "EditCondition", "bGenerateAtlas" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "Size of the atlas texture when generating an atlas." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize = { "AtlasTextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, AtlasTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** After baking sets the texture address mode to use on the X axis. */" },
		{ "EditCondition", "bSetTextureAddressX" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "After baking sets the texture address mode to use on the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX = { "TextureAddressX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, TextureAddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** After baking sets the texture address mode to use on the Y axis. */" },
		{ "EditCondition", "bSetTextureAddressY" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "After baking sets the texture address mode to use on the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY = { "TextureAddressY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, TextureAddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled a texture atlas is created\n\x09*/" },
		{ "EditCondition", "bGenerateAtlas" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled a texture atlas is created" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat = { "AtlasAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, AtlasAssetPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will create an asset.\n\x09*/" },
		{ "EditCondition", "bGenerateFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled each frame will create an asset." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat = { "FramesAssetPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FramesAssetPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09When enabled each frame will be exported to the output path using the format extension.\n\x09*/" },
		{ "EditCondition", "bExportFrames" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerOutputTexture2D.h" },
		{ "ToolTip", "When enabled each frame will be exported to the output path using the format extension." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat = { "FramesExportPathFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerOutputTexture2D, FramesExportPathFormat), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_SourceBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bGenerateFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bExportFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_bSetTextureAddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_TextureAddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_AtlasAssetPathFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesAssetPathFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::NewProp_FramesExportPathFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerOutputTexture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::ClassParams = {
		&UNiagaraBakerOutputTexture2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerOutputTexture2D()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton, Z_Construct_UClass_UNiagaraBakerOutputTexture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerOutputTexture2D>()
	{
		return UNiagaraBakerOutputTexture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerOutputTexture2D);
	UNiagaraBakerOutputTexture2D::~UNiagaraBakerOutputTexture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerOutputTexture2D, UNiagaraBakerOutputTexture2D::StaticClass, TEXT("UNiagaraBakerOutputTexture2D"), &Z_Registration_Info_UClass_UNiagaraBakerOutputTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerOutputTexture2D), 917747694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_3351565853(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerOutputTexture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
