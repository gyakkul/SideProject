// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/MediaPlayerFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerFactoryNew() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerFactoryNew();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UMediaPlayerFactoryNew::StaticRegisterNativesUMediaPlayerFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerFactoryNew);
	UClass* Z_Construct_UClass_UMediaPlayerFactoryNew_NoRegister()
	{
		return UMediaPlayerFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UMediaPlayer objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MediaPlayerFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/MediaPlayerFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UMediaPlayer objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::ClassParams = {
		&UMediaPlayerFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerFactoryNew.OuterSingleton, Z_Construct_UClass_UMediaPlayerFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerFactoryNew.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaPlayerFactoryNew>()
	{
		return UMediaPlayerFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerFactoryNew);
	UMediaPlayerFactoryNew::~UMediaPlayerFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerFactoryNew, UMediaPlayerFactoryNew::StaticClass, TEXT("UMediaPlayerFactoryNew"), &Z_Registration_Info_UClass_UMediaPlayerFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerFactoryNew), 3491776451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_4015178972(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaPlayerFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
