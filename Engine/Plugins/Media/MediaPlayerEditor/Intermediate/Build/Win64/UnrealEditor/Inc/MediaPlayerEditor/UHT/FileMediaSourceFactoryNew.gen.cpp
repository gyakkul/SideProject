// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/FileMediaSourceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFileMediaSourceFactoryNew() {}
// Cross Module References
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UFileMediaSourceFactoryNew();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UFileMediaSourceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UFileMediaSourceFactoryNew::StaticRegisterNativesUFileMediaSourceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFileMediaSourceFactoryNew);
	UClass* Z_Construct_UClass_UFileMediaSourceFactoryNew_NoRegister()
	{
		return UFileMediaSourceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/FileMediaSourceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/FileMediaSourceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFileMediaSourceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::ClassParams = {
		&UFileMediaSourceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFileMediaSourceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UFileMediaSourceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFileMediaSourceFactoryNew.OuterSingleton, Z_Construct_UClass_UFileMediaSourceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFileMediaSourceFactoryNew.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UFileMediaSourceFactoryNew>()
	{
		return UFileMediaSourceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFileMediaSourceFactoryNew);
	UFileMediaSourceFactoryNew::~UFileMediaSourceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFileMediaSourceFactoryNew, UFileMediaSourceFactoryNew::StaticClass, TEXT("UFileMediaSourceFactoryNew"), &Z_Registration_Info_UClass_UFileMediaSourceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFileMediaSourceFactoryNew), 3370720652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_818656113(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Factories_FileMediaSourceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
