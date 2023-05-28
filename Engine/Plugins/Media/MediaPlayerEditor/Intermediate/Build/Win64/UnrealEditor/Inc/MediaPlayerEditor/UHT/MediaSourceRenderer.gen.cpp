// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Shared/MediaSourceRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSourceRenderer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaSourceRenderer();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaSourceRenderer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMediaSourceRenderer::execOnSeekCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSeekCompleted();
		P_NATIVE_END;
	}
	void UMediaSourceRenderer::StaticRegisterNativesUMediaSourceRenderer()
	{
		UClass* Class = UMediaSourceRenderer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSeekCompleted", &UMediaSourceRenderer::execOnSeekCompleted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Callback when the media player is done seeking.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceRenderer.h" },
		{ "ToolTip", "Callback when the media player is done seeking." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSourceRenderer, nullptr, "OnSeekCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaSourceRenderer);
	UClass* Z_Construct_UClass_UMediaSourceRenderer_NoRegister()
	{
		return UMediaSourceRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSourceRenderer_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSourceRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSourceRenderer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSourceRenderer_OnSeekCompleted, "OnSeekCompleted" }, // 414273899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSourceRenderer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Renders a media source to a texture in editor builds. */" },
		{ "IncludePath", "Shared/MediaSourceRenderer.h" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceRenderer.h" },
		{ "ToolTip", "Renders a media source to a texture in editor builds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Comment", "/** Holds the player we are using. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceRenderer.h" },
		{ "ToolTip", "Holds the player we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSourceRenderer, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Comment", "/** Holds the media source we are using. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceRenderer.h" },
		{ "ToolTip", "Holds the media source we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSourceRenderer, MediaSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Comment", "/** Holds the media texture we are using. */" },
		{ "ModuleRelativePath", "Private/Shared/MediaSourceRenderer.h" },
		{ "ToolTip", "Holds the media texture we are using." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaSourceRenderer, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaSourceRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaSourceRenderer_Statics::NewProp_MediaTexture,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMediaSourceRenderer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMediaSourceRendererInterface_NoRegister, (int32)VTABLE_OFFSET(UMediaSourceRenderer, IMediaSourceRendererInterface), false },  // 856281981
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSourceRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSourceRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaSourceRenderer_Statics::ClassParams = {
		&UMediaSourceRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaSourceRenderer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRenderer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSourceRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSourceRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSourceRenderer()
	{
		if (!Z_Registration_Info_UClass_UMediaSourceRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaSourceRenderer.OuterSingleton, Z_Construct_UClass_UMediaSourceRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaSourceRenderer.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaSourceRenderer>()
	{
		return UMediaSourceRenderer::StaticClass();
	}
	UMediaSourceRenderer::UMediaSourceRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSourceRenderer);
	UMediaSourceRenderer::~UMediaSourceRenderer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaSourceRenderer, UMediaSourceRenderer::StaticClass, TEXT("UMediaSourceRenderer"), &Z_Registration_Info_UClass_UMediaSourceRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaSourceRenderer), 576362188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceRenderer_h_3730524755(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaSourceRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
