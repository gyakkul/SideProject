// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/PolysExporterT3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolysExporterT3D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterT3D();
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterT3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPolysExporterT3D::StaticRegisterNativesUPolysExporterT3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolysExporterT3D);
	UClass* Z_Construct_UClass_UPolysExporterT3D_NoRegister()
	{
		return UPolysExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_UPolysExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolysExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/PolysExporterT3D.h" },
		{ "ModuleRelativePath", "Classes/Exporters/PolysExporterT3D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolysExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolysExporterT3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolysExporterT3D_Statics::ClassParams = {
		&UPolysExporterT3D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolysExporterT3D()
	{
		if (!Z_Registration_Info_UClass_UPolysExporterT3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolysExporterT3D.OuterSingleton, Z_Construct_UClass_UPolysExporterT3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolysExporterT3D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPolysExporterT3D>()
	{
		return UPolysExporterT3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolysExporterT3D);
	UPolysExporterT3D::~UPolysExporterT3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterT3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterT3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolysExporterT3D, UPolysExporterT3D::StaticClass, TEXT("UPolysExporterT3D"), &Z_Registration_Info_UClass_UPolysExporterT3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolysExporterT3D), 4159750426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterT3D_h_788910856(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterT3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterT3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
