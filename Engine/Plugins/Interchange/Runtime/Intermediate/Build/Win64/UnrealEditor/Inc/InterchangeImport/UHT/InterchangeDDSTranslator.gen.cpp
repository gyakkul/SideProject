// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Texture/InterchangeDDSTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeDDSTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDDSTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeDDSTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeDDSTranslator::StaticRegisterNativesUInterchangeDDSTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeDDSTranslator);
	UClass* Z_Construct_UClass_UInterchangeDDSTranslator_NoRegister()
	{
		return UInterchangeDDSTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeDDSTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeDDSTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeDDSTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Texture/InterchangeDDSTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeDDSTranslator.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeDDSTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDDSTranslator, IInterchangeTexturePayloadInterface), false },  // 1292279882
			{ Z_Construct_UClass_UInterchangeSlicedTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeDDSTranslator, IInterchangeSlicedTexturePayloadInterface), false },  // 3817843124
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeDDSTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeDDSTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeDDSTranslator_Statics::ClassParams = {
		&UInterchangeDDSTranslator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeDDSTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeDDSTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeDDSTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeDDSTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeDDSTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeDDSTranslator>()
	{
		return UInterchangeDDSTranslator::StaticClass();
	}
	UInterchangeDDSTranslator::UInterchangeDDSTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeDDSTranslator);
	UInterchangeDDSTranslator::~UInterchangeDDSTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeDDSTranslator, UInterchangeDDSTranslator::StaticClass, TEXT("UInterchangeDDSTranslator"), &Z_Registration_Info_UClass_UInterchangeDDSTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeDDSTranslator), 282394963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_4290856903(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeDDSTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
