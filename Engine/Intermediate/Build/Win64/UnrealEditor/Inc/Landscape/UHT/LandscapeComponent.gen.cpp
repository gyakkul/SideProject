// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeComponent.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeClearMode();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FHeightmapData();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerComponentData();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapData();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData;
class UScriptStruct* FLandscapeEditToolRenderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeEditToolRenderData"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeEditToolRenderData>()
{
	return FLandscapeEditToolRenderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelR_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelG_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugChannelB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DebugChannelB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerContributionTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerContributionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirtyTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirtyTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n// FLandscapeEditToolRenderData\n//\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "FLandscapeEditToolRenderData" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeEditToolRenderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData[] = {
		{ "Comment", "// Material used to render the tool.\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the tool." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial = { "ToolMaterial", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, ToolMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "Comment", "// Material used to render the gizmo selection region...\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material used to render the gizmo selection region..." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, GizmoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData[] = {
		{ "Comment", "// Component is selected\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Component is selected" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType = { "SelectedType", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, SelectedType), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR = { "DebugChannelR", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelR), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG = { "DebugChannelG", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelG), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB = { "DebugChannelB", nullptr, (EPropertyFlags)0x0010000400000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DebugChannelB), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture = { "DataTexture", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DataTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture_MetaData[] = {
		{ "Comment", "// Data texture other than height/weight\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Data texture other than height/weight" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture = { "LayerContributionTexture", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, LayerContributionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture_MetaData[] = {
		{ "Comment", "// Data texture used to represent layer contribution\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Data texture used to represent layer contribution" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture = { "DirtyTexture", nullptr, (EPropertyFlags)0x0014000400000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeEditToolRenderData, DirtyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_ToolMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_GizmoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_SelectedType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DebugChannelB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DataTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_LayerContributionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewProp_DirtyTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeEditToolRenderData",
		sizeof(FLandscapeEditToolRenderData),
		alignof(FLandscapeEditToolRenderData),
		Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeEditToolRenderData()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo;
class UScriptStruct* FWeightmapLayerAllocationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapLayerAllocationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FWeightmapLayerAllocationInfo>()
{
	return FWeightmapLayerAllocationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextureChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WeightmapTextureChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Stores information about which weightmap texture and channel each layer is stored */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Stores information about which weightmap texture and channel each layer is stored" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapLayerAllocationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo = { "LayerInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, LayerInfo), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex = { "WeightmapTextureIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureIndex), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel = { "WeightmapTextureChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapLayerAllocationInfo, WeightmapTextureChannel), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_LayerInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewProp_WeightmapTextureChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"WeightmapLayerAllocationInfo",
		sizeof(FWeightmapLayerAllocationInfo),
		alignof(FWeightmapLayerAllocationInfo),
		Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride;
class UScriptStruct* FLandscapeComponentMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeComponentMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeComponentMaterialOverride>()
{
	return FLandscapeComponentMaterialOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeComponentMaterialOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, LODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeComponentMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeComponentMaterialOverride",
		sizeof(FLandscapeComponentMaterialOverride),
		alignof(FLandscapeComponentMaterialOverride),
		Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride;
class UScriptStruct* FLandscapePerLODMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapePerLODMaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapePerLODMaterialOverride>()
{
	return FLandscapePerLODMaterialOverride::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapePerLODMaterialOverride>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "8" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "UIMax", "8" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePerLODMaterialOverride, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePerLODMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapePerLODMaterialOverride",
		sizeof(FLandscapePerLODMaterialOverride),
		alignof(FLandscapePerLODMaterialOverride),
		Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WeightmapData;
class UScriptStruct* FWeightmapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWeightmapData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("WeightmapData"));
	}
	return Z_Registration_Info_UScriptStruct_WeightmapData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FWeightmapData>()
{
	return FWeightmapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWeightmapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerAllocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerAllocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerAllocations;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureUsages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureUsages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureUsages;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapData_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWeightmapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWeightmapData>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapData, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_Inner = { "LayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(nullptr, 0) }; // 397973144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations = { "LayerAllocations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapData, LayerAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_MetaData)) }; // 397973144
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_Inner = { "TextureUsages", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages = { "TextureUsages", nullptr, (EPropertyFlags)0x0014000400002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWeightmapData, TextureUsages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_LayerAllocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWeightmapData_Statics::NewProp_TextureUsages,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWeightmapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"WeightmapData",
		sizeof(FWeightmapData),
		alignof(FWeightmapData),
		Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWeightmapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWeightmapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWeightmapData()
	{
		if (!Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton, Z_Construct_UScriptStruct_FWeightmapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WeightmapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeightmapData;
class UScriptStruct* FHeightmapData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeightmapData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("HeightmapData"));
	}
	return Z_Registration_Info_UScriptStruct_HeightmapData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FHeightmapData>()
{
	return FHeightmapData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeightmapData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightmapData_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeightmapData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeightmapData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeightmapData, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeightmapData_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeightmapData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"HeightmapData",
		sizeof(FHeightmapData),
		alignof(FHeightmapData),
		Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeightmapData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeightmapData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeightmapData()
	{
		if (!Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton, Z_Construct_UScriptStruct_FHeightmapData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeightmapData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData;
class UScriptStruct* FLandscapeLayerComponentData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerComponentData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerComponentData"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerComponentData>()
{
	return FLandscapeLayerComponentData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DebugName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerComponentData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName_MetaData[] = {
		{ "Comment", "// Edit layers are referenced by Guid, this name is just there to provide some insights as to what edit layer name this layer data corresponded to in case of a missing edit layer guid\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Edit layers are referenced by Guid, this name is just there to provide some insights as to what edit layer name this layer data corresponded to in case of a missing edit layer guid" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeLayerComponentData, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData = { "HeightmapData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeLayerComponentData, HeightmapData), Z_Construct_UScriptStruct_FHeightmapData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData_MetaData)) }; // 1618868047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData = { "WeightmapData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapeLayerComponentData, WeightmapData), Z_Construct_UScriptStruct_FWeightmapData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData_MetaData)) }; // 3816067565
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_DebugName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_HeightmapData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewProp_WeightmapData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayerComponentData",
		sizeof(FLandscapeLayerComponentData),
		alignof(FLandscapeLayerComponentData),
		Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerComponentData()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeClearMode;
	static UEnum* ELandscapeClearMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeClearMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeClearMode"));
		}
		return Z_Registration_Info_UEnum_ELandscapeClearMode.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeClearMode>()
	{
		return ELandscapeClearMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enumerators[] = {
		{ "Clear_Weightmap", (int64)Clear_Weightmap },
		{ "Clear_Heightmap", (int64)Clear_Heightmap },
		{ "Clear_All", (int64)Clear_All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enum_MetaDataParams[] = {
		{ "Clear_All.DisplayName", "All" },
		{ "Clear_All.Name", "Clear_All" },
		{ "Clear_Heightmap.DisplayName", "Sculpt" },
		{ "Clear_Heightmap.Name", "Clear_Heightmap" },
		{ "Clear_Weightmap.DisplayName", "Paint" },
		{ "Clear_Weightmap.Name", "Clear_Weightmap" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeClearMode",
		"ELandscapeClearMode",
		Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeClearMode()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeClearMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeClearMode.InnerSingleton;
	}
	void ULandscapeLODStreamingProxy_DEPRECATED::StaticRegisterNativesULandscapeLODStreamingProxy_DEPRECATED()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeLODStreamingProxy_DEPRECATED);
	UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_NoRegister()
	{
		return ULandscapeLODStreamingProxy_DEPRECATED::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLODStreamingProxy_DEPRECATED>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::ClassParams = {
		&ULandscapeLODStreamingProxy_DEPRECATED::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED()
	{
		if (!Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton, Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLODStreamingProxy_DEPRECATED>()
	{
		return ULandscapeLODStreamingProxy_DEPRECATED::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLODStreamingProxy_DEPRECATED);
	ULandscapeLODStreamingProxy_DEPRECATED::~ULandscapeLODStreamingProxy_DEPRECATED() {}
	DEFINE_FUNCTION(ULandscapeComponent::execSetLODBias)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLODBias);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODBias(Z_Param_InLODBias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeComponent::execSetForcedLOD)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InForcedLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForcedLOD(Z_Param_InForcedLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeComponent::execEditorGetPaintLayerWeightByNameAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_PROPERTY(FNameProperty,Z_Param_InPaintLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->EditorGetPaintLayerWeightByNameAtLocation(Z_Param_Out_InLocation,Z_Param_InPaintLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeComponent::execEditorGetPaintLayerWeightAtLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation);
		P_GET_OBJECT(ULandscapeLayerInfoObject,Z_Param_PaintLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->EditorGetPaintLayerWeightAtLocation(Z_Param_Out_InLocation,Z_Param_PaintLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapeComponent::execGetMaterialInstanceDynamic)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstanceDynamic(Z_Param_InIndex);
		P_NATIVE_END;
	}
	void ULandscapeComponent::StaticRegisterNativesULandscapeComponent()
	{
		UClass* Class = ULandscapeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EditorGetPaintLayerWeightAtLocation", &ULandscapeComponent::execEditorGetPaintLayerWeightAtLocation },
			{ "EditorGetPaintLayerWeightByNameAtLocation", &ULandscapeComponent::execEditorGetPaintLayerWeightByNameAtLocation },
			{ "GetMaterialInstanceDynamic", &ULandscapeComponent::execGetMaterialInstanceDynamic },
			{ "SetForcedLOD", &ULandscapeComponent::execSetForcedLOD },
			{ "SetLODBias", &ULandscapeComponent::execSetLODBias },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics
	{
		struct LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms
		{
			FVector InLocation;
			ULandscapeLayerInfoObject* PaintLayer;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintLayer;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_PaintLayer = { "PaintLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, PaintLayer), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_PaintLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** Gets the landscape paint layer weight value at the given position using LandscapeLayerInfo . Returns 0 in case it fails. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape paint layer weight value at the given position using LandscapeLayerInfo . Returns 0 in case it fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "EditorGetPaintLayerWeightAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightAtLocation_Parms), Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics
	{
		struct LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms
		{
			FVector InLocation;
			FName InPaintLayerName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPaintLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InPaintLayerName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation = { "InLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, InLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName = { "InPaintLayerName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, InPaintLayerName), METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_InPaintLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** Gets the landscape paint layer weight value at the given position using layer name. Returns 0 in case it fails. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape paint layer weight value at the given position using layer name. Returns 0 in case it fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "EditorGetPaintLayerWeightByNameAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::LandscapeComponent_eventEditorGetPaintLayerWeightByNameAtLocation_Parms), Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics
	{
		struct LandscapeComponent_eventGetMaterialInstanceDynamic_Parms
		{
			int32 InIndex;
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventGetMaterialInstanceDynamic_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime|Material" },
		{ "Comment", "/** Gets the landscape material instance dynamic for this component */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Gets the landscape material instance dynamic for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "GetMaterialInstanceDynamic", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::LandscapeComponent_eventGetMaterialInstanceDynamic_Parms), Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics
	{
		struct LandscapeComponent_eventSetForcedLOD_Parms
		{
			int32 InForcedLOD;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InForcedLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::NewProp_InForcedLOD = { "InForcedLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventSetForcedLOD_Parms, InForcedLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::NewProp_InForcedLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "SetForcedLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::LandscapeComponent_eventSetForcedLOD_Parms), Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics
	{
		struct LandscapeComponent_eventSetLODBias_Parms
		{
			int32 InLODBias;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLODBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::NewProp_InLODBias = { "InLODBias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeComponent_eventSetLODBias_Parms, InLODBias), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::NewProp_InLODBias,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeComponent, nullptr, "SetLODBias", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::LandscapeComponent_eventSetLODBias_Parms), Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeComponent_SetLODBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeComponent_SetLODBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeComponent);
	UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister()
	{
		return ULandscapeComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSubsections_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSubsections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideHoleMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideHoleMaterial;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInstance;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstances;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInstancesDynamic_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstancesDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialInstancesDynamic;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_LODIndexToMaterialIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndexToMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODIndexToMaterialIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XYOffsetmapTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_XYOffsetmapTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapSubsectionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightmapSubsectionOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_CollisionComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponentRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComponentRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUserTriggeredChangeRequested_MetaData[];
#endif
		static void NewProp_bUserTriggeredChangeRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUserTriggeredChangeRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNaniteActive_MetaData[];
#endif
		static void NewProp_bNaniteActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNaniteActive;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayersData_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayersData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayersData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayersData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapTexturesUsage_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTexturesUsage_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapTexturesUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerUpdateFlagPerMode_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LayerUpdateFlagPerMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingCollisionDataUpdate_MetaData[];
#endif
		static void NewProp_bPendingCollisionDataUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingCollisionDataUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingLayerCollisionDataUpdate_MetaData[];
#endif
		static void NewProp_bPendingLayerCollisionDataUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingLayerCollisionDataUpdate;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightmapTexture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapLayerAllocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapLayerAllocations;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerLODOverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerLODOverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerLODOverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapBuildDataId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapBuildDataId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMipLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionMipLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionMipLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionMipLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativeZBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeZBoundsExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositiveZBoundsExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveZBoundsExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLightingResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticLightingResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForcedLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForcedLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedTextureMaterialGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedTextureMaterialGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBakedTextureMaterialGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBakedTextureMaterialGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GIBakedBaseColorTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GIBakedBaseColorTexture;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_IrrelevantLights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IrrelevantLights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IrrelevantLights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightingLODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LightingLODBias;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerAllowList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerAllowList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerAllowList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditToolRenderData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditToolRenderData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileDataSourceHash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MobileDataSourceHash;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_MaterialPerLOD_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialPerLOD_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialPerLOD_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MaterialPerLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SplineHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PhysicalMaterialHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSavedPhysicalMaterialHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastSavedPhysicalMaterialHash;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MobileMaterialInterface;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MobileMaterialInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileMaterialInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileMaterialInterfaces;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MobileWeightmapTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileWeightmapTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileWeightmapTextures;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MobileCombinationMaterialInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileCombinationMaterialInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MobileCombinationMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MobileCombinationMaterialInstance;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightAtLocation, "EditorGetPaintLayerWeightAtLocation" }, // 2377304309
		{ &Z_Construct_UFunction_ULandscapeComponent_EditorGetPaintLayerWeightByNameAtLocation, "EditorGetPaintLayerWeightByNameAtLocation" }, // 3586318203
		{ &Z_Construct_UFunction_ULandscapeComponent_GetMaterialInstanceDynamic, "GetMaterialInstanceDynamic" }, // 1462957712
		{ &Z_Construct_UFunction_ULandscapeComponent_SetForcedLOD, "SetForcedLOD" }, // 4206567967
		{ &Z_Construct_UFunction_ULandscapeComponent_SetLODBias, "SetLODBias" }, // 21203176
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Display Attachment Physics Debug Collision Movement Rendering PrimitiveComponent Object Transform Mobility VirtualTexture Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ShowCategories", "Rendering|Material" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** X offset from global components grid origin (in quads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "X offset from global components grid origin (in quads)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, SectionBaseX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Y offset from global components grid origin (in quads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Y offset from global components grid origin (in quads)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, SectionBaseY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData[] = {
		{ "Comment", "/** Total number of quads for this component, has to be >0 */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Total number of quads for this component, has to be >0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads = { "ComponentSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, ComponentSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData[] = {
		{ "Comment", "/** Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of quads for a subsection of the component. SubsectionSizeQuads+1 must be a power of two." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads = { "SubsectionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, SubsectionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData[] = {
		{ "Comment", "/** Number of subsections in X or Y axis */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Number of subsections in X or Y axis" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections = { "NumSubsections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, NumSubsections), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial = { "OverrideMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial = { "OverrideHoleMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, OverrideHoleMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride, METADATA_PARAMS(nullptr, 0) }; // 1590193610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, OverrideMaterials_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_MetaData)) }; // 1590193610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner = { "MaterialInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances = { "MaterialInstances", nullptr, (EPropertyFlags)0x0014400000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic = { "MaterialInstancesDynamic", nullptr, (EPropertyFlags)0x0014400000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialInstancesDynamic), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData[] = {
		{ "Comment", "/** Mapping between LOD and Material Index*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Mapping between LOD and Material Index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex = { "LODIndexToMaterialIndex", nullptr, (EPropertyFlags)0x0010400000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LODIndexToMaterialIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData[] = {
		{ "Comment", "/** XYOffsetmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "XYOffsetmap texture reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture = { "XYOffsetmapTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, XYOffsetmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData[] = {
		{ "Comment", "/** UV offset to component's weightmap data from component local coordinates*/" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to component's weightmap data from component local coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias = { "WeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData[] = {
		{ "Comment", "/** U or V offset into the weightmap for the first subsection, in texture UV space */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "U or V offset into the weightmap for the first subsection, in texture UV space" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset = { "WeightmapSubsectionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapSubsectionOffset), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData[] = {
		{ "Comment", "/** UV offset to Heightmap data from component local coordinates */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "UV offset to Heightmap data from component local coordinates" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias = { "HeightmapScaleBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, HeightmapScaleBias), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData[] = {
		{ "Comment", "/** Cached local-space bounding box, created at heightmap update time */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0014000820080008, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, CollisionComponent_DEPRECATED), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef_MetaData[] = {
		{ "Comment", "/** Reference to associated collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Reference to associated collision component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef = { "CollisionComponentRef", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, CollisionComponentRef), Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_MetaData[] = {
		{ "Comment", "/** Store  */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Store" },
	};
#endif
	void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_SetBit(void* Obj)
	{
		((ULandscapeComponent*)Obj)->bUserTriggeredChangeRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested = { "bUserTriggeredChangeRequested", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_SetBit(void* Obj)
	{
		((ULandscapeComponent*)Obj)->bNaniteActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive = { "bNaniteActive", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this component, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Unique ID for this component, used for caching during distributed lighting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_ValueProp = { "LayersData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLandscapeLayerComponentData, METADATA_PARAMS(nullptr, 0) }; // 3650203455
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_Key_KeyProp = { "LayersData_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_MetaData[] = {
		{ "Comment", "/** Edit Layers that have data for this component store it here */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Edit Layers that have data for this component store it here" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData = { "LayersData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LayersData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_MetaData)) }; // 3650203455
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_Inner = { "WeightmapTexturesUsage", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_MetaData[] = {
		{ "Comment", "// Final layer data\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Final layer data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage = { "WeightmapTexturesUsage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapTexturesUsage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode = { "LayerUpdateFlagPerMode", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LayerUpdateFlagPerMode), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_SetBit(void* Obj)
	{
		((ULandscapeComponent*)Obj)->bPendingCollisionDataUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate = { "bPendingCollisionDataUpdate", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_SetBit(void* Obj)
	{
		((ULandscapeComponent*)Obj)->bPendingLayerCollisionDataUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate = { "bPendingLayerCollisionDataUpdate", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeComponent), &Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData[] = {
		{ "Comment", "/** Heightmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightmap texture reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture = { "HeightmapTexture", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, HeightmapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo, METADATA_PARAMS(nullptr, 0) }; // 397973144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData[] = {
		{ "Comment", "/** List of layers, and the weightmap and channel they are stored */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers, and the weightmap and channel they are stored" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations = { "WeightmapLayerAllocations", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapLayerAllocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_MetaData)) }; // 397973144
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData[] = {
		{ "Comment", "/** Weightmap texture reference */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Weightmap texture reference" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures = { "WeightmapTextures", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, WeightmapTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_Inner = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride, METADATA_PARAMS(nullptr, 0) }; // 115075947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials = { "PerLODOverrideMaterials", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, PerLODOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_MetaData)) }; // 115075947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData[] = {
		{ "Comment", "/** Uniquely identifies this component's built map data. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Uniquely identifies this component's built map data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId = { "MapBuildDataId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MapBuildDataId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Heightfield mipmap used to generate collision */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate collision" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel = { "CollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, CollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Heightfield mipmap used to generate simple collision */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Heightfield mipmap used to generate simple collision" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel = { "SimpleCollisionMipLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, SimpleCollisionMipLevel), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the negative Z axis, positive value increases bound size */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the negative Z axis, positive value increases bound size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension = { "NegativeZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, NegativeZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\n\x09 *  Extension value in the positive Z axis, positive value increases bound size */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Allows overriding the landscape bounds. This is useful if you distort the landscape with world-position-offset, for example\nExtension value in the positive Z axis, positive value increases bound size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension = { "PositiveZBoundsExtension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, PositiveZBoundsExtension), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "ClampMax", "4096" },
		{ "Comment", "/** StaticLightingResolution overriding per component, default value 0 means no overriding */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "StaticLightingResolution overriding per component, default value 0 means no overriding" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution = { "StaticLightingResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, StaticLightingResolution), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** Forced LOD level to use when rendering */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Forced LOD level to use when rendering" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD = { "ForcedLOD", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, ForcedLOD), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** LOD level Bias to use when rendering */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when rendering" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LODBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData[] = {
		{ "Comment", "/** The Material Guid that used when baking, to detect material recompilations */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The Material Guid that used when baking, to detect material recompilations" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid = { "BakedTextureMaterialGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, BakedTextureMaterialGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastBakedTextureMaterialGuid_MetaData[] = {
		{ "Comment", "/** The Material Guid that last saved, to notify manual build operation to bake textures */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The Material Guid that last saved, to notify manual build operation to bake textures" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastBakedTextureMaterialGuid = { "LastBakedTextureMaterialGuid", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LastBakedTextureMaterialGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastBakedTextureMaterialGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastBakedTextureMaterialGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData[] = {
		{ "Category", "BakedTextures" },
		{ "Comment", "/** Pre-baked Base Color texture for use by distance field GI */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Pre-baked Base Color texture for use by distance field GI" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture = { "GIBakedBaseColorTexture", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, GIBakedBaseColorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData[] = {
		{ "Comment", "/**\x09Legacy irrelevant lights */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Legacy irrelevant lights" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights = { "IrrelevantLights", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, IrrelevantLights_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "/** LOD level Bias to use when lighting building via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "LOD level Bias to use when lighting building via lightmass, -1 Means automatic LOD calculation based on ForcedLOD + LODBias" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias = { "LightingLODBias", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LightingLODBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_Inner = { "LayerAllowList", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_MetaData[] = {
		{ "Category", "LandscapeComponent" },
		{ "Comment", "// List of layers allowed to be painted on this component\n" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "List of layers allowed to be painted on this component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList = { "LayerAllowList", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LayerAllowList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData[] = {
		{ "Comment", "/** Pointer to data shared with the render thread, used by the editor tools */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Pointer to data shared with the render thread, used by the editor tools" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData = { "EditToolRenderData", nullptr, (EPropertyFlags)0x0010000c00202000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, EditToolRenderData), Z_Construct_UScriptStruct_FLandscapeEditToolRenderData, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData_MetaData)) }; // 3182207653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData[] = {
		{ "Comment", "/** Hash of source for mobile generated data. Used determine if we need to re-generate mobile pixel data. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Hash of source for mobile generated data. Used determine if we need to re-generate mobile pixel data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash = { "MobileDataSourceHash", nullptr, (EPropertyFlags)0x0010000800200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileDataSourceHash), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp = { "MaterialPerLOD_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData[] = {
		{ "Comment", "/** Represent the chosen material for each LOD */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represent the chosen material for each LOD" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD = { "MaterialPerLOD", nullptr, (EPropertyFlags)0x0010000800200000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MaterialPerLOD), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash = { "SplineHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, SplineHash), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash_MetaData[] = {
		{ "Comment", "/** Represents hash for last PhysicalMaterialTask */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represents hash for last PhysicalMaterialTask" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash = { "PhysicalMaterialHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, PhysicalMaterialHash), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash_MetaData[] = {
		{ "Comment", "/** Represents last saved hash for PhysicalMaterialTask */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Represents last saved hash for PhysicalMaterialTask" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash = { "LastSavedPhysicalMaterialHash", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, LastSavedPhysicalMaterialHash), METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface = { "MobileMaterialInterface", nullptr, (EPropertyFlags)0x0014800020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterface_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData[] = {
		{ "Comment", "/** Material interfaces used for mobile */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Material interfaces used for mobile" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces = { "MobileMaterialInterfaces", nullptr, (EPropertyFlags)0x0014800000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileMaterialInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData[] = {
		{ "Comment", "/** Generated weightmap textures used for mobile. The first entry is also used for the normal map. \n\x09  * Serialized only when cooking or loading cooked builds. */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "Generated weightmap textures used for mobile. The first entry is also used for the normal map.\nSerialized only when cooking or loading cooked builds." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures = { "MobileWeightmapTextures", nullptr, (EPropertyFlags)0x0014800000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileWeightmapTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData[] = {
		{ "Comment", "/** The editor needs to save out the combination MIC we'll use for mobile, \n\x09  because we cannot generate it at runtime for standalone PIE games */" },
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
		{ "ToolTip", "The editor needs to save out the combination MIC we'll use for mobile,\n        because we cannot generate it at runtime for standalone PIE games" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances = { "MobileCombinationMaterialInstances", nullptr, (EPropertyFlags)0x0014800800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance = { "MobileCombinationMaterialInstance", nullptr, (EPropertyFlags)0x0014800820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeComponent, MobileCombinationMaterialInstance_DEPRECATED), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SectionBaseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ComponentSizeQuads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SubsectionSizeQuads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NumSubsections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideHoleMaterial,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstance,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialInstancesDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODIndexToMaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_XYOffsetmapTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapSubsectionOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CachedLocalBox,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionComponentRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bUserTriggeredChangeRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bNaniteActive,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayersData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTexturesUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerUpdateFlagPerMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingCollisionDataUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_bPendingLayerCollisionDataUpdate,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_HeightmapTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapLayerAllocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_WeightmapTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PerLODOverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MapBuildDataId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_CollisionMipLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SimpleCollisionMipLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_NegativeZBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PositiveZBoundsExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StaticLightingResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_ForcedLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_StateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_BakedTextureMaterialGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastBakedTextureMaterialGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_GIBakedBaseColorTexture,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_IrrelevantLights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LightingLODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LayerAllowList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_EditToolRenderData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileDataSourceHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MaterialPerLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_SplineHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_PhysicalMaterialHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_LastSavedPhysicalMaterialHash,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileMaterialInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileWeightmapTextures,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeComponent_Statics::NewProp_MobileCombinationMaterialInstance,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams = {
		&ULandscapeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeComponent()
	{
		if (!Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton, Z_Construct_UClass_ULandscapeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeComponent.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeComponent>()
	{
		return ULandscapeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeComponent);
	ULandscapeComponent::~ULandscapeComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::EnumInfo[] = {
		{ ELandscapeClearMode_StaticEnum, TEXT("ELandscapeClearMode"), &Z_Registration_Info_UEnum_ELandscapeClearMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1693856584U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ScriptStructInfo[] = {
		{ FLandscapeEditToolRenderData::StaticStruct, Z_Construct_UScriptStruct_FLandscapeEditToolRenderData_Statics::NewStructOps, TEXT("LandscapeEditToolRenderData"), &Z_Registration_Info_UScriptStruct_LandscapeEditToolRenderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeEditToolRenderData), 3182207653U) },
		{ FWeightmapLayerAllocationInfo::StaticStruct, Z_Construct_UScriptStruct_FWeightmapLayerAllocationInfo_Statics::NewStructOps, TEXT("WeightmapLayerAllocationInfo"), &Z_Registration_Info_UScriptStruct_WeightmapLayerAllocationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightmapLayerAllocationInfo), 397973144U) },
		{ FLandscapeComponentMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FLandscapeComponentMaterialOverride_Statics::NewStructOps, TEXT("LandscapeComponentMaterialOverride"), &Z_Registration_Info_UScriptStruct_LandscapeComponentMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeComponentMaterialOverride), 1590193610U) },
		{ FLandscapePerLODMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FLandscapePerLODMaterialOverride_Statics::NewStructOps, TEXT("LandscapePerLODMaterialOverride"), &Z_Registration_Info_UScriptStruct_LandscapePerLODMaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapePerLODMaterialOverride), 115075947U) },
		{ FWeightmapData::StaticStruct, Z_Construct_UScriptStruct_FWeightmapData_Statics::NewStructOps, TEXT("WeightmapData"), &Z_Registration_Info_UScriptStruct_WeightmapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWeightmapData), 3816067565U) },
		{ FHeightmapData::StaticStruct, Z_Construct_UScriptStruct_FHeightmapData_Statics::NewStructOps, TEXT("HeightmapData"), &Z_Registration_Info_UScriptStruct_HeightmapData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeightmapData), 1618868047U) },
		{ FLandscapeLayerComponentData::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayerComponentData_Statics::NewStructOps, TEXT("LandscapeLayerComponentData"), &Z_Registration_Info_UScriptStruct_LandscapeLayerComponentData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayerComponentData), 3650203455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeLODStreamingProxy_DEPRECATED, ULandscapeLODStreamingProxy_DEPRECATED::StaticClass, TEXT("ULandscapeLODStreamingProxy_DEPRECATED"), &Z_Registration_Info_UClass_ULandscapeLODStreamingProxy_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeLODStreamingProxy_DEPRECATED), 2222474708U) },
		{ Z_Construct_UClass_ULandscapeComponent, ULandscapeComponent::StaticClass, TEXT("ULandscapeComponent"), &Z_Registration_Info_UClass_ULandscapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeComponent), 213076159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_1402226813(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
