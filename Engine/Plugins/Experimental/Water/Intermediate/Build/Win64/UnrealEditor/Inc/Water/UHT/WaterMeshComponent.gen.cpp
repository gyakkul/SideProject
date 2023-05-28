// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterMeshComponent();
	WATER_API UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UWaterMeshComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	void UWaterMeshComponent::StaticRegisterNativesUWaterMeshComponent()
	{
		UClass* Class = UWaterMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsEnabled", &UWaterMeshComponent::execIsEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics
	{
		struct WaterMeshComponent_eventIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaterMeshComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaterMeshComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWaterMeshComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::WaterMeshComponent_eventIsEnabled_Parms), Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWaterMeshComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWaterMeshComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterMeshComponent);
	UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister()
	{
		return UWaterMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWaterMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceCollapseDensityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ForceCollapseDensityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FarDistanceMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FarDistanceMeshExtent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FarDistanceMeshExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtentInTiles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentInTiles;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UsedMaterials_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_UsedMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFarMeshWithoutOcean_MetaData[];
#endif
		static void NewProp_bUseFarMeshWithoutOcean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFarMeshWithoutOcean;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TessellationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWaterMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWaterMeshComponent_IsEnabled, "IsEnabled" }, // 2805756524
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering Water" },
		{ "Comment", "/**\n * Water Mesh Component responsible for generating and rendering a continuous water mesh on top of all the existing water body actors in the world\n * The component contains a quadtree which defines where there are water tiles. A function for traversing the quadtree and outputing a list of instance data for each tile to be rendered from a point of view is included\n */" },
		{ "HideCategories", "Object Activation Components|Activation Collision Lighting HLOD Navigation Replication Input MaterialParameters TextureStreaming Mobility Trigger" },
		{ "IncludePath", "WaterMeshComponent.h" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "Water Mesh Component responsible for generating and rendering a continuous water mesh on top of all the existing water body actors in the world\nThe component contains a quadtree which defines where there are water tiles. A function for traversing the quadtree and outputing a list of instance data for each tile to be rendered from a point of view is included" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ForceCollapseDensityLevel_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** At above what density level a tile is allowed to force collapse even if not all leaf nodes in the subtree are present.\n\x09 *\x09""Collapsing will not occus if any child node in the subtree has different materials.\n\x09 *\x09Setting this to -1 means no collapsing is allowed and the water mesh will always keep it's silhouette at any distance.\n\x09 *\x09Setting this to 0 will allow every level to collapse\n\x09 *\x09Setting this to something higher than the LODCount will have no effect\n\x09 */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "At above what density level a tile is allowed to force collapse even if not all leaf nodes in the subtree are present.\n    Collapsing will not occus if any child node in the subtree has different materials.\n    Setting this to -1 means no collapsing is allowed and the water mesh will always keep it's silhouette at any distance.\n    Setting this to 0 will allow every level to collapse\n    Setting this to something higher than the LODCount will have no effect" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ForceCollapseDensityLevel = { "ForceCollapseDensityLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, ForceCollapseDensityLevel), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ForceCollapseDensityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ForceCollapseDensityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMaterial_MetaData[] = {
		{ "Category", "Rendering|FarDistance" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMaterial = { "FarDistanceMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, FarDistanceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMeshExtent_MetaData[] = {
		{ "Category", "Rendering|FarDistance" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMeshExtent = { "FarDistanceMeshExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, FarDistanceMeshExtent), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMeshExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMeshExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TileSize_MetaData[] = {
		{ "AllowPrivateAcces", "true" },
		{ "Category", "Rendering" },
		{ "ClampMin", "100" },
		{ "Comment", "/** World size of the water tiles at LOD0. Multiply this with the ExtentInTiles to get the world extents of the system */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "World size of the water tiles at LOD0. Multiply this with the ExtentInTiles to get the world extents of the system" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, TileSize), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ExtentInTiles_MetaData[] = {
		{ "AllowPrivateAcces", "true" },
		{ "Category", "Rendering" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The extent of the system in number of tiles. Maximum number of tiles for this system will be ExtentInTiles.X*2*ExtentInTiles.Y*2 */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "The extent of the system in number of tiles. Maximum number of tiles for this system will be ExtentInTiles.X*2*ExtentInTiles.Y*2" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ExtentInTiles = { "ExtentInTiles", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, ExtentInTiles), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ExtentInTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ExtentInTiles_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials_ElementProp = { "UsedMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials_MetaData[] = {
		{ "Comment", "/** Unique list of materials used by this component */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "Unique list of materials used by this component" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials = { "UsedMaterials", nullptr, (EPropertyFlags)0x0044c00000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, UsedMaterials), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean_MetaData[] = {
		{ "Category", "Rendering|FarDistance" },
		{ "Comment", "/** Forces the water mesh to always render the far mesh, regardless if there is an ocean or not.*/" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "Forces the water mesh to always render the far mesh, regardless if there is an ocean or not." },
	};
#endif
	void Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean_SetBit(void* Obj)
	{
		((UWaterMeshComponent*)Obj)->bUseFarMeshWithoutOcean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean = { "bUseFarMeshWithoutOcean", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterMeshComponent), &Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TessellationFactor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "12" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Highest tessellation factor of a water tile. Max number of verts on the side of a tile will be (2^TessellationFactor)+1)  */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "Highest tessellation factor of a water tile. Max number of verts on the side of a tile will be (2^TessellationFactor)+1)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TessellationFactor = { "TessellationFactor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, TessellationFactor), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TessellationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TessellationFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_LODScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0.5" },
		{ "Comment", "/** World scale of the concentric LODs */" },
		{ "ModuleRelativePath", "Public/WaterMeshComponent.h" },
		{ "ToolTip", "World scale of the concentric LODs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_LODScale = { "LODScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterMeshComponent, LODScale), METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_LODScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_LODScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ForceCollapseDensityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_FarDistanceMeshExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_ExtentInTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_UsedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_bUseFarMeshWithoutOcean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_TessellationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterMeshComponent_Statics::NewProp_LODScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterMeshComponent_Statics::ClassParams = {
		&UWaterMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWaterMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton, Z_Construct_UClass_UWaterMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterMeshComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterMeshComponent>()
	{
		return UWaterMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterMeshComponent);
	UWaterMeshComponent::~UWaterMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterMeshComponent, UWaterMeshComponent::StaticClass, TEXT("UWaterMeshComponent"), &Z_Registration_Info_UClass_UWaterMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterMeshComponent), 489516681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_1285220950(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
