// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MfFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMfFileMediaSourceFactory() {}
// Cross Module References
	MFMEDIAEDITOR_API UClass* Z_Construct_UClass_UMfFileMediaSourceFactory();
	MFMEDIAEDITOR_API UClass* Z_Construct_UClass_UMfFileMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MfMediaEditor();
// End Cross Module References
	void UMfFileMediaSourceFactory::StaticRegisterNativesUMfFileMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMfFileMediaSourceFactory);
	UClass* Z_Construct_UClass_UMfFileMediaSourceFactory_NoRegister()
	{
		return UMfFileMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMfFileMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MfMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MfFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/MfFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMfFileMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::ClassParams = {
		&UMfFileMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMfFileMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UMfFileMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMfFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UMfFileMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMfFileMediaSourceFactory.OuterSingleton;
	}
	template<> MFMEDIAEDITOR_API UClass* StaticClass<UMfFileMediaSourceFactory>()
	{
		return UMfFileMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMfFileMediaSourceFactory);
	UMfFileMediaSourceFactory::~UMfFileMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MfMedia_Source_MfMediaEditor_Private_MfFileMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MfMedia_Source_MfMediaEditor_Private_MfFileMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMfFileMediaSourceFactory, UMfFileMediaSourceFactory::StaticClass, TEXT("UMfFileMediaSourceFactory"), &Z_Registration_Info_UClass_UMfFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMfFileMediaSourceFactory), 3942549281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MfMedia_Source_MfMediaEditor_Private_MfFileMediaSourceFactory_h_353454473(TEXT("/Script/MfMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MfMedia_Source_MfMediaEditor_Private_MfFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MfMedia_Source_MfMediaEditor_Private_MfFileMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
