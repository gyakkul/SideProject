// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2D() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureRenderTargetFormat;
	static UEnum* ETextureRenderTargetFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureRenderTargetFormat"));
		}
		return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureRenderTargetFormat>()
	{
		return ETextureRenderTargetFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enumerators[] = {
		{ "RTF_R8", (int64)RTF_R8 },
		{ "RTF_RG8", (int64)RTF_RG8 },
		{ "RTF_RGBA8", (int64)RTF_RGBA8 },
		{ "RTF_RGBA8_SRGB", (int64)RTF_RGBA8_SRGB },
		{ "RTF_R16f", (int64)RTF_R16f },
		{ "RTF_RG16f", (int64)RTF_RG16f },
		{ "RTF_RGBA16f", (int64)RTF_RGBA16f },
		{ "RTF_R32f", (int64)RTF_R32f },
		{ "RTF_RG32f", (int64)RTF_RG32f },
		{ "RTF_RGBA32f", (int64)RTF_RGBA32f },
		{ "RTF_RGB10A2", (int64)RTF_RGB10A2 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Subset of EPixelFormat exposed to UTextureRenderTarget2D */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "RTF_R16f.Comment", "/** R channel, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_R16f.Name", "RTF_R16f" },
		{ "RTF_R16f.ToolTip", "R channel, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_R32f.Comment", "/** R channel, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_R32f.Name", "RTF_R32f" },
		{ "RTF_R32f.ToolTip", "R channel, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_R8.Comment", "/** R channel, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_R8.Name", "RTF_R8" },
		{ "RTF_R8.ToolTip", "R channel, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RG16f.Comment", "/** RG channels, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_RG16f.Name", "RTF_RG16f" },
		{ "RTF_RG16f.ToolTip", "RG channels, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_RG32f.Comment", "/** RG channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_RG32f.Name", "RTF_RG32f" },
		{ "RTF_RG32f.ToolTip", "RG channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_RG8.Comment", "/** RG channels, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_RG8.Name", "RTF_RG8" },
		{ "RTF_RG8.ToolTip", "RG channels, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RGB10A2.Comment", "/** RGBA channels, 10 bit per channel fixed point and 2 bit of alpha */" },
		{ "RTF_RGB10A2.Name", "RTF_RGB10A2" },
		{ "RTF_RGB10A2.ToolTip", "RGBA channels, 10 bit per channel fixed point and 2 bit of alpha" },
		{ "RTF_RGBA16f.Comment", "/** RGBA channels, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_RGBA16f.Name", "RTF_RGBA16f" },
		{ "RTF_RGBA16f.ToolTip", "RGBA channels, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_RGBA32f.Comment", "/** RGBA channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_RGBA32f.Name", "RTF_RGBA32f" },
		{ "RTF_RGBA32f.ToolTip", "RGBA channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_RGBA8.Comment", "/** RGBA channels, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_RGBA8.Name", "RTF_RGBA8" },
		{ "RTF_RGBA8.ToolTip", "RGBA channels, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RGBA8_SRGB.Comment", "/** RGBA channels, 8 bit per channel fixed point, range [0, 1]. RGB is encoded with sRGB gamma curve. A is always stored as linear. */" },
		{ "RTF_RGBA8_SRGB.Name", "RTF_RGBA8_SRGB" },
		{ "RTF_RGBA8_SRGB.ToolTip", "RGBA channels, 8 bit per channel fixed point, range [0, 1]. RGB is encoded with sRGB gamma curve. A is always stored as linear." },
		{ "ToolTip", "Subset of EPixelFormat exposed to UTextureRenderTarget2D" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureRenderTargetFormat",
		"ETextureRenderTargetFormat",
		Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat()
	{
		if (!Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton, Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton;
	}
	void UTextureRenderTarget2D::StaticRegisterNativesUTextureRenderTarget2D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget2D);
	UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister()
	{
		return UTextureRenderTarget2D::StaticClass();
	}
	struct Z_Construct_UClass_UTextureRenderTarget2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[];
#endif
		static void NewProp_bForceLinearGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[];
#endif
		static void NewProp_bHDR_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGPUSharedFlag_MetaData[];
#endif
		static void NewProp_bGPUSharedFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGPUSharedFlag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateMips_MetaData[];
#endif
		static void NewProp_bAutoGenerateMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsSamplerFilter_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsSamplerFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressU_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressV_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureRenderTarget2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTarget2D\n *\n * 2D render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular 2D texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/TextureRenderTarget2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "TextureRenderTarget2D\n\n2D render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular 2D texture resource." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The width of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The width of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, SizeX), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The height of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The height of the texture." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, SizeY), METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bForceLinearGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData[] = {
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bHDR_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Whether to support GPU sharing of the underlying native texture resource. */" },
		{ "DisplayName", "Shared" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support GPU sharing of the underlying native texture resource." },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bGPUSharedFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag = { "bGPUSharedFlag", nullptr, (EPropertyFlags)0x0010050000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** \n\x09 * Format of the texture render target. \n\x09 * Data written to the render target will be quantized to this format, which can limit the range and precision.\n\x09 * The largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance.  \n\x09 * Use the smallest format that has enough precision and range for what you are doing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Format of the texture render target.\nData written to the render target will be quantized to this format, which can limit the range and precision.\nThe largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance.\nUse the smallest format that has enough precision and range for what you are doing." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat = { "RenderTargetFormat", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, RenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat_MetaData)) }; // 1004718673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Whether to support Mip maps for this render target texture */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support Mip maps for this render target texture" },
	};
#endif
	void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit(void* Obj)
	{
		((UTextureRenderTarget2D*)Obj)->bAutoGenerateMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips = { "bAutoGenerateMips", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Sampler filter type for AutoGenerateMips. Defaults to match texture filter. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Sampler filter type for AutoGenerateMips. Defaults to match texture filter." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter = { "MipsSamplerFilter", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, MipsSamplerFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter_MetaData)) }; // 1243172109
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/**  AutoGenerateMips sampler address mode for U channel. Defaults to clamp. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for U channel. Defaults to clamp." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU = { "MipsAddressU", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, MipsAddressU), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/**  AutoGenerateMips sampler address mode for V channel. Defaults to clamp. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for V channel. Defaults to clamp." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV = { "MipsAddressV", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, MipsAddressV), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureRenderTarget2D, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat_MetaData)) }; // 2651536151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureRenderTarget2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams = {
		&UTextureRenderTarget2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureRenderTarget2D()
	{
		if (!Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget2D>()
	{
		return UTextureRenderTarget2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2D);
	UTextureRenderTarget2D::~UTextureRenderTarget2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureRenderTarget2D)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::EnumInfo[] = {
		{ ETextureRenderTargetFormat_StaticEnum, TEXT("ETextureRenderTargetFormat"), &Z_Registration_Info_UEnum_ETextureRenderTargetFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1004718673U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget2D, UTextureRenderTarget2D::StaticClass, TEXT("UTextureRenderTarget2D"), &Z_Registration_Info_UClass_UTextureRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget2D), 2378687147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_761512458(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
