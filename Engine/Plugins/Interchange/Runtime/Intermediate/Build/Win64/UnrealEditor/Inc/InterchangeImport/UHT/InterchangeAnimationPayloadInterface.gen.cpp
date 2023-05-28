// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/InterchangeAnimationPayloadInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeAnimationPayloadInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeAnimationPayloadInterface::StaticRegisterNativesUInterchangeAnimationPayloadInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeAnimationPayloadInterface);
	UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister()
	{
		return UInterchangeAnimationPayloadInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/InterchangeAnimationPayloadInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterchangeAnimationPayloadInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::ClassParams = {
		&UInterchangeAnimationPayloadInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface()
	{
		if (!Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton, Z_Construct_UClass_UInterchangeAnimationPayloadInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeAnimationPayloadInterface>()
	{
		return UInterchangeAnimationPayloadInterface::StaticClass();
	}
	UInterchangeAnimationPayloadInterface::UInterchangeAnimationPayloadInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeAnimationPayloadInterface);
	UInterchangeAnimationPayloadInterface::~UInterchangeAnimationPayloadInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface, UInterchangeAnimationPayloadInterface::StaticClass, TEXT("UInterchangeAnimationPayloadInterface"), &Z_Registration_Info_UClass_UInterchangeAnimationPayloadInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeAnimationPayloadInterface), 623216339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_2197017535(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Animation_InterchangeAnimationPayloadInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
