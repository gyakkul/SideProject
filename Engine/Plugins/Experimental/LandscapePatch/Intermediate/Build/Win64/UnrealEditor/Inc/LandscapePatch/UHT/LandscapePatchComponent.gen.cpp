// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapePatchComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapePatchComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ALandscapePatchManager_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapePatchComponent_NoRegister();
	LANDSCAPEPATCH_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	DEFINE_FUNCTION(ULandscapePatchComponent::execMoveToTop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveToTop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execGetPatchManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALandscapePatchManager**)Z_Param__Result=P_THIS->GetPatchManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execSetPatchManager)
	{
		P_GET_OBJECT(ALandscapePatchManager,Z_Param_NewPatchManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPatchManager(Z_Param_NewPatchManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execSetLandscape)
	{
		P_GET_OBJECT(ALandscape,Z_Param_NewLandscape);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLandscape(Z_Param_NewLandscape);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execGetLandscapeHeightmapCoordsToWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLandscapeHeightmapCoordsToWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabledIn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled(Z_Param_bEnabledIn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULandscapePatchComponent::execRequestLandscapeUpdate)
	{
		P_GET_UBOOL(Z_Param_bInUserTriggeredUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLandscapeUpdate(Z_Param_bInUserTriggeredUpdate);
		P_NATIVE_END;
	}
	void ULandscapePatchComponent::StaticRegisterNativesULandscapePatchComponent()
	{
		UClass* Class = ULandscapePatchComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLandscapeHeightmapCoordsToWorld", &ULandscapePatchComponent::execGetLandscapeHeightmapCoordsToWorld },
			{ "GetPatchManager", &ULandscapePatchComponent::execGetPatchManager },
			{ "IsEnabled", &ULandscapePatchComponent::execIsEnabled },
			{ "MoveToTop", &ULandscapePatchComponent::execMoveToTop },
			{ "RequestLandscapeUpdate", &ULandscapePatchComponent::execRequestLandscapeUpdate },
			{ "SetIsEnabled", &ULandscapePatchComponent::execSetIsEnabled },
			{ "SetLandscape", &ULandscapePatchComponent::execSetLandscape },
			{ "SetPatchManager", &ULandscapePatchComponent::execSetPatchManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics
	{
		struct LandscapePatchComponent_eventGetLandscapeHeightmapCoordsToWorld_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapePatchComponent_eventGetLandscapeHeightmapCoordsToWorld_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "GetLandscapeHeightmapCoordsToWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::LandscapePatchComponent_eventGetLandscapeHeightmapCoordsToWorld_Parms), Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics
	{
		struct LandscapePatchComponent_eventGetPatchManager_Parms
		{
			ALandscapePatchManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapePatchComponent_eventGetPatchManager_Parms, ReturnValue), Z_Construct_UClass_ALandscapePatchManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "GetPatchManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::LandscapePatchComponent_eventGetPatchManager_Parms), Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics
	{
		struct LandscapePatchComponent_eventIsEnabled_Parms
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
	void Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LandscapePatchComponent_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapePatchComponent_eventIsEnabled_Parms), &Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * @return false if the patch is marked as disabled and therefore can't affect the landscape.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "@return false if the patch is marked as disabled and therefore can't affect the landscape." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "IsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::LandscapePatchComponent_eventIsEnabled_Parms), Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Initialization" },
		{ "Comment", "/**\n\x09 * Move the patch to be the last processed patch in the current patch manager. This is a way to\n\x09 * reorder patches relative to each other.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Move the patch to be the last processed patch in the current patch manager. This is a way to\nreorder patches relative to each other." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "MoveToTop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics
	{
		struct LandscapePatchComponent_eventRequestLandscapeUpdate_Parms
		{
			bool bInUserTriggeredUpdate;
		};
		static void NewProp_bInUserTriggeredUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUserTriggeredUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggeredUpdate_SetBit(void* Obj)
	{
		((LandscapePatchComponent_eventRequestLandscapeUpdate_Parms*)Obj)->bInUserTriggeredUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggeredUpdate = { "bInUserTriggeredUpdate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapePatchComponent_eventRequestLandscapeUpdate_Parms), &Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggeredUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggeredUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "CPP_Default_bInUserTriggeredUpdate", "false" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "RequestLandscapeUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::LandscapePatchComponent_eventRequestLandscapeUpdate_Parms), Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics
	{
		struct LandscapePatchComponent_eventSetIsEnabled_Parms
		{
			bool bEnabledIn;
		};
		static void NewProp_bEnabledIn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledIn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::NewProp_bEnabledIn_SetBit(void* Obj)
	{
		((LandscapePatchComponent_eventSetIsEnabled_Parms*)Obj)->bEnabledIn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::NewProp_bEnabledIn = { "bEnabledIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LandscapePatchComponent_eventSetIsEnabled_Parms), &Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::NewProp_bEnabledIn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::NewProp_bEnabledIn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "Comment", "/**\n\x09 * Allows the patch to be disabled, so that it no longer affects the landscape. This can be useful\n\x09 * when deleting the patch is undesirable, usually when the disabling is temporary.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Allows the patch to be disabled, so that it no longer affects the landscape. This can be useful\nwhen deleting the patch is undesirable, usually when the disabling is temporary." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::LandscapePatchComponent_eventSetIsEnabled_Parms), Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics
	{
		struct LandscapePatchComponent_eventSetLandscape_Parms
		{
			ALandscape* NewLandscape;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLandscape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::NewProp_NewLandscape = { "NewLandscape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapePatchComponent_eventSetLandscape_Parms, NewLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::NewProp_NewLandscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "SetLandscape", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::LandscapePatchComponent_eventSetLandscape_Parms), Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics
	{
		struct LandscapePatchComponent_eventSetPatchManager_Parms
		{
			ALandscapePatchManager* NewPatchManager;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPatchManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::NewProp_NewPatchManager = { "NewPatchManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LandscapePatchComponent_eventSetPatchManager_Parms, NewPatchManager), Z_Construct_UClass_ALandscapePatchManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::NewProp_NewPatchManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "LandscapePatch" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapePatchComponent, nullptr, "SetPatchManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::LandscapePatchComponent_eventSetPatchManager_Parms), Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapePatchComponent);
	UClass* Z_Construct_UClass_ULandscapePatchComponent_NoRegister()
	{
		return ULandscapePatchComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapePatchComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatchManager_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PatchManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropertiesCopiedIndicator_MetaData[];
#endif
		static void NewProp_bPropertiesCopiedIndicator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropertiesCopiedIndicator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPatchManager_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviousPatchManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapePatchComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapePatchComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld, "GetLandscapeHeightmapCoordsToWorld" }, // 1071098344
		{ &Z_Construct_UFunction_ULandscapePatchComponent_GetPatchManager, "GetPatchManager" }, // 3439958826
		{ &Z_Construct_UFunction_ULandscapePatchComponent_IsEnabled, "IsEnabled" }, // 3539588653
		{ &Z_Construct_UFunction_ULandscapePatchComponent_MoveToTop, "MoveToTop" }, // 2032262403
		{ &Z_Construct_UFunction_ULandscapePatchComponent_RequestLandscapeUpdate, "RequestLandscapeUpdate" }, // 2465118413
		{ &Z_Construct_UFunction_ULandscapePatchComponent_SetIsEnabled, "SetIsEnabled" }, // 3688511601
		{ &Z_Construct_UFunction_ULandscapePatchComponent_SetLandscape, "SetLandscape" }, // 3483892201
		{ &Z_Construct_UFunction_ULandscapePatchComponent_SetPatchManager, "SetPatchManager" }, // 4016495227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for landscape patches: components that can be attached to meshes and moved around to make\n * the meshes affect the landscape around themselves.\n *///~ TODO: Although this doesn't generate geometry, we are likely to change this to inherit from UPrimitiveComponent\n//~ so that we can use render proxies for passing along data to the render thread or perhaps for visualization.\n" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "LandscapePatchComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for landscape patches: components that can be attached to meshes and moved around to make\nthe meshes affect the landscape around themselves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_Landscape_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapePatchComponent, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PatchManager_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PatchManager = { "PatchManager", nullptr, (EPropertyFlags)0x00240c0000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapePatchComponent, PatchManager), Z_Construct_UClass_ALandscapePatchManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PatchManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PatchManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09 * When false, patch does not affect the landscape. Useful for temporarily disabling the patch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "When false, patch does not affect the landscape. Useful for temporarily disabling the patch." },
	};
#endif
	void Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((ULandscapePatchComponent*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapePatchComponent), &Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator_MetaData[] = {
		{ "Comment", "// Starts as false and gets set to true in construction, so gets used to set bWasCopy\n// by checking the indicator value at the start of construction.\n" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Starts as false and gets set to true in construction, so gets used to set bWasCopy\nby checking the indicator value at the start of construction." },
	};
#endif
	void Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator_SetBit(void* Obj)
	{
		((ULandscapePatchComponent*)Obj)->bPropertiesCopiedIndicator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator = { "bPropertiesCopiedIndicator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapePatchComponent), &Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PreviousPatchManager_MetaData[] = {
		{ "Comment", "// Used to properly transition to a different manager when editing it via the detail panel.\n" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Used to properly transition to a different manager when editing it via the detail panel." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PreviousPatchManager = { "PreviousPatchManager", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapePatchComponent, PreviousPatchManager), Z_Construct_UClass_ALandscapePatchManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PreviousPatchManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PreviousPatchManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapePatchComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PatchManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_bPropertiesCopiedIndicator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapePatchComponent_Statics::NewProp_PreviousPatchManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapePatchComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapePatchComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapePatchComponent_Statics::ClassParams = {
		&ULandscapePatchComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapePatchComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapePatchComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapePatchComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapePatchComponent()
	{
		if (!Z_Registration_Info_UClass_ULandscapePatchComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapePatchComponent.OuterSingleton, Z_Construct_UClass_ULandscapePatchComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapePatchComponent.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapePatchComponent>()
	{
		return ULandscapePatchComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapePatchComponent);
	ULandscapePatchComponent::~ULandscapePatchComponent() {}

static_assert(std::is_polymorphic<FLandscapePatchComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FLandscapePatchComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData;
class UScriptStruct* FLandscapePatchComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_LandscapePatch(), TEXT("LandscapePatchComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.OuterSingleton;
}
template<> LANDSCAPEPATCH_API UScriptStruct* StaticStruct<FLandscapePatchComponentInstanceData>()
{
	return FLandscapePatchComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexInManager_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexInManager;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGaveMissingPatchManagerWarning_MetaData[];
#endif
		static void NewProp_bGaveMissingPatchManagerWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGaveMissingPatchManagerWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGaveNotInPatchManagerWarning_MetaData[];
#endif
		static void NewProp_bGaveNotInPatchManagerWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGaveNotInPatchManagerWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGaveMissingLandscapeWarning_MetaData[];
#endif
		static void NewProp_bGaveMissingLandscapeWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGaveMissingLandscapeWarning;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store some extra data during RerunConstructionScripts, namely the component's position in the patch manager. */" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Used to store some extra data during RerunConstructionScripts, namely the component's position in the patch manager." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapePatchComponentInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_IndexInManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_IndexInManager = { "IndexInManager", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLandscapePatchComponentInstanceData, IndexInManager), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_IndexInManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_IndexInManager_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning_MetaData[] = {
		{ "Comment", "// Used so that we don't spam warning messages while rerunning construction scripts on a patch\n// that triggers one of the warnings.\n" },
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
		{ "ToolTip", "Used so that we don't spam warning messages while rerunning construction scripts on a patch\nthat triggers one of the warnings." },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning_SetBit(void* Obj)
	{
		((FLandscapePatchComponentInstanceData*)Obj)->bGaveMissingPatchManagerWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning = { "bGaveMissingPatchManagerWarning", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandscapePatchComponentInstanceData), &Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning_SetBit(void* Obj)
	{
		((FLandscapePatchComponentInstanceData*)Obj)->bGaveNotInPatchManagerWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning = { "bGaveNotInPatchManagerWarning", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandscapePatchComponentInstanceData), &Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapePatchComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning_SetBit(void* Obj)
	{
		((FLandscapePatchComponentInstanceData*)Obj)->bGaveMissingLandscapeWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning = { "bGaveMissingLandscapeWarning", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLandscapePatchComponentInstanceData), &Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_IndexInManager,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingPatchManagerWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveNotInPatchManagerWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewProp_bGaveMissingLandscapeWarning,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"LandscapePatchComponentInstanceData",
		sizeof(FLandscapePatchComponentInstanceData),
		alignof(FLandscapePatchComponentInstanceData),
		Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ScriptStructInfo[] = {
		{ FLandscapePatchComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FLandscapePatchComponentInstanceData_Statics::NewStructOps, TEXT("LandscapePatchComponentInstanceData"), &Z_Registration_Info_UScriptStruct_LandscapePatchComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapePatchComponentInstanceData), 2559891404U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapePatchComponent, ULandscapePatchComponent::StaticClass, TEXT("ULandscapePatchComponent"), &Z_Registration_Info_UClass_ULandscapePatchComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapePatchComponent), 1656127231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_1966110847(TEXT("/Script/LandscapePatch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapePatchComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
