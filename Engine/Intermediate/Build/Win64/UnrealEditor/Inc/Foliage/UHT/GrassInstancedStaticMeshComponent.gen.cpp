// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrassInstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrassInstancedStaticMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent();
	FOLIAGE_API UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UGrassInstancedStaticMeshComponent::StaticRegisterNativesUGrassInstancedStaticMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrassInstancedStaticMeshComponent);
	UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent_NoRegister()
	{
		return UGrassInstancedStaticMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Foliage" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "GrassInstancedStaticMeshComponent.h" },
		{ "ModuleRelativePath", "Public/GrassInstancedStaticMeshComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrassInstancedStaticMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::ClassParams = {
		&UGrassInstancedStaticMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrassInstancedStaticMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton, Z_Construct_UClass_UGrassInstancedStaticMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UGrassInstancedStaticMeshComponent>()
	{
		return UGrassInstancedStaticMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrassInstancedStaticMeshComponent);
	UGrassInstancedStaticMeshComponent::~UGrassInstancedStaticMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGrassInstancedStaticMeshComponent, UGrassInstancedStaticMeshComponent::StaticClass, TEXT("UGrassInstancedStaticMeshComponent"), &Z_Registration_Info_UClass_UGrassInstancedStaticMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrassInstancedStaticMeshComponent), 3219477731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_1011415146(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_GrassInstancedStaticMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
