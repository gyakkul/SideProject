// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/InterchangeStaticMeshPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeStaticMeshPayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeStaticMeshPayloadInterface::StaticRegisterNativesUInterchangeStaticMeshPayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeStaticMeshPayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister()
	{
		return UInterchangeStaticMeshPayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mesh/InterchangeStaticMeshPayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeStaticMeshPayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::ClassParams = {
		&UInterchangeStaticMeshPayloadInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeStaticMeshPayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeStaticMeshPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeStaticMeshPayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeStaticMeshPayloadInterface>()
	{
		return UInterchangeStaticMeshPayloadInterface::StaticClass();
	}
	UInterchangeStaticMeshPayloadInterface::UInterchangeStaticMeshPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeStaticMeshPayloadInterface);
	UInterchangeStaticMeshPayloadInterface::~UInterchangeStaticMeshPayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshPayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshPayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface, UInterchangeStaticMeshPayloadInterface::StaticClass, TEXT("UInterchangeStaticMeshPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeStaticMeshPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeStaticMeshPayloadInterface), 4273489511U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshPayloadInterface_h_1981182292(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeStaticMeshPayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
