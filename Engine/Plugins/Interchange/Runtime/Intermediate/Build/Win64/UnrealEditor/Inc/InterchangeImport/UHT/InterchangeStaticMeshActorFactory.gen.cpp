// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeStaticMeshActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshActorFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeStaticMeshActorFactory::StaticRegisterNativesUInterchangeStaticMeshActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshActorFactory);
	UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory_NoRegister()
	{
		return UInterchangeStaticMeshActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeStaticMeshActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeStaticMeshActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeStaticMeshActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::ClassParams = {
		&UInterchangeStaticMeshActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeStaticMeshActorFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeStaticMeshActorFactory>()
	{
		return UInterchangeStaticMeshActorFactory::StaticClass();
	}
	UInterchangeStaticMeshActorFactory::UInterchangeStaticMeshActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshActorFactory);
	UInterchangeStaticMeshActorFactory::~UInterchangeStaticMeshActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshActorFactory, UInterchangeStaticMeshActorFactory::StaticClass, TEXT("UInterchangeStaticMeshActorFactory"), &Z_Registration_Info_UClass_UInterchangeStaticMeshActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshActorFactory), 44172649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_3327919987(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeStaticMeshActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
