// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/PlatformMediaSourceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformMediaSourceFactoryNew() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UPlatformMediaSourceFactoryNew();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UPlatformMediaSourceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UPlatformMediaSourceFactoryNew::StaticRegisterNativesUPlatformMediaSourceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformMediaSourceFactoryNew);
	UClass* Z_Construct_UClass_UPlatformMediaSourceFactoryNew_NoRegister()
	{
		return UPlatformMediaSourceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UPlatformMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PlatformMediaSourceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/PlatformMediaSourceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UPlatformMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformMediaSourceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::ClassParams = {
		&UPlatformMediaSourceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformMediaSourceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UPlatformMediaSourceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformMediaSourceFactoryNew.OuterSingleton, Z_Construct_UClass_UPlatformMediaSourceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformMediaSourceFactoryNew.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UPlatformMediaSourceFactoryNew>()
	{
		return UPlatformMediaSourceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformMediaSourceFactoryNew);
	UPlatformMediaSourceFactoryNew::~UPlatformMediaSourceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformMediaSourceFactoryNew, UPlatformMediaSourceFactoryNew::StaticClass, TEXT("UPlatformMediaSourceFactoryNew"), &Z_Registration_Info_UClass_UPlatformMediaSourceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformMediaSourceFactoryNew), 74685863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_1877784332(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_PlatformMediaSourceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
