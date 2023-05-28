// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperTileMapFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTileMapFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileMapFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperTileMapFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperTileMapFactory::StaticRegisterNativesUPaperTileMapFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperTileMapFactory);
	UClass* Z_Construct_UClass_UPaperTileMapFactory_NoRegister()
	{
		return UPaperTileMapFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTileMapFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTileMapFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTileMapFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperTileMapFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperTileMapFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTileMapFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTileMapFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperTileMapFactory_Statics::ClassParams = {
		&UPaperTileMapFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperTileMapFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTileMapFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTileMapFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperTileMapFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperTileMapFactory.OuterSingleton, Z_Construct_UClass_UPaperTileMapFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperTileMapFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperTileMapFactory>()
	{
		return UPaperTileMapFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTileMapFactory);
	UPaperTileMapFactory::~UPaperTileMapFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperTileMapFactory, UPaperTileMapFactory::StaticClass, TEXT("UPaperTileMapFactory"), &Z_Registration_Info_UClass_UPaperTileMapFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperTileMapFactory), 1707387873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapFactory_h_4232480909(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperTileMapFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
