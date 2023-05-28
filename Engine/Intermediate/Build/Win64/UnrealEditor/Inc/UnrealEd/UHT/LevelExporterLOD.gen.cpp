// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/LevelExporterLOD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelExporterLOD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_ULevelExporterLOD();
	UNREALED_API UClass* Z_Construct_UClass_ULevelExporterLOD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULevelExporterLOD::StaticRegisterNativesULevelExporterLOD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelExporterLOD);
	UClass* Z_Construct_UClass_ULevelExporterLOD_NoRegister()
	{
		return ULevelExporterLOD::StaticClass();
	}
	struct Z_Construct_UClass_ULevelExporterLOD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelExporterLOD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelExporterLOD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/LevelExporterLOD.h" },
		{ "ModuleRelativePath", "Classes/Exporters/LevelExporterLOD.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelExporterLOD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelExporterLOD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelExporterLOD_Statics::ClassParams = {
		&ULevelExporterLOD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelExporterLOD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelExporterLOD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelExporterLOD()
	{
		if (!Z_Registration_Info_UClass_ULevelExporterLOD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelExporterLOD.OuterSingleton, Z_Construct_UClass_ULevelExporterLOD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelExporterLOD.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelExporterLOD>()
	{
		return ULevelExporterLOD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelExporterLOD);
	ULevelExporterLOD::~ULevelExporterLOD() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterLOD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterLOD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelExporterLOD, ULevelExporterLOD::StaticClass, TEXT("ULevelExporterLOD"), &Z_Registration_Info_UClass_ULevelExporterLOD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelExporterLOD), 1066387389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterLOD_h_1084613771(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterLOD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_LevelExporterLOD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
