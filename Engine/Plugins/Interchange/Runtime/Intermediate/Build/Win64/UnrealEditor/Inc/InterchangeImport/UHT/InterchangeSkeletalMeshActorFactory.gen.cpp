// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeSkeletalMeshActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshActorFactory() {}
// Cross Module References
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSkeletalMeshActorFactory::StaticRegisterNativesUInterchangeSkeletalMeshActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshActorFactory);
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_NoRegister()
	{
		return UInterchangeSkeletalMeshActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Scene/InterchangeSkeletalMeshActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeSkeletalMeshActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeSkeletalMeshActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::ClassParams = {
		&UInterchangeSkeletalMeshActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSkeletalMeshActorFactory>()
	{
		return UInterchangeSkeletalMeshActorFactory::StaticClass();
	}
	UInterchangeSkeletalMeshActorFactory::UInterchangeSkeletalMeshActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshActorFactory);
	UInterchangeSkeletalMeshActorFactory::~UInterchangeSkeletalMeshActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshActorFactory, UInterchangeSkeletalMeshActorFactory::StaticClass, TEXT("UInterchangeSkeletalMeshActorFactory"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshActorFactory), 3840762871U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_2518159267(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeSkeletalMeshActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
