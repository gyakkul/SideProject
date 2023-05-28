// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WmfFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWmfFileMediaSourceFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WmfMediaEditor();
	WMFMEDIAEDITOR_API UClass* Z_Construct_UClass_UWmfFileMediaSourceFactory();
	WMFMEDIAEDITOR_API UClass* Z_Construct_UClass_UWmfFileMediaSourceFactory_NoRegister();
// End Cross Module References
	void UWmfFileMediaSourceFactory::StaticRegisterNativesUWmfFileMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWmfFileMediaSourceFactory);
	UClass* Z_Construct_UClass_UWmfFileMediaSourceFactory_NoRegister()
	{
		return UWmfFileMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WmfMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "WmfFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/WmfFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWmfFileMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::ClassParams = {
		&UWmfFileMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWmfFileMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UWmfFileMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWmfFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UWmfFileMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWmfFileMediaSourceFactory.OuterSingleton;
	}
	template<> WMFMEDIAEDITOR_API UClass* StaticClass<UWmfFileMediaSourceFactory>()
	{
		return UWmfFileMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWmfFileMediaSourceFactory);
	UWmfFileMediaSourceFactory::~UWmfFileMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWmfFileMediaSourceFactory, UWmfFileMediaSourceFactory::StaticClass, TEXT("UWmfFileMediaSourceFactory"), &Z_Registration_Info_UClass_UWmfFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWmfFileMediaSourceFactory), 3199254959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_3787789823(TEXT("/Script/WmfMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_WmfMedia_Source_WmfMediaEditor_Private_WmfFileMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
