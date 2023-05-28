// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeHeightfieldCollisionComponent.h"
#include "LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeHeightfieldCollisionComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	DEFINE_FUNCTION(ULandscapeHeightfieldCollisionComponent::execGetRenderComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULandscapeComponent**)Z_Param__Result=P_THIS->GetRenderComponent();
		P_NATIVE_END;
	}
	void ULandscapeHeightfieldCollisionComponent::StaticRegisterNativesULandscapeHeightfieldCollisionComponent()
	{
		UClass* Class = ULandscapeHeightfieldCollisionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRenderComponent", &ULandscapeHeightfieldCollisionComponent::execGetRenderComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics
	{
		struct LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms
		{
			ULandscapeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms, ReturnValue), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Returns associated landscape component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Returns associated landscape component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, nullptr, "GetRenderComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms), Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeHeightfieldCollisionComponent);
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister()
	{
		return ULandscapeHeightfieldCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentLayerInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLayerInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentLayerInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSizeQuads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionSizeQuads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionSizeQuads_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionSizeQuads;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionQuadFlags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionQuadFlags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionQuadFlags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightfieldGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightfieldGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_RenderComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponentRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderComponentRef;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionHash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CollisionHash;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterialRenderObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialRenderObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterialRenderObjects;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CookedPhysicalMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedPhysicalMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CookedPhysicalMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent, "GetRenderComponent" }, // 1658120864
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeHeightfieldCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData[] = {
		{ "Comment", "/** List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData[] = {
		{ "Comment", "/** Offset of component in landscape quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Offset of component in landscape quads" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component in collision quads" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads = { "CollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData[] = {
		{ "Comment", "/** Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component's \"simple collision\" in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component's \"simple collision\" in collision quads" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads = { "SimpleCollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData[] = {
		{ "Comment", "/** The flags for each collision quad. See ECollisionQuadFlags. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "The flags for each collision quad. See ECollisionQuadFlags." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData[] = {
		{ "Comment", "/** Guid used to share Physics heightfield objects in the editor */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Guid used to share Physics heightfield objects in the editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid = { "HeightfieldGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData[] = {
		{ "Comment", "/** Cached local-space bounding box, created at heightmap update time */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "Comment", "/** Reference to render component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Reference to render component" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x0014000820080008, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponent_DEPRECATED), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef_MetaData[] = {
		{ "Comment", "/** Reference to render component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Reference to render component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef = { "RenderComponentRef", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponentRef), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash = { "CollisionHash", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionHash), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_Inner = { "PhysicalMaterialRenderObjects", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_MetaData[] = {
		{ "Comment", "/** Physical materials objects referenced by the indices in PhysicalMaterialRenderData. Stripped from cooked content */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Physical materials objects referenced by the indices in PhysicalMaterialRenderData. Stripped from cooked content" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects = { "PhysicalMaterialRenderObjects", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, PhysicalMaterialRenderObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData[] = {
		{ "Comment", "/** This is a list of physical materials that is actually used by a cooked HeightField */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "This is a list of physical materials that is actually used by a cooked HeightField" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponentRef,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_PhysicalMaterialRenderObjects,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHeightfieldCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams = {
		&ULandscapeHeightfieldCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeHeightfieldCollisionComponent>()
	{
		return ULandscapeHeightfieldCollisionComponent::StaticClass();
	}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightfieldCollisionComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, ULandscapeHeightfieldCollisionComponent::StaticClass, TEXT("ULandscapeHeightfieldCollisionComponent"), &Z_Registration_Info_UClass_ULandscapeHeightfieldCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeHeightfieldCollisionComponent), 2821863824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_3871752254(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
