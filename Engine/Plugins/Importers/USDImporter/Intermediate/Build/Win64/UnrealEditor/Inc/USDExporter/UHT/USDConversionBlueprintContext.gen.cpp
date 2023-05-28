// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "USDConversionBlueprintContext.h"
#include "MaterialOptions.h"
#include "USDUnrealAssetInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUSDConversionBlueprintContext() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_AInstancedFoliageActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	MATERIALBAKING_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyEntry();
	UPackage* Z_Construct_UPackage__Script_USDExporter();
	USDCLASSES_API UScriptStruct* Z_Construct_UScriptStruct_FUsdUnrealAssetInfo();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintContext();
	USDEXPORTER_API UClass* Z_Construct_UClass_UUsdConversionBlueprintContext_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execGetPrimAssetInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUsdUnrealAssetInfo*)Z_Param__Result=P_THIS->GetPrimAssetInfo(Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execSetPrimAssetInfo)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_STRUCT_REF(FUsdUnrealAssetInfo,Z_Param_Out_Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrimAssetInfo(Z_Param_PrimPath,Z_Param_Out_Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execGetUsdStageNumFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetUsdStageNumFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execRemoveUnrealSurfaceOutput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_LayerToAuthorIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveUnrealSurfaceOutput(Z_Param_PrimPath,Z_Param_Out_LayerToAuthorIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execReplaceUnrealMaterialsWithBaked)
	{
		P_GET_STRUCT_REF(FFilePath,Z_Param_Out_LayerToAuthorIn);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_BakedMaterials);
		P_GET_UBOOL(Z_Param_bIsAssetLayer);
		P_GET_UBOOL(Z_Param_bUsePayload);
		P_GET_UBOOL(Z_Param_bRemoveUnrealMaterials);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUnrealMaterialsWithBaked(Z_Param_Out_LayerToAuthorIn,Z_Param_Out_BakedMaterials,Z_Param_bIsAssetLayer,Z_Param_bUsePayload,Z_Param_bRemoveUnrealMaterials);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertLandscapeProxyActorMaterial)
	{
		P_GET_OBJECT(ALandscapeProxy,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_TARRAY_REF(FPropertyEntry,Z_Param_Out_PropertiesToBake);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_DefaultTextureSize);
		P_GET_STRUCT_REF(FDirectoryPath,Z_Param_Out_TexturesDir);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertLandscapeProxyActorMaterial(Z_Param_Actor,Z_Param_PrimPath,Z_Param_Out_PropertiesToBake,Z_Param_Out_DefaultTextureSize,Z_Param_Out_TexturesDir,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertLandscapeProxyActorMesh)
	{
		P_GET_OBJECT(ALandscapeProxy,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_LowestLOD);
		P_GET_PROPERTY(FIntProperty,Z_Param_HighestLOD);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertLandscapeProxyActorMesh(Z_Param_Actor,Z_Param_PrimPath,Z_Param_LowestLOD,Z_Param_HighestLOD,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertInstancedFoliageActor)
	{
		P_GET_OBJECT(AInstancedFoliageActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_OBJECT(ULevel,Z_Param_InstancesLevel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertInstancedFoliageActor(Z_Param_Actor,Z_Param_PrimPath,Z_Param_InstancesLevel,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertCineCameraComponent)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertCineCameraComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertMeshComponent)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertMeshComponent(Z_Param_Component,Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertHismComponent)
	{
		P_GET_OBJECT(UHierarchicalInstancedStaticMeshComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertHismComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertSceneComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertSceneComponent(Z_Param_Component,Z_Param_PrimPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertSpotLightComponent)
	{
		P_GET_OBJECT(USpotLightComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertSpotLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertSkyLightComponent)
	{
		P_GET_OBJECT(USkyLightComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertSkyLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertPointLightComponent)
	{
		P_GET_OBJECT(UPointLightComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertPointLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertRectLightComponent)
	{
		P_GET_OBJECT(URectLightComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertRectLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertDirectionalLightComponent)
	{
		P_GET_OBJECT(UDirectionalLightComponent,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertDirectionalLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execConvertLightComponent)
	{
		P_GET_OBJECT(ULightComponentBase,Z_Param_Component);
		P_GET_PROPERTY(FStrProperty,Z_Param_PrimPath);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TimeCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertLightComponent(Z_Param_Component,Z_Param_PrimPath,Z_Param_TimeCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execCleanup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cleanup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execGetEditTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFilePath*)Z_Param__Result=P_THIS->GetEditTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execSetEditTarget)
	{
		P_GET_STRUCT(FFilePath,Z_Param_EditTargetLayerPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditTarget(Z_Param_EditTargetLayerPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execGetStageRootLayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFilePath*)Z_Param__Result=P_THIS->GetStageRootLayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUsdConversionBlueprintContext::execSetStageRootLayer)
	{
		P_GET_STRUCT(FFilePath,Z_Param_StageRootLayerPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStageRootLayer(Z_Param_StageRootLayerPath);
		P_NATIVE_END;
	}
	void UUsdConversionBlueprintContext::StaticRegisterNativesUUsdConversionBlueprintContext()
	{
		UClass* Class = UUsdConversionBlueprintContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cleanup", &UUsdConversionBlueprintContext::execCleanup },
			{ "ConvertCineCameraComponent", &UUsdConversionBlueprintContext::execConvertCineCameraComponent },
			{ "ConvertDirectionalLightComponent", &UUsdConversionBlueprintContext::execConvertDirectionalLightComponent },
			{ "ConvertHismComponent", &UUsdConversionBlueprintContext::execConvertHismComponent },
			{ "ConvertInstancedFoliageActor", &UUsdConversionBlueprintContext::execConvertInstancedFoliageActor },
			{ "ConvertLandscapeProxyActorMaterial", &UUsdConversionBlueprintContext::execConvertLandscapeProxyActorMaterial },
			{ "ConvertLandscapeProxyActorMesh", &UUsdConversionBlueprintContext::execConvertLandscapeProxyActorMesh },
			{ "ConvertLightComponent", &UUsdConversionBlueprintContext::execConvertLightComponent },
			{ "ConvertMeshComponent", &UUsdConversionBlueprintContext::execConvertMeshComponent },
			{ "ConvertPointLightComponent", &UUsdConversionBlueprintContext::execConvertPointLightComponent },
			{ "ConvertRectLightComponent", &UUsdConversionBlueprintContext::execConvertRectLightComponent },
			{ "ConvertSceneComponent", &UUsdConversionBlueprintContext::execConvertSceneComponent },
			{ "ConvertSkyLightComponent", &UUsdConversionBlueprintContext::execConvertSkyLightComponent },
			{ "ConvertSpotLightComponent", &UUsdConversionBlueprintContext::execConvertSpotLightComponent },
			{ "GetEditTarget", &UUsdConversionBlueprintContext::execGetEditTarget },
			{ "GetPrimAssetInfo", &UUsdConversionBlueprintContext::execGetPrimAssetInfo },
			{ "GetStageRootLayer", &UUsdConversionBlueprintContext::execGetStageRootLayer },
			{ "GetUsdStageNumFrames", &UUsdConversionBlueprintContext::execGetUsdStageNumFrames },
			{ "RemoveUnrealSurfaceOutput", &UUsdConversionBlueprintContext::execRemoveUnrealSurfaceOutput },
			{ "ReplaceUnrealMaterialsWithBaked", &UUsdConversionBlueprintContext::execReplaceUnrealMaterialsWithBaked },
			{ "SetEditTarget", &UUsdConversionBlueprintContext::execSetEditTarget },
			{ "SetPrimAssetInfo", &UUsdConversionBlueprintContext::execSetPrimAssetInfo },
			{ "SetStageRootLayer", &UUsdConversionBlueprintContext::execSetStageRootLayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export context" },
		{ "Comment", "/**\n\x09 * Discards the currently opened stage. This is critical when using this class via scripting: The C++ destructor will\n\x09 * not be called when the python object runs out of scope, so we would otherwise keep a strong reference to the stage\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Discards the currently opened stage. This is critical when using this class via scripting: The C++ destructor will\nnot be called when the python object runs out of scope, so we would otherwise keep a strong reference to the stage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "Cleanup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms
		{
			const UCineCameraComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms, Component), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertCineCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::UsdConversionBlueprintContext_eventConvertCineCameraComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms
		{
			const UDirectionalLightComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms, Component), Z_Construct_UClass_UDirectionalLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertDirectionalLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::UsdConversionBlueprintContext_eventConvertDirectionalLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertHismComponent_Parms
		{
			const UHierarchicalInstancedStaticMeshComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertHismComponent_Parms, Component), Z_Construct_UClass_UHierarchicalInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertHismComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertHismComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertHismComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertHismComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertHismComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::UsdConversionBlueprintContext_eventConvertHismComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms
		{
			const AInstancedFoliageActor* Actor;
			FString PrimPath;
			ULevel* InstancesLevel;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancesLevel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms, Actor), Z_Construct_UClass_AInstancedFoliageActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_InstancesLevel = { "InstancesLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms, InstancesLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_InstancesLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_InstancesLevel", "None" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertInstancedFoliageActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::UsdConversionBlueprintContext_eventConvertInstancedFoliageActor_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics
	{
		struct FDirectoryPath
		{
			FString Path;
		};

		struct UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms
		{
			ALandscapeProxy* Actor;
			FString PrimPath;
			TArray<FPropertyEntry> PropertiesToBake;
			FIntPoint DefaultTextureSize;
			FDirectoryPath TexturesDir;
			float TimeCode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertiesToBake_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertiesToBake_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertiesToBake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturesDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturesDir;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, Actor), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake_Inner = { "PropertiesToBake", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyEntry, METADATA_PARAMS(nullptr, 0) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake = { "PropertiesToBake", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, PropertiesToBake), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake_MetaData)) }; // 3594713815
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_DefaultTextureSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_DefaultTextureSize = { "DefaultTextureSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, DefaultTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_DefaultTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_DefaultTextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TexturesDir_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TexturesDir = { "TexturesDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, TexturesDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TexturesDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TexturesDir_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_PropertiesToBake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_DefaultTextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TexturesDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertLandscapeProxyActorMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMaterial_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms
		{
			const ALandscapeProxy* Actor;
			FString PrimPath;
			int32 LowestLOD;
			int32 HighestLOD;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_LowestLOD;
		static const UECodeGen_Private::FIntPropertyParams NewProp_HighestLOD;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms, Actor), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_LowestLOD = { "LowestLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms, LowestLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_HighestLOD = { "HighestLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms, HighestLOD), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_LowestLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_HighestLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertLandscapeProxyActorMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::UsdConversionBlueprintContext_eventConvertLandscapeProxyActorMesh_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertLightComponent_Parms
		{
			const ULightComponentBase* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLightComponent_Parms, Component), Z_Construct_UClass_ULightComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "Comment", "// Note: We use FLT_MAX on these functions because Usd.TimeCode.Default().GetValue() is actually a nan, and nan arguments are automatically sanitized to 0.0f.\n// We manually convert the FLT_MAX value into Usd.TimeCode.Default().GetValue() within the functions though, so if you want the Default timecode just omit the argument\n// We are also forced to copypaste the FLT_MAX value (3.402823466e+38F) in here as the default arguments are parsed before the preprocessor replaces the defines\n" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Note: We use FLT_MAX on these functions because Usd.TimeCode.Default().GetValue() is actually a nan, and nan arguments are automatically sanitized to 0.0f.\nWe manually convert the FLT_MAX value into Usd.TimeCode.Default().GetValue() within the functions though, so if you want the Default timecode just omit the argument\nWe are also forced to copypaste the FLT_MAX value (3.402823466e+38F) in here as the default arguments are parsed before the preprocessor replaces the defines" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::UsdConversionBlueprintContext_eventConvertLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertMeshComponent_Parms
		{
			const UMeshComponent* Component;
			FString PrimPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertMeshComponent_Parms, Component), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertMeshComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_PrimPath_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertMeshComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertMeshComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::UsdConversionBlueprintContext_eventConvertMeshComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms
		{
			const UPointLightComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms, Component), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertPointLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::UsdConversionBlueprintContext_eventConvertPointLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms
		{
			const URectLightComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms, Component), Z_Construct_UClass_URectLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertRectLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::UsdConversionBlueprintContext_eventConvertRectLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertSceneComponent_Parms
		{
			const USceneComponent* Component;
			FString PrimPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSceneComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSceneComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_PrimPath_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertSceneComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertSceneComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::UsdConversionBlueprintContext_eventConvertSceneComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms
		{
			const USkyLightComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms, Component), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertSkyLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::UsdConversionBlueprintContext_eventConvertSkyLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics
	{
		struct UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms
		{
			const USpotLightComponent* Component;
			FString PrimPath;
			float TimeCode;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeCode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms, Component), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_TimeCode = { "TimeCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms, TimeCode), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_TimeCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Component conversion" },
		{ "CPP_Default_TimeCode", "340282346638528859811704183484516925440.000000" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ConvertSpotLightComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::UsdConversionBlueprintContext_eventConvertSpotLightComponent_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventGetEditTarget_Parms
		{
			FFilePath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventGetEditTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export context" },
		{ "Comment", "/**\n\x09 * Gets the filepath of the current edit target layer of our internal stage\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Gets the filepath of the current edit target layer of our internal stage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "GetEditTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::UsdConversionBlueprintContext_eventGetEditTarget_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics
	{
		struct UsdConversionBlueprintContext_eventGetPrimAssetInfo_Parms
		{
			FString PrimPath;
			FUsdUnrealAssetInfo ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventGetPrimAssetInfo_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventGetPrimAssetInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FUsdUnrealAssetInfo, METADATA_PARAMS(nullptr, 0) }; // 3937709393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversion utils" },
		{ "Comment", "/** Retrieves from Prim the assetInfo metadata values that we use as export metadata, when exporting Unreal assets */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Retrieves from Prim the assetInfo metadata values that we use as export metadata, when exporting Unreal assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "GetPrimAssetInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::UsdConversionBlueprintContext_eventGetPrimAssetInfo_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventGetStageRootLayer_Parms
		{
			FFilePath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventGetStageRootLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export context" },
		{ "Comment", "/**\n\x09 * Gets the file path of the root layer of our current stage\n\x09 */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Gets the file path of the root layer of our current stage" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "GetStageRootLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::UsdConversionBlueprintContext_eventGetStageRootLayer_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics
	{
		struct UsdConversionBlueprintContext_eventGetUsdStageNumFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventGetUsdStageNumFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversion utils" },
		{ "Comment", "/** Returns how many frames of animation the stage would generate if imported */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Returns how many frames of animation the stage would generate if imported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "GetUsdStageNumFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::UsdConversionBlueprintContext_eventGetUsdStageNumFrames_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms
		{
			FString PrimPath;
			FFilePath LayerToAuthorIn;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerToAuthorIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerToAuthorIn;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_LayerToAuthorIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_LayerToAuthorIn = { "LayerToAuthorIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms, LayerToAuthorIn), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_LayerToAuthorIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_LayerToAuthorIn_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_LayerToAuthorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversion utils" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "RemoveUnrealSurfaceOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::UsdConversionBlueprintContext_eventRemoveUnrealSurfaceOutput_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms
		{
			FFilePath LayerToAuthorIn;
			TMap<FString,FString> BakedMaterials;
			bool bIsAssetLayer;
			bool bUsePayload;
			bool bRemoveUnrealMaterials;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerToAuthorIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerToAuthorIn;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedMaterials_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BakedMaterials;
		static void NewProp_bIsAssetLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAssetLayer;
		static void NewProp_bUsePayload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePayload;
		static void NewProp_bRemoveUnrealMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveUnrealMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_LayerToAuthorIn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_LayerToAuthorIn = { "LayerToAuthorIn", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms, LayerToAuthorIn), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_LayerToAuthorIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_LayerToAuthorIn_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_ValueProp = { "BakedMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_Key_KeyProp = { "BakedMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials = { "BakedMaterials", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms, BakedMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_MetaData)) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bIsAssetLayer_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms*)Obj)->bIsAssetLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bIsAssetLayer = { "bIsAssetLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bIsAssetLayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bUsePayload_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms*)Obj)->bUsePayload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bUsePayload = { "bUsePayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bUsePayload_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bRemoveUnrealMaterials_SetBit(void* Obj)
	{
		((UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms*)Obj)->bRemoveUnrealMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bRemoveUnrealMaterials = { "bRemoveUnrealMaterials", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms), &Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bRemoveUnrealMaterials_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_LayerToAuthorIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_BakedMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bIsAssetLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bUsePayload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::NewProp_bRemoveUnrealMaterials,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversion utils" },
		{ "Comment", "/**\n\x09 * Traverses the context's stage and authors material binding attributes for all `unrealMaterials` that were baked into USD material assets.\n\x09 * @param LayerToAuthorIn - File path to the layer where the material binding opinions are authored\n\x09 * @param BakedMaterials - Maps from material path names to file paths where they were baked\n\x09 *                         Example: { \"/Game/MyMaterials/Red.Red\": \"C:/MyFolder/Red.usda\" }\n\x09 * @param bIsAssetLayer - True when we're exporting a single mesh/animation asset. False when we're exporting a level. Dictates minor behaviors\n\x09 *                        when authoring the material binding relationships, e.g. whether we author them inside variants or not\n\x09 * @param bUsePayload - Should be True if the Stage was exported using payload files to store the actual Mesh prims. Also dictates minor\n\x09 *                      behaviors when authoring the material binding relationships.\n\x09 * @param bRemoveUnrealMaterials - No longer used.\n\x09 */" },
		{ "CPP_Default_bRemoveUnrealMaterials", "false" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Traverses the context's stage and authors material binding attributes for all `unrealMaterials` that were baked into USD material assets.\n@param LayerToAuthorIn - File path to the layer where the material binding opinions are authored\n@param BakedMaterials - Maps from material path names to file paths where they were baked\n                        Example: { \"/Game/MyMaterials/Red.Red\": \"C:/MyFolder/Red.usda\" }\n@param bIsAssetLayer - True when we're exporting a single mesh/animation asset. False when we're exporting a level. Dictates minor behaviors\n                       when authoring the material binding relationships, e.g. whether we author them inside variants or not\n@param bUsePayload - Should be True if the Stage was exported using payload files to store the actual Mesh prims. Also dictates minor\n                     behaviors when authoring the material binding relationships.\n@param bRemoveUnrealMaterials - No longer used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "ReplaceUnrealMaterialsWithBaked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::UsdConversionBlueprintContext_eventReplaceUnrealMaterialsWithBaked_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventSetEditTarget_Parms
		{
			FFilePath EditTargetLayerPath;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditTargetLayerPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::NewProp_EditTargetLayerPath = { "EditTargetLayerPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventSetEditTarget_Parms, EditTargetLayerPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::NewProp_EditTargetLayerPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export context" },
		{ "Comment", "/**\n     * Sets the current edit target of our internal stage. When calling the conversion functions, prims and attributes\n\x09 * will be authored on this edit target only\n     */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Sets the current edit target of our internal stage. When calling the conversion functions, prims and attributes\nwill be authored on this edit target only" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "SetEditTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::UsdConversionBlueprintContext_eventSetEditTarget_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics
	{
		struct UsdConversionBlueprintContext_eventSetPrimAssetInfo_Parms
		{
			FString PrimPath;
			FUsdUnrealAssetInfo Info;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrimPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_PrimPath = { "PrimPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventSetPrimAssetInfo_Parms, PrimPath), METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_PrimPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_Info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventSetPrimAssetInfo_Parms, Info), Z_Construct_UScriptStruct_FUsdUnrealAssetInfo, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_Info_MetaData)) }; // 3937709393
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_PrimPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::NewProp_Info,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Conversion utils" },
		{ "Comment", "/** Adds to Prim the assetInfo metadata the values described in Info */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Adds to Prim the assetInfo metadata the values described in Info" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "SetPrimAssetInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::UsdConversionBlueprintContext_eventSetPrimAssetInfo_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics
	{
		struct FFilePath
		{
			FString FilePath;
		};

		struct UsdConversionBlueprintContext_eventSetStageRootLayer_Parms
		{
			FFilePath StageRootLayerPath;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StageRootLayerPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::NewProp_StageRootLayerPath = { "StageRootLayerPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UsdConversionBlueprintContext_eventSetStageRootLayer_Parms, StageRootLayerPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::NewProp_StageRootLayerPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Export context" },
		{ "Comment", "/**\n     * Opens or creates a USD stage using `StageRootLayerPath` as root layer, creating the root layer if needed.\n     * All future conversions will fetch prims and get/set USD data to/from this stage.\n\x09 * Note: You must remember to call Cleanup() when done, or else this object will permanently hold a reference to the opened stage!\n     */" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ToolTip", "Opens or creates a USD stage using `StageRootLayerPath` as root layer, creating the root layer if needed.\nAll future conversions will fetch prims and get/set USD data to/from this stage.\nNote: You must remember to call Cleanup() when done, or else this object will permanently hold a reference to the opened stage!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUsdConversionBlueprintContext, nullptr, "SetStageRootLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::UsdConversionBlueprintContext_eventSetStageRootLayer_Parms), Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUsdConversionBlueprintContext);
	UClass* Z_Construct_UClass_UUsdConversionBlueprintContext_NoRegister()
	{
		return UUsdConversionBlueprintContext::StaticClass();
	}
	struct Z_Construct_UClass_UUsdConversionBlueprintContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_USDExporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_Cleanup, "Cleanup" }, // 3952029624
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertCineCameraComponent, "ConvertCineCameraComponent" }, // 1503296579
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertDirectionalLightComponent, "ConvertDirectionalLightComponent" }, // 3697163044
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertHismComponent, "ConvertHismComponent" }, // 4232920370
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertInstancedFoliageActor, "ConvertInstancedFoliageActor" }, // 2287783702
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMaterial, "ConvertLandscapeProxyActorMaterial" }, // 1626406088
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLandscapeProxyActorMesh, "ConvertLandscapeProxyActorMesh" }, // 1932134499
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertLightComponent, "ConvertLightComponent" }, // 1100078235
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertMeshComponent, "ConvertMeshComponent" }, // 3987037457
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertPointLightComponent, "ConvertPointLightComponent" }, // 1984405013
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertRectLightComponent, "ConvertRectLightComponent" }, // 441882129
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSceneComponent, "ConvertSceneComponent" }, // 3843768277
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSkyLightComponent, "ConvertSkyLightComponent" }, // 588877858
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ConvertSpotLightComponent, "ConvertSpotLightComponent" }, // 572899851
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_GetEditTarget, "GetEditTarget" }, // 2176117982
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_GetPrimAssetInfo, "GetPrimAssetInfo" }, // 1209838535
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_GetStageRootLayer, "GetStageRootLayer" }, // 866370278
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_GetUsdStageNumFrames, "GetUsdStageNumFrames" }, // 2403843617
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_RemoveUnrealSurfaceOutput, "RemoveUnrealSurfaceOutput" }, // 1634672313
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_ReplaceUnrealMaterialsWithBaked, "ReplaceUnrealMaterialsWithBaked" }, // 2171550373
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_SetEditTarget, "SetEditTarget" }, // 2226093371
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_SetPrimAssetInfo, "SetPrimAssetInfo" }, // 1519886427
		{ &Z_Construct_UFunction_UUsdConversionBlueprintContext_SetStageRootLayer, "SetStageRootLayer" }, // 2307288497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Wraps the UnrealToUsd component conversion functions from the USDUtilities module so that they can be used by\n * scripting languages.\n *\n * This is an instanceable object instead of just static functions so that the USDStage to use for the\n * conversions can be provided and cached between function calls, which is helpful because we're forced to provide\n * at most prim and layer file paths (as opposed to direct pxr::UsdPrim objects).\n *\n * We can't provide the pxr::UsdPrim object directly because USD types can't be part of C++ function signatures that\n * are automatically exposed to scripting languages. Lucikly we can use UsdUtils' stage cache to make sure that\n * C++ and e.g. Python are still referencing the same USD Stage in memory, so that we can e.g. use these functions to\n * convert data within stages created via Python.\n */" },
		{ "IncludePath", "USDConversionBlueprintContext.h" },
		{ "ModuleRelativePath", "Public/USDConversionBlueprintContext.h" },
		{ "ScriptName", "UsdConversionContext" },
		{ "ToolTip", "Wraps the UnrealToUsd component conversion functions from the USDUtilities module so that they can be used by\nscripting languages.\n\nThis is an instanceable object instead of just static functions so that the USDStage to use for the\nconversions can be provided and cached between function calls, which is helpful because we're forced to provide\nat most prim and layer file paths (as opposed to direct pxr::UsdPrim objects).\n\nWe can't provide the pxr::UsdPrim object directly because USD types can't be part of C++ function signatures that\nare automatically exposed to scripting languages. Lucikly we can use UsdUtils' stage cache to make sure that\nC++ and e.g. Python are still referencing the same USD Stage in memory, so that we can e.g. use these functions to\nconvert data within stages created via Python." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUsdConversionBlueprintContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::ClassParams = {
		&UUsdConversionBlueprintContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUsdConversionBlueprintContext()
	{
		if (!Z_Registration_Info_UClass_UUsdConversionBlueprintContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUsdConversionBlueprintContext.OuterSingleton, Z_Construct_UClass_UUsdConversionBlueprintContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUsdConversionBlueprintContext.OuterSingleton;
	}
	template<> USDEXPORTER_API UClass* StaticClass<UUsdConversionBlueprintContext>()
	{
		return UUsdConversionBlueprintContext::StaticClass();
	}
	UUsdConversionBlueprintContext::UUsdConversionBlueprintContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUsdConversionBlueprintContext);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUsdConversionBlueprintContext, UUsdConversionBlueprintContext::StaticClass, TEXT("UUsdConversionBlueprintContext"), &Z_Registration_Info_UClass_UUsdConversionBlueprintContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUsdConversionBlueprintContext), 3070667843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_3731680404(TEXT("/Script/USDExporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Importers_USDImporter_Source_USDExporter_Public_USDConversionBlueprintContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
