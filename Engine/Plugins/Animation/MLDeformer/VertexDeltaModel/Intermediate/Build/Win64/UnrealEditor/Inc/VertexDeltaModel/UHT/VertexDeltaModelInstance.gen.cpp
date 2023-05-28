// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaModelInstance() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModelInstance();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModelInstance();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaModelInstance_NoRegister();
// End Cross Module References
	void UVertexDeltaModelInstance::StaticRegisterNativesUVertexDeltaModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaModelInstance);
	UClass* Z_Construct_UClass_UVertexDeltaModelInstance_NoRegister()
	{
		return UVertexDeltaModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaModelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VertexDeltaModelInstance.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaModelInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaModelInstance_Statics::ClassParams = {
		&UVertexDeltaModelInstance::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaModelInstance()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaModelInstance.OuterSingleton, Z_Construct_UClass_UVertexDeltaModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaModelInstance.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UVertexDeltaModelInstance>()
	{
		return UVertexDeltaModelInstance::StaticClass();
	}
	UVertexDeltaModelInstance::UVertexDeltaModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaModelInstance);
	UVertexDeltaModelInstance::~UVertexDeltaModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexDeltaModelInstance, UVertexDeltaModelInstance::StaticClass, TEXT("UVertexDeltaModelInstance"), &Z_Registration_Info_UClass_UVertexDeltaModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaModelInstance), 2647981514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelInstance_h_3240154650(TEXT("/Script/VertexDeltaModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
