// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborModelInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborModelInstance() {}
// Cross Module References
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerMorphModelInstance();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelInstance();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborModelInstance_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	void UNearestNeighborModelInstance::StaticRegisterNativesUNearestNeighborModelInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborModelInstance);
	UClass* Z_Construct_UClass_UNearestNeighborModelInstance_NoRegister()
	{
		return UNearestNeighborModelInstance::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborModelInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizedNetworkInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptimizedNetworkInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborModelInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLDeformerMorphModelInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NearestNeighborModelInstance.h" },
		{ "ModuleRelativePath", "Public/NearestNeighborModelInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/NearestNeighborModelInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance = { "OptimizedNetworkInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNearestNeighborModelInstance, OptimizedNetworkInstance), Z_Construct_UClass_UNearestNeighborOptimizedNetworkInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNearestNeighborModelInstance_Statics::NewProp_OptimizedNetworkInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborModelInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborModelInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborModelInstance_Statics::ClassParams = {
		&UNearestNeighborModelInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborModelInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborModelInstance()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton, Z_Construct_UClass_UNearestNeighborModelInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborModelInstance.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborModelInstance>()
	{
		return UNearestNeighborModelInstance::StaticClass();
	}
	UNearestNeighborModelInstance::UNearestNeighborModelInstance() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborModelInstance);
	UNearestNeighborModelInstance::~UNearestNeighborModelInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborModelInstance, UNearestNeighborModelInstance::StaticClass, TEXT("UNearestNeighborModelInstance"), &Z_Registration_Info_UClass_UNearestNeighborModelInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborModelInstance), 4102849264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_4056071658(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborModelInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
