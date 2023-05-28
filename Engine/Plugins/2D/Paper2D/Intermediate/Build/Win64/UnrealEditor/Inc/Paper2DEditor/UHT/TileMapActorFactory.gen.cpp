// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TileMapActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileMapActorFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapActorFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTileMapActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UTileMapActorFactory::StaticRegisterNativesUTileMapActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileMapActorFactory);
	UClass* Z_Construct_UClass_UTileMapActorFactory_NoRegister()
	{
		return UTileMapActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTileMapActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileMapActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileMapActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TileMapActorFactory.h" },
		{ "ModuleRelativePath", "Classes/TileMapActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileMapActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileMapActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileMapActorFactory_Statics::ClassParams = {
		&UTileMapActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000030ACu,
		METADATA_PARAMS(Z_Construct_UClass_UTileMapActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileMapActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileMapActorFactory()
	{
		if (!Z_Registration_Info_UClass_UTileMapActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileMapActorFactory.OuterSingleton, Z_Construct_UClass_UTileMapActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileMapActorFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTileMapActorFactory>()
	{
		return UTileMapActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileMapActorFactory);
	UTileMapActorFactory::~UTileMapActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileMapActorFactory, UTileMapActorFactory::StaticClass, TEXT("UTileMapActorFactory"), &Z_Registration_Info_UClass_UTileMapActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileMapActorFactory), 393759262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_2233600141(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TileMapActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
