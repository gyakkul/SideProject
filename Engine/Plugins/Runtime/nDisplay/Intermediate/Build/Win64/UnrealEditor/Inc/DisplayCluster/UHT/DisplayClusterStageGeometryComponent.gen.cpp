// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DisplayClusterStageGeometryComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterStageGeometryComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap;
class UScriptStruct* FDisplayClusterStageGeometryMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("DisplayClusterStageGeometryMap"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FDisplayClusterStageGeometryMap>()
{
	return FDisplayClusterStageGeometryMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A geometry map for the stage, which contains a generated texture of the stage geometry's depth and normal vectors */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "A geometry map for the stage, which contains a generated texture of the stage geometry's depth and normal vectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterStageGeometryMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Comment", "/** The render target of the geometry map */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "The render target of the geometry map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterStageGeometryMap, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_Texture_MetaData[] = {
		{ "Comment", "/** A displayable texture of the geometry map */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "A displayable texture of the geometry map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterStageGeometryMap, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"DisplayClusterStageGeometryMap",
		sizeof(FDisplayClusterStageGeometryMap),
		alignof(FDisplayClusterStageGeometryMap),
		Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap.InnerSingleton;
	}
	DEFINE_FUNCTION(UDisplayClusterStageGeometryComponent::execGetStageBoundingRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStageBoundingRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterStageGeometryComponent::execGetStageDistanceAndNormal)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDirection);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDistance);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetStageDistanceAndNormal(Z_Param_Out_InDirection,Z_Param_Out_OutDistance,Z_Param_Out_OutNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterStageGeometryComponent::execInvalidate)
	{
		P_GET_UBOOL(Z_Param_bForceImmediateRedraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Invalidate(Z_Param_bForceImmediateRedraw);
		P_NATIVE_END;
	}
	void UDisplayClusterStageGeometryComponent::StaticRegisterNativesUDisplayClusterStageGeometryComponent()
	{
		UClass* Class = UDisplayClusterStageGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStageBoundingRadius", &UDisplayClusterStageGeometryComponent::execGetStageBoundingRadius },
			{ "GetStageDistanceAndNormal", &UDisplayClusterStageGeometryComponent::execGetStageDistanceAndNormal },
			{ "Invalidate", &UDisplayClusterStageGeometryComponent::execInvalidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics
	{
		struct DisplayClusterStageGeometryComponent_eventGetStageBoundingRadius_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterStageGeometryComponent_eventGetStageBoundingRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * Gets the bounding radius of the stage's geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "Gets the bounding radius of the stage's geometry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterStageGeometryComponent, nullptr, "GetStageBoundingRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::DisplayClusterStageGeometryComponent_eventGetStageBoundingRadius_Parms), Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics
	{
		struct DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms
		{
			FVector InDirection;
			float OutDistance;
			FVector OutNormal;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutNormal;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_InDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_InDirection = { "InDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms, InDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_InDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_InDirection_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_OutDistance = { "OutDistance", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms, OutDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_OutNormal = { "OutNormal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms, OutNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms), &Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_InDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_OutDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_OutNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * Gets the distance and normal vector (in radial space) of the stage's geometry in the specified world direction\n\x09 * @param InDirection The direction in world coordinates to query the stage geometry map\n\x09 * @param OutDistance The distance from the stage's default view origin to the nearest stage geometry in the specified direction\n\x09 * @param OutNormal The normal vector in radial space (with x axis pointing in the direction of the stage's default view origin) of the nearest stage geometry in the specified direction\n\x09 * @return true if the stage geometry map was successfully queried, otherwise false\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "Gets the distance and normal vector (in radial space) of the stage's geometry in the specified world direction\n@param InDirection The direction in world coordinates to query the stage geometry map\n@param OutDistance The distance from the stage's default view origin to the nearest stage geometry in the specified direction\n@param OutNormal The normal vector in radial space (with x axis pointing in the direction of the stage's default view origin) of the nearest stage geometry in the specified direction\n@return true if the stage geometry map was successfully queried, otherwise false" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterStageGeometryComponent, nullptr, "GetStageDistanceAndNormal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::DisplayClusterStageGeometryComponent_eventGetStageDistanceAndNormal_Parms), Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics
	{
		struct DisplayClusterStageGeometryComponent_eventInvalidate_Parms
		{
			bool bForceImmediateRedraw;
		};
		static void NewProp_bForceImmediateRedraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceImmediateRedraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::NewProp_bForceImmediateRedraw_SetBit(void* Obj)
	{
		((DisplayClusterStageGeometryComponent_eventInvalidate_Parms*)Obj)->bForceImmediateRedraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::NewProp_bForceImmediateRedraw = { "bForceImmediateRedraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DisplayClusterStageGeometryComponent_eventInvalidate_Parms), &Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::NewProp_bForceImmediateRedraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::NewProp_bForceImmediateRedraw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/**\n\x09 * Invalidates and regenerates the cached stage geometry map\n\x09 * @param bForceImmediateRedraw Indicates whether the geometry map is regenerated immediately or is queued to redraw on the next tick\n\x09 */" },
		{ "CPP_Default_bForceImmediateRedraw", "false" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "Invalidates and regenerates the cached stage geometry map\n@param bForceImmediateRedraw Indicates whether the geometry map is regenerated immediately or is queued to redraw on the next tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterStageGeometryComponent, nullptr, "Invalidate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::DisplayClusterStageGeometryComponent_eventInvalidate_Parms), Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterStageGeometryComponent);
	UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent_NoRegister()
	{
		return UDisplayClusterStageGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NorthGeometryMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NorthGeometryMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SouthGeometryMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SouthGeometryMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageBoundingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StageBoundingRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageBoundingRadius, "GetStageBoundingRadius" }, // 1647368025
		{ &Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_GetStageDistanceAndNormal, "GetStageDistanceAndNormal" }, // 3036753315
		{ &Z_Construct_UFunction_UDisplayClusterStageGeometryComponent_Invalidate, "Invalidate" }, // 2836905903
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A component that stores the generated geometry map of the stage actor, which is used for placing stage actors (light cards, CCWs, etc) flush to the stage's walls and ceiling */" },
		{ "IncludePath", "Components/DisplayClusterStageGeometryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "A component that stores the generated geometry map of the stage actor, which is used for placing stage actors (light cards, CCWs, etc) flush to the stage's walls and ceiling" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_NorthGeometryMap_MetaData[] = {
		{ "Comment", "/** The cached geometry map for the stage's northern hemisphere */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "The cached geometry map for the stage's northern hemisphere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_NorthGeometryMap = { "NorthGeometryMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterStageGeometryComponent, NorthGeometryMap), Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_NorthGeometryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_NorthGeometryMap_MetaData)) }; // 2573623989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_SouthGeometryMap_MetaData[] = {
		{ "Comment", "/** The cached geometry map for the stage's southern hemisphere */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "The cached geometry map for the stage's southern hemisphere" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_SouthGeometryMap = { "SouthGeometryMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterStageGeometryComponent, SouthGeometryMap), Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_SouthGeometryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_SouthGeometryMap_MetaData)) }; // 2573623989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_StageBoundingRadius_MetaData[] = {
		{ "Comment", "/** The cached bounding radius of the stage's geometry */" },
		{ "ModuleRelativePath", "Public/Components/DisplayClusterStageGeometryComponent.h" },
		{ "ToolTip", "The cached bounding radius of the stage's geometry" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_StageBoundingRadius = { "StageBoundingRadius", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterStageGeometryComponent, StageBoundingRadius), METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_StageBoundingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_StageBoundingRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_NorthGeometryMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_SouthGeometryMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::NewProp_StageBoundingRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterStageGeometryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::ClassParams = {
		&UDisplayClusterStageGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterStageGeometryComponent()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterStageGeometryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterStageGeometryComponent.OuterSingleton, Z_Construct_UClass_UDisplayClusterStageGeometryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterStageGeometryComponent.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterStageGeometryComponent>()
	{
		return UDisplayClusterStageGeometryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterStageGeometryComponent);
	UDisplayClusterStageGeometryComponent::~UDisplayClusterStageGeometryComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterStageGeometryMap::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterStageGeometryMap_Statics::NewStructOps, TEXT("DisplayClusterStageGeometryMap"), &Z_Registration_Info_UScriptStruct_DisplayClusterStageGeometryMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterStageGeometryMap), 2573623989U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterStageGeometryComponent, UDisplayClusterStageGeometryComponent::StaticClass, TEXT("UDisplayClusterStageGeometryComponent"), &Z_Registration_Info_UClass_UDisplayClusterStageGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterStageGeometryComponent), 2330965032U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_1866552410(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Components_DisplayClusterStageGeometryComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
