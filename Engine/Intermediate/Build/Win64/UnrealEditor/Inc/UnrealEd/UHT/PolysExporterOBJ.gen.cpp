// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/PolysExporterOBJ.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolysExporterOBJ() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterOBJ();
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterOBJ_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPolysExporterOBJ::StaticRegisterNativesUPolysExporterOBJ()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPolysExporterOBJ);
	UClass* Z_Construct_UClass_UPolysExporterOBJ_NoRegister()
	{
		return UPolysExporterOBJ::StaticClass();
	}
	struct Z_Construct_UClass_UPolysExporterOBJ_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolysExporterOBJ_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolysExporterOBJ_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/PolysExporterOBJ.h" },
		{ "ModuleRelativePath", "Classes/Exporters/PolysExporterOBJ.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolysExporterOBJ_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolysExporterOBJ>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPolysExporterOBJ_Statics::ClassParams = {
		&UPolysExporterOBJ::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPolysExporterOBJ_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPolysExporterOBJ_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolysExporterOBJ()
	{
		if (!Z_Registration_Info_UClass_UPolysExporterOBJ.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPolysExporterOBJ.OuterSingleton, Z_Construct_UClass_UPolysExporterOBJ_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPolysExporterOBJ.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPolysExporterOBJ>()
	{
		return UPolysExporterOBJ::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolysExporterOBJ);
	UPolysExporterOBJ::~UPolysExporterOBJ() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterOBJ_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterOBJ_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPolysExporterOBJ, UPolysExporterOBJ::StaticClass, TEXT("UPolysExporterOBJ"), &Z_Registration_Info_UClass_UPolysExporterOBJ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPolysExporterOBJ), 2609668209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterOBJ_h_2653583277(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterOBJ_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_PolysExporterOBJ_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
