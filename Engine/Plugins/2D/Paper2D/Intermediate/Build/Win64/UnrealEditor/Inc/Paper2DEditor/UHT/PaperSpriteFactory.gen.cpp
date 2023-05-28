// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperSpriteFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperSpriteFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperSpriteFactory::StaticRegisterNativesUPaperSpriteFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperSpriteFactory);
	UClass* Z_Construct_UClass_UPaperSpriteFactory_NoRegister()
	{
		return UPaperSpriteFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaperSpriteFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteFactory_Statics::ClassParams = {
		&UPaperSpriteFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperSpriteFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperSpriteFactory.OuterSingleton, Z_Construct_UClass_UPaperSpriteFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperSpriteFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperSpriteFactory>()
	{
		return UPaperSpriteFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteFactory);
	UPaperSpriteFactory::~UPaperSpriteFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperSpriteFactory, UPaperSpriteFactory::StaticClass, TEXT("UPaperSpriteFactory"), &Z_Registration_Info_UClass_UPaperSpriteFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperSpriteFactory), 1086595843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteFactory_h_1280267188(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperSpriteFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
