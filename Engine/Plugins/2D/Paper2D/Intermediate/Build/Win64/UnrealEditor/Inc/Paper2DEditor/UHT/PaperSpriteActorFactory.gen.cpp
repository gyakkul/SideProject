// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteActorFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteActorFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteActorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperSpriteActorFactory::StaticRegisterNativesUPaperSpriteActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteActorFactory);
	UClass* Z_Construct_UClass_UPaperSpriteActorFactory_NoRegister()
	{
		return UPaperSpriteActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PaperSpriteActorFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteActorFactory_Statics::ClassParams = {
		&UPaperSpriteActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteActorFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteActorFactory.OuterSingleton, Z_Construct_UClass_UPaperSpriteActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteActorFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperSpriteActorFactory>()
	{
		return UPaperSpriteActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteActorFactory);
	UPaperSpriteActorFactory::~UPaperSpriteActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteActorFactory, UPaperSpriteActorFactory::StaticClass, TEXT("UPaperSpriteActorFactory"), &Z_Registration_Info_UClass_UPaperSpriteActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteActorFactory), 2083881219U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_1163624840(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
