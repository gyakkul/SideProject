// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuralMorphModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuralMorphModelInstance() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelInstance();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphModelInstance_NoRegister();
	NEURALMORPHMODEL_API UClass* Z_Construct_UClass_UNeuralMorphNetworkInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuralMorphModel();
// End Cross Module References
	void UNeuralMorphModelInstance::StaticRegisterNativesUNeuralMorphModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuralMorphModelInstance);
	UClass* Z_Construct_UClass_UNeuralMorphModelInstance_NoRegister()
	{
		return UNeuralMorphModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNeuralMorphModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetworkInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetworkInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuralMorphModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuralMorphModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeuralMorphModelInstance.h" },
		{ "ModuleRelativePath", "Public/NeuralMorphModelInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuralMorphModelInstance_Statics::NewProp_NetworkInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NeuralMorphModelInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNeuralMorphModelInstance_Statics::NewProp_NetworkInstance = { "NetworkInstance", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNeuralMorphModelInstance, NetworkInstance), Z_Construct_UClass_UNeuralMorphNetworkInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModelInstance_Statics::NewProp_NetworkInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelInstance_Statics::NewProp_NetworkInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuralMorphModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuralMorphModelInstance_Statics::NewProp_NetworkInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuralMorphModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuralMorphModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuralMorphModelInstance_Statics::ClassParams = {
		&UNeuralMorphModelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNeuralMorphModelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuralMorphModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuralMorphModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuralMorphModelInstance()
	{
		if (!Z_Registration_Info_UClass_UNeuralMorphModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuralMorphModelInstance.OuterSingleton, Z_Construct_UClass_UNeuralMorphModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuralMorphModelInstance.OuterSingleton;
	}
	template<> NEURALMORPHMODEL_API UClass* StaticClass<UNeuralMorphModelInstance>()
	{
		return UNeuralMorphModelInstance::StaticClass();
	}
	UNeuralMorphModelInstance::UNeuralMorphModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuralMorphModelInstance);
	UNeuralMorphModelInstance::~UNeuralMorphModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuralMorphModelInstance, UNeuralMorphModelInstance::StaticClass, TEXT("UNeuralMorphModelInstance"), &Z_Registration_Info_UClass_UNeuralMorphModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuralMorphModelInstance), 3967438619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_1396376605(TEXT("/Script/NeuralMorphModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NeuralMorphModel_Source_NeuralMorphModel_Public_NeuralMorphModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
