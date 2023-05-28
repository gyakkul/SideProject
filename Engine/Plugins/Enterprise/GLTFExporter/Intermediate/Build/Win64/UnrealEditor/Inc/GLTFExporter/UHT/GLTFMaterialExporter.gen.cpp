// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exporters/GLTFMaterialExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGLTFMaterialExporter() {}
// Cross Module References
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExporter();
	GLTFEXPORTER_API UClass* Z_Construct_UClass_UGLTFMaterialExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GLTFExporter();
// End Cross Module References
	void UGLTFMaterialExporter::StaticRegisterNativesUGLTFMaterialExporter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGLTFMaterialExporter);
	UClass* Z_Construct_UClass_UGLTFMaterialExporter_NoRegister()
	{
		return UGLTFMaterialExporter::StaticClass();
	}
	struct Z_Construct_UClass_UGLTFMaterialExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGLTFMaterialExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGLTFExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_GLTFExporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGLTFMaterialExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/GLTFMaterialExporter.h" },
		{ "ModuleRelativePath", "Public/Exporters/GLTFMaterialExporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGLTFMaterialExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGLTFMaterialExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGLTFMaterialExporter_Statics::ClassParams = {
		&UGLTFMaterialExporter::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGLTFMaterialExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGLTFMaterialExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGLTFMaterialExporter()
	{
		if (!Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton, Z_Construct_UClass_UGLTFMaterialExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGLTFMaterialExporter.OuterSingleton;
	}
	template<> GLTFEXPORTER_API UClass* StaticClass<UGLTFMaterialExporter>()
	{
		return UGLTFMaterialExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGLTFMaterialExporter);
	UGLTFMaterialExporter::~UGLTFMaterialExporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGLTFMaterialExporter, UGLTFMaterialExporter::StaticClass, TEXT("UGLTFMaterialExporter"), &Z_Registration_Info_UClass_UGLTFMaterialExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGLTFMaterialExporter), 1624133427U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_3551957256(TEXT("/Script/GLTFExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_GLTFExporter_Source_GLTFExporter_Public_Exporters_GLTFMaterialExporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
