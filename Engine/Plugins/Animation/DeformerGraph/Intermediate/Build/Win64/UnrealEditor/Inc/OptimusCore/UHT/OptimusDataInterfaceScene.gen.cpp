// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceScene() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusSceneDataProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusSceneDataInterface::StaticRegisterNativesUOptimusSceneDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSceneDataInterface);
	UClass* Z_Construct_UClass_UOptimusSceneDataInterface_NoRegister()
	{
		return UOptimusSceneDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSceneDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSceneDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSceneDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for reading general scene data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceScene.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceScene.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading general scene data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSceneDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSceneDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSceneDataInterface_Statics::ClassParams = {
		&UOptimusSceneDataInterface::StaticClass,
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
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSceneDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSceneDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusSceneDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSceneDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusSceneDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSceneDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSceneDataInterface>()
	{
		return UOptimusSceneDataInterface::StaticClass();
	}
	UOptimusSceneDataInterface::UOptimusSceneDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSceneDataInterface);
	UOptimusSceneDataInterface::~UOptimusSceneDataInterface() {}
	void UOptimusSceneDataProvider::StaticRegisterNativesUOptimusSceneDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusSceneDataProvider);
	UClass* Z_Construct_UClass_UOptimusSceneDataProvider_NoRegister()
	{
		return UOptimusSceneDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusSceneDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusSceneDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSceneDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading general scene data. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceScene.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceScene.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading general scene data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusSceneDataProvider_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceScene.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusSceneDataProvider_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusSceneDataProvider, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusSceneDataProvider_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneDataProvider_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusSceneDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusSceneDataProvider_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusSceneDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusSceneDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusSceneDataProvider_Statics::ClassParams = {
		&UOptimusSceneDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusSceneDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusSceneDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusSceneDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusSceneDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusSceneDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusSceneDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusSceneDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusSceneDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusSceneDataProvider>()
	{
		return UOptimusSceneDataProvider::StaticClass();
	}
	UOptimusSceneDataProvider::UOptimusSceneDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusSceneDataProvider);
	UOptimusSceneDataProvider::~UOptimusSceneDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusSceneDataInterface, UOptimusSceneDataInterface::StaticClass, TEXT("UOptimusSceneDataInterface"), &Z_Registration_Info_UClass_UOptimusSceneDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSceneDataInterface), 1522384712U) },
		{ Z_Construct_UClass_UOptimusSceneDataProvider, UOptimusSceneDataProvider::StaticClass, TEXT("UOptimusSceneDataProvider"), &Z_Registration_Info_UClass_UOptimusSceneDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusSceneDataProvider), 4190253621U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceScene_h_1491725925(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
