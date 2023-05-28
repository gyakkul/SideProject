// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/InterchangeSkeletalMeshFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSkeletalMeshFactory::StaticRegisterNativesUInterchangeSkeletalMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshFactory);
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory_NoRegister()
	{
		return UInterchangeSkeletalMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangeSkeletalMeshFactory.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeSkeletalMeshFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::ClassParams = {
		&UInterchangeSkeletalMeshFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSkeletalMeshFactory>()
	{
		return UInterchangeSkeletalMeshFactory::StaticClass();
	}
	UInterchangeSkeletalMeshFactory::UInterchangeSkeletalMeshFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshFactory);
	UInterchangeSkeletalMeshFactory::~UInterchangeSkeletalMeshFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshFactory, UInterchangeSkeletalMeshFactory::StaticClass, TEXT("UInterchangeSkeletalMeshFactory"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshFactory), 333235955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_1882046498(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
