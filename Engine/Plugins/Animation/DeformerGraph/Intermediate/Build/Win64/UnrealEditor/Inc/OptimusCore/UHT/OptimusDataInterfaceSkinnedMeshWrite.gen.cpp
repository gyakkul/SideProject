// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceSkinnedMeshWrite() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSkinnedMeshWriteDataInterface::StaticRegisterNativesUOptimusSkinnedMeshWriteDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshWriteDataInterface);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_NoRegister()
	{
		return UOptimusSkinnedMeshWriteDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshWriteDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::ClassParams = {
		&UOptimusSkinnedMeshWriteDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshWriteDataInterface>()
	{
		return UOptimusSkinnedMeshWriteDataInterface::StaticClass();
	}
	UOptimusSkinnedMeshWriteDataInterface::UOptimusSkinnedMeshWriteDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshWriteDataInterface);
	UOptimusSkinnedMeshWriteDataInterface::~UOptimusSkinnedMeshWriteDataInterface() {}
	void UOptimusSkinnedMeshWriteDataProvider::StaticRegisterNativesUOptimusSkinnedMeshWriteDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSkinnedMeshWriteDataProvider);
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_NoRegister()
	{
		return UOptimusSkinnedMeshWriteDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics
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
	UObject* (*const Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceSkinnedMeshWrite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSkinnedMeshWriteDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::NewProp_SkinnedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::NewProp_SkinnedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSkinnedMeshWriteDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::ClassParams = {
		&UOptimusSkinnedMeshWriteDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSkinnedMeshWriteDataProvider>()
	{
		return UOptimusSkinnedMeshWriteDataProvider::StaticClass();
	}
	UOptimusSkinnedMeshWriteDataProvider::UOptimusSkinnedMeshWriteDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSkinnedMeshWriteDataProvider);
	UOptimusSkinnedMeshWriteDataProvider::~UOptimusSkinnedMeshWriteDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshWrite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshWrite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSkinnedMeshWriteDataInterface, UOptimusSkinnedMeshWriteDataInterface::StaticClass, TEXT("UOptimusSkinnedMeshWriteDataInterface"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshWriteDataInterface), 2157053964U) },
		{ Z_Construct_UClass_UOptimusSkinnedMeshWriteDataProvider, UOptimusSkinnedMeshWriteDataProvider::StaticClass, TEXT("UOptimusSkinnedMeshWriteDataProvider"), &Z_Registration_Info_UClass_UOptimusSkinnedMeshWriteDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSkinnedMeshWriteDataProvider), 3709851293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshWrite_h_2700557907(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshWrite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceSkinnedMeshWrite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
