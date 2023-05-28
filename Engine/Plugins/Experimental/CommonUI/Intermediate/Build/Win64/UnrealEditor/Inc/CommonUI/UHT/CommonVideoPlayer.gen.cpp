// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVideoPlayer.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVideoPlayer() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVideoPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonVideoPlayer::StaticRegisterNativesUCommonVideoPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonVideoPlayer);
	UClass* Z_Construct_UClass_UCommonVideoPlayer_NoRegister()
	{
		return UCommonVideoPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UCommonVideoPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Video_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Video;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VideoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonVideoPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "IncludePath", "CommonVideoPlayer.h" },
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_Video_MetaData[] = {
		{ "Category", "VideoPlayer" },
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_Video = { "Video", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, Video), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_Video_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_Video_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoMaterial = { "VideoMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, VideoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_SoundComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_SoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_SoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoBrush_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonVideoPlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoBrush = { "VideoBrush", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVideoPlayer, VideoBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonVideoPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_Video,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_MediaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_SoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonVideoPlayer_Statics::NewProp_VideoBrush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonVideoPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonVideoPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonVideoPlayer_Statics::ClassParams = {
		&UCommonVideoPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonVideoPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonVideoPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVideoPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonVideoPlayer()
	{
		if (!Z_Registration_Info_UClass_UCommonVideoPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonVideoPlayer.OuterSingleton, Z_Construct_UClass_UCommonVideoPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonVideoPlayer.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonVideoPlayer>()
	{
		return UCommonVideoPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonVideoPlayer);
	UCommonVideoPlayer::~UCommonVideoPlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonVideoPlayer, UCommonVideoPlayer::StaticClass, TEXT("UCommonVideoPlayer"), &Z_Registration_Info_UClass_UCommonVideoPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonVideoPlayer), 563256857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_3797385201(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVideoPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
