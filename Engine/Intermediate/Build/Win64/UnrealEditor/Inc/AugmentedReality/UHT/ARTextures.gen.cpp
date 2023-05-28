// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARTextures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTextures() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTexture_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthQuality();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARTextureType;
	static UEnum* EARTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTextureType, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARTextureType"));
		}
		return Z_Registration_Info_UEnum_EARTextureType.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARTextureType>()
	{
		return EARTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enumerators[] = {
		{ "EARTextureType::Unknown", (int64)EARTextureType::Unknown },
		{ "EARTextureType::CameraImage", (int64)EARTextureType::CameraImage },
		{ "EARTextureType::CameraDepth", (int64)EARTextureType::CameraDepth },
		{ "EARTextureType::EnvironmentCapture", (int64)EARTextureType::EnvironmentCapture },
		{ "EARTextureType::PersonSegmentationImage", (int64)EARTextureType::PersonSegmentationImage },
		{ "EARTextureType::PersonSegmentationDepth", (int64)EARTextureType::PersonSegmentationDepth },
		{ "EARTextureType::SceneDepthMap", (int64)EARTextureType::SceneDepthMap },
		{ "EARTextureType::SceneDepthConfidenceMap", (int64)EARTextureType::SceneDepthConfidenceMap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CameraDepth.Name", "EARTextureType::CameraDepth" },
		{ "CameraImage.Name", "EARTextureType::CameraImage" },
		{ "Category", "AR AugmentedReality" },
		{ "EnvironmentCapture.Name", "EARTextureType::EnvironmentCapture" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "PersonSegmentationDepth.Name", "EARTextureType::PersonSegmentationDepth" },
		{ "PersonSegmentationImage.Name", "EARTextureType::PersonSegmentationImage" },
		{ "SceneDepthConfidenceMap.Name", "EARTextureType::SceneDepthConfidenceMap" },
		{ "SceneDepthMap.Name", "EARTextureType::SceneDepthMap" },
		{ "Unknown.Name", "EARTextureType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARTextureType",
		"EARTextureType",
		Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType()
	{
		if (!Z_Registration_Info_UEnum_EARTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARTextureType.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARTextureType.InnerSingleton;
	}
	void UARTexture::StaticRegisterNativesUARTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTexture);
	UClass* Z_Construct_UClass_UARTexture_NoRegister()
	{
		return UARTexture::StaticClass();
	}
	struct Z_Construct_UClass_UARTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTextureGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTextureGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all AR texture types.\n * Derived from UTexture instead of UTexture2D because UTexture2D is all about streaming and source art\n * ? probably should have been UTexture2DDynamic\n */" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR texture types.\nDerived from UTexture instead of UTexture2D because UTexture2D is all about streaming and source art\n? probably should have been UTexture2DDynamic" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The type of texture this is */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The type of texture this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTexture, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_MetaData)) }; // 33872252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The timestamp this texture was captured at */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The timestamp this texture was captured at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTexture, Timestamp), METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The guid of texture that gets registered as an external texture */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The guid of texture that gets registered as an external texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid = { "ExternalTextureGuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTexture, ExternalTextureGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The width and height of the texture */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The width and height of the texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTexture, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_TextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_ExternalTextureGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTexture_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTexture_Statics::ClassParams = {
		&UARTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTexture()
	{
		if (!Z_Registration_Info_UClass_UARTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTexture.OuterSingleton, Z_Construct_UClass_UARTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTexture.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTexture>()
	{
		return UARTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTexture);
	UARTexture::~UARTexture() {}
	void UARTextureCameraImage::StaticRegisterNativesUARTextureCameraImage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTextureCameraImage);
	UClass* Z_Construct_UClass_UARTextureCameraImage_NoRegister()
	{
		return UARTextureCameraImage::StaticClass();
	}
	struct Z_Construct_UClass_UARTextureCameraImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTextureCameraImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all AR textures that represent the camera image data\n */" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the camera image data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTextureCameraImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTextureCameraImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTextureCameraImage_Statics::ClassParams = {
		&UARTextureCameraImage::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTextureCameraImage()
	{
		if (!Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton, Z_Construct_UClass_UARTextureCameraImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTextureCameraImage>()
	{
		return UARTextureCameraImage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTextureCameraImage);
	UARTextureCameraImage::~UARTextureCameraImage() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARDepthQuality;
	static UEnum* EARDepthQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthQuality, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARDepthQuality"));
		}
		return Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARDepthQuality>()
	{
		return EARDepthQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enumerators[] = {
		{ "EARDepthQuality::Unkown", (int64)EARDepthQuality::Unkown },
		{ "EARDepthQuality::Low", (int64)EARDepthQuality::Low },
		{ "EARDepthQuality::High", (int64)EARDepthQuality::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "High.Comment", "/** Suitable for rendering against or for use in scene reconstruction */" },
		{ "High.Name", "EARDepthQuality::High" },
		{ "High.ToolTip", "Suitable for rendering against or for use in scene reconstruction" },
		{ "Low.Comment", "/** Not suitable to use as part of a rendering pass or for scene reconstruction */" },
		{ "Low.Name", "EARDepthQuality::Low" },
		{ "Low.ToolTip", "Not suitable to use as part of a rendering pass or for scene reconstruction" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "Unkown.Name", "EARDepthQuality::Unkown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARDepthQuality",
		"EARDepthQuality",
		Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthQuality()
	{
		if (!Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARDepthAccuracy;
	static UEnum* EARDepthAccuracy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("EARDepthAccuracy"));
		}
		return Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UEnum* StaticEnum<EARDepthAccuracy>()
	{
		return EARDepthAccuracy_StaticEnum();
	}
	struct Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enumerators[] = {
		{ "EARDepthAccuracy::Unkown", (int64)EARDepthAccuracy::Unkown },
		{ "EARDepthAccuracy::Approximate", (int64)EARDepthAccuracy::Approximate },
		{ "EARDepthAccuracy::Accurate", (int64)EARDepthAccuracy::Accurate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enum_MetaDataParams[] = {
		{ "Accurate.Comment", "/** Accurate depth values that match the physical world */" },
		{ "Accurate.Name", "EARDepthAccuracy::Accurate" },
		{ "Accurate.ToolTip", "Accurate depth values that match the physical world" },
		{ "Approximate.Comment", "/** Suitable for gross sorting of depths */" },
		{ "Approximate.Name", "EARDepthAccuracy::Approximate" },
		{ "Approximate.ToolTip", "Suitable for gross sorting of depths" },
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "Unkown.Name", "EARDepthAccuracy::Unkown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		"EARDepthAccuracy",
		"EARDepthAccuracy",
		Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy()
	{
		if (!Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton, Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton;
	}
	void UARTextureCameraDepth::StaticRegisterNativesUARTextureCameraDepth()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTextureCameraDepth);
	UClass* Z_Construct_UClass_UARTextureCameraDepth_NoRegister()
	{
		return UARTextureCameraDepth::StaticClass();
	}
	struct Z_Construct_UClass_UARTextureCameraDepth_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DepthQuality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DepthAccuracy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthAccuracy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DepthAccuracy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemporallySmoothed_MetaData[];
#endif
		static void NewProp_bIsTemporallySmoothed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemporallySmoothed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTextureCameraDepth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all AR textures that represent the camera depth data\n */" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the camera depth data" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The quality of the depth information captured this frame */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The quality of the depth information captured this frame" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality = { "DepthQuality", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTextureCameraDepth, DepthQuality), Z_Construct_UEnum_AugmentedReality_EARDepthQuality, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_MetaData)) }; // 2310230942
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The accuracy of the depth information captured this frame */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The accuracy of the depth information captured this frame" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy = { "DepthAccuracy", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTextureCameraDepth, DepthAccuracy), Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_MetaData)) }; // 3444845325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** Whether or not the depth information is temporally smoothed */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Whether or not the depth information is temporally smoothed" },
	};
#endif
	void Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_SetBit(void* Obj)
	{
		((UARTextureCameraDepth*)Obj)->bIsTemporallySmoothed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed = { "bIsTemporallySmoothed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UARTextureCameraDepth), &Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_DepthAccuracy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTextureCameraDepth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTextureCameraDepth>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTextureCameraDepth_Statics::ClassParams = {
		&UARTextureCameraDepth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTextureCameraDepth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTextureCameraDepth()
	{
		if (!Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton, Z_Construct_UClass_UARTextureCameraDepth_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTextureCameraDepth>()
	{
		return UARTextureCameraDepth::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTextureCameraDepth);
	UARTextureCameraDepth::~UARTextureCameraDepth() {}
	void UAREnvironmentCaptureProbeTexture::StaticRegisterNativesUAREnvironmentCaptureProbeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAREnvironmentCaptureProbeTexture);
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister()
	{
		return UAREnvironmentCaptureProbeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalTextureGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalTextureGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureCube,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all AR textures that represent the environment for lighting and reflection\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ARTextures.h" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "Base class for all AR textures that represent the environment for lighting and reflection" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The type of texture this is */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The type of texture this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_MetaData)) }; // 33872252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The timestamp this texture was captured at */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The timestamp this texture was captured at" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, Timestamp), METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The guid of texture that gets registered as an external texture */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The guid of texture that gets registered as an external texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid = { "ExternalTextureGuid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/** The width and height of the texture */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTextures.h" },
		{ "ToolTip", "The width and height of the texture" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAREnvironmentCaptureProbeTexture, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_TextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Timestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_ExternalTextureGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAREnvironmentCaptureProbeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::ClassParams = {
		&UAREnvironmentCaptureProbeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAREnvironmentCaptureProbeTexture()
	{
		if (!Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton, Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UAREnvironmentCaptureProbeTexture>()
	{
		return UAREnvironmentCaptureProbeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAREnvironmentCaptureProbeTexture);
	UAREnvironmentCaptureProbeTexture::~UAREnvironmentCaptureProbeTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::EnumInfo[] = {
		{ EARTextureType_StaticEnum, TEXT("EARTextureType"), &Z_Registration_Info_UEnum_EARTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 33872252U) },
		{ EARDepthQuality_StaticEnum, TEXT("EARDepthQuality"), &Z_Registration_Info_UEnum_EARDepthQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2310230942U) },
		{ EARDepthAccuracy_StaticEnum, TEXT("EARDepthAccuracy"), &Z_Registration_Info_UEnum_EARDepthAccuracy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444845325U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARTexture, UARTexture::StaticClass, TEXT("UARTexture"), &Z_Registration_Info_UClass_UARTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTexture), 1163614336U) },
		{ Z_Construct_UClass_UARTextureCameraImage, UARTextureCameraImage::StaticClass, TEXT("UARTextureCameraImage"), &Z_Registration_Info_UClass_UARTextureCameraImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTextureCameraImage), 127454899U) },
		{ Z_Construct_UClass_UARTextureCameraDepth, UARTextureCameraDepth::StaticClass, TEXT("UARTextureCameraDepth"), &Z_Registration_Info_UClass_UARTextureCameraDepth, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTextureCameraDepth), 1698098939U) },
		{ Z_Construct_UClass_UAREnvironmentCaptureProbeTexture, UAREnvironmentCaptureProbeTexture::StaticClass, TEXT("UAREnvironmentCaptureProbeTexture"), &Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAREnvironmentCaptureProbeTexture), 2466535209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_1628211180(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
