// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/DynamicMeshCommitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshCommitter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDynamicMeshCommitter::StaticRegisterNativesUDynamicMeshCommitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshCommitter);
	UClass* Z_Construct_UClass_UDynamicMeshCommitter_NoRegister()
	{
		return UDynamicMeshCommitter::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshCommitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshCommitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshCommitter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/DynamicMeshCommitter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshCommitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDynamicMeshCommitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshCommitter_Statics::ClassParams = {
		&UDynamicMeshCommitter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshCommitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshCommitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshCommitter()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton, Z_Construct_UClass_UDynamicMeshCommitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshCommitter.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshCommitter>()
	{
		return UDynamicMeshCommitter::StaticClass();
	}
	UDynamicMeshCommitter::UDynamicMeshCommitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshCommitter);
	UDynamicMeshCommitter::~UDynamicMeshCommitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshCommitter, UDynamicMeshCommitter::StaticClass, TEXT("UDynamicMeshCommitter"), &Z_Registration_Info_UClass_UDynamicMeshCommitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshCommitter), 2086184049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_4004680106(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_TargetInterfaces_DynamicMeshCommitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
