// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TerrainSplineActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTerrainSplineActorFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTerrainSplineActorFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UTerrainSplineActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UTerrainSplineActorFactory::StaticRegisterNativesUTerrainSplineActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTerrainSplineActorFactory);
	UClass* Z_Construct_UClass_UTerrainSplineActorFactory_NoRegister()
	{
		return UTerrainSplineActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UTerrainSplineActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTerrainSplineActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTerrainSplineActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TerrainSplineActorFactory.h" },
		{ "ModuleRelativePath", "Classes/TerrainSplineActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTerrainSplineActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTerrainSplineActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTerrainSplineActorFactory_Statics::ClassParams = {
		&UTerrainSplineActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTerrainSplineActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTerrainSplineActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTerrainSplineActorFactory()
	{
		if (!Z_Registration_Info_UClass_UTerrainSplineActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTerrainSplineActorFactory.OuterSingleton, Z_Construct_UClass_UTerrainSplineActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTerrainSplineActorFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UTerrainSplineActorFactory>()
	{
		return UTerrainSplineActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTerrainSplineActorFactory);
	UTerrainSplineActorFactory::~UTerrainSplineActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TerrainSplineActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TerrainSplineActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTerrainSplineActorFactory, UTerrainSplineActorFactory::StaticClass, TEXT("UTerrainSplineActorFactory"), &Z_Registration_Info_UClass_UTerrainSplineActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTerrainSplineActorFactory), 1403740365U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TerrainSplineActorFactory_h_1498382054(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TerrainSplineActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_TerrainSplineActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
