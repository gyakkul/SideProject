// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyOceanComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyOceanComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UOceanCollisionComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister();
// End Cross Module References
	void UWaterBodyOceanComponent::StaticRegisterNativesUWaterBodyOceanComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyOceanComponent);
	UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister()
	{
		return UWaterBodyOceanComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyOceanComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionBoxes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionHullSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHullSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionHullSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyOceanComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Physics Replication Input AssetUserData Mesh Mobility VirtualTexture Trigger" },
		{ "IncludePath", "WaterBodyOceanComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_Inner = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOceanBoxCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes = { "CollisionBoxes", nullptr, (EPropertyFlags)0x0024888000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_Inner = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOceanCollisionComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets = { "CollisionHullSets", nullptr, (EPropertyFlags)0x0024888000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionHullSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents = { "VisualExtents", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyOceanComponent, VisualExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents = { "CollisionExtents", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyOceanComponent, CollisionExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterBodyOceanComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset = { "HeightOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyOceanComponent, HeightOffset), METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionHullSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_VisualExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_CollisionExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyOceanComponent_Statics::NewProp_HeightOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyOceanComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyOceanComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyOceanComponent_Statics::ClassParams = {
		&UWaterBodyOceanComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyOceanComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyOceanComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyOceanComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyOceanComponent>()
	{
		return UWaterBodyOceanComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyOceanComponent);
	UWaterBodyOceanComponent::~UWaterBodyOceanComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyOceanComponent, UWaterBodyOceanComponent::StaticClass, TEXT("UWaterBodyOceanComponent"), &Z_Registration_Info_UClass_UWaterBodyOceanComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyOceanComponent), 2982283657U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_3427599174(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyOceanComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
