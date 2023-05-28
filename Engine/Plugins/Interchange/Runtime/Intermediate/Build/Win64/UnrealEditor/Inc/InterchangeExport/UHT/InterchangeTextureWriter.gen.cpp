// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureWriter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureWriter() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeWriterBase();
	INTERCHANGEEXPORT_API UClass* Z_Construct_UClass_UInterchangeTextureWriter();
	INTERCHANGEEXPORT_API UClass* Z_Construct_UClass_UInterchangeTextureWriter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeExport();
// End Cross Module References
	void UInterchangeTextureWriter::StaticRegisterNativesUInterchangeTextureWriter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureWriter);
	UClass* Z_Construct_UClass_UInterchangeTextureWriter_NoRegister()
	{
		return UInterchangeTextureWriter::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeWriterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeExport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureWriter.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureWriter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureWriter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureWriter_Statics::ClassParams = {
		&UInterchangeTextureWriter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureWriter()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton, Z_Construct_UClass_UInterchangeTextureWriter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureWriter.OuterSingleton;
	}
	template<> INTERCHANGEEXPORT_API UClass* StaticClass<UInterchangeTextureWriter>()
	{
		return UInterchangeTextureWriter::StaticClass();
	}
	UInterchangeTextureWriter::UInterchangeTextureWriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureWriter);
	UInterchangeTextureWriter::~UInterchangeTextureWriter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureWriter, UInterchangeTextureWriter::StaticClass, TEXT("UInterchangeTextureWriter"), &Z_Registration_Info_UClass_UInterchangeTextureWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureWriter), 747997047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_288917012(TEXT("/Script/InterchangeExport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Export_Public_InterchangeTextureWriter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
