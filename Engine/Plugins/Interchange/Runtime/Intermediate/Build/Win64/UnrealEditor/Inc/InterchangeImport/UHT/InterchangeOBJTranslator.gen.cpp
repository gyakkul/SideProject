// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mesh/InterchangeOBJTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeOBJTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeOBJTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeOBJTranslator::StaticRegisterNativesUInterchangeOBJTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeOBJTranslator);
	UClass* Z_Construct_UClass_UInterchangeOBJTranslator_NoRegister()
	{
		return UInterchangeOBJTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeOBJTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeOBJTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeOBJTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Mesh/InterchangeOBJTranslator.h" },
		{ "ModuleRelativePath", "Public/Mesh/InterchangeOBJTranslator.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeOBJTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeOBJTranslator, IInterchangeStaticMeshPayloadInterface), false },  // 4273489511
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeOBJTranslator, IInterchangeTexturePayloadInterface), false },  // 1292279882
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeOBJTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeOBJTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeOBJTranslator_Statics::ClassParams = {
		&UInterchangeOBJTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeOBJTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeOBJTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeOBJTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeOBJTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeOBJTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeOBJTranslator>()
	{
		return UInterchangeOBJTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeOBJTranslator);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeOBJTranslator, UInterchangeOBJTranslator::StaticClass, TEXT("UInterchangeOBJTranslator"), &Z_Registration_Info_UClass_UInterchangeOBJTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeOBJTranslator), 2871943979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_339750772(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Mesh_InterchangeOBJTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
