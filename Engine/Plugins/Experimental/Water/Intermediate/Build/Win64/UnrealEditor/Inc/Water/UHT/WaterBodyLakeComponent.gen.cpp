// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyLakeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyLakeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_ULakeCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyLakeComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister();
// End Cross Module References
	void UWaterBodyLakeComponent::StaticRegisterNativesUWaterBodyLakeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyLakeComponent);
	UClass* Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister()
	{
		return UWaterBodyLakeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyLakeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyLakeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyLakeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Physics Replication Input AssetUserData Mesh Mobility VirtualTexture Trigger" },
		{ "IncludePath", "WaterBodyLakeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeMeshComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeMeshComp = { "LakeMeshComp", nullptr, (EPropertyFlags)0x0024880000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyLakeComponent, LakeMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeCollision_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyLakeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeCollision = { "LakeCollision", nullptr, (EPropertyFlags)0x0024880000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyLakeComponent, LakeCollision), Z_Construct_UClass_ULakeCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyLakeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyLakeComponent_Statics::NewProp_LakeCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyLakeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyLakeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyLakeComponent_Statics::ClassParams = {
		&UWaterBodyLakeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterBodyLakeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyLakeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyLakeComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyLakeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyLakeComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyLakeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyLakeComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyLakeComponent>()
	{
		return UWaterBodyLakeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyLakeComponent);
	UWaterBodyLakeComponent::~UWaterBodyLakeComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyLakeComponent, UWaterBodyLakeComponent::StaticClass, TEXT("UWaterBodyLakeComponent"), &Z_Registration_Info_UClass_UWaterBodyLakeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyLakeComponent), 2677883287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_648903032(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyLakeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
