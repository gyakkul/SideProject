// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Texture/InterchangeSlicedTexturePayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeSlicedTexturePayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeSlicedTexturePayloadInterface::StaticRegisterNativesUInterchangeSlicedTexturePayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeSlicedTexturePayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister()
	{
		return UInterchangeSlicedTexturePayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Texture/InterchangeSlicedTexturePayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeSlicedTexturePayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::ClassParams = {
		&UInterchangeSlicedTexturePayloadInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeSlicedTexturePayloadInterface>()
	{
		return UInterchangeSlicedTexturePayloadInterface::StaticClass();
	}
	UInterchangeSlicedTexturePayloadInterface::UInterchangeSlicedTexturePayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeSlicedTexturePayloadInterface);
	UInterchangeSlicedTexturePayloadInterface::~UInterchangeSlicedTexturePayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface, UInterchangeSlicedTexturePayloadInterface::StaticClass, TEXT("UInterchangeSlicedTexturePayloadInterface"), &Z_Registration_Info_UClass_UInterchangeSlicedTexturePayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeSlicedTexturePayloadInterface), 3817843124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_372794928(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeSlicedTexturePayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
