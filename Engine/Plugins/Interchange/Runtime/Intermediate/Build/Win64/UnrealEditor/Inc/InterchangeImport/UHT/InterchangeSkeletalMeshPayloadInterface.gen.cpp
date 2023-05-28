// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/InterchangeSkeletalMeshPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSkeletalMeshPayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSkeletalMeshPayloadInterface::StaticRegisterNativesUInterchangeSkeletalMeshPayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSkeletalMeshPayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister()
	{
		return UInterchangeSkeletalMeshPayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Mesh/InterchangeSkeletalMeshPayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeSkeletalMeshPayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::ClassParams = {
		&UInterchangeSkeletalMeshPayloadInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSkeletalMeshPayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSkeletalMeshPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSkeletalMeshPayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSkeletalMeshPayloadInterface>()
	{
		return UInterchangeSkeletalMeshPayloadInterface::StaticClass();
	}
	UInterchangeSkeletalMeshPayloadInterface::UInterchangeSkeletalMeshPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSkeletalMeshPayloadInterface);
	UInterchangeSkeletalMeshPayloadInterface::~UInterchangeSkeletalMeshPayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshPayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshPayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface, UInterchangeSkeletalMeshPayloadInterface::StaticClass, TEXT("UInterchangeSkeletalMeshPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeSkeletalMeshPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSkeletalMeshPayloadInterface), 219426445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshPayloadInterface_h_605793351(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeSkeletalMeshPayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
