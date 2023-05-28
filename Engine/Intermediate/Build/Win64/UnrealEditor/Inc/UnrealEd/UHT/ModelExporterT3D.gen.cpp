// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/ModelExporterT3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelExporterT3D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UModelExporterT3D();
	UNREALED_API UClass* Z_Construct_UClass_UModelExporterT3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UModelExporterT3D::StaticRegisterNativesUModelExporterT3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelExporterT3D);
	UClass* Z_Construct_UClass_UModelExporterT3D_NoRegister()
	{
		return UModelExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_UModelExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/ModelExporterT3D.h" },
		{ "ModuleRelativePath", "Classes/Exporters/ModelExporterT3D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelExporterT3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelExporterT3D_Statics::ClassParams = {
		&UModelExporterT3D::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UModelExporterT3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelExporterT3D()
	{
		if (!Z_Registration_Info_UClass_UModelExporterT3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelExporterT3D.OuterSingleton, Z_Construct_UClass_UModelExporterT3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelExporterT3D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UModelExporterT3D>()
	{
		return UModelExporterT3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelExporterT3D);
	UModelExporterT3D::~UModelExporterT3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ModelExporterT3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ModelExporterT3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelExporterT3D, UModelExporterT3D::StaticClass, TEXT("UModelExporterT3D"), &Z_Registration_Info_UClass_UModelExporterT3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelExporterT3D), 453373842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ModelExporterT3D_h_2475260952(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ModelExporterT3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_ModelExporterT3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
