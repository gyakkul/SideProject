// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceDuplicateVertices() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusDuplicateVerticesDataInterface::StaticRegisterNativesUOptimusDuplicateVerticesDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDuplicateVerticesDataInterface);
	UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_NoRegister()
	{
		return UOptimusDuplicateVerticesDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** \n * Compute Framework Data Interface for reading duplicate vertices on a mesh.\n * These are vertices that are at the same location but that have been split because of discontinous color/UV etc.\n */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading duplicate vertices on a mesh.\nThese are vertices that are at the same location but that have been split because of discontinous color/UV etc." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDuplicateVerticesDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::ClassParams = {
		&UOptimusDuplicateVerticesDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDuplicateVerticesDataInterface>()
	{
		return UOptimusDuplicateVerticesDataInterface::StaticClass();
	}
	UOptimusDuplicateVerticesDataInterface::UOptimusDuplicateVerticesDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDuplicateVerticesDataInterface);
	UOptimusDuplicateVerticesDataInterface::~UOptimusDuplicateVerticesDataInterface() {}
	void UOptimusDuplicateVerticesDataProvider::StaticRegisterNativesUOptimusDuplicateVerticesDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDuplicateVerticesDataProvider);
	UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_NoRegister()
	{
		return UOptimusDuplicateVerticesDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics
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
	UObject* (*const Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDuplicateVertices.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDuplicateVerticesDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::NewProp_SkinnedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDuplicateVerticesDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::ClassParams = {
		&UOptimusDuplicateVerticesDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDuplicateVerticesDataProvider>()
	{
		return UOptimusDuplicateVerticesDataProvider::StaticClass();
	}
	UOptimusDuplicateVerticesDataProvider::UOptimusDuplicateVerticesDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDuplicateVerticesDataProvider);
	UOptimusDuplicateVerticesDataProvider::~UOptimusDuplicateVerticesDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDuplicateVerticesDataInterface, UOptimusDuplicateVerticesDataInterface::StaticClass, TEXT("UOptimusDuplicateVerticesDataInterface"), &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDuplicateVerticesDataInterface), 2232887096U) },
		{ Z_Construct_UClass_UOptimusDuplicateVerticesDataProvider, UOptimusDuplicateVerticesDataProvider::StaticClass, TEXT("UOptimusDuplicateVerticesDataProvider"), &Z_Registration_Info_UClass_UOptimusDuplicateVerticesDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDuplicateVerticesDataProvider), 519564648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_550848781(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDuplicateVertices_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
