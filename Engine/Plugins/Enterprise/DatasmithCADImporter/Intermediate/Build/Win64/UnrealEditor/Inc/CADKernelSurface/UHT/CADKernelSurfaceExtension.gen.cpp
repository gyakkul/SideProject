// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CADKernelSurfaceExtension.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCADKernelSurfaceExtension() {}
// Cross Module References
	CADKERNELSURFACE_API UClass* Z_Construct_UClass_UCADKernelParametricSurfaceData();
	CADKERNELSURFACE_API UClass* Z_Construct_UClass_UCADKernelParametricSurfaceData_NoRegister();
	PARAMETRICSURFACE_API UClass* Z_Construct_UClass_UParametricSurfaceData();
	UPackage* Z_Construct_UPackage__Script_CADKernelSurface();
// End Cross Module References
	void UCADKernelParametricSurfaceData::StaticRegisterNativesUCADKernelParametricSurfaceData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCADKernelParametricSurfaceData);
	UClass* Z_Construct_UClass_UCADKernelParametricSurfaceData_NoRegister()
	{
		return UCADKernelParametricSurfaceData::StaticClass();
	}
	struct Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParametricSurfaceData,
		(UObject* (*)())Z_Construct_UPackage__Script_CADKernelSurface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "CADKernel Parametric Surface Data" },
		{ "IncludePath", "CADKernelSurfaceExtension.h" },
		{ "ModuleRelativePath", "Public/CADKernelSurfaceExtension.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCADKernelParametricSurfaceData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::ClassParams = {
		&UCADKernelParametricSurfaceData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCADKernelParametricSurfaceData()
	{
		if (!Z_Registration_Info_UClass_UCADKernelParametricSurfaceData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCADKernelParametricSurfaceData.OuterSingleton, Z_Construct_UClass_UCADKernelParametricSurfaceData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCADKernelParametricSurfaceData.OuterSingleton;
	}
	template<> CADKERNELSURFACE_API UClass* StaticClass<UCADKernelParametricSurfaceData>()
	{
		return UCADKernelParametricSurfaceData::StaticClass();
	}
	UCADKernelParametricSurfaceData::UCADKernelParametricSurfaceData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCADKernelParametricSurfaceData);
	UCADKernelParametricSurfaceData::~UCADKernelParametricSurfaceData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCADKernelParametricSurfaceData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCADKernelParametricSurfaceData, UCADKernelParametricSurfaceData::StaticClass, TEXT("UCADKernelParametricSurfaceData"), &Z_Registration_Info_UClass_UCADKernelParametricSurfaceData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCADKernelParametricSurfaceData), 2735023628U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_3626820148(TEXT("/Script/CADKernelSurface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_CADKernelSurface_Public_CADKernelSurfaceExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
