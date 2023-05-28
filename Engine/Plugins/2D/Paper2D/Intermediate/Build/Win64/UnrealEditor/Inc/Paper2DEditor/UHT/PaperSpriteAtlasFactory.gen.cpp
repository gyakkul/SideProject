// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Atlasing/PaperSpriteAtlasFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteAtlasFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteAtlasFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteAtlasFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperSpriteAtlasFactory::StaticRegisterNativesUPaperSpriteAtlasFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteAtlasFactory);
	UClass* Z_Construct_UClass_UPaperSpriteAtlasFactory_NoRegister()
	{
		return UPaperSpriteAtlasFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Atlasing/PaperSpriteAtlasFactory.h" },
		{ "ModuleRelativePath", "Private/Atlasing/PaperSpriteAtlasFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteAtlasFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::ClassParams = {
		&UPaperSpriteAtlasFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteAtlasFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteAtlasFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteAtlasFactory.OuterSingleton, Z_Construct_UClass_UPaperSpriteAtlasFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteAtlasFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperSpriteAtlasFactory>()
	{
		return UPaperSpriteAtlasFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteAtlasFactory);
	UPaperSpriteAtlasFactory::~UPaperSpriteAtlasFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_Atlasing_PaperSpriteAtlasFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_Atlasing_PaperSpriteAtlasFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteAtlasFactory, UPaperSpriteAtlasFactory::StaticClass, TEXT("UPaperSpriteAtlasFactory"), &Z_Registration_Info_UClass_UPaperSpriteAtlasFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteAtlasFactory), 3445677891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_Atlasing_PaperSpriteAtlasFactory_h_2021686447(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_Atlasing_PaperSpriteAtlasFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Private_Atlasing_PaperSpriteAtlasFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
