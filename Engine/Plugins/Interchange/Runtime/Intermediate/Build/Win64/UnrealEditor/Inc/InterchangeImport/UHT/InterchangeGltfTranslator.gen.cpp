// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gltf/InterchangeGltfTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeGltfTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGltfTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeGltfTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeGltfTranslator::StaticRegisterNativesUInterchangeGltfTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeGltfTranslator);
	UClass* Z_Construct_UClass_UInterchangeGltfTranslator_NoRegister()
	{
		return UInterchangeGltfTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeGltfTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeGltfTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeGltfTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Gltf translator class support import of texture, material, static mesh, skeletal mesh, */" },
		{ "IncludePath", "Gltf/InterchangeGltfTranslator.h" },
		{ "ModuleRelativePath", "Public/Gltf/InterchangeGltfTranslator.h" },
		{ "ToolTip", "Gltf translator class support import of texture, material, static mesh, skeletal mesh," },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeGltfTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGltfTranslator, IInterchangeStaticMeshPayloadInterface), false },  // 4273489511
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGltfTranslator, IInterchangeTexturePayloadInterface), false },  // 1292279882
			{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGltfTranslator, IInterchangeAnimationPayloadInterface), false },  // 623216339
			{ Z_Construct_UClass_UInterchangeVariantSetPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGltfTranslator, IInterchangeVariantSetPayloadInterface), false },  // 3520875193
			{ Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeGltfTranslator, IInterchangeSkeletalMeshPayloadInterface), false },  // 219426445
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeGltfTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeGltfTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeGltfTranslator_Statics::ClassParams = {
		&UInterchangeGltfTranslator::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeGltfTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeGltfTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeGltfTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeGltfTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeGltfTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeGltfTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeGltfTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeGltfTranslator>()
	{
		return UInterchangeGltfTranslator::StaticClass();
	}
	UInterchangeGltfTranslator::UInterchangeGltfTranslator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeGltfTranslator);
	UInterchangeGltfTranslator::~UInterchangeGltfTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeGltfTranslator, UInterchangeGltfTranslator::StaticClass, TEXT("UInterchangeGltfTranslator"), &Z_Registration_Info_UClass_UInterchangeGltfTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeGltfTranslator), 313810893U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_404803879(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Gltf_InterchangeGltfTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
