// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Teleporter/VREditorTeleporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorTeleporter() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVREditorTeleporter::execGetInteractorTryingTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetInteractorTryingTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execDoTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoTeleport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execStopAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execStartAiming)
	{
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAiming(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execGetSlideDelta)
	{
		P_GET_OBJECT(UVREditorInteractor,Z_Param_Interactor);
		P_GET_UBOOL(Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSlideDelta_Implementation(Z_Param_Interactor,Z_Param_Axis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execSetColor)
	{
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_Out_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execSetVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibility(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execTeleportDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TeleportDone_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execStartTeleport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTeleport_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execGetVRMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVREditorMode**)Z_Param__Result=P_THIS->GetVRMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execIsTeleporting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTeleporting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execIsAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVREditorTeleporter::execInit)
	{
		P_GET_OBJECT(UVREditorMode,Z_Param_InMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init_Implementation(Z_Param_InMode);
		P_NATIVE_END;
	}
	struct VREditorTeleporter_eventGetSlideDelta_Parms
	{
		UVREditorInteractor* Interactor;
		bool Axis;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		VREditorTeleporter_eventGetSlideDelta_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct VREditorTeleporter_eventInit_Parms
	{
		UVREditorMode* InMode;
	};
	static FName NAME_AVREditorTeleporter_GetSlideDelta = FName(TEXT("GetSlideDelta"));
	float AVREditorTeleporter::GetSlideDelta(UVREditorInteractor* Interactor, bool Axis)
	{
		VREditorTeleporter_eventGetSlideDelta_Parms Parms;
		Parms.Interactor=Interactor;
		Parms.Axis=Axis ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_GetSlideDelta),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AVREditorTeleporter_Init = FName(TEXT("Init"));
	void AVREditorTeleporter::Init(UVREditorMode* InMode)
	{
		VREditorTeleporter_eventInit_Parms Parms;
		Parms.InMode=InMode;
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_Init),&Parms);
	}
	static FName NAME_AVREditorTeleporter_Shutdown = FName(TEXT("Shutdown"));
	void AVREditorTeleporter::Shutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_Shutdown),NULL);
	}
	static FName NAME_AVREditorTeleporter_StartTeleport = FName(TEXT("StartTeleport"));
	void AVREditorTeleporter::StartTeleport()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_StartTeleport),NULL);
	}
	static FName NAME_AVREditorTeleporter_TeleportDone = FName(TEXT("TeleportDone"));
	void AVREditorTeleporter::TeleportDone()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVREditorTeleporter_TeleportDone),NULL);
	}
	void AVREditorTeleporter::StaticRegisterNativesAVREditorTeleporter()
	{
		UClass* Class = AVREditorTeleporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoTeleport", &AVREditorTeleporter::execDoTeleport },
			{ "GetInteractorTryingTeleport", &AVREditorTeleporter::execGetInteractorTryingTeleport },
			{ "GetSlideDelta", &AVREditorTeleporter::execGetSlideDelta },
			{ "GetVRMode", &AVREditorTeleporter::execGetVRMode },
			{ "Init", &AVREditorTeleporter::execInit },
			{ "IsAiming", &AVREditorTeleporter::execIsAiming },
			{ "IsTeleporting", &AVREditorTeleporter::execIsTeleporting },
			{ "SetColor", &AVREditorTeleporter::execSetColor },
			{ "SetVisibility", &AVREditorTeleporter::execSetVisibility },
			{ "Shutdown", &AVREditorTeleporter::execShutdown },
			{ "StartAiming", &AVREditorTeleporter::execStartAiming },
			{ "StartTeleport", &AVREditorTeleporter::execStartTeleport },
			{ "StopAiming", &AVREditorTeleporter::execStopAiming },
			{ "TeleportDone", &AVREditorTeleporter::execTeleportDone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Do and finalize teleport.  \x09*/" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Do and finalize teleport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "DoTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_DoTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_DoTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics
	{
		struct VREditorTeleporter_eventGetInteractorTryingTeleport_Parms
		{
			UViewportInteractor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventGetInteractorTryingTeleport_Parms, ReturnValue), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Get the actor we're currently trying to teleport with.\n\x09* Valid during aiming and teleporting.\n\x09*/" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Get the actor we're currently trying to teleport with.\nValid during aiming and teleporting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetInteractorTryingTeleport", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::VREditorTeleporter_eventGetInteractorTryingTeleport_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static void NewProp_Axis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventGetSlideDelta_Parms, Interactor), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventGetSlideDelta_Parms*)Obj)->Axis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorTeleporter_eventGetSlideDelta_Parms), &Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventGetSlideDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Interactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Get slide delta to push/pull or scale the teleporter */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Get slide delta to push/pull or scale the teleporter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetSlideDelta", nullptr, nullptr, sizeof(VREditorTeleporter_eventGetSlideDelta_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics
	{
		struct VREditorTeleporter_eventGetVRMode_Parms
		{
			UVREditorMode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventGetVRMode_Parms, ReturnValue), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "GetVRMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::VREditorTeleporter_eventGetVRMode_Parms), Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_GetVRMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_GetVRMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_Init_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::NewProp_InMode = { "InMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventInit_Parms, InMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::NewProp_InMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "Comment", "/** Initializes the teleporter */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Initializes the teleporter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "Init", nullptr, nullptr, sizeof(VREditorTeleporter_eventInit_Parms), Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics
	{
		struct VREditorTeleporter_eventIsAiming_Parms
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
	void Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventIsAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorTeleporter_eventIsAiming_Parms), &Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Whether we are currently aiming to teleport. */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Whether we are currently aiming to teleport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "IsAiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::VREditorTeleporter_eventIsAiming_Parms), Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_IsAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics
	{
		struct VREditorTeleporter_eventIsTeleporting_Parms
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
	void Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventIsTeleporting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorTeleporter_eventIsTeleporting_Parms), &Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "IsTeleporting", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::VREditorTeleporter_eventIsTeleporting_Parms), Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics
	{
		struct VREditorTeleporter_eventSetColor_Parms
		{
			FLinearColor Color;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventSetColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Sets the color for the teleporter visuals */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Sets the color for the teleporter visuals" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::VREditorTeleporter_eventSetColor_Parms), Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics
	{
		struct VREditorTeleporter_eventSetVisibility_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((VREditorTeleporter_eventSetVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorTeleporter_eventSetVisibility_Parms), &Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Hide or show the teleporter visuals */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Hide or show the teleporter visuals" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "SetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::VREditorTeleporter_eventSetVisibility_Parms), Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_SetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_SetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "Comment", "/** Shuts down the teleporter */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Shuts down the teleporter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics
	{
		struct VREditorTeleporter_eventStartAiming_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorTeleporter_eventStartAiming_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Functions we call to handle teleporting in navigation mode */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Functions we call to handle teleporting in navigation mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StartAiming", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::VREditorTeleporter_eventStartAiming_Parms), Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StartAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "Comment", "/** Start teleporting, does a ray trace with the hand passed and calculates the locations for lerp movement in Teleport */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Start teleporting, does a ray trace with the hand passed and calculates the locations for lerp movement in Teleport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StartTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StartTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StartTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/** Cancel teleport aiming mode without doing the teleport */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Cancel teleport aiming mode without doing the teleport" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "StopAiming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_StopAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_StopAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Teleporter" },
		{ "Comment", "/** Called when teleport is done for cleanup */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Called when teleport is done for cleanup" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVREditorTeleporter, nullptr, "TeleportDone", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVREditorTeleporter_TeleportDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVREditorTeleporter_TeleportDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorTeleporter);
	UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister()
	{
		return AVREditorTeleporter::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorTeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDirectionMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeleportDirectionMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HMDMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HMDMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftMotionControllerMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftMotionControllerMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightMotionControllerMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightMotionControllerMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeleportMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorTryingTeleport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractorTryingTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorTeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVREditorTeleporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVREditorTeleporter_DoTeleport, "DoTeleport" }, // 780832169
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetInteractorTryingTeleport, "GetInteractorTryingTeleport" }, // 2034642302
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetSlideDelta, "GetSlideDelta" }, // 736214550
		{ &Z_Construct_UFunction_AVREditorTeleporter_GetVRMode, "GetVRMode" }, // 3915397635
		{ &Z_Construct_UFunction_AVREditorTeleporter_Init, "Init" }, // 3480433920
		{ &Z_Construct_UFunction_AVREditorTeleporter_IsAiming, "IsAiming" }, // 1721629848
		{ &Z_Construct_UFunction_AVREditorTeleporter_IsTeleporting, "IsTeleporting" }, // 4028760883
		{ &Z_Construct_UFunction_AVREditorTeleporter_SetColor, "SetColor" }, // 1254654090
		{ &Z_Construct_UFunction_AVREditorTeleporter_SetVisibility, "SetVisibility" }, // 3072061983
		{ &Z_Construct_UFunction_AVREditorTeleporter_Shutdown, "Shutdown" }, // 2842712736
		{ &Z_Construct_UFunction_AVREditorTeleporter_StartAiming, "StartAiming" }, // 291721524
		{ &Z_Construct_UFunction_AVREditorTeleporter_StartTeleport, "StartTeleport" }, // 3449204339
		{ &Z_Construct_UFunction_AVREditorTeleporter_StopAiming, "StopAiming" }, // 1479773041
		{ &Z_Construct_UFunction_AVREditorTeleporter_TeleportDone, "TeleportDone" }, // 1253059587
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * VR Editor teleport manager and the visual representation of the teleport\n */" },
		{ "IncludePath", "Teleporter/VREditorTeleporter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "VR Editor teleport manager and the visual representation of the teleport" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** The owning VR mode */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "The owning VR mode" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData[] = {
		{ "Comment", "/** Visuals for the feet location of the teleporter with the same direction of the HMD yaw */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for the feet location of the teleporter with the same direction of the HMD yaw" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent = { "TeleportDirectionMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, TeleportDirectionMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData[] = {
		{ "Comment", "/** Visuals for teleport HMD */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport HMD" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent = { "HMDMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, HMDMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData[] = {
		{ "Comment", "/** Visuals for teleport left motion controller */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport left motion controller" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent = { "LeftMotionControllerMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, LeftMotionControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData[] = {
		{ "Comment", "/** Visuals for teleport right motion controller */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Visuals for teleport right motion controller" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent = { "RightMotionControllerMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, RightMotionControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData[] = {
		{ "Comment", "/** Dynamic material for teleport visuals */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "Dynamic material for teleport visuals" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID = { "TeleportMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, TeleportMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData[] = {
		{ "Comment", "/** The interactor that started aiming to teleport */" },
		{ "ModuleRelativePath", "Teleporter/VREditorTeleporter.h" },
		{ "ToolTip", "The interactor that started aiming to teleport" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport = { "InteractorTryingTeleport", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorTeleporter, InteractorTryingTeleport), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_VRMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportDirectionMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_HMDMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_LeftMotionControllerMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_RightMotionControllerMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_TeleportMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorTeleporter_Statics::NewProp_InteractorTryingTeleport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorTeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorTeleporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorTeleporter_Statics::ClassParams = {
		&AVREditorTeleporter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorTeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorTeleporter()
	{
		if (!Z_Registration_Info_UClass_AVREditorTeleporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorTeleporter.OuterSingleton, Z_Construct_UClass_AVREditorTeleporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorTeleporter.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorTeleporter>()
	{
		return AVREditorTeleporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorTeleporter);
	AVREditorTeleporter::~AVREditorTeleporter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorTeleporter, AVREditorTeleporter::StaticClass, TEXT("AVREditorTeleporter"), &Z_Registration_Info_UClass_AVREditorTeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorTeleporter), 170259643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_507465916(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Teleporter_VREditorTeleporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
