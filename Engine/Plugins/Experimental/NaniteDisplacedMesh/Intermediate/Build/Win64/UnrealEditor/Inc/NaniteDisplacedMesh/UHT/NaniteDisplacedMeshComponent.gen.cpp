// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaniteDisplacedMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaniteDisplacedMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister();
	NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMeshComponent();
	NANITEDISPLACEDMESH_API UClass* Z_Construct_UClass_UNaniteDisplacedMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NaniteDisplacedMesh();
// End Cross Module References
	void UNaniteDisplacedMeshComponent::StaticRegisterNativesUNaniteDisplacedMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNaniteDisplacedMeshComponent);
	UClass* Z_Construct_UClass_UNaniteDisplacedMeshComponent_NoRegister()
	{
		return UNaniteDisplacedMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplacedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplacedMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NaniteDisplacedMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Collision Components|Activation Physics Object Activation Components|Activation Trigger" },
		{ "IncludePath", "NaniteDisplacedMeshComponent.h" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMeshComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::NewProp_DisplacedMesh_MetaData[] = {
		{ "Category", "Displacement" },
		{ "ModuleRelativePath", "Public/NaniteDisplacedMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::NewProp_DisplacedMesh = { "DisplacedMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNaniteDisplacedMeshComponent, DisplacedMesh), Z_Construct_UClass_UNaniteDisplacedMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::NewProp_DisplacedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::NewProp_DisplacedMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::NewProp_DisplacedMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNaniteDisplacedMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::ClassParams = {
		&UNaniteDisplacedMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNaniteDisplacedMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UNaniteDisplacedMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNaniteDisplacedMeshComponent.OuterSingleton, Z_Construct_UClass_UNaniteDisplacedMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNaniteDisplacedMeshComponent.OuterSingleton;
	}
	template<> NANITEDISPLACEDMESH_API UClass* StaticClass<UNaniteDisplacedMeshComponent>()
	{
		return UNaniteDisplacedMeshComponent::StaticClass();
	}
	UNaniteDisplacedMeshComponent::UNaniteDisplacedMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNaniteDisplacedMeshComponent);
	UNaniteDisplacedMeshComponent::~UNaniteDisplacedMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNaniteDisplacedMeshComponent, UNaniteDisplacedMeshComponent::StaticClass, TEXT("UNaniteDisplacedMeshComponent"), &Z_Registration_Info_UClass_UNaniteDisplacedMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNaniteDisplacedMeshComponent), 96962196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_469307216(TEXT("/Script/NaniteDisplacedMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NaniteDisplacedMesh_Source_NaniteDisplacedMesh_Public_NaniteDisplacedMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
