// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/LandscapeBlueprintBrushBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeBlueprintBrushBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate)
	{
		P_GET_UBOOL(Z_Param_bInUserTriggered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLandscapeUpdate(Z_Param_bInUserTriggered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execInitialize)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLandscapeTransform);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InLandscapeSize);
		P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InLandscapeRenderTargetSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize_Implementation(Z_Param_Out_InLandscapeTransform,Z_Param_Out_InLandscapeSize,Z_Param_Out_InLandscapeRenderTargetSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRender)
	{
		P_GET_UBOOL(Z_Param_InIsHeightmap);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InCombinedResult);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->Render_Implementation(Z_Param_InIsHeightmap,Z_Param_InCombinedResult,Z_Param_Out_InWeightmapLayerName);
		P_NATIVE_END;
	}
	struct LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms
	{
		TArray<UObject*> OutStreamableAssets;
	};
	struct LandscapeBlueprintBrushBase_eventInitialize_Parms
	{
		FTransform InLandscapeTransform;
		FIntPoint InLandscapeSize;
		FIntPoint InLandscapeRenderTargetSize;
	};
	struct LandscapeBlueprintBrushBase_eventRender_Parms
	{
		bool InIsHeightmap;
		UTextureRenderTarget2D* InCombinedResult;
		FName InWeightmapLayerName;
		UTextureRenderTarget2D* ReturnValue;

		/** Constructor, initializes return property only **/
		LandscapeBlueprintBrushBase_eventRender_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies = FName(TEXT("GetBlueprintRenderDependencies"));
	void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets)
	{
		LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms Parms;
		Parms.OutStreamableAssets=OutStreamableAssets;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies),&Parms);
		OutStreamableAssets=Parms.OutStreamableAssets;
	}
	static FName NAME_ALandscapeBlueprintBrushBase_Initialize = FName(TEXT("Initialize"));
	void ALandscapeBlueprintBrushBase::Initialize(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize)
	{
		LandscapeBlueprintBrushBase_eventInitialize_Parms Parms;
		Parms.InLandscapeTransform=InLandscapeTransform;
		Parms.InLandscapeSize=InLandscapeSize;
		Parms.InLandscapeRenderTargetSize=InLandscapeRenderTargetSize;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Initialize),&Parms);
	}
	static FName NAME_ALandscapeBlueprintBrushBase_Render = FName(TEXT("Render"));
	UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName)
	{
		LandscapeBlueprintBrushBase_eventRender_Parms Parms;
		Parms.InIsHeightmap=InIsHeightmap ? true : false;
		Parms.InCombinedResult=InCombinedResult;
		Parms.InWeightmapLayerName=InWeightmapLayerName;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Render),&Parms);
		return Parms.ReturnValue;
	}
	void ALandscapeBlueprintBrushBase::StaticRegisterNativesALandscapeBlueprintBrushBase()
	{
		UClass* Class = ALandscapeBlueprintBrushBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Initialize", &ALandscapeBlueprintBrushBase::execInitialize },
			{ "Render", &ALandscapeBlueprintBrushBase::execRender },
			{ "RequestLandscapeUpdate", &ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutStreamableAssets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutStreamableAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms, OutStreamableAssets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "GetBlueprintRenderDependencies", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeRenderTargetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeRenderTargetSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform = { "InLandscapeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize = { "InLandscapeSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize = { "InLandscapeRenderTargetSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeRenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Initialize", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventInitialize_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics
	{
		static void NewProp_InIsHeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsHeightmap;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCombinedResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit(void* Obj)
	{
		((LandscapeBlueprintBrushBase_eventRender_Parms*)Obj)->InIsHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap = { "InIsHeightmap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult = { "InCombinedResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InCombinedResult), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Render", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics
	{
		struct LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms
		{
			bool bInUserTriggered;
		};
		static void NewProp_bInUserTriggered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUserTriggered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered_SetBit(void* Obj)
	{
		((LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms*)Obj)->bInUserTriggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered = { "bInUserTriggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms), &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "CPP_Default_bInUserTriggered", "false" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "RequestLandscapeUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeBlueprintBrushBase);
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister()
	{
		return ALandscapeBlueprintBrushBase::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningLandscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateOnPropertyChange_MetaData[];
#endif
		static void NewProp_UpdateOnPropertyChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateOnPropertyChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectHeightmap_MetaData[];
#endif
		static void NewProp_AffectHeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectHeightmap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectWeightmap_MetaData[];
#endif
		static void NewProp_AffectWeightmap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectWeightmap;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AffectedWeightmapLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedWeightmapLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedWeightmapLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies, "GetBlueprintRenderDependencies" }, // 1318659061
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize, "Initialize" }, // 2320095454
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render, "Render" }, // 176037969
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate, "RequestLandscapeUpdate" }, // 3979025841
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeBlueprintBrushBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape = { "OwningLandscape", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, OwningLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->UpdateOnPropertyChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange = { "UpdateOnPropertyChange", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->AffectHeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap = { "AffectHeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->AffectWeightmap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap = { "AffectWeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, AffectedWeightmapLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintBrushBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams = {
		&ALandscapeBlueprintBrushBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers), 0),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase()
	{
		if (!Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton, Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeBlueprintBrushBase>()
	{
		return ALandscapeBlueprintBrushBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintBrushBase);
	ALandscapeBlueprintBrushBase::~ALandscapeBlueprintBrushBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeBlueprintBrushBase, ALandscapeBlueprintBrushBase::StaticClass, TEXT("ALandscapeBlueprintBrushBase"), &Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeBlueprintBrushBase), 2445061323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_2110317778(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
