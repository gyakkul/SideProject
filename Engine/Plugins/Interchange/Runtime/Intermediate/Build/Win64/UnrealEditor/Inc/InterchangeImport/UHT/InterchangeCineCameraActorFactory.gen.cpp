// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scene/InterchangeCineCameraActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeCineCameraActorFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeCineCameraActorFactory::StaticRegisterNativesUInterchangeCineCameraActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeCineCameraActorFactory);
	UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory_NoRegister()
	{
		return UInterchangeCineCameraActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Scene/InterchangeCineCameraActorFactory.h" },
		{ "ModuleRelativePath", "Public/Scene/InterchangeCineCameraActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeCineCameraActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::ClassParams = {
		&UInterchangeCineCameraActorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeCineCameraActorFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton, Z_Construct_UClass_UInterchangeCineCameraActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeCineCameraActorFactory>()
	{
		return UInterchangeCineCameraActorFactory::StaticClass();
	}
	UInterchangeCineCameraActorFactory::UInterchangeCineCameraActorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeCineCameraActorFactory);
	UInterchangeCineCameraActorFactory::~UInterchangeCineCameraActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCineCameraActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCineCameraActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeCineCameraActorFactory, UInterchangeCineCameraActorFactory::StaticClass, TEXT("UInterchangeCineCameraActorFactory"), &Z_Registration_Info_UClass_UInterchangeCineCameraActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeCineCameraActorFactory), 80022063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCineCameraActorFactory_h_3693384740(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCineCameraActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Scene_InterchangeCineCameraActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
