// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Exporters/RenderTargetExporterHDR.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTargetExporterHDR() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_URenderTargetExporterEXR();
	UNREALED_API UClass* Z_Construct_UClass_URenderTargetExporterEXR_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_URenderTargetExporterPNG();
	UNREALED_API UClass* Z_Construct_UClass_URenderTargetExporterPNG_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void URenderTargetExporterPNG::StaticRegisterNativesURenderTargetExporterPNG()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderTargetExporterPNG);
	UClass* Z_Construct_UClass_URenderTargetExporterPNG_NoRegister()
	{
		return URenderTargetExporterPNG::StaticClass();
	}
	struct Z_Construct_UClass_URenderTargetExporterPNG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderTargetExporterPNG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderTargetExporterPNG_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// note : URenderTargetExporterHDR deleted\n//\x09""export to HDR is discouraged, use PNG or EXR\n" },
		{ "IncludePath", "Exporters/RenderTargetExporterHDR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/RenderTargetExporterHDR.h" },
		{ "ToolTip", "note : URenderTargetExporterHDR deleted\n      export to HDR is discouraged, use PNG or EXR" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderTargetExporterPNG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderTargetExporterPNG>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderTargetExporterPNG_Statics::ClassParams = {
		&URenderTargetExporterPNG::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URenderTargetExporterPNG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetExporterPNG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderTargetExporterPNG()
	{
		if (!Z_Registration_Info_UClass_URenderTargetExporterPNG.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderTargetExporterPNG.OuterSingleton, Z_Construct_UClass_URenderTargetExporterPNG_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderTargetExporterPNG.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<URenderTargetExporterPNG>()
	{
		return URenderTargetExporterPNG::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderTargetExporterPNG);
	URenderTargetExporterPNG::~URenderTargetExporterPNG() {}
	void URenderTargetExporterEXR::StaticRegisterNativesURenderTargetExporterEXR()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderTargetExporterEXR);
	UClass* Z_Construct_UClass_URenderTargetExporterEXR_NoRegister()
	{
		return URenderTargetExporterEXR::StaticClass();
	}
	struct Z_Construct_UClass_URenderTargetExporterEXR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderTargetExporterEXR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderTargetExporterEXR_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/RenderTargetExporterHDR.h" },
		{ "ModuleRelativePath", "Classes/Exporters/RenderTargetExporterHDR.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderTargetExporterEXR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderTargetExporterEXR>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderTargetExporterEXR_Statics::ClassParams = {
		&URenderTargetExporterEXR::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URenderTargetExporterEXR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderTargetExporterEXR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderTargetExporterEXR()
	{
		if (!Z_Registration_Info_UClass_URenderTargetExporterEXR.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderTargetExporterEXR.OuterSingleton, Z_Construct_UClass_URenderTargetExporterEXR_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderTargetExporterEXR.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<URenderTargetExporterEXR>()
	{
		return URenderTargetExporterEXR::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderTargetExporterEXR);
	URenderTargetExporterEXR::~URenderTargetExporterEXR() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_RenderTargetExporterHDR_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_RenderTargetExporterHDR_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderTargetExporterPNG, URenderTargetExporterPNG::StaticClass, TEXT("URenderTargetExporterPNG"), &Z_Registration_Info_UClass_URenderTargetExporterPNG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderTargetExporterPNG), 3307864820U) },
		{ Z_Construct_UClass_URenderTargetExporterEXR, URenderTargetExporterEXR::StaticClass, TEXT("URenderTargetExporterEXR"), &Z_Registration_Info_UClass_URenderTargetExporterEXR, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderTargetExporterEXR), 4272724171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_RenderTargetExporterHDR_h_1468141013(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_RenderTargetExporterHDR_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Exporters_RenderTargetExporterHDR_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
