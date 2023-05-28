// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AvfFileMediaSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvfFileMediaSourceFactory() {}
// Cross Module References
	AVFMEDIAEDITOR_API UClass* Z_Construct_UClass_UAvfFileMediaSourceFactory();
	AVFMEDIAEDITOR_API UClass* Z_Construct_UClass_UAvfFileMediaSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AvfMediaEditor();
// End Cross Module References
	void UAvfFileMediaSourceFactory::StaticRegisterNativesUAvfFileMediaSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvfFileMediaSourceFactory);
	UClass* Z_Construct_UClass_UAvfFileMediaSourceFactory_NoRegister()
	{
		return UAvfFileMediaSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AvfMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UFileMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AvfFileMediaSourceFactory.h" },
		{ "ModuleRelativePath", "Private/AvfFileMediaSourceFactory.h" },
		{ "ToolTip", "Implements a factory for UFileMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvfFileMediaSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::ClassParams = {
		&UAvfFileMediaSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvfFileMediaSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UAvfFileMediaSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvfFileMediaSourceFactory.OuterSingleton, Z_Construct_UClass_UAvfFileMediaSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAvfFileMediaSourceFactory.OuterSingleton;
	}
	template<> AVFMEDIAEDITOR_API UClass* StaticClass<UAvfFileMediaSourceFactory>()
	{
		return UAvfFileMediaSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvfFileMediaSourceFactory);
	UAvfFileMediaSourceFactory::~UAvfFileMediaSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAvfFileMediaSourceFactory, UAvfFileMediaSourceFactory::StaticClass, TEXT("UAvfFileMediaSourceFactory"), &Z_Registration_Info_UClass_UAvfFileMediaSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvfFileMediaSourceFactory), 3969751591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_4289227728(TEXT("/Script/AvfMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AvfMedia_Source_AvfMediaEditor_Private_AvfFileMediaSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
