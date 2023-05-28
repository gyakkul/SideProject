// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/InterchangeReimportHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeReimportHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UInterchangeReimportHandler();
	UNREALED_API UClass* Z_Construct_UClass_UInterchangeReimportHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UInterchangeReimportHandler::StaticRegisterNativesUInterchangeReimportHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeReimportHandler);
	UClass* Z_Construct_UClass_UInterchangeReimportHandler_NoRegister()
	{
		return UInterchangeReimportHandler::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeReimportHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeReimportHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeReimportHandler_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This FReimportHandler class is temporary until we remove the UFactory import/reimport code.\n * We use this ReimportHandler factory to make sure the set reimport is not touching the UInterchangeAssetImportData when reimporting an asset\n */" },
		{ "IncludePath", "Factories/InterchangeReimportHandler.h" },
		{ "ModuleRelativePath", "Classes/Factories/InterchangeReimportHandler.h" },
		{ "ToolTip", "This FReimportHandler class is temporary until we remove the UFactory import/reimport code.\nWe use this ReimportHandler factory to make sure the set reimport is not touching the UInterchangeAssetImportData when reimporting an asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeReimportHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeReimportHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeReimportHandler_Statics::ClassParams = {
		&UInterchangeReimportHandler::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeReimportHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeReimportHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeReimportHandler()
	{
		if (!Z_Registration_Info_UClass_UInterchangeReimportHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeReimportHandler.OuterSingleton, Z_Construct_UClass_UInterchangeReimportHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeReimportHandler.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UInterchangeReimportHandler>()
	{
		return UInterchangeReimportHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeReimportHandler);
	UInterchangeReimportHandler::~UInterchangeReimportHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeReimportHandler, UInterchangeReimportHandler::StaticClass, TEXT("UInterchangeReimportHandler"), &Z_Registration_Info_UClass_UInterchangeReimportHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeReimportHandler), 315622517U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_1548673670(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_InterchangeReimportHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
