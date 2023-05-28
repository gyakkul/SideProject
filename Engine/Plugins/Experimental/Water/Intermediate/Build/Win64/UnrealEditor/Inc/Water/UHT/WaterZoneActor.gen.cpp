// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterZoneActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterZoneActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterZone();
	WATER_API UClass* Z_Construct_UClass_AWaterZone_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterMeshComponent_NoRegister();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(AWaterZone::execForceUpdateWaterInfoTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdateWaterInfoTexture();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void AWaterZone::StaticRegisterNativesAWaterZone()
	{
#if WITH_EDITOR
		UClass* Class = AWaterZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceUpdateWaterInfoTexture", &AWaterZone::execForceUpdateWaterInfoTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterZone, nullptr, "ForceUpdateWaterInfoTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterZone);
	UClass* Z_Construct_UClass_AWaterZone_NoRegister()
	{
		return AWaterZone::StaticClass();
	}
	struct Z_Construct_UClass_AWaterZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterInfoTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterInfoTexture;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_OwnedWaterBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedWaterBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedWaterBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoneExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHalfPrecisionTexture_MetaData[];
#endif
		static void NewProp_bHalfPrecisionTexture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHalfPrecisionTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VelocityBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellatedWaterMeshExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellatedWaterMeshExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NonTessellatedLODSectionScale_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NonTessellatedLODSectionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverlapPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNonTessellatedLODMesh_MetaData[];
#endif
		static void NewProp_bEnableNonTessellatedLODMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNonTessellatedLODMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundsComponent;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedWaterBodies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedWaterBodies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedWaterBodies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorIcon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterVelocityTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterVelocityTexture;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterZone_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AWaterZone_ForceUpdateWaterInfoTexture, "ForceUpdateWaterInfoTexture" }, // 195963765
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Physics Replication Input Collision" },
		{ "IncludePath", "WaterZoneActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterInfoTexture_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterInfoTexture = { "WaterInfoTexture", nullptr, (EPropertyFlags)0x0014000000222015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, WaterInfoTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterInfoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterInfoTexture_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies_Inner = { "OwnedWaterBodies", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaterBodyComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies = { "OwnedWaterBodies", nullptr, (EPropertyFlags)0x0044008000022009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, OwnedWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_RenderTargetResolution_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_RenderTargetResolution = { "RenderTargetResolution", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, RenderTargetResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_RenderTargetResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_RenderTargetResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** The water mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "The water mesh component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterMesh = { "WaterMesh", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, WaterMesh), Z_Construct_UClass_UWaterMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_ZoneExtent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** Width of the zone bounding box */" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Width of the zone bounding box" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_ZoneExtent = { "ZoneExtent", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, ZoneExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_ZoneExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_ZoneExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_CaptureZOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** Offsets the height above the water zone at which the WaterInfoTexture is rendered. This is applied after computing the maximum Z of all the water bodies within the zone. */" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Offsets the height above the water zone at which the WaterInfoTexture is rendered. This is applied after computing the maximum Z of all the water bodies within the zone." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_CaptureZOffset = { "CaptureZOffset", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, CaptureZOffset), METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_CaptureZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_CaptureZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Water" },
		{ "Comment", "/** Determines if the WaterInfoTexture should be 16 or 32 bits per channel */" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Determines if the WaterInfoTexture should be 16 or 32 bits per channel" },
	};
#endif
	void Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture_SetBit(void* Obj)
	{
		((AWaterZone*)Obj)->bHalfPrecisionTexture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture = { "bHalfPrecisionTexture", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterZone), &Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_VelocityBlurRadius_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Radius of the velocity blur in the finalize water info pass */" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Radius of the velocity blur in the finalize water info pass" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_VelocityBlurRadius = { "VelocityBlurRadius", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, VelocityBlurRadius), METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_VelocityBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_VelocityBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_TessellatedWaterMeshExtent_MetaData[] = {
		{ "Category", "NonTessellatedLOD" },
		{ "Comment", "/** Area around the camera covered by the tessellated water mesh when LOD is enabled. */" },
		{ "EditCondition", "bEnableNonTessellatedLODMesh" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Area around the camera covered by the tessellated water mesh when LOD is enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_TessellatedWaterMeshExtent = { "TessellatedWaterMeshExtent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, TessellatedWaterMeshExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_TessellatedWaterMeshExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_TessellatedWaterMeshExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_NonTessellatedLODSectionScale_MetaData[] = {
		{ "Category", "NonTessellatedLOD" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Non Tessellated LOD Section Scale" },
		{ "EditCondition", "bEnableNonTessellatedLODMesh" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_NonTessellatedLODSectionScale = { "NonTessellatedLODSectionScale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, NonTessellatedLODSectionScale), METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_NonTessellatedLODSectionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_NonTessellatedLODSectionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_OverlapPriority_MetaData[] = {
		{ "Category", "Water" },
		{ "Comment", "/** Higher number is higher priority. If Water Zones overlap and a water body does not have a manual water zone override, this priority will be used when automatically assigning the zone. */" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "Higher number is higher priority. If Water Zones overlap and a water body does not have a manual water zone override, this priority will be used when automatically assigning the zone." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_OverlapPriority = { "OverlapPriority", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, OverlapPriority), METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_OverlapPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh_MetaData[] = {
		{ "Category", "NonTessellatedLOD" },
		{ "DisplayName", "Enable Non-Tessellated LOD Mesh" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	void Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh_SetBit(void* Obj)
	{
		((AWaterZone*)Obj)->bEnableNonTessellatedLODMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh = { "bEnableNonTessellatedLODMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterZone), &Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_BoundsComponent_MetaData[] = {
		{ "Comment", "/** A manipulatable box for visualizing/editing the water zone bounds */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
		{ "ToolTip", "A manipulatable box for visualizing/editing the water zone bounds" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_BoundsComponent = { "BoundsComponent", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, BoundsComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_BoundsComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_BoundsComponent_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies_Inner = { "SelectedWaterBodies", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies = { "SelectedWaterBodies", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, SelectedWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_ActorIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_ActorIcon = { "ActorIcon", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, ActorIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_ActorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_ActorIcon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterVelocityTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterZoneActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterVelocityTexture = { "WaterVelocityTexture", nullptr, (EPropertyFlags)0x0044000820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterZone, WaterVelocityTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterVelocityTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterVelocityTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterInfoTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_OwnedWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_RenderTargetResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_ZoneExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_CaptureZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_bHalfPrecisionTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_VelocityBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_TessellatedWaterMeshExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_NonTessellatedLODSectionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_OverlapPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_bEnableNonTessellatedLODMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_BoundsComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_SelectedWaterBodies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_ActorIcon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterZone_Statics::NewProp_WaterVelocityTexture,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterZone_Statics::ClassParams = {
		&AWaterZone::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_AWaterZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterZone()
	{
		if (!Z_Registration_Info_UClass_AWaterZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterZone.OuterSingleton, Z_Construct_UClass_AWaterZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterZone.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<AWaterZone>()
	{
		return AWaterZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterZone);
	AWaterZone::~AWaterZone() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterZone, AWaterZone::StaticClass, TEXT("AWaterZone"), &Z_Registration_Info_UClass_AWaterZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterZone), 4208228160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_775325976(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterZoneActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
