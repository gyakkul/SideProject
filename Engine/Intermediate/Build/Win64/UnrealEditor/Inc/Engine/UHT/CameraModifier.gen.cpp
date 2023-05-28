// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UCameraModifier::execEnableModifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableModifier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraModifier::execDisableModifier)
	{
		P_GET_UBOOL(Z_Param_bImmediate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableModifier(Z_Param_bImmediate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraModifier::execGetViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetViewTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraModifier::execIsDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDisabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraModifier::execOnCameraOwnerDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_InOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraOwnerDestroyed(Z_Param_InOwner);
		P_NATIVE_END;
	}
	struct CameraModifier_eventBlueprintModifyCamera_Parms
	{
		float DeltaTime;
		FVector ViewLocation;
		FRotator ViewRotation;
		float FOV;
		FVector NewViewLocation;
		FRotator NewViewRotation;
		float NewFOV;
	};
	struct CameraModifier_eventBlueprintModifyPostProcess_Parms
	{
		float DeltaTime;
		float PostProcessBlendWeight;
		FPostProcessSettings PostProcessSettings;
	};
	static FName NAME_UCameraModifier_BlueprintModifyCamera = FName(TEXT("BlueprintModifyCamera"));
	void UCameraModifier::BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV)
	{
		CameraModifier_eventBlueprintModifyCamera_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.ViewLocation=ViewLocation;
		Parms.ViewRotation=ViewRotation;
		Parms.FOV=FOV;
		Parms.NewViewLocation=NewViewLocation;
		Parms.NewViewRotation=NewViewRotation;
		Parms.NewFOV=NewFOV;
		ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyCamera),&Parms);
		NewViewLocation=Parms.NewViewLocation;
		NewViewRotation=Parms.NewViewRotation;
		NewFOV=Parms.NewFOV;
	}
	static FName NAME_UCameraModifier_BlueprintModifyPostProcess = FName(TEXT("BlueprintModifyPostProcess"));
	void UCameraModifier::BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings)
	{
		CameraModifier_eventBlueprintModifyPostProcess_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		Parms.PostProcessBlendWeight=PostProcessBlendWeight;
		Parms.PostProcessSettings=PostProcessSettings;
		ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyPostProcess),&Parms);
		PostProcessBlendWeight=Parms.PostProcessBlendWeight;
		PostProcessSettings=Parms.PostProcessSettings;
	}
	void UCameraModifier::StaticRegisterNativesUCameraModifier()
	{
		UClass* Class = UCameraModifier::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableModifier", &UCameraModifier::execDisableModifier },
			{ "EnableModifier", &UCameraModifier::execEnableModifier },
			{ "GetViewTarget", &UCameraModifier::execGetViewTarget },
			{ "IsDisabled", &UCameraModifier::execIsDisabled },
			{ "OnCameraOwnerDestroyed", &UCameraModifier::execOnCameraOwnerDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, FOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation = { "NewViewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation = { "NewViewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform. \n\x09 * Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n\x09 * @param\x09""DeltaTime\x09""Change in time since last update\n\x09 * @param\x09ViewLocation\x09\x09The current camera location.\n\x09 * @param\x09ViewRotation\x09\x09The current camera rotation.\n\x09 * @param\x09""FOV\x09\x09\x09\x09\x09The current camera fov.\n\x09 * @param\x09NewViewLocation\x09\x09(out) The modified camera location.\n\x09 * @param\x09NewViewRotation\x09\x09(out) The modified camera rotation.\n\x09 * @param\x09NewFOV\x09\x09\x09\x09(out) The modified camera FOV.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime       Change in time since last update\n@param       ViewLocation            The current camera location.\n@param       ViewRotation            The current camera rotation.\n@param       FOV                                     The current camera fov.\n@param       NewViewLocation         (out) The modified camera location.\n@param       NewViewRotation         (out) The modified camera rotation.\n@param       NewFOV                          (out) The modified camera FOV." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "BlueprintModifyCamera", nullptr, nullptr, sizeof(CameraModifier_eventBlueprintModifyCamera_Parms), Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 1889339962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.\n\x09 * Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n\x09 * @param\x09""DeltaTime\x09\x09\x09\x09""Change in time since last update\n\x09 * @param\x09PostProcessBlendWeight\x09(out) Blend weight applied to the entire postprocess structure.\n\x09 * @param\x09PostProcessSettings\x09\x09(out) Post process structure defining what settings and values to override.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime                               Change in time since last update\n@param       PostProcessBlendWeight  (out) Blend weight applied to the entire postprocess structure.\n@param       PostProcessSettings             (out) Post process structure defining what settings and values to override." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "BlueprintModifyPostProcess", nullptr, nullptr, sizeof(CameraModifier_eventBlueprintModifyPostProcess_Parms), Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics
	{
		struct CameraModifier_eventDisableModifier_Parms
		{
			bool bImmediate;
		};
		static void NewProp_bImmediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit(void* Obj)
	{
		((CameraModifier_eventDisableModifier_Parms*)Obj)->bImmediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraModifier_eventDisableModifier_Parms), &Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** \n\x09 *  Disables this modifier.\n\x09 *  @param  bImmediate  - true to disable with no blend out, false (default) to allow blend out\n\x09 */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Disables this modifier.\n@param  bImmediate  - true to disable with no blend out, false (default) to allow blend out" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "DisableModifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::CameraModifier_eventDisableModifier_Parms), Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_DisableModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Enables this modifier. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Enables this modifier." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "EnableModifier", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_EnableModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics
	{
		struct CameraModifier_eventGetViewTarget_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** @return Returns the actor the camera is currently viewing. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns the actor the camera is currently viewing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "GetViewTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::CameraModifier_eventGetViewTarget_Parms), Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_GetViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics
	{
		struct CameraModifier_eventIsDisabled_Parms
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
	void Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CameraModifier_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraModifier_eventIsDisabled_Parms), &Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** @return Returns true if modifier is disabled, false otherwise. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns true if modifier is disabled, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "IsDisabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::CameraModifier_eventIsDisabled_Parms), Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_IsDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics
	{
		struct CameraModifier_eventOnCameraOwnerDestroyed_Parms
		{
			AActor* InOwner;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraModifier_eventOnCameraOwnerDestroyed_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "OnCameraOwnerDestroyed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::CameraModifier_eventOnCameraOwnerDestroyed_Parms), Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraModifier);
	UClass* Z_Construct_UClass_UCameraModifier_NoRegister()
	{
		return UCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExclusive_MetaData[];
#endif
		static void NewProp_bExclusive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaInTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOutTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaOutTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraModifier_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera, "BlueprintModifyCamera" }, // 492987771
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess, "BlueprintModifyPostProcess" }, // 3035478757
		{ &Z_Construct_UFunction_UCameraModifier_DisableModifier, "DisableModifier" }, // 955886368
		{ &Z_Construct_UFunction_UCameraModifier_EnableModifier, "EnableModifier" }, // 3726055051
		{ &Z_Construct_UFunction_UCameraModifier_GetViewTarget, "GetViewTarget" }, // 2936327114
		{ &Z_Construct_UFunction_UCameraModifier_IsDisabled, "IsDisabled" }, // 1378441024
		{ &Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed, "OnCameraOwnerDestroyed" }, // 4040442355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A CameraModifier is a base class for objects that may adjust the final camera properties after\n * being computed by the APlayerCameraManager (@see ModifyCamera). A CameraModifier\n * can be stateful, and is associated uniquely with a specific APlayerCameraManager.\n */" },
		{ "IncludePath", "Camera/CameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "A CameraModifier is a base class for objects that may adjust the final camera properties after\nbeing computed by the APlayerCameraManager (@see ModifyCamera). A CameraModifier\ncan be stateful, and is associated uniquely with a specific APlayerCameraManager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, enables certain debug visualization features. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, enables certain debug visualization features." },
	};
#endif
	void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UCameraModifier*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** If true, no other modifiers of same priority allowed. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, no other modifiers of same priority allowed." },
	};
#endif
	void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit(void* Obj)
	{
		((UCameraModifier*)Obj)->bExclusive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive = { "bExclusive", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier, Priority), nullptr, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Camera this object is associated with. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Camera this object is associated with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner = { "CameraOwner", nullptr, (EPropertyFlags)0x0024080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier, CameraOwner), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** When blending in, alpha proceeds from 0 to 1 over this time */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending in, alpha proceeds from 0 to 1 over this time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime = { "AlphaInTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier, AlphaInTime), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** When blending out, alpha proceeds from 1 to 0 over this time */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending out, alpha proceeds from 1 to 0 over this time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime = { "AlphaOutTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier, AlphaOutTime), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Current blend alpha. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Current blend alpha." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraModifier, Alpha), METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_Statics::ClassParams = {
		&UCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraModifier()
	{
		if (!Z_Registration_Info_UClass_UCameraModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModifier.OuterSingleton, Z_Construct_UClass_UCameraModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraModifier.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraModifier>()
	{
		return UCameraModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier);
	UCameraModifier::~UCameraModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModifier, UCameraModifier::StaticClass, TEXT("UCameraModifier"), &Z_Registration_Info_UClass_UCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModifier), 4127381667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_2842191078(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
