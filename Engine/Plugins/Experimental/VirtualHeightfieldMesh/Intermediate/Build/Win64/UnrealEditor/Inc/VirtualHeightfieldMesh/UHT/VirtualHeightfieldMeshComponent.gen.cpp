// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualHeightfieldMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualHeightfieldMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_VirtualHeightfieldMesh();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent();
	VIRTUALHEIGHTFIELDMESH_API UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVirtualHeightfieldMeshComponent::execGatherHideFlags)
	{
		P_GET_UBOOL_REF(Z_Param_Out_InOutHidePrimitivesInEditor);
		P_GET_UBOOL_REF(Z_Param_Out_InOutHidePrimitivesInGame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GatherHideFlags(Z_Param_Out_InOutHidePrimitivesInEditor,Z_Param_Out_InOutHidePrimitivesInGame);
		P_NATIVE_END;
	}
	void UVirtualHeightfieldMeshComponent::StaticRegisterNativesUVirtualHeightfieldMeshComponent()
	{
		UClass* Class = UVirtualHeightfieldMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GatherHideFlags", &UVirtualHeightfieldMeshComponent::execGatherHideFlags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics
	{
		struct VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms
		{
			bool InOutHidePrimitivesInEditor;
			bool InOutHidePrimitivesInGame;
		};
		static void NewProp_InOutHidePrimitivesInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InOutHidePrimitivesInEditor;
		static void NewProp_InOutHidePrimitivesInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InOutHidePrimitivesInGame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInEditor_SetBit(void* Obj)
	{
		((VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms*)Obj)->InOutHidePrimitivesInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInEditor = { "InOutHidePrimitivesInEditor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms), &Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInGame_SetBit(void* Obj)
	{
		((VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms*)Obj)->InOutHidePrimitivesInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInGame = { "InOutHidePrimitivesInGame", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms), &Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::NewProp_InOutHidePrimitivesInGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Function used by the VirtualTexture delegate to retrieve our HidePrimitives flags. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Function used by the VirtualTexture delegate to retrieve our HidePrimitives flags." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualHeightfieldMeshComponent, nullptr, "GatherHideFlags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::VirtualHeightfieldMeshComponent_eventGatherHideFlags_Parms), Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualHeightfieldMeshComponent);
	UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent_NoRegister()
	{
		return UVirtualHeightfieldMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VirtualTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualTextureRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureThumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualTextureThumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyBoundsButton_MetaData[];
#endif
		static void NewProp_bCopyBoundsButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyBoundsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMaxTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MinMaxTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumMinMaxTextureBuildLevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumMinMaxTextureBuildLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildMinMaxTextureButton_MetaData[];
#endif
		static void NewProp_bBuildMinMaxTextureButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildMinMaxTextureButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod0ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lod0ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lod0Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lod0Distribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodDistribution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodDistribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LodBiasScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LodBiasScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumForceLoadLods_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumForceLoadLods;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOcclusionLods_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOcclusionLods;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHiddenInEditor_MetaData[];
#endif
		static void NewProp_bHiddenInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHiddenInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWorldPositionOffsetVelocity_MetaData[];
#endif
		static void NewProp_bWorldPositionOffsetVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldPositionOffsetVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualHeightfieldMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualHeightfieldMeshComponent_GatherHideFlags, "GatherHideFlags" }, // 181559152
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component to render a heightfield mesh using a virtual texture heightmap. */" },
		{ "HideCategories", "Activation Collision Cooking HLOD Navigation Mobility Object Physics VirtualTexture Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VirtualHeightfieldMeshComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Component to render a heightfield mesh using a virtual texture heightmap." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "Heightfield" },
		{ "Comment", "/** The RuntimeVirtualTextureVolume that contains virtual texture heightmap. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "The RuntimeVirtualTextureVolume that contains virtual texture heightmap." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, VirtualTexture), Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureRef_MetaData[] = {
		{ "Comment", "/** UObject ref resolved from VirtualTexture weak ref. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "UObject ref resolved from VirtualTexture weak ref." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureRef = { "VirtualTextureRef", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, VirtualTextureRef), Z_Construct_UClass_ARuntimeVirtualTextureVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureThumbnail_MetaData[] = {
		{ "Category", "Heightfield" },
		{ "Comment", "/** Placeholder for details customization image. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Placeholder for details customization image." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureThumbnail = { "VirtualTextureThumbnail", nullptr, (EPropertyFlags)0x0024080000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, VirtualTextureThumbnail), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureThumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton_MetaData[] = {
		{ "Category", "Heightfield" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton_SetBit(void* Obj)
	{
		((UVirtualHeightfieldMeshComponent*)Obj)->bCopyBoundsButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton = { "bCopyBoundsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualHeightfieldMeshComponent), &Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_MinMaxTexture_MetaData[] = {
		{ "Category", "HeightfieldBuild" },
		{ "Comment", "/** Texture object containing minimum and maximum height values. */" },
		{ "DisplayName", "MinMax Texture" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Texture object containing minimum and maximum height values." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_MinMaxTexture = { "MinMaxTexture", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, MinMaxTexture), Z_Construct_UClass_UHeightfieldMinMaxTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_MinMaxTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_MinMaxTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumMinMaxTextureBuildLevels_MetaData[] = {
		{ "Category", "HeightfieldBuild" },
		{ "Comment", "/** Number of levels to build in the MinMax Texture. A default value of 0 will build all levels from the heightfield. */" },
		{ "DisplayName", "MinMax Build Levels" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Number of levels to build in the MinMax Texture. A default value of 0 will build all levels from the heightfield." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumMinMaxTextureBuildLevels = { "NumMinMaxTextureBuildLevels", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, NumMinMaxTextureBuildLevels), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumMinMaxTextureBuildLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumMinMaxTextureBuildLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton_MetaData[] = {
		{ "Category", "HeightfieldBuild" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton_SetBit(void* Obj)
	{
		((UVirtualHeightfieldMeshComponent*)Obj)->bBuildMinMaxTextureButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton = { "bBuildMinMaxTextureButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualHeightfieldMeshComponent), &Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The material to apply. */" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "The material to apply." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0ScreenSize_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Target screen size for a LOD 0 tile. A smaller value uniformly increases the geometry resolution on screen. */" },
		{ "DisplayName", "LOD 0 Screen Size" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Target screen size for a LOD 0 tile. A smaller value uniformly increases the geometry resolution on screen." },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0ScreenSize = { "Lod0ScreenSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, Lod0ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0Distribution_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distribution multiplier applied only for LOD 0. A larger value increases the distance to the first LOD transition. */" },
		{ "DisplayName", "LOD 0 Distance Scale" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Distribution multiplier applied only for LOD 0. A larger value increases the distance to the first LOD transition." },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0Distribution = { "Lod0Distribution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, Lod0Distribution), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0Distribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodDistribution_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Distribution multiplier applied for each LOD level. A larger value increases the distance exponentially between each LOD transition. */" },
		{ "DisplayName", "LOD Distribution" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Distribution multiplier applied for each LOD level. A larger value increases the distance exponentially between each LOD transition." },
		{ "UIMax", "3.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodDistribution = { "LodDistribution", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, LodDistribution), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodDistribution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodBiasScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scale applied to LodBias texture. A larger value increases resolution where the LodBias texture is set. */" },
		{ "DisplayName", "LOD Bias Scale" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Scale applied to LodBias texture. A larger value increases resolution where the LodBias texture is set." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodBiasScale = { "LodBiasScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, LodBiasScale), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodBiasScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodBiasScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumForceLoadLods_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of levels that we force loaded. A higher number can reduce LOD pop in but allocates more of the virtual texture memory pool. */" },
		{ "DisplayName", "Force Load LODs" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "The number of levels that we force loaded. A higher number can reduce LOD pop in but allocates more of the virtual texture memory pool." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumForceLoadLods = { "NumForceLoadLods", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, NumForceLoadLods), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumForceLoadLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumForceLoadLods_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumOcclusionLods_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "5" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of levels that we calculate occlusion volumes for. A higher number gives finer occlusion at the cost of more queries. */" },
		{ "DisplayName", "Occlusion LODs" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "The number of levels that we calculate occlusion volumes for. A higher number gives finer occlusion at the cost of more queries." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumOcclusionLods = { "NumOcclusionLods", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualHeightfieldMeshComponent, NumOcclusionLods), METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumOcclusionLods_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumOcclusionLods_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows us to only see this actor in game and not in the Editor. This is useful if we only want to see the Heightfield virtual texture source primitives during edition. */" },
		{ "DisplayAfter", "bHiddenInGame" },
		{ "DisplayName", "Actor Hidden In Editor" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Allows us to only see this actor in game and not in the Editor. This is useful if we only want to see the Heightfield virtual texture source primitives during edition." },
	};
#endif
	void Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor_SetBit(void* Obj)
	{
		((UVirtualHeightfieldMeshComponent*)Obj)->bHiddenInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor = { "bHiddenInEditor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualHeightfieldMeshComponent), &Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows material World Position Offset to contribute to velocity rendering.*/" },
		{ "ModuleRelativePath", "Public/VirtualHeightfieldMeshComponent.h" },
		{ "ToolTip", "Allows material World Position Offset to contribute to velocity rendering." },
	};
#endif
	void Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity_SetBit(void* Obj)
	{
		((UVirtualHeightfieldMeshComponent*)Obj)->bWorldPositionOffsetVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity = { "bWorldPositionOffsetVelocity", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualHeightfieldMeshComponent), &Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_VirtualTextureThumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bCopyBoundsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_MinMaxTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumMinMaxTextureBuildLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bBuildMinMaxTextureButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_Lod0Distribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodDistribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_LodBiasScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumForceLoadLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_NumOcclusionLods,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bHiddenInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::NewProp_bWorldPositionOffsetVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualHeightfieldMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::ClassParams = {
		&UVirtualHeightfieldMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualHeightfieldMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UVirtualHeightfieldMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualHeightfieldMeshComponent.OuterSingleton, Z_Construct_UClass_UVirtualHeightfieldMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualHeightfieldMeshComponent.OuterSingleton;
	}
	template<> VIRTUALHEIGHTFIELDMESH_API UClass* StaticClass<UVirtualHeightfieldMeshComponent>()
	{
		return UVirtualHeightfieldMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualHeightfieldMeshComponent);
	UVirtualHeightfieldMeshComponent::~UVirtualHeightfieldMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualHeightfieldMeshComponent, UVirtualHeightfieldMeshComponent::StaticClass, TEXT("UVirtualHeightfieldMeshComponent"), &Z_Registration_Info_UClass_UVirtualHeightfieldMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualHeightfieldMeshComponent), 2700087834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_1295217506(TEXT("/Script/VirtualHeightfieldMesh"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualHeightfieldMesh_Source_VirtualHeightfieldMesh_Public_VirtualHeightfieldMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
