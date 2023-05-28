// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/TextBufferExporterTXT.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBufferExporterTXT() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UTextBufferExporterTXT();
	UNREALED_API UClass* Z_Construct_UClass_UTextBufferExporterTXT_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTextBufferExporterTXT::StaticRegisterNativesUTextBufferExporterTXT()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextBufferExporterTXT);
	UClass* Z_Construct_UClass_UTextBufferExporterTXT_NoRegister()
	{
		return UTextBufferExporterTXT::StaticClass();
	}
	struct Z_Construct_UClass_UTextBufferExporterTXT_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBufferExporterTXT_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/TextBufferExporterTXT.h" },
		{ "ModuleRelativePath", "Classes/Exporters/TextBufferExporterTXT.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBufferExporterTXT_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBufferExporterTXT>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextBufferExporterTXT_Statics::ClassParams = {
		&UTextBufferExporterTXT::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBufferExporterTXT_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBufferExporterTXT()
	{
		if (!Z_Registration_Info_UClass_UTextBufferExporterTXT.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextBufferExporterTXT.OuterSingleton, Z_Construct_UClass_UTextBufferExporterTXT_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextBufferExporterTXT.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTextBufferExporterTXT>()
	{
		return UTextBufferExporterTXT::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBufferExporterTXT);
	UTextBufferExporterTXT::~UTextBufferExporterTXT() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextBufferExporterTXT_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextBufferExporterTXT_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextBufferExporterTXT, UTextBufferExporterTXT::StaticClass, TEXT("UTextBufferExporterTXT"), &Z_Registration_Info_UClass_UTextBufferExporterTXT, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextBufferExporterTXT), 1494135638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextBufferExporterTXT_h_627316665(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextBufferExporterTXT_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_TextBufferExporterTXT_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
