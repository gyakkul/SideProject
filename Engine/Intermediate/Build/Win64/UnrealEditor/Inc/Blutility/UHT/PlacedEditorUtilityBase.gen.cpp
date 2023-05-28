// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlacedEditorUtilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacedEditorUtilityBase() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase();
	BLUTILITY_API UClass* Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execGetActorReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execSetActorSelectionState)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bShouldBeSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execSelectNothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNothing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execClearActorSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActorSelectionSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execSetLevelViewportCameraInfo)
	{
		P_GET_STRUCT(FVector,Z_Param_CameraLocation);
		P_GET_STRUCT(FRotator,Z_Param_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelViewportCameraInfo(Z_Param_CameraLocation,Z_Param_CameraRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execGetLevelViewportCameraInfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_CameraLocation);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLevelViewportCameraInfo(Z_Param_Out_CameraLocation,Z_Param_Out_CameraRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADEPRECATED_PlacedEditorUtilityBase::execGetSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet();
		P_NATIVE_END;
	}
	void ADEPRECATED_PlacedEditorUtilityBase::StaticRegisterNativesADEPRECATED_PlacedEditorUtilityBase()
	{
		UClass* Class = ADEPRECATED_PlacedEditorUtilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActorSelectionSet", &ADEPRECATED_PlacedEditorUtilityBase::execClearActorSelectionSet },
			{ "GetActorReference", &ADEPRECATED_PlacedEditorUtilityBase::execGetActorReference },
			{ "GetLevelViewportCameraInfo", &ADEPRECATED_PlacedEditorUtilityBase::execGetLevelViewportCameraInfo },
			{ "GetSelectionSet", &ADEPRECATED_PlacedEditorUtilityBase::execGetSelectionSet },
			{ "SelectNothing", &ADEPRECATED_PlacedEditorUtilityBase::execSelectNothing },
			{ "SetActorSelectionState", &ADEPRECATED_PlacedEditorUtilityBase::execSetActorSelectionState },
			{ "SetLevelViewportCameraInfo", &ADEPRECATED_PlacedEditorUtilityBase::execSetLevelViewportCameraInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Remove all actors from the selection set\n" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Remove all actors from the selection set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "ClearActorSelectionSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics
	{
		struct PlacedEditorUtilityBase_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09* Attempts to find the actor specified by PathToActor in the current editor world\n\x09* @param\x09PathToActor\x09The path to the actor (e.g. PersistentLevel.PlayerStart)\n\x09* @return\x09""A reference to the actor, or none if it wasn't found\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "GetActorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::PlacedEditorUtilityBase_eventGetActorReference_Parms), Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics
	{
		struct PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms), &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed\n\x09 *\n\x09 * @param\x09""CameraLocation\x09(out) Current location of the level editing viewport camera, or zero if none found\n\x09 * @param\x09""CameraRotation\x09(out) Current rotation of the level editing viewport camera, or zero if none found\n\x09 * @return\x09Whether or not we were able to get a camera for a level editing viewport\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Gets information about the camera position for the primary level editor viewport.  In non-editor builds, these will be zeroed\n\n@param       CameraLocation  (out) Current location of the level editing viewport camera, or zero if none found\n@param       CameraRotation  (out) Current rotation of the level editing viewport camera, or zero if none found\n@return      Whether or not we were able to get a camera for a level editing viewport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "GetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PlacedEditorUtilityBase_eventGetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics
	{
		struct PlacedEditorUtilityBase_eventGetSelectionSet_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventGetSelectionSet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Returns the current selection set in the editor.  Note that for non-editor builds, this will return an empty array\n\x09 */" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Returns the current selection set in the editor.  Note that for non-editor builds, this will return an empty array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "GetSelectionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::PlacedEditorUtilityBase_eventGetSelectionSet_Parms), Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Selects nothing in the editor (another way to clear the selection)\n" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Selects nothing in the editor (another way to clear the selection)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "SelectNothing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics
	{
		struct PlacedEditorUtilityBase_eventSetActorSelectionState_Parms
		{
			AActor* Actor;
			bool bShouldBeSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bShouldBeSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetActorSelectionState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit(void* Obj)
	{
		((PlacedEditorUtilityBase_eventSetActorSelectionState_Parms*)Obj)->bShouldBeSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected = { "bShouldBeSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PlacedEditorUtilityBase_eventSetActorSelectionState_Parms), &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Set the selection state for the selected actor\n" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Set the selection state for the selected actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "SetActorSelectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::PlacedEditorUtilityBase_eventSetActorSelectionState_Parms), Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics
	{
		struct PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms
		{
			FVector CameraLocation;
			FRotator CameraRotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation = { "CameraLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms, CameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::NewProp_CameraRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09* Sets information about the camera position for the primary level editor viewport.\n\x09*\n\x09* @param\x09""CameraLocation\x09Location the camera will be moved to.\n\x09* @param\x09""CameraRotation\x09Rotation the camera will be set to.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
		{ "ToolTip", "Sets information about the camera position for the primary level editor viewport.\n\n@param        CameraLocation  Location the camera will be moved to.\n@param        CameraRotation  Rotation the camera will be set to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, nullptr, "SetLevelViewportCameraInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PlacedEditorUtilityBase_eventSetLevelViewportCameraInfo_Parms), Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADEPRECATED_PlacedEditorUtilityBase);
	UClass* Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_NoRegister()
	{
		return ADEPRECATED_PlacedEditorUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HelpText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_ClearActorSelectionSet, "ClearActorSelectionSet" }, // 368509429
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetActorReference, "GetActorReference" }, // 2713687874
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetLevelViewportCameraInfo, "GetLevelViewportCameraInfo" }, // 1802128123
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_GetSelectionSet, "GetSelectionSet" }, // 1492642942
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SelectNothing, "SelectNothing" }, // 2064016582
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetActorSelectionState, "SetActorSelectionState" }, // 2848480958
		{ &Z_Construct_UFunction_ADEPRECATED_PlacedEditorUtilityBase_SetLevelViewportCameraInfo, "SetLevelViewportCameraInfo" }, // 1369280943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "PlacedEditorUtilityBase.h" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/PlacedEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADEPRECATED_PlacedEditorUtilityBase, HelpText), METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::NewProp_HelpText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::NewProp_HelpText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_PlacedEditorUtilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::ClassParams = {
		&ADEPRECATED_PlacedEditorUtilityBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::PropPointers),
		0,
		0x029002A5u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase()
	{
		if (!Z_Registration_Info_UClass_ADEPRECATED_PlacedEditorUtilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADEPRECATED_PlacedEditorUtilityBase.OuterSingleton, Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADEPRECATED_PlacedEditorUtilityBase.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<ADEPRECATED_PlacedEditorUtilityBase>()
	{
		return ADEPRECATED_PlacedEditorUtilityBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_PlacedEditorUtilityBase);
	ADEPRECATED_PlacedEditorUtilityBase::~ADEPRECATED_PlacedEditorUtilityBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADEPRECATED_PlacedEditorUtilityBase, ADEPRECATED_PlacedEditorUtilityBase::StaticClass, TEXT("ADEPRECATED_PlacedEditorUtilityBase"), &Z_Registration_Info_UClass_ADEPRECATED_PlacedEditorUtilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADEPRECATED_PlacedEditorUtilityBase), 883911083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_2270719248(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_PlacedEditorUtilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
