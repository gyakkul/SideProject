// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/MediaTextureFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaTextureFactoryNew() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaTextureFactoryNew();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaTextureFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UMediaTextureFactoryNew::StaticRegisterNativesUMediaTextureFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaTextureFactoryNew);
	UClass* Z_Construct_UClass_UMediaTextureFactoryNew_NoRegister()
	{
		return UMediaTextureFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTextureFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTextureFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTextureFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UMediaTexture objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MediaTextureFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/MediaTextureFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UMediaTexture objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTextureFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTextureFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaTextureFactoryNew_Statics::ClassParams = {
		&UMediaTextureFactoryNew::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaTextureFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTextureFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTextureFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UMediaTextureFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaTextureFactoryNew.OuterSingleton, Z_Construct_UClass_UMediaTextureFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaTextureFactoryNew.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaTextureFactoryNew>()
	{
		return UMediaTextureFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTextureFactoryNew);
	UMediaTextureFactoryNew::~UMediaTextureFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaTextureFactoryNew, UMediaTextureFactoryNew::StaticClass, TEXT("UMediaTextureFactoryNew"), &Z_Registration_Info_UClass_UMediaTextureFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaTextureFactoryNew), 2031010231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_2171263498(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_MediaTextureFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
