// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/DynamicMeshProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshProvider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDynamicMeshProvider::StaticRegisterNativesUDynamicMeshProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshProvider);
	UClass* Z_Construct_UClass_UDynamicMeshProvider_NoRegister()
	{
		return UDynamicMeshProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshProvider_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/DynamicMeshProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDynamicMeshProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshProvider_Statics::ClassParams = {
		&UDynamicMeshProvider::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshProvider()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton, Z_Construct_UClass_UDynamicMeshProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshProvider.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshProvider>()
	{
		return UDynamicMeshProvider::StaticClass();
	}
	UDynamicMeshProvider::UDynamicMeshProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshProvider);
	UDynamicMeshProvider::~UDynamicMeshProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshProvider, UDynamicMeshProvider::StaticClass, TEXT("UDynamicMeshProvider"), &Z_Registration_Info_UClass_UDynamicMeshProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshProvider), 2204008170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_3546243323(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
