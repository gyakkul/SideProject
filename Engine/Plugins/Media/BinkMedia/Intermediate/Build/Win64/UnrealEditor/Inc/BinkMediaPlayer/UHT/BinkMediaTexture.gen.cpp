// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkMediaTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkMediaTexture() {}
// Cross Module References
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaPlayer_NoRegister();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// End Cross Module References
	DEFINE_FUNCTION(UBinkMediaTexture::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkMediaTexture::execSetMediaPlayer)
	{
		P_GET_OBJECT(UBinkMediaPlayer,Z_Param_InMediaPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaPlayer(Z_Param_InMediaPlayer);
		P_NATIVE_END;
	}
	void UBinkMediaTexture::StaticRegisterNativesUBinkMediaTexture()
	{
		UClass* Class = UBinkMediaTexture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UBinkMediaTexture::execClear },
			{ "SetMediaPlayer", &UBinkMediaTexture::execSetMediaPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Clears this texture to transparent-black.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "Clears this texture to transparent-black." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaTexture, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaTexture_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaTexture_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics
	{
		struct BinkMediaTexture_eventSetMediaPlayer_Parms
		{
			UBinkMediaPlayer* InMediaPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::NewProp_InMediaPlayer = { "InMediaPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkMediaTexture_eventSetMediaPlayer_Parms, InMediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::NewProp_InMediaPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaTexture" },
		{ "Comment", "/**\n\x09 * Sets the media player asset to be used for this texture.\n\x09 *\n\x09 * @param InMediaPlayer The asset to set.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "Sets the media player asset to be used for this texture.\n\n@param InMediaPlayer The asset to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkMediaTexture, nullptr, "SetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::BinkMediaTexture_eventSetMediaPlayer_Parms), Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinkMediaTexture);
	UClass* Z_Construct_UClass_UBinkMediaTexture_NoRegister()
	{
		return UBinkMediaTexture::StaticClass();
	}
	struct Z_Construct_UClass_UBinkMediaTexture_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PixelFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tonemap_MetaData[];
#endif
		static void NewProp_Tonemap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Tonemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNits_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputNits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecodeSRGB_MetaData[];
#endif
		static void NewProp_DecodeSRGB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DecodeSRGB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinkMediaTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBinkMediaTexture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkMediaTexture_Clear, "Clear" }, // 132331380
		{ &Z_Construct_UFunction_UBinkMediaTexture_SetMediaPlayer, "SetMediaPlayer" }, // 2651940205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a texture asset for rendering video tracks from UBinkMediaPlayer assets.\n * \n * note: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n *    maybe should have been UTexture2DDynamic?\n */" },
		{ "HideCategories", "Compression LevelOfDetail Object" },
		{ "IncludePath", "BinkMediaTexture.h" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "Implements a texture asset for rendering video tracks from UBinkMediaPlayer assets.\n\nnote: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic\n   maybe should have been UTexture2DDynamic?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY_MetaData)) }; // 1462649072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** The MediaPlayer asset to stream video from. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "The MediaPlayer asset to stream video from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, MediaPlayer), Z_Construct_UClass_UBinkMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** The Pixel Format for the texture. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "The Pixel Format for the texture." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat = { "PixelFormat", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, PixelFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** Whether to enable tonemaping for the video. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "Whether to enable tonemaping for the video." },
	};
#endif
	void Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_SetBit(void* Obj)
	{
		((UBinkMediaTexture*)Obj)->Tonemap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap = { "Tonemap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBinkMediaTexture), &Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** When tonemapping, set this for to desired output nits capability for the current display. Typically 80 for SDR, or 2000 for HDR. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "When tonemapping, set this for to desired output nits capability for the current display. Typically 80 for SDR, or 2000 for HDR." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits = { "OutputNits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, OutputNits), METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** alpha_value is just a constant blend value for entire video frame. 1 (default) opaque, 0 fully transparent. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "alpha_value is just a constant blend value for entire video frame. 1 (default) opaque, 0 fully transparent." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBinkMediaTexture, Alpha), METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_MetaData[] = {
		{ "Category", "MediaPlayer" },
		{ "Comment", "/** Enable decoding of sRGB to Linear inside Bink when drawing to this texture. You could use this when rendering to a texture format which doesn't support sRGB for example. */" },
		{ "ModuleRelativePath", "Public/BinkMediaTexture.h" },
		{ "ToolTip", "Enable decoding of sRGB to Linear inside Bink when drawing to this texture. You could use this when rendering to a texture format which doesn't support sRGB for example." },
	};
#endif
	void Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_SetBit(void* Obj)
	{
		((UBinkMediaTexture*)Obj)->DecodeSRGB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB = { "DecodeSRGB", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBinkMediaTexture), &Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_AddressY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_PixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Tonemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_OutputNits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBinkMediaTexture_Statics::NewProp_DecodeSRGB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinkMediaTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkMediaTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkMediaTexture_Statics::ClassParams = {
		&UBinkMediaTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBinkMediaTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkMediaTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBinkMediaTexture()
	{
		if (!Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton, Z_Construct_UClass_UBinkMediaTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinkMediaTexture.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UClass* StaticClass<UBinkMediaTexture>()
	{
		return UBinkMediaTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkMediaTexture);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinkMediaTexture, UBinkMediaTexture::StaticClass, TEXT("UBinkMediaTexture"), &Z_Registration_Info_UClass_UBinkMediaTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkMediaTexture), 2938860495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_1387794088(TEXT("/Script/BinkMediaPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkMediaTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
