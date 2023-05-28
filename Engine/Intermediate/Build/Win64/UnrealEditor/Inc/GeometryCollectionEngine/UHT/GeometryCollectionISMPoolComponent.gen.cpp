// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionISMPoolComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionISMPoolComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	void UGeometryCollectionISMPoolComponent::StaticRegisterNativesUGeometryCollectionISMPoolComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryCollectionISMPoolComponent);
	UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent_NoRegister()
	{
		return UGeometryCollectionISMPoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n* UGeometryCollectionISMPoolComponent\n*   Component that managed a pool of ISM in order to optimize render of geometry collections when not using fracture\n*/" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionISMPoolComponent.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionISMPoolComponent.h" },
		{ "ToolTip", "UGeometryCollectionISMPoolComponent\n  Component that managed a pool of ISM in order to optimize render of geometry collections when not using fracture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryCollectionISMPoolComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::ClassParams = {
		&UGeometryCollectionISMPoolComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryCollectionISMPoolComponent()
	{
		if (!Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton, Z_Construct_UClass_UGeometryCollectionISMPoolComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<UGeometryCollectionISMPoolComponent>()
	{
		return UGeometryCollectionISMPoolComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryCollectionISMPoolComponent);
	UGeometryCollectionISMPoolComponent::~UGeometryCollectionISMPoolComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryCollectionISMPoolComponent, UGeometryCollectionISMPoolComponent::StaticClass, TEXT("UGeometryCollectionISMPoolComponent"), &Z_Registration_Info_UClass_UGeometryCollectionISMPoolComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryCollectionISMPoolComponent), 3865742190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_2041634205(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionISMPoolComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
