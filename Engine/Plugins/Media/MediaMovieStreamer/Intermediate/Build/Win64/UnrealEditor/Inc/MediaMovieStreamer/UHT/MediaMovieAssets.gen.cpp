// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MediaMovieAssets.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaMovieAssets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAMOVIESTREAMER_API UClass* Z_Construct_UClass_UMediaMovieAssets();
	MEDIAMOVIESTREAMER_API UClass* Z_Construct_UClass_UMediaMovieAssets_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaMovieStreamer();
// End Cross Module References
	DEFINE_FUNCTION(UMediaMovieAssets::execOnMediaEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaEnd();
		P_NATIVE_END;
	}
	void UMediaMovieAssets::StaticRegisterNativesUMediaMovieAssets()
	{
		UClass* Class = UMediaMovieAssets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMediaEnd", &UMediaMovieAssets::execOnMediaEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the video ends.\n\x09 */" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Called by the media player when the video ends." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaMovieAssets, nullptr, "OnMediaEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaMovieAssets);
	UClass* Z_Construct_UClass_UMediaMovieAssets_NoRegister()
	{
		return UMediaMovieAssets::StaticClass();
	}
	struct Z_Construct_UClass_UMediaMovieAssets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaMovieAssets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaMovieStreamer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaMovieAssets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaMovieAssets_OnMediaEnd, "OnMediaEnd" }, // 3467924022
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaMovieAssets_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Keeps assets alive during level loading so they don't get garbage collected while we are using them.\n * Also handles other UObject functionality like hooking into the UMediaPlayer callbacks\n * which require a UObject.\n */" },
		{ "IncludePath", "MediaMovieAssets.h" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Keeps assets alive during level loading so they don't get garbage collected while we are using them.\nAlso handles other UObject functionality like hooking into the UMediaPlayer callbacks\nwhich require a UObject." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Comment", "/** Holds the player we are using. */" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Holds the player we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaMovieAssets, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSoundComponent_MetaData[] = {
		{ "Comment", "/** Holds the media sound component we are using. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Holds the media sound component we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSoundComponent = { "MediaSoundComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaMovieAssets, MediaSoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Comment", "/** Holds the media source we are using. */" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Holds the media source we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaMovieAssets, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Comment", "/** Holds the media texture we are using. */" },
		{ "ModuleRelativePath", "Private/MediaMovieAssets.h" },
		{ "ToolTip", "Holds the media texture we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaMovieAssets, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaMovieAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaMovieAssets_Statics::NewProp_MediaTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaMovieAssets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaMovieAssets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaMovieAssets_Statics::ClassParams = {
		&UMediaMovieAssets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaMovieAssets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaMovieAssets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaMovieAssets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaMovieAssets()
	{
		if (!Z_Registration_Info_UClass_UMediaMovieAssets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaMovieAssets.OuterSingleton, Z_Construct_UClass_UMediaMovieAssets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaMovieAssets.OuterSingleton;
	}
	template<> MEDIAMOVIESTREAMER_API UClass* StaticClass<UMediaMovieAssets>()
	{
		return UMediaMovieAssets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaMovieAssets);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaMovieAssets, UMediaMovieAssets::StaticClass, TEXT("UMediaMovieAssets"), &Z_Registration_Info_UClass_UMediaMovieAssets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaMovieAssets), 292052800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_3495030962(TEXT("/Script/MediaMovieStreamer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaMovieStreamer_Source_MediaMovieStreamer_Private_MediaMovieAssets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
