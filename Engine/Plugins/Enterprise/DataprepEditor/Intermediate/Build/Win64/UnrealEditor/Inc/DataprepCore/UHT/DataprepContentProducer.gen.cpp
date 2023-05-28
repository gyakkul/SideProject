// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepContentProducer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepContentProducer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentProducer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepContentProducer::StaticRegisterNativesUDataprepContentProducer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepContentProducer);
	UClass* Z_Construct_UClass_UDataprepContentProducer_NoRegister()
	{
		return UDataprepContentProducer::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepContentProducer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepContentProducer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepContentProducer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class to derived from to be a producer in the Dataprep asset\n */" },
		{ "IncludePath", "DataprepContentProducer.h" },
		{ "ModuleRelativePath", "Public/DataprepContentProducer.h" },
		{ "ToolTip", "Abstract class to derived from to be a producer in the Dataprep asset" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepContentProducer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepContentProducer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepContentProducer_Statics::ClassParams = {
		&UDataprepContentProducer::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepContentProducer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepContentProducer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepContentProducer()
	{
		if (!Z_Registration_Info_UClass_UDataprepContentProducer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepContentProducer.OuterSingleton, Z_Construct_UClass_UDataprepContentProducer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepContentProducer.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepContentProducer>()
	{
		return UDataprepContentProducer::StaticClass();
	}
	UDataprepContentProducer::UDataprepContentProducer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepContentProducer);
	UDataprepContentProducer::~UDataprepContentProducer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepContentProducer, UDataprepContentProducer::StaticClass, TEXT("UDataprepContentProducer"), &Z_Registration_Info_UClass_UDataprepContentProducer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepContentProducer), 179703439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_4009399154(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentProducer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
