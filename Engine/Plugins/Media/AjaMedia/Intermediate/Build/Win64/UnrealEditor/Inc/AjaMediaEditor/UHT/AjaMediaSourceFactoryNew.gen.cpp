// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/AjaMediaSourceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaSourceFactoryNew() {}
// Cross Module References
	AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaSourceFactoryNew();
	AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaSourceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AjaMediaEditor();
// End Cross Module References
	void UAjaMediaSourceFactoryNew::StaticRegisterNativesUAjaMediaSourceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaSourceFactoryNew);
	UClass* Z_Construct_UClass_UAjaMediaSourceFactoryNew_NoRegister()
	{
		return UAjaMediaSourceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UAjaMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AjaMediaSourceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/AjaMediaSourceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UAjaMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaSourceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::ClassParams = {
		&UAjaMediaSourceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaSourceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaSourceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaSourceFactoryNew.OuterSingleton, Z_Construct_UClass_UAjaMediaSourceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaSourceFactoryNew.OuterSingleton;
	}
	template<> AJAMEDIAEDITOR_API UClass* StaticClass<UAjaMediaSourceFactoryNew>()
	{
		return UAjaMediaSourceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaSourceFactoryNew);
	UAjaMediaSourceFactoryNew::~UAjaMediaSourceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaSourceFactoryNew, UAjaMediaSourceFactoryNew::StaticClass, TEXT("UAjaMediaSourceFactoryNew"), &Z_Registration_Info_UClass_UAjaMediaSourceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaSourceFactoryNew), 357951986U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_346068451(TEXT("/Script/AjaMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaSourceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
