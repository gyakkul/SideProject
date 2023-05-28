// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Texture/InterchangeIESTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeIESTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeIESTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeIESTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeIESTranslator::StaticRegisterNativesUInterchangeIESTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeIESTranslator);
	UClass* Z_Construct_UClass_UInterchangeIESTranslator_NoRegister()
	{
		return UInterchangeIESTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeIESTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeIESTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeIESTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Texture/InterchangeIESTranslator.h" },
		{ "ModuleRelativePath", "Public/Texture/InterchangeIESTranslator.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeIESTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeTextureLightProfilePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeIESTranslator, IInterchangeTextureLightProfilePayloadInterface), false },  // 4184465351
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeIESTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeIESTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeIESTranslator_Statics::ClassParams = {
		&UInterchangeIESTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeIESTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeIESTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeIESTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeIESTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeIESTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeIESTranslator>()
	{
		return UInterchangeIESTranslator::StaticClass();
	}
	UInterchangeIESTranslator::UInterchangeIESTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeIESTranslator);
	UInterchangeIESTranslator::~UInterchangeIESTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeIESTranslator, UInterchangeIESTranslator::StaticClass, TEXT("UInterchangeIESTranslator"), &Z_Registration_Info_UClass_UInterchangeIESTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeIESTranslator), 2166012355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_1931960880(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Texture_InterchangeIESTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
