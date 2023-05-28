// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterBodyRiverComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyRiverComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyRiverComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister();
// End Cross Module References
	void UWaterBodyRiverComponent::StaticRegisterNativesUWaterBodyRiverComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyRiverComponent);
	UClass* Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister()
	{
		return UWaterBodyRiverComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyRiverComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeTransitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LakeTransitionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LakeTransitionMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanTransitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OceanTransitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OceanTransitionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OceanTransitionMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyRiverComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ----------------------------------------------------------------------------------\n" },
		{ "HideCategories", "Tags Activation Cooking Physics Replication Input AssetUserData Mesh Mobility VirtualTexture Trigger" },
		{ "IncludePath", "WaterBodyRiverComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents_Inner = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents = { "SplineMeshComponents", nullptr, (EPropertyFlags)0x0024888000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyRiverComponent, SplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Material used when a river is overlapping a lake. */" },
		{ "DisplayName", "River to Lake Transition" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
		{ "ToolTip", "Material used when a river is overlapping a lake." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMaterial = { "LakeTransitionMaterial", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyRiverComponent, LakeTransitionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "LakeTransitionMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMID = { "LakeTransitionMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyRiverComponent, LakeTransitionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** This is the material used when a river is overlapping the ocean. */" },
		{ "DisplayName", "River to Ocean Transition" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
		{ "ToolTip", "This is the material used when a river is overlapping the ocean." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMaterial = { "OceanTransitionMaterial", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyRiverComponent, OceanTransitionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMID_MetaData[] = {
		{ "Category", "Debug" },
		{ "DisplayAfter", "OceanTransitionMaterial" },
		{ "ModuleRelativePath", "Public/WaterBodyRiverComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMID = { "OceanTransitionMID", nullptr, (EPropertyFlags)0x0024c80000022801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterBodyRiverComponent, OceanTransitionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterBodyRiverComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_SplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_LakeTransitionMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterBodyRiverComponent_Statics::NewProp_OceanTransitionMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyRiverComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyRiverComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyRiverComponent_Statics::ClassParams = {
		&UWaterBodyRiverComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterBodyRiverComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyRiverComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyRiverComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyRiverComponent.OuterSingleton, Z_Construct_UClass_UWaterBodyRiverComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyRiverComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterBodyRiverComponent>()
	{
		return UWaterBodyRiverComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyRiverComponent);
	UWaterBodyRiverComponent::~UWaterBodyRiverComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyRiverComponent, UWaterBodyRiverComponent::StaticClass, TEXT("UWaterBodyRiverComponent"), &Z_Registration_Info_UClass_UWaterBodyRiverComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyRiverComponent), 1609186221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_4128975236(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterBodyRiverComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
