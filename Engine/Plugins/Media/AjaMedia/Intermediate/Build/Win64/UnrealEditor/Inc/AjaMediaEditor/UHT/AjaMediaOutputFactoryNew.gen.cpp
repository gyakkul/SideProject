// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/AjaMediaOutputFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjaMediaOutputFactoryNew() {}
// Cross Module References
	AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaOutputFactoryNew();
	AJAMEDIAEDITOR_API UClass* Z_Construct_UClass_UAjaMediaOutputFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_AjaMediaEditor();
// End Cross Module References
	void UAjaMediaOutputFactoryNew::StaticRegisterNativesUAjaMediaOutputFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAjaMediaOutputFactoryNew);
	UClass* Z_Construct_UClass_UAjaMediaOutputFactoryNew_NoRegister()
	{
		return UAjaMediaOutputFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_AjaMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UAjaMediaOutput objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AjaMediaOutputFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/AjaMediaOutputFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UAjaMediaOutput objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAjaMediaOutputFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::ClassParams = {
		&UAjaMediaOutputFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAjaMediaOutputFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UAjaMediaOutputFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAjaMediaOutputFactoryNew.OuterSingleton, Z_Construct_UClass_UAjaMediaOutputFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAjaMediaOutputFactoryNew.OuterSingleton;
	}
	template<> AJAMEDIAEDITOR_API UClass* StaticClass<UAjaMediaOutputFactoryNew>()
	{
		return UAjaMediaOutputFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAjaMediaOutputFactoryNew);
	UAjaMediaOutputFactoryNew::~UAjaMediaOutputFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAjaMediaOutputFactoryNew, UAjaMediaOutputFactoryNew::StaticClass, TEXT("UAjaMediaOutputFactoryNew"), &Z_Registration_Info_UClass_UAjaMediaOutputFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAjaMediaOutputFactoryNew), 1286195123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_1648259639(TEXT("/Script/AjaMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_AjaMedia_Source_AjaMediaEditor_Private_Factories_AjaMediaOutputFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
