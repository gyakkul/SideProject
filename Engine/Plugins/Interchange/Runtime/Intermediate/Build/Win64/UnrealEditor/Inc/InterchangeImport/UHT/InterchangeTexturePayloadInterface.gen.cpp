// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Texture/InterchangeTexturePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTexturePayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeTexturePayloadInterface::StaticRegisterNativesUInterchangeTexturePayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTexturePayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister()
	{
		return UInterchangeTexturePayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeTexturePayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeTexturePayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::ClassParams = {
		&UInterchangeTexturePayloadInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeTexturePayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeTexturePayloadInterface>()
	{
		return UInterchangeTexturePayloadInterface::StaticClass();
	}
	UInterchangeTexturePayloadInterface::UInterchangeTexturePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTexturePayloadInterface);
	UInterchangeTexturePayloadInterface::~UInterchangeTexturePayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTexturePayloadInterface, UInterchangeTexturePayloadInterface::StaticClass, TEXT("UInterchangeTexturePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeTexturePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTexturePayloadInterface), 1292279882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h_4120351887(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeTexturePayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
