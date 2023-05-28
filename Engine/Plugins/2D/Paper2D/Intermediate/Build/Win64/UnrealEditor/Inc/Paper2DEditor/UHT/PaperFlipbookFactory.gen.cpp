// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperFlipbookFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookFactory() {}
// Cross Module References
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperFlipbookFactory();
	PAPER2DEDITOR_API UClass* Z_Construct_UClass_UPaperFlipbookFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_Paper2DEditor();
// End Cross Module References
	void UPaperFlipbookFactory::StaticRegisterNativesUPaperFlipbookFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperFlipbookFactory);
	UClass* Z_Construct_UClass_UPaperFlipbookFactory_NoRegister()
	{
		return UPaperFlipbookFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPaperFlipbookFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperFlipbookFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2DEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperFlipbookFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for flipbooks\n */" },
		{ "IncludePath", "PaperFlipbookFactory.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookFactory.h" },
		{ "ToolTip", "Factory for flipbooks" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperFlipbookFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbookFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbookFactory_Statics::ClassParams = {
		&UPaperFlipbookFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperFlipbookFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperFlipbookFactory()
	{
		if (!Z_Registration_Info_UClass_UPaperFlipbookFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperFlipbookFactory.OuterSingleton, Z_Construct_UClass_UPaperFlipbookFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperFlipbookFactory.OuterSingleton;
	}
	template<> PAPER2DEDITOR_API UClass* StaticClass<UPaperFlipbookFactory>()
	{
		return UPaperFlipbookFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbookFactory);
	UPaperFlipbookFactory::~UPaperFlipbookFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperFlipbookFactory, UPaperFlipbookFactory::StaticClass, TEXT("UPaperFlipbookFactory"), &Z_Registration_Info_UClass_UPaperFlipbookFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperFlipbookFactory), 3461153524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_757991358(TEXT("/Script/Paper2DEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2DEditor_Classes_PaperFlipbookFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
