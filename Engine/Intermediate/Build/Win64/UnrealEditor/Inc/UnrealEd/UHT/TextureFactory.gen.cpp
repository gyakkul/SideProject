// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/TextureFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureFactory() {}
// Cross Module References
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAppReturnType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
	UNREALED_API UClass* Z_Construct_UClass_UTextureFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UUDIMTextureFunctionLibrary();
	UNREALED_API UClass* Z_Construct_UClass_UUDIMTextureFunctionLibrary_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureSourceColorSpace;
	static UEnum* ETextureSourceColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureSourceColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ETextureSourceColorSpace"));
		}
		return Z_Registration_Info_UEnum_ETextureSourceColorSpace.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ETextureSourceColorSpace>()
	{
		return ETextureSourceColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enumerators[] = {
		{ "ETextureSourceColorSpace::Auto", (int64)ETextureSourceColorSpace::Auto },
		{ "ETextureSourceColorSpace::Linear", (int64)ETextureSourceColorSpace::Linear },
		{ "ETextureSourceColorSpace::SRGB", (int64)ETextureSourceColorSpace::SRGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** Auto lets the texture factory figure out in what color space the source image is in. */" },
		{ "Auto.Name", "ETextureSourceColorSpace::Auto" },
		{ "Auto.ToolTip", "Auto lets the texture factory figure out in what color space the source image is in." },
		{ "Linear.Name", "ETextureSourceColorSpace::Linear" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "SRGB.Name", "ETextureSourceColorSpace::SRGB" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ETextureSourceColorSpace",
		"ETextureSourceColorSpace",
		Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace()
	{
		if (!Z_Registration_Info_UEnum_ETextureSourceColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureSourceColorSpace.InnerSingleton, Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureSourceColorSpace.InnerSingleton;
	}
	void UTextureFactory::StaticRegisterNativesUTextureFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureFactory);
	UClass* Z_Construct_UClass_UTextureFactory_NoRegister()
	{
		return UTextureFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTextureFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoCompression_MetaData[];
#endif
		static void NewProp_NoCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NoCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoAlpha_MetaData[];
#endif
		static void NewProp_NoAlpha_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NoAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeferCompression_MetaData[];
#endif
		static void NewProp_bDeferCompression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferCompression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateMaterial_MetaData[];
#endif
		static void NewProp_bCreateMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRGBToBaseColor_MetaData[];
#endif
		static void NewProp_bRGBToBaseColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRGBToBaseColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRGBToEmissive_MetaData[];
#endif
		static void NewProp_bRGBToEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRGBToEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaToRoughness_MetaData[];
#endif
		static void NewProp_bAlphaToRoughness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaToRoughness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaToEmissive_MetaData[];
#endif
		static void NewProp_bAlphaToEmissive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaToEmissive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaToOpacity_MetaData[];
#endif
		static void NewProp_bAlphaToOpacity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaToOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaToOpacityMask_MetaData[];
#endif
		static void NewProp_bAlphaToOpacityMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaToOpacityMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTwoSided_MetaData[];
#endif
		static void NewProp_bTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blending_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Blending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroup_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoScaleMipsForAlphaCoverage_MetaData[];
#endif
		static void NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoScaleMipsForAlphaCoverage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNewMipFilter_MetaData[];
#endif
		static void NewProp_bUseNewMipFilter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNewMipFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCoverageThresholds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCoverageThresholds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreserveBorder_MetaData[];
#endif
		static void NewProp_bPreserveBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreserveBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipNormalMapGreenChannel_MetaData[];
#endif
		static void NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipNormalMapGreenChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingExistingSettings_MetaData[];
#endif
		static void NewProp_bUsingExistingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingExistingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseHashAsGuid_MetaData[];
#endif
		static void NewProp_bUseHashAsGuid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHashAsGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UdimRegexPattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UdimRegexPattern;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColorSpaceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpaceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HDRImportShouldBeLongLatCubeMap_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HDRImportShouldBeLongLatCubeMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/TextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->NoCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression = { "NoCompression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the texture's alpha channel will be discarded during compression" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->NoAlpha = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha = { "NoAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, compression is deferred until the texture is saved" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bDeferCompression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression = { "bDeferCompression", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Compression settings for the texture" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings_MetaData)) }; // 3296291951
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData[] = {
		{ "Category", "TextureFactory" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, a material will automatically be created for the texture" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bCreateMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial = { "bCreateMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture to the created material's base color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bRGBToBaseColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor = { "bRGBToBaseColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture to the created material's emissive color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bRGBToEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive = { "bRGBToEmissive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's roughness" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToRoughness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness = { "bAlphaToRoughness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's emissive color" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToEmissive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive = { "bAlphaToEmissive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's opacity" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToOpacity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity = { "bAlphaToOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, link the texture's alpha to the created material's opacity mask" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bAlphaToOpacityMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask = { "bAlphaToOpacityMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the created material will be two-sided" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided = { "bTwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The blend mode of the created material" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending = { "Blending", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, Blending), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending_MetaData)) }; // 799871737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData[] = {
		{ "Category", "CreateMaterial" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The shading model of the created material" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel_MetaData)) }; // 3734556393
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "Category", "TextureFactory" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The mip-map generation settings for the texture; Allows customization of the content of the mip-map chain" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings_MetaData)) }; // 3224170763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData[] = {
		{ "Category", "LODGroup" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The group the texture belongs to" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup = { "LODGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, LODGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData[] = {
		{ "Category", "PreserveAlphaCoverage" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Whether mip RGBA should be scaled to preserve the number of pixels with Value >= AlphaCoverageThresholds" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bDoScaleMipsForAlphaCoverage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage = { "bDoScaleMipsForAlphaCoverage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter_MetaData[] = {
		{ "Category", "TextureFactory" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Whether to use newer & faster mip generation filter" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bUseNewMipFilter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter = { "bUseNewMipFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData[] = {
		{ "Category", "PreserveAlphaCoverage" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Channel values to compare to when preserving alpha coverage from a mask for mips" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds = { "AlphaCoverageThresholds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, AlphaCoverageThresholds), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData[] = {
		{ "Category", "PreserveBorder" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, preserve the value of border pixels when creating mip-maps" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bPreserveBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder = { "bPreserveBorder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData[] = {
		{ "Category", "NormalMap" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, the texture's green channel will be inverted. This is useful for some normal maps" },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bFlipNormalMapGreenChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel = { "bFlipNormalMapGreenChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData[] = {
		{ "Comment", "/** If enabled, we are using the existing settings for a texture that already existed. */" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, we are using the existing settings for a texture that already existed." },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bUsingExistingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings = { "bUsingExistingSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid_MetaData[] = {
		{ "Comment", "/** If enabled, we are using the texture content hash as the guid. */" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "If enabled, we are using the texture content hash as the guid." },
	};
#endif
	void Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid_SetBit(void* Obj)
	{
		((UTextureFactory*)Obj)->bUseHashAsGuid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid = { "bUseHashAsGuid", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextureFactory), &Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_UdimRegexPattern_MetaData[] = {
		{ "Comment", "/**\n\x09 * The pattern to use to match UDIM files to indices. Defaults to match a filename that ends with either .1001 or _1001\n\x09 * This 1st and 3rd (optional) capture groups are used as the texture name. The 2nd capture group is considered to be the UDIM index.\n\x09 * ie: (Capture Group 1)(\\d{4})( Capture Group 3)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "The pattern to use to match UDIM files to indices. Defaults to match a filename that ends with either .1001 or _1001\nThis 1st and 3rd (optional) capture groups are used as the texture name. The 2nd capture group is considered to be the UDIM index.\nie: (Capture Group 1)(\\d{4})( Capture Group 3)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_UdimRegexPattern = { "UdimRegexPattern", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, UdimRegexPattern), METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_UdimRegexPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_UdimRegexPattern_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode_MetaData[] = {
		{ "Comment", "/** Mode for how to determine the color space of the source image. Auto will let the factory decide based on header metadata or bit depth. Linear or SRGB will force the color space on the resulting texture. */" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Mode for how to determine the color space of the source image. Auto will let the factory decide based on header metadata or bit depth. Linear or SRGB will force the color space on the resulting texture." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode = { "ColorSpaceMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, ColorSpaceMode), Z_Construct_UEnum_UnrealEd_ETextureSourceColorSpace, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode_MetaData)) }; // 934319745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureFactory_Statics::NewProp_HDRImportShouldBeLongLatCubeMap_MetaData[] = {
		{ "Comment", "/* Store YesAll/NoAll responses: */" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Store YesAll/NoAll responses:" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureFactory_Statics::NewProp_HDRImportShouldBeLongLatCubeMap = { "HDRImportShouldBeLongLatCubeMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureFactory, HDRImportShouldBeLongLatCubeMap), Z_Construct_UEnum_CoreUObject_EAppReturnType, METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::NewProp_HDRImportShouldBeLongLatCubeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::NewProp_HDRImportShouldBeLongLatCubeMap_MetaData)) }; // 2973043059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_NoAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDeferCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_CompressionSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bCreateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToBaseColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bRGBToEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToRoughness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToEmissive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bAlphaToOpacityMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_Blending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_MipGenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_LODGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bDoScaleMipsForAlphaCoverage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseNewMipFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_AlphaCoverageThresholds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bPreserveBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bFlipNormalMapGreenChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUsingExistingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_bUseHashAsGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_UdimRegexPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_ColorSpaceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureFactory_Statics::NewProp_HDRImportShouldBeLongLatCubeMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureFactory_Statics::ClassParams = {
		&UTextureFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureFactory()
	{
		if (!Z_Registration_Info_UClass_UTextureFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureFactory.OuterSingleton, Z_Construct_UClass_UTextureFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextureFactory>()
	{
		return UTextureFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureFactory);
	UTextureFactory::~UTextureFactory() {}
	DEFINE_FUNCTION(UUDIMTextureFunctionLibrary::execMakeUDIMVirtualTextureFromTexture2Ds)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_OutputPathName);
		P_GET_TARRAY_REF(UTexture2D*,Z_Param_Out_SourceTextures);
		P_GET_TARRAY_REF(FIntPoint,Z_Param_Out_BlockCoords);
		P_GET_UBOOL(Z_Param_bKeepExistingSettings);
		P_GET_UBOOL(Z_Param_bCheckOutAndSave);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UUDIMTextureFunctionLibrary::MakeUDIMVirtualTextureFromTexture2Ds(Z_Param_OutputPathName,Z_Param_Out_SourceTextures,Z_Param_Out_BlockCoords,Z_Param_bKeepExistingSettings,Z_Param_bCheckOutAndSave);
		P_NATIVE_END;
	}
	void UUDIMTextureFunctionLibrary::StaticRegisterNativesUUDIMTextureFunctionLibrary()
	{
		UClass* Class = UUDIMTextureFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeUDIMVirtualTextureFromTexture2Ds", &UUDIMTextureFunctionLibrary::execMakeUDIMVirtualTextureFromTexture2Ds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics
	{
		struct UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms
		{
			FString OutputPathName;
			TArray<UTexture2D*> SourceTextures;
			TArray<FIntPoint> BlockCoords;
			bool bKeepExistingSettings;
			bool bCheckOutAndSave;
			UTexture2D* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputPathName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockCoords_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockCoords_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlockCoords;
		static void NewProp_bKeepExistingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepExistingSettings;
		static void NewProp_bCheckOutAndSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOutAndSave;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_OutputPathName = { "OutputPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms, OutputPathName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures_Inner = { "SourceTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures = { "SourceTextures", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms, SourceTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords_Inner = { "BlockCoords", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords = { "BlockCoords", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms, BlockCoords), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords_MetaData)) };
	void Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bKeepExistingSettings_SetBit(void* Obj)
	{
		((UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms*)Obj)->bKeepExistingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bKeepExistingSettings = { "bKeepExistingSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms), &Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bKeepExistingSettings_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bCheckOutAndSave_SetBit(void* Obj)
	{
		((UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms*)Obj)->bCheckOutAndSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bCheckOutAndSave = { "bCheckOutAndSave", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms), &Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bCheckOutAndSave_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_OutputPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_SourceTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_BlockCoords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bKeepExistingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_bCheckOutAndSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities" },
		{ "Comment", "/**\n\x09* Make a UDIM virtual texture from a list of regular 2D textures\n\x09* @param OutputPathName\x09\x09\x09Path name of the UDIM texture (e.g. /Game/MyTexture)\n\x09* @param SourceTextures\x09\x09\x09List of regular 2D textures to be packed into the atlas\n\x09* @param BlockCoords\x09\x09\x09""Coordinates of the corresponding texture in the atlas\n\x09* @param bKeepExistingSettings\x09Whether to keep existing settings if a texture with the same path name exists. Otherwise, settings will be copied from the first source texture\n\x09* @param bCheckOutAndSave\x09\x09Whether to check out and save the UDIM texture\n\x09* @return UTexture2D*\x09\x09\x09Pointer to the UDIM texture or null if failed\n\x09*/" },
		{ "CPP_Default_bCheckOutAndSave", "false" },
		{ "CPP_Default_bKeepExistingSettings", "false" },
		{ "DispalyName", "Make UDIM Texture from Texture2Ds" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
		{ "ToolTip", "Make a UDIM virtual texture from a list of regular 2D textures\n@param OutputPathName                 Path name of the UDIM texture (e.g. /Game/MyTexture)\n@param SourceTextures                 List of regular 2D textures to be packed into the atlas\n@param BlockCoords                    Coordinates of the corresponding texture in the atlas\n@param bKeepExistingSettings  Whether to keep existing settings if a texture with the same path name exists. Otherwise, settings will be copied from the first source texture\n@param bCheckOutAndSave               Whether to check out and save the UDIM texture\n@return UTexture2D*                   Pointer to the UDIM texture or null if failed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUDIMTextureFunctionLibrary, nullptr, "MakeUDIMVirtualTextureFromTexture2Ds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::UDIMTextureFunctionLibrary_eventMakeUDIMVirtualTextureFromTexture2Ds_Parms), Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUDIMTextureFunctionLibrary);
	UClass* Z_Construct_UClass_UUDIMTextureFunctionLibrary_NoRegister()
	{
		return UUDIMTextureFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUDIMTextureFunctionLibrary_MakeUDIMVirtualTextureFromTexture2Ds, "MakeUDIMVirtualTextureFromTexture2Ds" }, // 3072856223
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/TextureFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/TextureFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUDIMTextureFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::ClassParams = {
		&UUDIMTextureFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUDIMTextureFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUDIMTextureFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUDIMTextureFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUDIMTextureFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUDIMTextureFunctionLibrary.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUDIMTextureFunctionLibrary>()
	{
		return UUDIMTextureFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUDIMTextureFunctionLibrary);
	UUDIMTextureFunctionLibrary::~UUDIMTextureFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::EnumInfo[] = {
		{ ETextureSourceColorSpace_StaticEnum, TEXT("ETextureSourceColorSpace"), &Z_Registration_Info_UEnum_ETextureSourceColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 934319745U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureFactory, UTextureFactory::StaticClass, TEXT("UTextureFactory"), &Z_Registration_Info_UClass_UTextureFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureFactory), 1350738238U) },
		{ Z_Construct_UClass_UUDIMTextureFunctionLibrary, UUDIMTextureFunctionLibrary::StaticClass, TEXT("UUDIMTextureFunctionLibrary"), &Z_Registration_Info_UClass_UUDIMTextureFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUDIMTextureFunctionLibrary), 4251925251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_1903025612(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_TextureFactory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
