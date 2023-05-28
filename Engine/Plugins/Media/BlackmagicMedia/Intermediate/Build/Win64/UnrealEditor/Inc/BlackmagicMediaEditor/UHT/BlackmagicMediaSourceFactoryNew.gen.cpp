// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BlackmagicMediaSourceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaSourceFactoryNew() {}
// Cross Module References
	BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew();
	BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMediaEditor();
// End Cross Module References
	void UBlackmagicMediaSourceFactoryNew::StaticRegisterNativesUBlackmagicMediaSourceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicMediaSourceFactoryNew);
	UClass* Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_NoRegister()
	{
		return UBlackmagicMediaSourceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BlackmagicMediaSourceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BlackmagicMediaSourceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicMediaSourceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::ClassParams = {
		&UBlackmagicMediaSourceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicMediaSourceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicMediaSourceFactoryNew.OuterSingleton, Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicMediaSourceFactoryNew.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAEDITOR_API UClass* StaticClass<UBlackmagicMediaSourceFactoryNew>()
	{
		return UBlackmagicMediaSourceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicMediaSourceFactoryNew);
	UBlackmagicMediaSourceFactoryNew::~UBlackmagicMediaSourceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicMediaSourceFactoryNew, UBlackmagicMediaSourceFactoryNew::StaticClass, TEXT("UBlackmagicMediaSourceFactoryNew"), &Z_Registration_Info_UClass_UBlackmagicMediaSourceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicMediaSourceFactoryNew), 1722636169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_936592378(TEXT("/Script/BlackmagicMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaSourceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
