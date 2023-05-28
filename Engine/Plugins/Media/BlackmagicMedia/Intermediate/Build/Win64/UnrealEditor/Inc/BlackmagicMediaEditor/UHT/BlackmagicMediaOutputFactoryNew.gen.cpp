// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/BlackmagicMediaOutputFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackmagicMediaOutputFactoryNew() {}
// Cross Module References
	BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew();
	BLACKMAGICMEDIAEDITOR_API UClass* Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_BlackmagicMediaEditor();
// End Cross Module References
	void UBlackmagicMediaOutputFactoryNew::StaticRegisterNativesUBlackmagicMediaOutputFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackmagicMediaOutputFactoryNew);
	UClass* Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_NoRegister()
	{
		return UBlackmagicMediaOutputFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_BlackmagicMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BlackmagicMediaOutputFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/BlackmagicMediaOutputFactoryNew.h" },
		{ "ToolTip", "Implements a factory for objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackmagicMediaOutputFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::ClassParams = {
		&UBlackmagicMediaOutputFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UBlackmagicMediaOutputFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackmagicMediaOutputFactoryNew.OuterSingleton, Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlackmagicMediaOutputFactoryNew.OuterSingleton;
	}
	template<> BLACKMAGICMEDIAEDITOR_API UClass* StaticClass<UBlackmagicMediaOutputFactoryNew>()
	{
		return UBlackmagicMediaOutputFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackmagicMediaOutputFactoryNew);
	UBlackmagicMediaOutputFactoryNew::~UBlackmagicMediaOutputFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlackmagicMediaOutputFactoryNew, UBlackmagicMediaOutputFactoryNew::StaticClass, TEXT("UBlackmagicMediaOutputFactoryNew"), &Z_Registration_Info_UClass_UBlackmagicMediaOutputFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackmagicMediaOutputFactoryNew), 780434954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_1544129972(TEXT("/Script/BlackmagicMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BlackmagicMedia_Source_BlackmagicMediaEditor_Private_Factories_BlackmagicMediaOutputFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
