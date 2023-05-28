// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTexture() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOrientation();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_MediaTextureOutputFormat;
	static UEnum* MediaTextureOutputFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaTextureOutputFormat"));
		}
		return Z_Registration_Info_UEnum_MediaTextureOutputFormat.OuterSingleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOutputFormat>()
	{
		return MediaTextureOutputFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enumerators[] = {
		{ "MTOF_Default", (int64)MTOF_Default },
		{ "MTOF_SRGB_LINOUT", (int64)MTOF_SRGB_LINOUT },
		{ "MTOF_MAX", (int64)MTOF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "MTOF_Default.DisplayName", "Default (sRGB)" },
		{ "MTOF_Default.Name", "MTOF_Default" },
		{ "MTOF_MAX.Comment", "// sRGB data, using sRGB texture formats; hence read as linear RGB\n" },
		{ "MTOF_MAX.Name", "MTOF_MAX" },
		{ "MTOF_MAX.ToolTip", "sRGB data, using sRGB texture formats; hence read as linear RGB" },
		{ "MTOF_SRGB_LINOUT.DisplayName", "sRGB (linear output)" },
		{ "MTOF_SRGB_LINOUT.Name", "MTOF_SRGB_LINOUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		"MediaTextureOutputFormat",
		"MediaTextureOutputFormat",
		Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat()
	{
		if (!Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton, Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_MediaTextureOutputFormat.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_MediaTextureOrientation;
	static UEnum* MediaTextureOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation, (UObject*)Z_Construct_UPackage__Script_MediaAssets(), TEXT("MediaTextureOrientation"));
		}
		return Z_Registration_Info_UEnum_MediaTextureOrientation.OuterSingleton;
	}
	template<> MEDIAASSETS_API UEnum* StaticEnum<MediaTextureOrientation>()
	{
		return MediaTextureOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enumerators[] = {
		{ "MTORI_Original", (int64)MTORI_Original },
		{ "MTORI_CW90", (int64)MTORI_CW90 },
		{ "MTORI_CW180", (int64)MTORI_CW180 },
		{ "MTORI_CW270", (int64)MTORI_CW270 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "MTORI_CW180.DisplayName", "Clockwise 180deg" },
		{ "MTORI_CW180.Name", "MTORI_CW180" },
		{ "MTORI_CW270.DisplayName", "Clockwise 270deg" },
		{ "MTORI_CW270.Name", "MTORI_CW270" },
		{ "MTORI_CW90.DisplayName", "Clockwise 90deg" },
		{ "MTORI_CW90.Name", "MTORI_CW90" },
		{ "MTORI_Original.DisplayName", "Original (as decoded)" },
		{ "MTORI_Original.Name", "MTORI_Original" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaAssets,
		nullptr,
		"MediaTextureOrientation",
		"MediaTextureOrientation",
		Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaAssets_MediaTextureOrientation()
	{
		if (!Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton, Z_Construct_UEnum_MediaAssets_MediaTextureOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_MediaTextureOrientation.InnerSingleton;
	}
	DEFINE_FUNCTION(UMediaTexture::execUpdateResource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateResource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execSetMediaPlayer)
	{
		P_GET_OBJECT(UMediaPlayer,Z_Param_NewMediaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaPlayer(Z_Param_NewMediaPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetTextureNumMips)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureNumMips();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaTexture::execGetAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAspectRatio();
		P_NATIVE_END;
	}
	void UMediaTexture::StaticRegisterNativesUMediaTexture()
	{
		UClass* Class = UMediaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAspectRatio", &UMediaTexture::execGetAspectRatio },
			{ "GetHeight", &UMediaTexture::execGetHeight },
			{ "GetMediaPlayer", &UMediaTexture::execGetMediaPlayer },
			{ "GetTextureNumMips", &UMediaTexture::execGetTextureNumMips },
			{ "GetWidth", &UMediaTexture::execGetWidth },
			{ "SetMediaPlayer", &UMediaTexture::execSetMediaPlayer },
			{ "UpdateResource", &UMediaTexture::execUpdateResource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics
	{
		struct MediaTexture_eventGetAspectRatio_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventGetAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current aspect ratio of the texture.\n\x09 *\n\x09 * @return Texture aspect ratio.\n\x09 * @see GetHeight, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current aspect ratio of the texture.\n\n@return Texture aspect ratio.\n@see GetHeight, GetWidth" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::MediaTexture_eventGetAspectRatio_Parms), Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetHeight_Statics
	{
		struct MediaTexture_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current height of the texture.\n\x09 *\n\x09 * @return Texture height (in pixels).\n\x09 * @see GetAspectRatio, GetWidth\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current height of the texture.\n\n@return Texture height (in pixels).\n@see GetAspectRatio, GetWidth" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::MediaTexture_eventGetHeight_Parms), Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics
	{
		struct MediaTexture_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Get the media player that provides the video samples.\n\x09 *\n\x09 * @return The texture's media player, or nullptr if not set.\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Get the media player that provides the video samples.\n\n@return The texture's media player, or nullptr if not set.\n@see SetMediaPlayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::MediaTexture_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics
	{
		struct MediaTexture_eventGetTextureNumMips_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventGetTextureNumMips_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current numbe of mips of the texture.\n\x09 *\n\x09 * @return Number of mips.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current numbe of mips of the texture.\n\n@return Number of mips." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetTextureNumMips", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::MediaTexture_eventGetTextureNumMips_Parms), Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetTextureNumMips()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetTextureNumMips_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_GetWidth_Statics
	{
		struct MediaTexture_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Gets the current width of the texture.\n\x09 *\n\x09 * @return Texture width (in pixels).\n\x09 * @see GetAspectRatio, GetHeight\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Gets the current width of the texture.\n\n@return Texture width (in pixels).\n@see GetAspectRatio, GetHeight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::MediaTexture_eventGetWidth_Parms), Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics
	{
		struct MediaTexture_eventSetMediaPlayer_Parms
		{
			UMediaPlayer* NewMediaPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer = { "NewMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaTexture_eventSetMediaPlayer_Parms, NewMediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::NewProp_NewMediaPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Set the media player that provides the video samples.\n\x09 *\n\x09 * @param NewMediaPlayer The player to set.\n\x09 * @see GetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Set the media player that provides the video samples.\n\n@param NewMediaPlayer The player to set.\n@see GetMediaPlayer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "SetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::MediaTexture_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Creates a new resource for the texture, and updates any cached references to the resource.\n\x09 * This obviously is just an override to expose to blueprints.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Creates a new resource for the texture, and updates any cached references to the resource.\nThis obviously is just an override to expose to blueprints." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaTexture, nullptr, "UpdateResource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaTexture_UpdateResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaTexture_UpdateResource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaTexture);
	UClass* Z_Construct_UClass_UMediaTexture_NoRegister()
	{
		return UMediaTexture::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoClear_MetaData[];
#endif
		static void NewProp_AutoClear_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoClear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableGenMips_MetaData[];
#endif
		static void NewProp_EnableGenMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableGenMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMips_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStyleOutput_MetaData[];
#endif
		static void NewProp_NewStyleOutput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NewStyleOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutputFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaTexture_GetAspectRatio, "GetAspectRatio" }, // 2099161612
		{ &Z_Construct_UFunction_UMediaTexture_GetHeight, "GetHeight" }, // 1899226995
		{ &Z_Construct_UFunction_UMediaTexture_GetMediaPlayer, "GetMediaPlayer" }, // 690544735
		{ &Z_Construct_UFunction_UMediaTexture_GetTextureNumMips, "GetTextureNumMips" }, // 1557362943
		{ &Z_Construct_UFunction_UMediaTexture_GetWidth, "GetWidth" }, // 3384330893
		{ &Z_Construct_UFunction_UMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 430627921
		{ &Z_Construct_UFunction_UMediaTexture_UpdateResource, "UpdateResource" }, // 210447012
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a texture asset for rendering video tracks from UMediaPlayer assets.\n * \n * note: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n *    maybe should have been UTexture2DDynamic?\n */" },
		{ "HideCategories", "Adjustments Compositing LevelOfDetail ImportSettings Object" },
		{ "IncludePath", "MediaTexture.h" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UMediaPlayer assets.\n\nnote: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n   maybe should have been UTexture2DDynamic?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "DisplayName", "X-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "DisplayName", "Y-axis Tiling Method" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Whether to clear the texture when no media is being played (default = enabled). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Whether to clear the texture when no media is being played (default = enabled)." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->AutoClear = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear = { "AutoClear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The color used to clear the texture if AutoClear is enabled (default = black). */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The color used to clear the texture if AutoClear is enabled (default = black)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Basic enablement for mip generation (default = false). */" },
		{ "DisplayName", "Enable Mipmap generation" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Basic enablement for mip generation (default = false)." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->EnableGenMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips = { "EnableGenMips", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The number of mips to use (default = 1). */" },
		{ "DisplayName", "Total number of Mipmaps to output" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The number of mips to use (default = 1)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips = { "NumMips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, NumMips), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Enable new style output (default = false). */" },
		{ "DisplayName", "Enable new style output" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Enable new style output (default = false)." },
	};
#endif
	void Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_SetBit(void* Obj)
	{
		((UMediaTexture*)Obj)->NewStyleOutput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput = { "NewStyleOutput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaTexture), &Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "DisplayName", "Output format (new style)" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat = { "OutputFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, OutputFormat), Z_Construct_UEnum_MediaAssets_MediaTextureOutputFormat, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat_MetaData)) }; // 1187687844
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Current aspect ratio */" },
		{ "DisplayName", "Current frame's aspect ratio" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Current aspect ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio = { "CurrentAspectRatio", nullptr, (EPropertyFlags)0x0090400000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, CurrentAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Current media orientation */" },
		{ "DisplayName", "Current frame's orientation" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "Current media orientation" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation = { "CurrentOrientation", nullptr, (EPropertyFlags)0x0090400000002014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, CurrentOrientation), Z_Construct_UEnum_MediaAssets_MediaTextureOrientation, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation_MetaData)) }; // 598499876
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/**\n\x09 * The media player asset associated with this texture.\n\x09 *\n\x09 * This property is meant for design-time convenience. To change the\n\x09 * associated media player at run-time, use the SetMediaPlayer method.\n\x09 *\n\x09 * @see SetMediaPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaTexture.h" },
		{ "ToolTip", "The media player asset associated with this texture.\n\nThis property is meant for design-time convenience. To change the\nassociated media player at run-time, use the SetMediaPlayer method.\n\n@see SetMediaPlayer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTexture, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_AutoClear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_EnableGenMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_NumMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_NewStyleOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_OutputFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_CurrentOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTexture_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaTexture_Statics::ClassParams = {
		&UMediaTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTexture()
	{
		if (!Z_Registration_Info_UClass_UMediaTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaTexture.OuterSingleton, Z_Construct_UClass_UMediaTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaTexture.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaTexture>()
	{
		return UMediaTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTexture);
	UMediaTexture::~UMediaTexture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::EnumInfo[] = {
		{ MediaTextureOutputFormat_StaticEnum, TEXT("MediaTextureOutputFormat"), &Z_Registration_Info_UEnum_MediaTextureOutputFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1187687844U) },
		{ MediaTextureOrientation_StaticEnum, TEXT("MediaTextureOrientation"), &Z_Registration_Info_UEnum_MediaTextureOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 598499876U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaTexture, UMediaTexture::StaticClass, TEXT("UMediaTexture"), &Z_Registration_Info_UClass_UMediaTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaTexture), 4145496562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_2053597466(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaTexture_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
