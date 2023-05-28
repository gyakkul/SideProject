// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportInteractor.h"
#include "InputCoreTypes.h"
#include "ViewportInteractionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportInteractor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode();
	VIEWPORTINTERACTION_API UScriptStruct* Z_Construct_UScriptStruct_FViewportActionKeyInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitResultGizmoFilterMode;
	static UEnum* EHitResultGizmoFilterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EHitResultGizmoFilterMode"));
		}
		return Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EHitResultGizmoFilterMode>()
	{
		return EHitResultGizmoFilterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enumerators[] = {
		{ "EHitResultGizmoFilterMode::All", (int64)EHitResultGizmoFilterMode::All },
		{ "EHitResultGizmoFilterMode::NoGizmos", (int64)EHitResultGizmoFilterMode::NoGizmos },
		{ "EHitResultGizmoFilterMode::GizmosOnly", (int64)EHitResultGizmoFilterMode::GizmosOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EHitResultGizmoFilterMode::All" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Filter mode for GetHitResultFromLaserPointer*/" },
		{ "GizmosOnly.Name", "EHitResultGizmoFilterMode::GizmosOnly" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "NoGizmos.Name", "EHitResultGizmoFilterMode::NoGizmos" },
		{ "ToolTip", "Filter mode for GetHitResultFromLaserPointer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		"EHitResultGizmoFilterMode",
		"EHitResultGizmoFilterMode",
		Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode()
	{
		if (!Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.InnerSingleton, Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitResultGizmoFilterMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UViewportInteractor::execCanCarry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCarry();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execSetCanCarry)
	{
		P_GET_UBOOL(Z_Param_bInCanCarry);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanCarry(Z_Param_bInCanCarry);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetHitResultGizmoFilterMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EHitResultGizmoFilterMode*)Z_Param__Result=P_THIS->GetHitResultGizmoFilterMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execSetHitResultGizmoFilterMode)
	{
		P_GET_ENUM(EHitResultGizmoFilterMode,Z_Param_newFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHitResultGizmoFilterMode(EHitResultGizmoFilterMode(Z_Param_newFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execSetDraggingMode)
	{
		P_GET_ENUM(EViewportInteractionDraggingMode,Z_Param_NewDraggingMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDraggingMode(EViewportInteractionDraggingMode(Z_Param_NewDraggingMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execIsHoveringOverGizmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHoveringOverGizmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetHoverLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetHoverLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetTransformAndForwardVector)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutHandTransform);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForwardVector);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTransformAndForwardVector(Z_Param_Out_OutHandTransform,Z_Param_Out_OutForwardVector);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetLaserPointer)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LaserPointerEnd);
		P_GET_UBOOL(Z_Param_bEvenIfBlocked);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LaserLengthOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLaserPointer(Z_Param_Out_LaserPointerStart,Z_Param_Out_LaserPointerEnd,Z_Param_bEvenIfBlocked,Z_Param_LaserLengthOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetDraggingMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EViewportInteractionDraggingMode*)Z_Param__Result=P_THIS->GetDraggingMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetLastRoomSpaceTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLastRoomSpaceTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetLastTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetLastTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetRoomSpaceTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomSpaceTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetOtherInteractor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UViewportInteractor**)Z_Param__Result=P_THIS->GetOtherInteractor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportInteractor::execGetWorldInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UViewportWorldInteraction**)Z_Param__Result=P_THIS->GetWorldInteraction();
		P_NATIVE_END;
	}
	struct ViewportInteractor_eventHandleInputAxis_BP_Parms
	{
		FViewportActionKeyInput Action;
		FKey Key;
		float Delta;
		float DeltaTime;
		bool bOutWasHandled;
	};
	struct ViewportInteractor_eventHandleInputKey_BP_Parms
	{
		FViewportActionKeyInput Action;
		FKey Key;
		TEnumAsByte<EInputEvent> Event;
		bool bOutWasHandled;
	};
	struct ViewportInteractor_eventTick_Parms
	{
		float DeltaTime;
	};
	static FName NAME_UViewportInteractor_HandleInputAxis_BP = FName(TEXT("HandleInputAxis_BP"));
	void UViewportInteractor::HandleInputAxis_BP(FViewportActionKeyInput const& Action, const FKey Key, const float Delta, const float DeltaTime, bool& bOutWasHandled)
	{
		ViewportInteractor_eventHandleInputAxis_BP_Parms Parms;
		Parms.Action=Action;
		Parms.Key=Key;
		Parms.Delta=Delta;
		Parms.DeltaTime=DeltaTime;
		Parms.bOutWasHandled=bOutWasHandled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_HandleInputAxis_BP),&Parms);
		bOutWasHandled=Parms.bOutWasHandled;
	}
	static FName NAME_UViewportInteractor_HandleInputKey_BP = FName(TEXT("HandleInputKey_BP"));
	void UViewportInteractor::HandleInputKey_BP(FViewportActionKeyInput const& Action, const FKey Key, const EInputEvent Event, bool& bOutWasHandled)
	{
		ViewportInteractor_eventHandleInputKey_BP_Parms Parms;
		Parms.Action=Action;
		Parms.Key=Key;
		Parms.Event=Event;
		Parms.bOutWasHandled=bOutWasHandled ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_HandleInputKey_BP),&Parms);
		bOutWasHandled=Parms.bOutWasHandled;
	}
	static FName NAME_UViewportInteractor_Shutdown = FName(TEXT("Shutdown"));
	void UViewportInteractor::Shutdown()
	{
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_Shutdown),NULL);
	}
	static FName NAME_UViewportInteractor_Tick = FName(TEXT("Tick"));
	void UViewportInteractor::Tick(const float DeltaTime)
	{
		ViewportInteractor_eventTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UViewportInteractor_Tick),&Parms);
	}
	void UViewportInteractor::StaticRegisterNativesUViewportInteractor()
	{
		UClass* Class = UViewportInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCarry", &UViewportInteractor::execCanCarry },
			{ "GetDraggingMode", &UViewportInteractor::execGetDraggingMode },
			{ "GetHitResultGizmoFilterMode", &UViewportInteractor::execGetHitResultGizmoFilterMode },
			{ "GetHoverLocation", &UViewportInteractor::execGetHoverLocation },
			{ "GetLaserPointer", &UViewportInteractor::execGetLaserPointer },
			{ "GetLastRoomSpaceTransform", &UViewportInteractor::execGetLastRoomSpaceTransform },
			{ "GetLastTransform", &UViewportInteractor::execGetLastTransform },
			{ "GetOtherInteractor", &UViewportInteractor::execGetOtherInteractor },
			{ "GetRoomSpaceTransform", &UViewportInteractor::execGetRoomSpaceTransform },
			{ "GetTransform", &UViewportInteractor::execGetTransform },
			{ "GetTransformAndForwardVector", &UViewportInteractor::execGetTransformAndForwardVector },
			{ "GetWorldInteraction", &UViewportInteractor::execGetWorldInteraction },
			{ "IsHoveringOverGizmo", &UViewportInteractor::execIsHoveringOverGizmo },
			{ "SetCanCarry", &UViewportInteractor::execSetCanCarry },
			{ "SetDraggingMode", &UViewportInteractor::execSetDraggingMode },
			{ "SetHitResultGizmoFilterMode", &UViewportInteractor::execSetHitResultGizmoFilterMode },
			{ "Shutdown", &UViewportInteractor::execShutdown },
			{ "Tick", &UViewportInteractor::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics
	{
		struct ViewportInteractor_eventCanCarry_Parms
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
	void Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventCanCarry_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventCanCarry_Parms), &Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets if the interactor can carry an object */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets if the interactor can carry an object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "CanCarry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::ViewportInteractor_eventCanCarry_Parms), Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_CanCarry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_CanCarry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics
	{
		struct ViewportInteractor_eventGetDraggingMode_Parms
		{
			EViewportInteractionDraggingMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetDraggingMode_Parms, ReturnValue), Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, METADATA_PARAMS(nullptr, 0) }; // 3911229373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the current interactor data dragging mode */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the current interactor data dragging mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetDraggingMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::ViewportInteractor_eventGetDraggingMode_Parms), Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetDraggingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetDraggingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics
	{
		struct ViewportInteractor_eventGetHitResultGizmoFilterMode_Parms
		{
			EHitResultGizmoFilterMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetHitResultGizmoFilterMode_Parms, ReturnValue), Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode, METADATA_PARAMS(nullptr, 0) }; // 1772813717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets current gizmo filter mode used for Interaction*/" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets current gizmo filter mode used for Interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetHitResultGizmoFilterMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::ViewportInteractor_eventGetHitResultGizmoFilterMode_Parms), Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics
	{
		struct ViewportInteractor_eventGetHoverLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetHoverLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the interactor laser hover location */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the interactor laser hover location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetHoverLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::ViewportInteractor_eventGetHoverLocation_Parms), Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetHoverLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetHoverLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics
	{
		struct ViewportInteractor_eventGetLaserPointer_Parms
		{
			FVector LaserPointerStart;
			FVector LaserPointerEnd;
			bool bEvenIfBlocked;
			float LaserLengthOverride;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserPointerStart;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LaserPointerEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvenIfBlocked_MetaData[];
#endif
		static void NewProp_bEvenIfBlocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvenIfBlocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserLengthOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserLengthOverride;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerStart = { "LaserPointerStart", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserPointerStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerEnd = { "LaserPointerEnd", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserPointerEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetLaserPointer_Parms*)Obj)->bEvenIfBlocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked = { "bEvenIfBlocked", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventGetLaserPointer_Parms), &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride = { "LaserLengthOverride", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetLaserPointer_Parms, LaserLengthOverride), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride_MetaData)) };
	void Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetLaserPointer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventGetLaserPointer_Parms), &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserPointerEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_bEvenIfBlocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_LaserLengthOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/**\n\x09 * Gets the start and end point of the laser pointer for the specified hand\n\x09 *\n\x09 * @param LasertPointerStart\x09(Out) The start location of the laser pointer in world space\n\x09 * @param LasertPointerEnd\x09\x09(Out) The end location of the laser pointer in world space\n\x09 * @param bEvenIfBlocked\x09\x09If true, returns a laser pointer even if the hand has UI in front of it (defaults to false)\n\x09 * @param LaserLengthOverride\x09If zero the default laser length (VREdMode::GetLaserLength) is used\n\x09 *\n\x09 * @return\x09True if we have motion controller data for this hand and could return a valid result\n\x09 */" },
		{ "CPP_Default_bEvenIfBlocked", "false" },
		{ "CPP_Default_LaserLengthOverride", "0.000000" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the start and end point of the laser pointer for the specified hand\n\n@param LasertPointerStart    (Out) The start location of the laser pointer in world space\n@param LasertPointerEnd              (Out) The end location of the laser pointer in world space\n@param bEvenIfBlocked                If true, returns a laser pointer even if the hand has UI in front of it (defaults to false)\n@param LaserLengthOverride   If zero the default laser length (VREdMode::GetLaserLength) is used\n\n@return      True if we have motion controller data for this hand and could return a valid result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetLaserPointer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::ViewportInteractor_eventGetLaserPointer_Parms), Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetLaserPointer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetLaserPointer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics
	{
		struct ViewportInteractor_eventGetLastRoomSpaceTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetLastRoomSpaceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the last hand transform of the interactor, in the local tracking space */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the last hand transform of the interactor, in the local tracking space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetLastRoomSpaceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::ViewportInteractor_eventGetLastRoomSpaceTransform_Parms), Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics
	{
		struct ViewportInteractor_eventGetLastTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetLastTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the last world transform of this interactor */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the last world transform of this interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetLastTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::ViewportInteractor_eventGetLastTransform_Parms), Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetLastTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetLastTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics
	{
		struct ViewportInteractor_eventGetOtherInteractor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetOtherInteractor_Parms, ReturnValue), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the paired interactor assigned by the world interaction, can return null when there is no other interactor */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the paired interactor assigned by the world interaction, can return null when there is no other interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetOtherInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::ViewportInteractor_eventGetOtherInteractor_Parms), Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics
	{
		struct ViewportInteractor_eventGetRoomSpaceTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetRoomSpaceTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the hand transform of the interactor, in the local tracking space */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the hand transform of the interactor, in the local tracking space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetRoomSpaceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::ViewportInteractor_eventGetRoomSpaceTransform_Parms), Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics
	{
		struct ViewportInteractor_eventGetTransform_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the world transform of this interactor */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the world transform of this interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::ViewportInteractor_eventGetTransform_Parms), Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics
	{
		struct ViewportInteractor_eventGetTransformAndForwardVector_Parms
		{
			FTransform OutHandTransform;
			FVector OutForwardVector;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutForwardVector;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutHandTransform = { "OutHandTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetTransformAndForwardVector_Parms, OutHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutForwardVector = { "OutForwardVector", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetTransformAndForwardVector_Parms, OutForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventGetTransformAndForwardVector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventGetTransformAndForwardVector_Parms), &Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_OutForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/**\n\x09 * Creates a hand transform and forward vector for a laser pointer for a given hand\n\x09 *\n\x09 * @param OutHandTransform\x09The created hand transform\n\x09 * @param OutForwardVector\x09The forward vector of the hand\n\x09 *\n\x09 * @return\x09True if we have motion controller data for this hand and could return a valid result\n\x09 */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Creates a hand transform and forward vector for a laser pointer for a given hand\n\n@param OutHandTransform      The created hand transform\n@param OutForwardVector      The forward vector of the hand\n\n@return      True if we have motion controller data for this hand and could return a valid result" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetTransformAndForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::ViewportInteractor_eventGetTransformAndForwardVector_Parms), Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics
	{
		struct ViewportInteractor_eventGetWorldInteraction_Parms
		{
			UViewportWorldInteraction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventGetWorldInteraction_Parms, ReturnValue), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Gets the world interaction */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Gets the world interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "GetWorldInteraction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::ViewportInteractor_eventGetWorldInteraction_Parms), Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_bOutWasHandled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutWasHandled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Action), Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action_MetaData)) }; // 2644214563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, Delta), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputAxis_BP_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime_MetaData)) };
	void Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled_SetBit(void* Obj)
	{
		((ViewportInteractor_eventHandleInputAxis_BP_Parms*)Obj)->bOutWasHandled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled = { "bOutWasHandled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventHandleInputAxis_BP_Parms), &Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_Delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::NewProp_bOutWasHandled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "Comment", "/** To be overridden. Called by HandleInputAxis before delegates and default input implementation */" },
		{ "DisplayName", "HandleInputAxis" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "To be overridden. Called by HandleInputAxis before delegates and default input implementation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "HandleInputAxis_BP", nullptr, nullptr, sizeof(ViewportInteractor_eventHandleInputAxis_BP_Parms), Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Event;
		static void NewProp_bOutWasHandled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutWasHandled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Action), Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action_MetaData)) }; // 2644214563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventHandleInputKey_BP_Parms, Event), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event_MetaData)) }; // 1054153585
	void Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled_SetBit(void* Obj)
	{
		((ViewportInteractor_eventHandleInputKey_BP_Parms*)Obj)->bOutWasHandled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled = { "bOutWasHandled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventHandleInputKey_BP_Parms), &Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::NewProp_bOutWasHandled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "Comment", "/** To be overridden. Called by HandleInputKey before delegates and default input implementation */" },
		{ "DisplayName", "HandleInputKey" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "To be overridden. Called by HandleInputKey before delegates and default input implementation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "HandleInputKey_BP", nullptr, nullptr, sizeof(ViewportInteractor_eventHandleInputKey_BP_Parms), Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics
	{
		struct ViewportInteractor_eventIsHoveringOverGizmo_Parms
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
	void Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportInteractor_eventIsHoveringOverGizmo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventIsHoveringOverGizmo_Parms), &Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** If the interactor laser is currently hovering over a gizmo handle */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "If the interactor laser is currently hovering over a gizmo handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "IsHoveringOverGizmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::ViewportInteractor_eventIsHoveringOverGizmo_Parms), Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics
	{
		struct ViewportInteractor_eventSetCanCarry_Parms
		{
			bool bInCanCarry;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInCanCarry_MetaData[];
#endif
		static void NewProp_bInCanCarry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCanCarry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry_SetBit(void* Obj)
	{
		((ViewportInteractor_eventSetCanCarry_Parms*)Obj)->bInCanCarry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry = { "bInCanCarry", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportInteractor_eventSetCanCarry_Parms), &Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::NewProp_bInCanCarry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Sets if the interactor can carry an object */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Sets if the interactor can carry an object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "SetCanCarry", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::ViewportInteractor_eventSetCanCarry_Parms), Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_SetCanCarry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_SetCanCarry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics
	{
		struct ViewportInteractor_eventSetDraggingMode_Parms
		{
			EViewportInteractionDraggingMode NewDraggingMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewDraggingMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDraggingMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewDraggingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode = { "NewDraggingMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventSetDraggingMode_Parms, NewDraggingMode), Z_Construct_UEnum_ViewportInteraction_EViewportInteractionDraggingMode, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_MetaData)) }; // 3911229373
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::NewProp_NewDraggingMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Sets the current dragging mode for this interactor */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Sets the current dragging mode for this interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "SetDraggingMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::ViewportInteractor_eventSetDraggingMode_Parms), Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_SetDraggingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_SetDraggingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics
	{
		struct ViewportInteractor_eventSetHitResultGizmoFilterMode_Parms
		{
			EHitResultGizmoFilterMode newFilter;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_newFilter_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_newFilter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::NewProp_newFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::NewProp_newFilter = { "newFilter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventSetHitResultGizmoFilterMode_Parms, newFilter), Z_Construct_UEnum_ViewportInteraction_EHitResultGizmoFilterMode, METADATA_PARAMS(nullptr, 0) }; // 1772813717
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::NewProp_newFilter_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::NewProp_newFilter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactor" },
		{ "Comment", "/** Sets the current gizmo filter mode used for Interaction*/" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Sets the current gizmo filter mode used for Interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "SetHitResultGizmoFilterMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::ViewportInteractor_eventSetHitResultGizmoFilterMode_Parms), Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "Comment", "/** Whenever the ViewportWorldInteraction is shut down, the interacts will shut down as well */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Whenever the ViewportWorldInteraction is shut down, the interacts will shut down as well" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportInteractor_Tick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportInteractor_eventTick_Parms, DeltaTime), METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportInteractor_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interactor" },
		{ "Comment", "/** Update for this interactor called by the ViewportWorldInteraction */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Update for this interactor called by the ViewportWorldInteraction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportInteractor_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportInteractor, nullptr, "Tick", nullptr, nullptr, sizeof(ViewportInteractor_eventTick_Parms), Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportInteractor_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportInteractor_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportInteractor_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportInteractor);
	UClass* Z_Construct_UClass_UViewportInteractor_NoRegister()
	{
		return UViewportInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UViewportInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToActionMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToActionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToActionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_KeyToActionMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherInteractor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportInteractor_CanCarry, "CanCarry" }, // 2080747581
		{ &Z_Construct_UFunction_UViewportInteractor_GetDraggingMode, "GetDraggingMode" }, // 1507237689
		{ &Z_Construct_UFunction_UViewportInteractor_GetHitResultGizmoFilterMode, "GetHitResultGizmoFilterMode" }, // 101350700
		{ &Z_Construct_UFunction_UViewportInteractor_GetHoverLocation, "GetHoverLocation" }, // 996520214
		{ &Z_Construct_UFunction_UViewportInteractor_GetLaserPointer, "GetLaserPointer" }, // 3120632650
		{ &Z_Construct_UFunction_UViewportInteractor_GetLastRoomSpaceTransform, "GetLastRoomSpaceTransform" }, // 1603233097
		{ &Z_Construct_UFunction_UViewportInteractor_GetLastTransform, "GetLastTransform" }, // 2010661273
		{ &Z_Construct_UFunction_UViewportInteractor_GetOtherInteractor, "GetOtherInteractor" }, // 3632286238
		{ &Z_Construct_UFunction_UViewportInteractor_GetRoomSpaceTransform, "GetRoomSpaceTransform" }, // 2766923420
		{ &Z_Construct_UFunction_UViewportInteractor_GetTransform, "GetTransform" }, // 2518706463
		{ &Z_Construct_UFunction_UViewportInteractor_GetTransformAndForwardVector, "GetTransformAndForwardVector" }, // 705417478
		{ &Z_Construct_UFunction_UViewportInteractor_GetWorldInteraction, "GetWorldInteraction" }, // 1486827876
		{ &Z_Construct_UFunction_UViewportInteractor_HandleInputAxis_BP, "HandleInputAxis_BP" }, // 733094474
		{ &Z_Construct_UFunction_UViewportInteractor_HandleInputKey_BP, "HandleInputKey_BP" }, // 3969118422
		{ &Z_Construct_UFunction_UViewportInteractor_IsHoveringOverGizmo, "IsHoveringOverGizmo" }, // 3985528257
		{ &Z_Construct_UFunction_UViewportInteractor_SetCanCarry, "SetCanCarry" }, // 1555014475
		{ &Z_Construct_UFunction_UViewportInteractor_SetDraggingMode, "SetDraggingMode" }, // 2578770298
		{ &Z_Construct_UFunction_UViewportInteractor_SetHitResultGizmoFilterMode, "SetHitResultGizmoFilterMode" }, // 2705110986
		{ &Z_Construct_UFunction_UViewportInteractor_Shutdown, "Shutdown" }, // 1087746166
		{ &Z_Construct_UFunction_UViewportInteractor_Tick, "Tick" }, // 856355219
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the interactor in the world\n */" },
		{ "IncludePath", "ViewportInteractor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Represents the interactor in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_ValueProp = { "KeyToActionMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FViewportActionKeyInput, METADATA_PARAMS(nullptr, 0) }; // 2644214563
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_Key_KeyProp = { "KeyToActionMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData[] = {
		{ "Comment", "/** Mapping of raw keys to actions*/" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "Mapping of raw keys to actions" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap = { "KeyToActionMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportInteractor, KeyToActionMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_MetaData)) }; // 2101135134 2644214563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "Comment", "/** The owning world interaction */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "The owning world interaction" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportInteractor, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData[] = {
		{ "Comment", "/** The paired interactor by the world interaction */" },
		{ "ModuleRelativePath", "Public/ViewportInteractor.h" },
		{ "ToolTip", "The paired interactor by the world interaction" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor = { "OtherInteractor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportInteractor, OtherInteractor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_KeyToActionMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_WorldInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportInteractor_Statics::NewProp_OtherInteractor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportInteractor_Statics::ClassParams = {
		&UViewportInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportInteractor()
	{
		if (!Z_Registration_Info_UClass_UViewportInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportInteractor.OuterSingleton, Z_Construct_UClass_UViewportInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportInteractor.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportInteractor>()
	{
		return UViewportInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportInteractor);
	UViewportInteractor::~UViewportInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::EnumInfo[] = {
		{ EHitResultGizmoFilterMode_StaticEnum, TEXT("EHitResultGizmoFilterMode"), &Z_Registration_Info_UEnum_EHitResultGizmoFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1772813717U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportInteractor, UViewportInteractor::StaticClass, TEXT("UViewportInteractor"), &Z_Registration_Info_UClass_UViewportInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportInteractor), 1073646702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_424337(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportInteractor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
