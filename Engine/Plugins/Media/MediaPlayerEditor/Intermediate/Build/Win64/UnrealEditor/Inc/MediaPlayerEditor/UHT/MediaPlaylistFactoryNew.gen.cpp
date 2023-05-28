// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/MediaPlaylistFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlaylistFactoryNew() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlaylistFactoryNew();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlaylistFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UMediaPlaylistFactoryNew::StaticRegisterNativesUMediaPlaylistFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlaylistFactoryNew);
	UClass* Z_Construct_UClass_UMediaPlaylistFactoryNew_NoRegister()
	{
		return UMediaPlaylistFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UMediaPlaylist objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MediaPlaylistFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/MediaPlaylistFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UMediaPlaylist objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlaylistFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::ClassParams = {
		&UMediaPlaylistFactoryNew::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlaylistFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMediaPlaylistFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlaylistFactoryNew.OuterSingleton, Z_Construct_UClass_UMediaPlaylistFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlaylistFactoryNew.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaPlaylistFactoryNew>()
	{
		return UMediaPlaylistFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlaylistFactoryNew);
	UMediaPlaylistFactoryNew::~UMediaPlaylistFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlaylistFactoryNew, UMediaPlaylistFactoryNew::StaticClass, TEXT("UMediaPlaylistFactoryNew"), &Z_Registration_Info_UClass_UMediaPlaylistFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlaylistFactoryNew), 1002002626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_2447625915(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlaylistFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
