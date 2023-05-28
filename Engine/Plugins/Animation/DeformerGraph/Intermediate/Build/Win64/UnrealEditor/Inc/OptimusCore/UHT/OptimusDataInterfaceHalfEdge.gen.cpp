// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceHalfEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceHalfEdge() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusHalfEdgeDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusHalfEdgeDataInterface::StaticRegisterNativesUOptimusHalfEdgeDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusHalfEdgeDataInterface);
	UClass* Z_Construct_UClass_UOptimusHalfEdgeDataInterface_NoRegister()
	{
		return UOptimusHalfEdgeDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading mesh half edge data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceHalfEdge.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceHalfEdge.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading mesh half edge data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusHalfEdgeDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::ClassParams = {
		&UOptimusHalfEdgeDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusHalfEdgeDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusHalfEdgeDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusHalfEdgeDataInterface>()
	{
		return UOptimusHalfEdgeDataInterface::StaticClass();
	}
	UOptimusHalfEdgeDataInterface::UOptimusHalfEdgeDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusHalfEdgeDataInterface);
	UOptimusHalfEdgeDataInterface::~UOptimusHalfEdgeDataInterface() {}
	void UOptimusHalfEdgeDataProvider::StaticRegisterNativesUOptimusHalfEdgeDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusHalfEdgeDataProvider);
	UClass* Z_Construct_UClass_UOptimusHalfEdgeDataProvider_NoRegister()
	{
		return UOptimusHalfEdgeDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics
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
	UObject* (*const Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceHalfEdge.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceHalfEdge.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceHalfEdge.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusHalfEdgeDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::NewProp_SkinnedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::NewProp_SkinnedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusHalfEdgeDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::ClassParams = {
		&UOptimusHalfEdgeDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusHalfEdgeDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusHalfEdgeDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusHalfEdgeDataProvider>()
	{
		return UOptimusHalfEdgeDataProvider::StaticClass();
	}
	UOptimusHalfEdgeDataProvider::UOptimusHalfEdgeDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusHalfEdgeDataProvider);
	UOptimusHalfEdgeDataProvider::~UOptimusHalfEdgeDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusHalfEdgeDataInterface, UOptimusHalfEdgeDataInterface::StaticClass, TEXT("UOptimusHalfEdgeDataInterface"), &Z_Registration_Info_UClass_UOptimusHalfEdgeDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusHalfEdgeDataInterface), 1920078054U) },
		{ Z_Construct_UClass_UOptimusHalfEdgeDataProvider, UOptimusHalfEdgeDataProvider::StaticClass, TEXT("UOptimusHalfEdgeDataProvider"), &Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusHalfEdgeDataProvider), 2168488622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_245620678(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceHalfEdge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
