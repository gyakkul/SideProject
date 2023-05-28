// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterLandscapeBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterLandscapeBrush() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LANDSCAPEEDITORUTILITIES_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrush();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATER_API UClass* Z_Construct_UClass_AWaterBody_NoRegister();
	WATER_API UClass* Z_Construct_UClass_AWaterBodyIsland_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBrushActorInterface_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_AWaterLandscapeBrush();
	WATEREDITOR_API UClass* Z_Construct_UClass_AWaterLandscapeBrush_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWaterLandscapeBrush::execForceWaterTextureUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceWaterTextureUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execBlueprintOnRenderTargetTexturesUpdated)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_VelocityTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintOnRenderTargetTexturesUpdated_Implementation(Z_Param_VelocityTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execBlueprintGetRenderTargets)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InHeightRenderTarget);
		P_GET_OBJECT_REF(UTextureRenderTarget2D,Z_Param_Out_OutVelocityRenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintGetRenderTargets_Implementation(Z_Param_InHeightRenderTarget,Z_Param_Out_OutVelocityRenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execClearActorCache)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActorCache(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execGetActorCache)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(UClass,Z_Param_CacheClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetActorCache(Z_Param_InActor,Z_Param_CacheClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execSetActorCache)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(UObject,Z_Param_InCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorCache(Z_Param_InActor,Z_Param_InCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execClearWaterBodyCache)
	{
		P_GET_OBJECT(AWaterBody,Z_Param_WaterBody);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWaterBodyCache(Z_Param_WaterBody);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execGetWaterBodyCache)
	{
		P_GET_OBJECT(AWaterBody,Z_Param_WaterBody);
		P_GET_OBJECT(UClass,Z_Param_CacheClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetWaterBodyCache(Z_Param_WaterBody,Z_Param_CacheClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execSetWaterBodyCache)
	{
		P_GET_OBJECT(AWaterBody,Z_Param_WaterBody);
		P_GET_OBJECT(UObject,Z_Param_InCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaterBodyCache(Z_Param_WaterBody,Z_Param_InCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execBlueprintWaterBodyChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintWaterBodyChanged_Implementation(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execBlueprintWaterBodiesChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BlueprintWaterBodiesChanged_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execGetActorsAffectingLandscape)
	{
		P_GET_TARRAY_REF(TScriptInterface<IWaterBrushActorInterface>,Z_Param_Out_OutWaterBrushActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorsAffectingLandscape(Z_Param_Out_OutWaterBrushActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execGetWaterBodyIslands)
	{
		P_GET_OBJECT(UClass,Z_Param_WaterBodyIslandClass);
		P_GET_TARRAY_REF(AWaterBodyIsland*,Z_Param_Out_OutWaterBodyIslands);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaterBodyIslands(Z_Param_WaterBodyIslandClass,Z_Param_Out_OutWaterBodyIslands);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaterLandscapeBrush::execGetWaterBodies)
	{
		P_GET_OBJECT(UClass,Z_Param_WaterBodyClass);
		P_GET_TARRAY_REF(AWaterBody*,Z_Param_Out_OutWaterBodies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWaterBodies(Z_Param_WaterBodyClass,Z_Param_Out_OutWaterBodies);
		P_NATIVE_END;
	}
	struct WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms
	{
		UTextureRenderTarget2D* InHeightRenderTarget;
		UTextureRenderTarget2D* OutVelocityRenderTarget;
	};
	struct WaterLandscapeBrush_eventBlueprintOnRenderTargetTexturesUpdated_Parms
	{
		UTexture2D* VelocityTexture;
	};
	struct WaterLandscapeBrush_eventBlueprintWaterBodyChanged_Parms
	{
		AActor* Actor;
	};
	static FName NAME_AWaterLandscapeBrush_BlueprintGetRenderTargets = FName(TEXT("BlueprintGetRenderTargets"));
	void AWaterLandscapeBrush::BlueprintGetRenderTargets(UTextureRenderTarget2D* InHeightRenderTarget, UTextureRenderTarget2D*& OutVelocityRenderTarget)
	{
		WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms Parms;
		Parms.InHeightRenderTarget=InHeightRenderTarget;
		Parms.OutVelocityRenderTarget=OutVelocityRenderTarget;
		ProcessEvent(FindFunctionChecked(NAME_AWaterLandscapeBrush_BlueprintGetRenderTargets),&Parms);
		OutVelocityRenderTarget=Parms.OutVelocityRenderTarget;
	}
	static FName NAME_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated = FName(TEXT("BlueprintOnRenderTargetTexturesUpdated"));
	void AWaterLandscapeBrush::BlueprintOnRenderTargetTexturesUpdated(UTexture2D* VelocityTexture)
	{
		WaterLandscapeBrush_eventBlueprintOnRenderTargetTexturesUpdated_Parms Parms;
		Parms.VelocityTexture=VelocityTexture;
		ProcessEvent(FindFunctionChecked(NAME_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated),&Parms);
	}
	static FName NAME_AWaterLandscapeBrush_BlueprintWaterBodiesChanged = FName(TEXT("BlueprintWaterBodiesChanged"));
	void AWaterLandscapeBrush::BlueprintWaterBodiesChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWaterLandscapeBrush_BlueprintWaterBodiesChanged),NULL);
	}
	static FName NAME_AWaterLandscapeBrush_BlueprintWaterBodyChanged = FName(TEXT("BlueprintWaterBodyChanged"));
	void AWaterLandscapeBrush::BlueprintWaterBodyChanged(AActor* Actor)
	{
		WaterLandscapeBrush_eventBlueprintWaterBodyChanged_Parms Parms;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_AWaterLandscapeBrush_BlueprintWaterBodyChanged),&Parms);
	}
	void AWaterLandscapeBrush::StaticRegisterNativesAWaterLandscapeBrush()
	{
		UClass* Class = AWaterLandscapeBrush::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueprintGetRenderTargets", &AWaterLandscapeBrush::execBlueprintGetRenderTargets },
			{ "BlueprintOnRenderTargetTexturesUpdated", &AWaterLandscapeBrush::execBlueprintOnRenderTargetTexturesUpdated },
			{ "BlueprintWaterBodiesChanged", &AWaterLandscapeBrush::execBlueprintWaterBodiesChanged },
			{ "BlueprintWaterBodyChanged", &AWaterLandscapeBrush::execBlueprintWaterBodyChanged },
			{ "ClearActorCache", &AWaterLandscapeBrush::execClearActorCache },
			{ "ClearWaterBodyCache", &AWaterLandscapeBrush::execClearWaterBodyCache },
			{ "ForceWaterTextureUpdate", &AWaterLandscapeBrush::execForceWaterTextureUpdate },
			{ "GetActorCache", &AWaterLandscapeBrush::execGetActorCache },
			{ "GetActorsAffectingLandscape", &AWaterLandscapeBrush::execGetActorsAffectingLandscape },
			{ "GetWaterBodies", &AWaterLandscapeBrush::execGetWaterBodies },
			{ "GetWaterBodyCache", &AWaterLandscapeBrush::execGetWaterBodyCache },
			{ "GetWaterBodyIslands", &AWaterLandscapeBrush::execGetWaterBodyIslands },
			{ "SetActorCache", &AWaterLandscapeBrush::execSetActorCache },
			{ "SetWaterBodyCache", &AWaterLandscapeBrush::execSetWaterBodyCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InHeightRenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVelocityRenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::NewProp_InHeightRenderTarget = { "InHeightRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms, InHeightRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::NewProp_OutVelocityRenderTarget = { "OutVelocityRenderTarget", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms, OutVelocityRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::NewProp_InHeightRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::NewProp_OutVelocityRenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This event isn't called anymore, the WaterVelocityTexture is now regenerated at runtime (WaterInfoTexture in AWaterZone)." },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "BlueprintGetRenderTargets", nullptr, nullptr, sizeof(WaterLandscapeBrush_eventBlueprintGetRenderTargets_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VelocityTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::NewProp_VelocityTexture = { "VelocityTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventBlueprintOnRenderTargetTexturesUpdated_Parms, VelocityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::NewProp_VelocityTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This event isn't called anymore, the WaterVelocityTexture is now regenerated at runtime (WaterInfoTexture in AWaterZone)." },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "BlueprintOnRenderTargetTexturesUpdated", nullptr, nullptr, sizeof(WaterLandscapeBrush_eventBlueprintOnRenderTargetTexturesUpdated_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "BlueprintWaterBodiesChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventBlueprintWaterBodyChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "BlueprintWaterBodyChanged", nullptr, nullptr, sizeof(WaterLandscapeBrush_eventBlueprintWaterBodyChanged_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics
	{
		struct WaterLandscapeBrush_eventClearActorCache_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventClearActorCache_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "ClearActorCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::WaterLandscapeBrush_eventClearActorCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics
	{
		struct WaterLandscapeBrush_eventClearWaterBodyCache_Parms
		{
			AWaterBody* WaterBody;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBody;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::NewProp_WaterBody = { "WaterBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventClearWaterBodyCache_Parms, WaterBody), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::NewProp_WaterBody,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use ClearActorCache instead" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "ClearWaterBodyCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::WaterLandscapeBrush_eventClearWaterBodyCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now useless, the WaterVelocityTexture is now regenerated at runtime (WaterInfoTexture in AWaterZone)." },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "ForceWaterTextureUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics
	{
		struct WaterLandscapeBrush_eventGetActorCache_Parms
		{
			AActor* InActor;
			TSubclassOf<UObject>  CacheClass;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CacheClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetActorCache_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_CacheClass = { "CacheClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetActorCache_Parms, CacheClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetActorCache_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_CacheClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "DeterminesOutputType", "CacheClass" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "GetActorCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::WaterLandscapeBrush_eventGetActorCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics
	{
		struct WaterLandscapeBrush_eventGetActorsAffectingLandscape_Parms
		{
			TArray<TScriptInterface<IWaterBrushActorInterface> > OutWaterBrushActors;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutWaterBrushActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWaterBrushActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::NewProp_OutWaterBrushActors_Inner = { "OutWaterBrushActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaterBrushActorInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::NewProp_OutWaterBrushActors = { "OutWaterBrushActors", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetActorsAffectingLandscape_Parms, OutWaterBrushActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::NewProp_OutWaterBrushActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::NewProp_OutWaterBrushActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "GetActorsAffectingLandscape", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::WaterLandscapeBrush_eventGetActorsAffectingLandscape_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics
	{
		struct WaterLandscapeBrush_eventGetWaterBodies_Parms
		{
			TSubclassOf<AWaterBody>  WaterBodyClass;
			TArray<AWaterBody*> OutWaterBodies;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutWaterBodies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWaterBodies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_WaterBodyClass = { "WaterBodyClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodies_Parms, WaterBodyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_OutWaterBodies_Inner = { "OutWaterBodies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_OutWaterBodies = { "OutWaterBodies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodies_Parms, OutWaterBodies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_WaterBodyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_OutWaterBodies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::NewProp_OutWaterBodies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DeterminesOutputType", "WaterBodyClass" },
		{ "DynamicOutputParam", "OutWaterBodies" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "GetWaterBodies", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::WaterLandscapeBrush_eventGetWaterBodies_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics
	{
		struct WaterLandscapeBrush_eventGetWaterBodyCache_Parms
		{
			AWaterBody* WaterBody;
			TSubclassOf<UObject>  CacheClass;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBody;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CacheClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_WaterBody = { "WaterBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodyCache_Parms, WaterBody), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_CacheClass = { "CacheClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodyCache_Parms, CacheClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodyCache_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_WaterBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_CacheClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetActorCache instead" },
		{ "DeterminesOutputType", "CacheClass" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "GetWaterBodyCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::WaterLandscapeBrush_eventGetWaterBodyCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics
	{
		struct WaterLandscapeBrush_eventGetWaterBodyIslands_Parms
		{
			TSubclassOf<AWaterBodyIsland>  WaterBodyIslandClass;
			TArray<AWaterBodyIsland*> OutWaterBodyIslands;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyIslandClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutWaterBodyIslands_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWaterBodyIslands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_WaterBodyIslandClass = { "WaterBodyIslandClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodyIslands_Parms, WaterBodyIslandClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_OutWaterBodyIslands_Inner = { "OutWaterBodyIslands", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AWaterBodyIsland_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_OutWaterBodyIslands = { "OutWaterBodyIslands", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventGetWaterBodyIslands_Parms, OutWaterBodyIslands), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_WaterBodyIslandClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_OutWaterBodyIslands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::NewProp_OutWaterBodyIslands,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::Function_MetaDataParams[] = {
		{ "Category", "Water" },
		{ "DeterminesOutputType", "WaterBodyIslandClass" },
		{ "DynamicOutputParam", "OutWaterBodyIslands" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "GetWaterBodyIslands", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::WaterLandscapeBrush_eventGetWaterBodyIslands_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics
	{
		struct WaterLandscapeBrush_eventSetActorCache_Parms
		{
			AActor* InActor;
			UObject* InCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventSetActorCache_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::NewProp_InCache = { "InCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventSetActorCache_Parms, InCache), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::NewProp_InActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::NewProp_InCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "SetActorCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::WaterLandscapeBrush_eventSetActorCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics
	{
		struct WaterLandscapeBrush_eventSetWaterBodyCache_Parms
		{
			AWaterBody* WaterBody;
			UObject* InCache;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaterBody;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::NewProp_WaterBody = { "WaterBody", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventSetWaterBodyCache_Parms, WaterBody), Z_Construct_UClass_AWaterBody_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::NewProp_InCache = { "InCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WaterLandscapeBrush_eventSetWaterBodyCache_Parms, InCache), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::NewProp_WaterBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::NewProp_InCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cache" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetActorCache instead" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaterLandscapeBrush, nullptr, "SetWaterBodyCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::WaterLandscapeBrush_eventSetWaterBodyCache_Parms), Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaterLandscapeBrush);
	UClass* Z_Construct_UClass_AWaterLandscapeBrush_NoRegister()
	{
		return AWaterLandscapeBrush::StaticClass();
	}
	struct Z_Construct_UClass_AWaterLandscapeBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIcon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorIcon;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Cache_ValueProp;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Cache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Cache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaterLandscapeBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeBlueprintBrush,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaterLandscapeBrush_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintGetRenderTargets, "BlueprintGetRenderTargets" }, // 802519098
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintOnRenderTargetTexturesUpdated, "BlueprintOnRenderTargetTexturesUpdated" }, // 58820921
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodiesChanged, "BlueprintWaterBodiesChanged" }, // 1929759378
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_BlueprintWaterBodyChanged, "BlueprintWaterBodyChanged" }, // 849199526
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_ClearActorCache, "ClearActorCache" }, // 3360307368
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_ClearWaterBodyCache, "ClearWaterBodyCache" }, // 1335288645
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_ForceWaterTextureUpdate, "ForceWaterTextureUpdate" }, // 3142659154
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_GetActorCache, "GetActorCache" }, // 1530980558
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_GetActorsAffectingLandscape, "GetActorsAffectingLandscape" }, // 3098260935
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodies, "GetWaterBodies" }, // 879276692
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyCache, "GetWaterBodyCache" }, // 2128672711
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_GetWaterBodyIslands, "GetWaterBodyIslands" }, // 1593290944
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_SetActorCache, "SetActorCache" }, // 4038183388
		{ &Z_Construct_UFunction_AWaterLandscapeBrush_SetWaterBodyCache, "SetWaterBodyCache" }, // 4129236146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLandscapeBrush_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Collision Replication Input LOD Actor Cooking Rendering Replication Input LOD Actor Rendering" },
		{ "IncludePath", "WaterLandscapeBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_ActorIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_ActorIcon = { "ActorIcon", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterLandscapeBrush, ActorIcon), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_ActorIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_ActorIcon_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_ValueProp = { "Cache", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_Key_KeyProp = { "Cache_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Private/WaterLandscapeBrush.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0044040000222001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaterLandscapeBrush, Cache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaterLandscapeBrush_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_ActorIcon,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaterLandscapeBrush_Statics::NewProp_Cache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaterLandscapeBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaterLandscapeBrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaterLandscapeBrush_Statics::ClassParams = {
		&AWaterLandscapeBrush::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaterLandscapeBrush_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLandscapeBrush_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaterLandscapeBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaterLandscapeBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaterLandscapeBrush()
	{
		if (!Z_Registration_Info_UClass_AWaterLandscapeBrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaterLandscapeBrush.OuterSingleton, Z_Construct_UClass_AWaterLandscapeBrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaterLandscapeBrush.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<AWaterLandscapeBrush>()
	{
		return AWaterLandscapeBrush::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaterLandscapeBrush);
	AWaterLandscapeBrush::~AWaterLandscapeBrush() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaterLandscapeBrush, AWaterLandscapeBrush::StaticClass, TEXT("AWaterLandscapeBrush"), &Z_Registration_Info_UClass_AWaterLandscapeBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaterLandscapeBrush), 983943650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_1154687603(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterLandscapeBrush_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
