// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/InterchangeStaticMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeStaticMeshFactory::StaticRegisterNativesUInterchangeStaticMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshFactory);
	UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory_NoRegister()
	{
		return UInterchangeStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangeStaticMeshFactory.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeStaticMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::ClassParams = {
		&UInterchangeStaticMeshFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeStaticMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeStaticMeshFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeStaticMeshFactory>()
	{
		return UInterchangeStaticMeshFactory::StaticClass();
	}
	UInterchangeStaticMeshFactory::UInterchangeStaticMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshFactory);
	UInterchangeStaticMeshFactory::~UInterchangeStaticMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshFactory, UInterchangeStaticMeshFactory::StaticClass, TEXT("UInterchangeStaticMeshFactory"), &Z_Registration_Info_UClass_UInterchangeStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshFactory), 3987366892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_916756536(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
