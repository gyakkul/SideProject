// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBrushManager.h"
#include "../Private/WaterBrushCacheContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBrushManager() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_AWaterBrushManager();
	WATEREDITOR_API UClass* Z_Construct_UClass_AWaterBrushManager_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_AWaterLandscapeBrush();
	WATEREDITOR_API UClass* Z_Construct_UClass_UJumpFloodComponent2D_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister();
	WATEREDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWaterBodyBrushCache();
// End Cross Module References
	DEFINE_FUNCTION(AWaterBrushManager::execSetupDefaultMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupDefaultMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execSortWaterBodiesForBrushRender)
	{
		P_GET_TARRAY_REF(AWaterBody*,Z_Param_Out_InOutWaterBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortWaterBodiesForBrushRender_Implementation(Z_Param_Out_InOutWaterBodies);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execGetWaterCacheKey)
	{
		P_GET_OBJECT(AActor,Z_Param_WaterBrush);
		P_GET_OBJECT_REF(UWaterBodyBrushCacheContainer,Z_Param_Out_ContainerObject);
		P_GET_STRUCT_REF(FWaterBodyBrushCache,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaterCacheKey(Z_Param_WaterBrush,Z_Param_Out_ContainerObject,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execSingleJumpStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SingleJumpStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execFindEdges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindEdges();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execSingleBlurStep)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SingleBlurStep();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterBrushManager::execForceUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdate();
		P_NATIVE_END;
	}
	struct WaterBrushManager_eventSortWaterBodiesForBrushRender_Parms
	{
		TArray<AWaterBody*> InOutWaterBodies;
	};
	static FName NAME_AWaterBrushManager_SortWaterBodiesForBrushRender = FName(TEXT("SortWaterBodiesForBrushRender"));
	void AWaterBrushManager::SortWaterBodiesForBrushRender(TArray<AWaterBody*>& InOutWaterBodies) const
	{
		WaterBrushManager_eventSortWaterBodiesForBrushRender_Parms Parms;
		Parms.InOutWaterBodies=InOutWaterBodies;
		const_cast<AWaterBrushManager*>(this)->ProcessEvent(FindFunctionChecked(NAME_AWaterBrushManager_SortWaterBodiesForBrushRender),&Parms);
		InOutWaterBodies=Parms.InOutWaterBodies;
	}
	void AWaterBrushManager::StaticRegisterNativesAWaterBrushManager()
	{
		UClass* Class = AWaterBrushManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindEdges", &AWaterBrushManager::execFindEdges },
			{ "ForceUpdate", &AWaterBrushManager::execForceUpdate },
			{ "GetWaterCacheKey", &AWaterBrushManager::execGetWaterCacheKey },
			{ "SetupDefaultMaterials", &AWaterBrushManager::execSetupDefaultMaterials },
			{ "SingleBlurStep", &AWaterBrushManager::execSingleBlurStep },
			{ "SingleJumpStep", &AWaterBrushManager::execSingleJumpStep },
			{ "SortWaterBodiesForBrushRender", &AWaterBrushManager::execSortWaterBodiesForBrushRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "FindEdges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_FindEdges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_FindEdges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "Comment", "// Debug Buttons\n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "Debug Buttons" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "ForceUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_ForceUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_ForceUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics
	{
		struct WaterBrushManager_eventGetWaterCacheKey_Parms
		{
			AActor* WaterBrush;
			UWaterBodyBrushCacheContainer* ContainerObject;
			FWaterBodyBrushCache Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBrush;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_WaterBrush = { "WaterBrush", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBrushManager_eventGetWaterCacheKey_Parms, WaterBrush), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBrushManager_eventGetWaterCacheKey_Parms, ContainerObject), Z_Construct_UClass_UWaterBodyBrushCacheContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBrushManager_eventGetWaterCacheKey_Parms, Value), Z_Construct_UScriptStruct_FWaterBodyBrushCache, METADATA_PARAMS(nullptr, 0) }; // 2741504481
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_WaterBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_ContainerObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "out" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "GetWaterCacheKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::WaterBrushManager_eventGetWaterCacheKey_Parms), Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "SetupDefaultMaterials", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "SingleBlurStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "SingleJumpStep", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutWaterBodies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutWaterBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::NewProp_InOutWaterBodies_Inner = { "InOutWaterBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::NewProp_InOutWaterBodies = { "InOutWaterBodies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterBrushManager_eventSortWaterBodiesForBrushRender_Parms, InOutWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::NewProp_InOutWaterBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::NewProp_InOutWaterBodies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09\x09Sorts the water bodies in the order they should be rendered when rendering the water brush\n\x09\x09@param InOutWaterBodies : list of water bodies that needs sorting\n\x09*/" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "Sorts the water bodies in the order they should be rendered when rendering the water brush\n@param InOutWaterBodies : list of water bodies that needs sorting" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterBrushManager, nullptr, "SortWaterBodiesForBrushRender", nullptr, nullptr, sizeof(WaterBrushManager_eventSortWaterBodiesForBrushRender_Parms), Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterBrushManager);
	UClass* Z_Construct_UClass_AWaterBrushManager_NoRegister()
	{
		return AWaterBrushManager::StaticClass();
	}
	struct Z_Construct_UClass_AWaterBrushManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCaptureComponent2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFloodComponent2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpFloodComponent2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightmapRTA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeightmapRTB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFloodRTA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpFloodRTA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpFloodRTB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpFloodRTB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DepthAndShapeRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DepthAndShapeRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterDepthAndVelocityRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WaterDepthAndVelocityRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedVelocityAndHeightRTA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombinedVelocityAndHeightRTA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedVelocityAndHeightRTB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CombinedVelocityAndHeightRTB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeRTRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LandscapeRTRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapRTA_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapRTA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapRTB_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapRTB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushAngleFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushAngleFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushWidthFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushWidthFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldCacheMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistanceFieldCacheMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderRiverSplineDepthMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderRiverSplineDepthMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDistanceFieldMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugDistanceFieldMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawCanvasMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawCanvasMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeWaterBodyTextureMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompositeWaterBodyTextureMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandFalloffMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IslandFalloffMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpStepMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpStepMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FindEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlurEdgesMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlurEdgesMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushAngleFalloffMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushAngleFalloffMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushWidthFalloffMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushWidthFalloffMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldCacheMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistanceFieldCacheMID;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RiverSplineMIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiverSplineMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RiverSplineMIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDistanceFieldMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DebugDistanceFieldMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WeightmapMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawCanvasMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawCanvasMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeWaterBodyTextureMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompositeWaterBodyTextureMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IslandFalloffMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IslandFalloffMID;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushCurveRTCache_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrushCurveRTCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushCurveRTCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BrushCurveRTCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeRTRes_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeRTRes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeQuads_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeQuads;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowGradient_MetaData[];
#endif
		static void NewProp_ShowGradient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowGradient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceDivisor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceDivisor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowDistance_MetaData[];
#endif
		static void NewProp_ShowDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowGrid_MetaData[];
#endif
		static void NewProp_ShowGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanvasSegmentSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CanvasSegmentSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterClearHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterClearHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineMeshExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseDynamicPreviewRT_MetaData[];
#endif
		static void NewProp_UseDynamicPreviewRT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseDynamicPreviewRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBrushTextureEffects_MetaData[];
#endif
		static void NewProp_DisableBrushTextureEffects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DisableBrushTextureEffects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsForceUpdate_MetaData[];
#endif
		static void NewProp_bNeedsForceUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsForceUpdate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalizeVelocityHeightMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FinalizeVelocityHeightMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalizeVelocityHeightMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FinalizeVelocityHeightMID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterBrushManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWaterLandscapeBrush,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterBrushManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaterBrushManager_FindEdges, "FindEdges" }, // 3012794112
		{ &Z_Construct_UFunction_AWaterBrushManager_ForceUpdate, "ForceUpdate" }, // 3111198260
		{ &Z_Construct_UFunction_AWaterBrushManager_GetWaterCacheKey, "GetWaterCacheKey" }, // 2890662558
		{ &Z_Construct_UFunction_AWaterBrushManager_SetupDefaultMaterials, "SetupDefaultMaterials" }, // 1891891932
		{ &Z_Construct_UFunction_AWaterBrushManager_SingleBlurStep, "SingleBlurStep" }, // 3268192468
		{ &Z_Construct_UFunction_AWaterBrushManager_SingleJumpStep, "SingleJumpStep" }, // 3832850620
		{ &Z_Construct_UFunction_AWaterBrushManager_SortWaterBodiesForBrushRender, "SortWaterBodiesForBrushRender" }, // 1652321601
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Replication Input LOD Actor Cooking Rendering Replication Input LOD Actor Rendering" },
		{ "IncludePath", "WaterBrushManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SceneCaptureComponent2D_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SceneCaptureComponent2D = { "SceneCaptureComponent2D", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, SceneCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SceneCaptureComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SceneCaptureComponent2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodComponent2D_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodComponent2D = { "JumpFloodComponent2D", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, JumpFloodComponent2D), Z_Construct_UClass_UJumpFloodComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodComponent2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTA_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "Comment", "// RTs\n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "RTs" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTA = { "HeightmapRTA", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, HeightmapRTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTB_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTB = { "HeightmapRTB", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, HeightmapRTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTA_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTA = { "JumpFloodRTA", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, JumpFloodRTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTB_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTB = { "JumpFloodRTB", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, JumpFloodRTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DepthAndShapeRT_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DepthAndShapeRT = { "DepthAndShapeRT", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DepthAndShapeRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DepthAndShapeRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DepthAndShapeRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterDepthAndVelocityRT_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterDepthAndVelocityRT = { "WaterDepthAndVelocityRT", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WaterDepthAndVelocityRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterDepthAndVelocityRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterDepthAndVelocityRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTA_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTA = { "CombinedVelocityAndHeightRTA", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, CombinedVelocityAndHeightRTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTB_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTB = { "CombinedVelocityAndHeightRTB", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, CombinedVelocityAndHeightRTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRef_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRef = { "LandscapeRTRef", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, LandscapeRTRef), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTA_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTA = { "WeightmapRTA", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WeightmapRTA), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTB_MetaData[] = {
		{ "Category", "Render Targets" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTB = { "WeightmapRTB", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WeightmapRTB), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "Comment", "// Brush materials\n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "Brush materials" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMaterial = { "BrushAngleFalloffMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BrushAngleFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMaterial = { "BrushWidthFalloffMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BrushWidthFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMaterial = { "DistanceFieldCacheMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DistanceFieldCacheMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RenderRiverSplineDepthMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RenderRiverSplineDepthMaterial = { "RenderRiverSplineDepthMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, RenderRiverSplineDepthMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RenderRiverSplineDepthMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RenderRiverSplineDepthMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "Comment", "// TODO [jonathan.bard] : rename to DebugDistanceFieldMaterial and make it work : \n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "TODO [jonathan.bard] : rename to DebugDistanceFieldMaterial and make it work :" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMaterial = { "DebugDistanceFieldMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DebugDistanceFieldMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMaterial = { "WeightmapMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WeightmapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMaterial = { "DrawCanvasMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DrawCanvasMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMaterial = { "CompositeWaterBodyTextureMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, CompositeWaterBodyTextureMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMaterial = { "IslandFalloffMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, IslandFalloffMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpStepMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpStepMaterial = { "JumpStepMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, JumpStepMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpStepMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpStepMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FindEdgesMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FindEdgesMaterial = { "FindEdgesMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, FindEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FindEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FindEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BlurEdgesMaterial_MetaData[] = {
		{ "Category", "Brush Materials" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BlurEdgesMaterial = { "BlurEdgesMaterial", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BlurEdgesMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BlurEdgesMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BlurEdgesMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "Comment", "// MIDs\n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "MIDs" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMID = { "BrushAngleFalloffMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BrushAngleFalloffMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMID = { "BrushWidthFalloffMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BrushWidthFalloffMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMID = { "DistanceFieldCacheMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DistanceFieldCacheMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMID_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs_Inner = { "RiverSplineMIDs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs = { "RiverSplineMIDs", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, RiverSplineMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMID = { "DebugDistanceFieldMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DebugDistanceFieldMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMID = { "WeightmapMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WeightmapMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMID = { "DrawCanvasMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DrawCanvasMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMID = { "CompositeWaterBodyTextureMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, CompositeWaterBodyTextureMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMID_MetaData[] = {
		{ "Category", "Debug MIDs" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMID = { "IslandFalloffMID", nullptr, (EPropertyFlags)0x0014040000002805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, IslandFalloffMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMID_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_ValueProp = { "BrushCurveRTCache", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWaterBodyBrushCache, METADATA_PARAMS(nullptr, 0) }; // 2741504481
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_Key_KeyProp = { "BrushCurveRTCache_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// MIDs End\n" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
		{ "ToolTip", "MIDs End" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache = { "BrushCurveRTCache", nullptr, (EPropertyFlags)0x0010000000022005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, BrushCurveRTCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_MetaData)) }; // 2741504481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WorldSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRes_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRes = { "LandscapeRTRes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, LandscapeRTRes), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeQuads_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeQuads = { "LandscapeQuads", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, LandscapeQuads), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeQuads_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeTransform_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeTransform = { "LandscapeTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, LandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->ShowGradient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient = { "ShowGradient", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceDivisor_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceDivisor = { "DistanceDivisor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, DistanceDivisor), METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceDivisor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceDivisor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->ShowDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance = { "ShowDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->ShowGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid = { "ShowGrid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CanvasSegmentSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CanvasSegmentSize = { "CanvasSegmentSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, CanvasSegmentSize), METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CanvasSegmentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CanvasSegmentSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterClearHeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterClearHeight = { "WaterClearHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, WaterClearHeight), METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterClearHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterClearHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SplineMeshExtension_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SplineMeshExtension = { "SplineMeshExtension", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, SplineMeshExtension), METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SplineMeshExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SplineMeshExtension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->UseDynamicPreviewRT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT = { "UseDynamicPreviewRT", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->DisableBrushTextureEffects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects = { "DisableBrushTextureEffects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	void Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate_SetBit(void* Obj)
	{
		((AWaterBrushManager*)Obj)->bNeedsForceUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate = { "bNeedsForceUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AWaterBrushManager), &Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMaterial = { "FinalizeVelocityHeightMaterial", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, FinalizeVelocityHeightMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMID_MetaData[] = {
		{ "ModuleRelativePath", "Private/WaterBrushManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMID = { "FinalizeVelocityHeightMID", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterBrushManager, FinalizeVelocityHeightMID_DEPRECATED), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterBrushManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SceneCaptureComponent2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodComponent2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_HeightmapRTB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpFloodRTB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DepthAndShapeRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterDepthAndVelocityRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CombinedVelocityAndHeightRTB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapRTB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RenderRiverSplineDepthMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_JumpStepMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FindEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BlurEdgesMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushAngleFalloffMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushWidthFalloffMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceFieldCacheMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_RiverSplineMIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DebugDistanceFieldMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WeightmapMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DrawCanvasMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CompositeWaterBodyTextureMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_IslandFalloffMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_BrushCurveRTCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeRTRes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeQuads,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_LandscapeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGradient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DistanceDivisor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_ShowGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_CanvasSegmentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_WaterClearHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_SplineMeshExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_UseDynamicPreviewRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_DisableBrushTextureEffects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_bNeedsForceUpdate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterBrushManager_Statics::NewProp_FinalizeVelocityHeightMID,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterBrushManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterBrushManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterBrushManager_Statics::ClassParams = {
		&AWaterBrushManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaterBrushManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterBrushManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterBrushManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterBrushManager()
	{
		if (!Z_Registration_Info_UClass_AWaterBrushManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterBrushManager.OuterSingleton, Z_Construct_UClass_AWaterBrushManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterBrushManager.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<AWaterBrushManager>()
	{
		return AWaterBrushManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterBrushManager);
	AWaterBrushManager::~AWaterBrushManager() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AWaterBrushManager)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterBrushManager, AWaterBrushManager::StaticClass, TEXT("AWaterBrushManager"), &Z_Registration_Info_UClass_AWaterBrushManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterBrushManager), 502407771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_3196720729(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBrushManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
