// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fbx/InterchangeFbxTranslator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeFbxTranslator() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeTranslatorBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslator();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeFbxTranslator::StaticRegisterNativesUInterchangeFbxTranslator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeFbxTranslator);
	UClass* Z_Construct_UClass_UInterchangeFbxTranslator_NoRegister()
	{
		return UInterchangeFbxTranslator::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeFbxTranslator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeFbxTranslator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeTranslatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeFbxTranslator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Fbx translator class support import of texture, material, static mesh, skeletal mesh, */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Fbx/InterchangeFbxTranslator.h" },
		{ "ModuleRelativePath", "Public/Fbx/InterchangeFbxTranslator.h" },
		{ "ToolTip", "Fbx translator class support import of texture, material, static mesh, skeletal mesh," },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInterchangeFbxTranslator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterchangeTexturePayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeTexturePayloadInterface), false },  // 1292279882
			{ Z_Construct_UClass_UInterchangeStaticMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeStaticMeshPayloadInterface), false },  // 4273489511
			{ Z_Construct_UClass_UInterchangeSkeletalMeshPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeSkeletalMeshPayloadInterface), false },  // 219426445
			{ Z_Construct_UClass_UInterchangeAnimationPayloadInterface_NoRegister, (int32)VTABLE_OFFSET(UInterchangeFbxTranslator, IInterchangeAnimationPayloadInterface), false },  // 623216339
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeFbxTranslator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeFbxTranslator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeFbxTranslator_Statics::ClassParams = {
		&UInterchangeFbxTranslator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeFbxTranslator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeFbxTranslator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeFbxTranslator()
	{
		if (!Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton, Z_Construct_UClass_UInterchangeFbxTranslator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeFbxTranslator.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeFbxTranslator>()
	{
		return UInterchangeFbxTranslator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeFbxTranslator);
	UInterchangeFbxTranslator::~UInterchangeFbxTranslator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeFbxTranslator, UInterchangeFbxTranslator::StaticClass, TEXT("UInterchangeFbxTranslator"), &Z_Registration_Info_UClass_UInterchangeFbxTranslator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeFbxTranslator), 1075639470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_2005975344(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
