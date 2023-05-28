// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingAssetExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetExporter() {}
// Cross Module References
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothingAssetExporter();
	CLOTHPAINTER_API UClass* Z_Construct_UClass_UClothingAssetExporter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
// End Cross Module References
	void UClothingAssetExporter::StaticRegisterNativesUClothingAssetExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetExporter);
	UClass* Z_Construct_UClass_UClothingAssetExporter_NoRegister()
	{
		return UClothingAssetExporter::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetExporter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Modular exporter base class. */" },
		{ "IncludePath", "ClothingAssetExporter.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetExporter.h" },
		{ "ToolTip", "Modular exporter base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetExporter_Statics::ClassParams = {
		&UClothingAssetExporter::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetExporter()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetExporter.OuterSingleton, Z_Construct_UClass_UClothingAssetExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetExporter.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UClass* StaticClass<UClothingAssetExporter>()
	{
		return UClothingAssetExporter::StaticClass();
	}
	UClothingAssetExporter::UClothingAssetExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetExporter);
	UClothingAssetExporter::~UClothingAssetExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetExporter, UClothingAssetExporter::StaticClass, TEXT("UClothingAssetExporter"), &Z_Registration_Info_UClass_UClothingAssetExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetExporter), 3804936602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_2140682935(TEXT("/Script/ClothPainter"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_ClothingAssetExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
