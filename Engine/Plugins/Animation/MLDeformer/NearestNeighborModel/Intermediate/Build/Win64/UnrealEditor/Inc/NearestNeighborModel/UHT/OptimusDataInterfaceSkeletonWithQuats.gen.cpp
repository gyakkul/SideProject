// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusDataInterfaceSkeletonWithQuats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkeletonWithQuats() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	void UOptimusSkeletonWithQuatsDataInterface::StaticRegisterNativesUOptimusSkeletonWithQuatsDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletonWithQuatsDataInterface);
	UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_NoRegister()
	{
		return UOptimusSkeletonWithQuatsDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for skeletal data. */" },
		{ "IncludePath", "OptimusDataInterfaceSkeletonWithQuats.h" },
		{ "ModuleRelativePath", "Private/OptimusDataInterfaceSkeletonWithQuats.h" },
		{ "ToolTip", "Compute Framework Data Interface for skeletal data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletonWithQuatsDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::ClassParams = {
		&UOptimusSkeletonWithQuatsDataInterface::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataInterface.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UOptimusSkeletonWithQuatsDataInterface>()
	{
		return UOptimusSkeletonWithQuatsDataInterface::StaticClass();
	}
	UOptimusSkeletonWithQuatsDataInterface::UOptimusSkeletonWithQuatsDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletonWithQuatsDataInterface);
	UOptimusSkeletonWithQuatsDataInterface::~UOptimusSkeletonWithQuatsDataInterface() {}
	void UOptimusSkeletonWithQuatsDataProvider::StaticRegisterNativesUOptimusSkeletonWithQuatsDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkeletonWithQuatsDataProvider);
	UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_NoRegister()
	{
		return UOptimusSkeletonWithQuatsDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkinnedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "OptimusDataInterfaceSkeletonWithQuats.h" },
		{ "ModuleRelativePath", "Private/OptimusDataInterfaceSkeletonWithQuats.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OptimusDataInterfaceSkeletonWithQuats.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSkeletonWithQuatsDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::NewProp_SkinnedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::NewProp_SkinnedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkeletonWithQuatsDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::ClassParams = {
		&UOptimusSkeletonWithQuatsDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataProvider.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UOptimusSkeletonWithQuatsDataProvider>()
	{
		return UOptimusSkeletonWithQuatsDataProvider::StaticClass();
	}
	UOptimusSkeletonWithQuatsDataProvider::UOptimusSkeletonWithQuatsDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkeletonWithQuatsDataProvider);
	UOptimusSkeletonWithQuatsDataProvider::~UOptimusSkeletonWithQuatsDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_OptimusDataInterfaceSkeletonWithQuats_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_OptimusDataInterfaceSkeletonWithQuats_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkeletonWithQuatsDataInterface, UOptimusSkeletonWithQuatsDataInterface::StaticClass, TEXT("UOptimusSkeletonWithQuatsDataInterface"), &Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletonWithQuatsDataInterface), 3797448643U) },
		{ Z_Construct_UClass_UOptimusSkeletonWithQuatsDataProvider, UOptimusSkeletonWithQuatsDataProvider::StaticClass, TEXT("UOptimusSkeletonWithQuatsDataProvider"), &Z_Registration_Info_UClass_UOptimusSkeletonWithQuatsDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkeletonWithQuatsDataProvider), 1645631917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_OptimusDataInterfaceSkeletonWithQuats_h_2213415674(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_OptimusDataInterfaceSkeletonWithQuats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Private_OptimusDataInterfaceSkeletonWithQuats_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
