// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputTriggers.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputTriggers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordAction();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordBlocker();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerChordBlocker_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerCombo();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerCombo_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerDown();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerDown_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHold();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHold_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHoldAndRelease();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerHoldAndRelease_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPressed();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPressed_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPulse();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerPulse_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerReleased();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerReleased_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTap();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTap_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTimedBase();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTriggerTimedBase_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerState();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerType();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputCancelAction();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputComboStepData();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerState;
	static UEnum* ETriggerState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETriggerState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETriggerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_ETriggerState, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ETriggerState"));
		}
		return Z_Registration_Info_UEnum_ETriggerState.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerState>()
	{
		return ETriggerState_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enumerators[] = {
		{ "ETriggerState::None", (int64)ETriggerState::None },
		{ "ETriggerState::Ongoing", (int64)ETriggerState::Ongoing },
		{ "ETriggerState::Triggered", (int64)ETriggerState::Triggered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Trigger states are a light weight interpretation of the provided input values used in trigger UpdateState responses.\n*/" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "None.Comment", "// No inputs\n" },
		{ "None.Name", "ETriggerState::None" },
		{ "None.ToolTip", "No inputs" },
		{ "Ongoing.Comment", "// Triggering is being monitored, but not yet been confirmed (e.g. a time based trigger that requires the trigger state to be maintained over several frames)\n" },
		{ "Ongoing.Name", "ETriggerState::Ongoing" },
		{ "Ongoing.ToolTip", "Triggering is being monitored, but not yet been confirmed (e.g. a time based trigger that requires the trigger state to be maintained over several frames)" },
		{ "ToolTip", "Trigger states are a light weight interpretation of the provided input values used in trigger UpdateState responses." },
		{ "Triggered.Comment", "// The trigger state has been met\n" },
		{ "Triggered.Name", "ETriggerState::Triggered" },
		{ "Triggered.ToolTip", "The trigger state has been met" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"ETriggerState",
		"ETriggerState",
		Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerState()
	{
		if (!Z_Registration_Info_UEnum_ETriggerState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerState.InnerSingleton, Z_Construct_UEnum_EnhancedInput_ETriggerState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETriggerState.InnerSingleton;
	}
	static_assert(!int64(ETriggerEvent::None)||!int64(ETriggerEvent::Triggered)||!int64(ETriggerEvent::Started)||!int64(ETriggerEvent::Ongoing)||!int64(ETriggerEvent::Canceled)||!int64(ETriggerEvent::Completed), "'ETriggerEvent' does not have a 0 entry!(This is a problem when the enum is initalized by default)");
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerEvent;
	static UEnum* ETriggerEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETriggerEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETriggerEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_ETriggerEvent, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ETriggerEvent"));
		}
		return Z_Registration_Info_UEnum_ETriggerEvent.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEvent>()
	{
		return ETriggerEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enumerators[] = {
		{ "ETriggerEvent::None", (int64)ETriggerEvent::None },
		{ "ETriggerEvent::Triggered", (int64)ETriggerEvent::Triggered },
		{ "ETriggerEvent::Started", (int64)ETriggerEvent::Started },
		{ "ETriggerEvent::Ongoing", (int64)ETriggerEvent::Ongoing },
		{ "ETriggerEvent::Canceled", (int64)ETriggerEvent::Canceled },
		{ "ETriggerEvent::Completed", (int64)ETriggerEvent::Completed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Canceled.Comment", "// Triggering has been canceled\n" },
		{ "Canceled.Name", "ETriggerEvent::Canceled" },
		{ "Canceled.ToolTip", "Triggering has been canceled" },
		{ "Comment", "/**\n* Trigger events are the Action's interpretation of all Trigger State transitions that occurred for the action in the last tick\n*/" },
		{ "Completed.Comment", "// The trigger state has transitioned from Triggered to None this frame, i.e. Triggering has finished.\n// NOTE: Using this event restricts you to one set of triggers for Started/Completed events. You may prefer two actions, each with its own trigger rules.\n// TODO: Completed will not fire if any trigger reports Ongoing on the same frame, but both should fire. e.g. Tick 2 of Hold (= Ongoing) + Pressed (= None) combo will raise Ongoing event only.\n" },
		{ "Completed.Name", "ETriggerEvent::Completed" },
		{ "Completed.ToolTip", "The trigger state has transitioned from Triggered to None this frame, i.e. Triggering has finished.\nNOTE: Using this event restricts you to one set of triggers for Started/Completed events. You may prefer two actions, each with its own trigger rules.\nTODO: Completed will not fire if any trigger reports Ongoing on the same frame, but both should fire. e.g. Tick 2 of Hold (= Ongoing) + Pressed (= None) combo will raise Ongoing event only." },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "None.Comment", "// No significant trigger state changes occurred and there are no active device inputs\n" },
		{ "None.Hidden", "" },
		{ "None.Name", "ETriggerEvent::None" },
		{ "None.ToolTip", "No significant trigger state changes occurred and there are no active device inputs" },
		{ "Ongoing.Comment", "// Triggering is still being processed\n" },
		{ "Ongoing.Name", "ETriggerEvent::Ongoing" },
		{ "Ongoing.ToolTip", "Triggering is still being processed" },
		{ "Started.Comment", "// An event has occurred that has begun Trigger evaluation. Note: Triggered may also occur this frame.\n" },
		{ "Started.Name", "ETriggerEvent::Started" },
		{ "Started.ToolTip", "An event has occurred that has begun Trigger evaluation. Note: Triggered may also occur this frame." },
		{ "ToolTip", "Trigger events are the Action's interpretation of all Trigger State transitions that occurred for the action in the last tick" },
		{ "Triggered.Comment", "// Triggering occurred after one or more processing ticks\n" },
		{ "Triggered.Name", "ETriggerEvent::Triggered" },
		{ "Triggered.ToolTip", "Triggering occurred after one or more processing ticks" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"ETriggerEvent",
		"ETriggerEvent",
		Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent()
	{
		if (!Z_Registration_Info_UEnum_ETriggerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerEvent.InnerSingleton, Z_Construct_UEnum_EnhancedInput_ETriggerEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETriggerEvent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerType;
	static UEnum* ETriggerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETriggerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETriggerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_ETriggerType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ETriggerType"));
		}
		return Z_Registration_Info_UEnum_ETriggerType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerType>()
	{
		return ETriggerType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enumerators[] = {
		{ "ETriggerType::Explicit", (int64)ETriggerType::Explicit },
		{ "ETriggerType::Implicit", (int64)ETriggerType::Implicit },
		{ "ETriggerType::Blocker", (int64)ETriggerType::Blocker },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enum_MetaDataParams[] = {
		{ "Blocker.Comment", "// Inverted trigger that will block all other triggers if it is triggered.\n" },
		{ "Blocker.Name", "ETriggerType::Blocker" },
		{ "Blocker.ToolTip", "Inverted trigger that will block all other triggers if it is triggered." },
		{ "Comment", "/**\n* Trigger type determine how the trigger contributes to an action's overall trigger event the behavior of the trigger\n*/" },
		{ "Explicit.Comment", "// Input may trigger if any explicit trigger is triggered.\n" },
		{ "Explicit.Name", "ETriggerType::Explicit" },
		{ "Explicit.ToolTip", "Input may trigger if any explicit trigger is triggered." },
		{ "Implicit.Comment", "// Input may trigger only if all implicit triggers are triggered.\n" },
		{ "Implicit.Name", "ETriggerType::Implicit" },
		{ "Implicit.ToolTip", "Input may trigger only if all implicit triggers are triggered." },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Trigger type determine how the trigger contributes to an action's overall trigger event the behavior of the trigger" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"ETriggerType",
		"ETriggerType",
		Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerType()
	{
		if (!Z_Registration_Info_UEnum_ETriggerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_ETriggerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETriggerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETriggerEventsSupported;
	static UEnum* ETriggerEventsSupported_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETriggerEventsSupported.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETriggerEventsSupported.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("ETriggerEventsSupported"));
		}
		return Z_Registration_Info_UEnum_ETriggerEventsSupported.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<ETriggerEventsSupported>()
	{
		return ETriggerEventsSupported_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enumerators[] = {
		{ "ETriggerEventsSupported::None", (int64)ETriggerEventsSupported::None },
		{ "ETriggerEventsSupported::Instant", (int64)ETriggerEventsSupported::Instant },
		{ "ETriggerEventsSupported::Uninterruptible", (int64)ETriggerEventsSupported::Uninterruptible },
		{ "ETriggerEventsSupported::Ongoing", (int64)ETriggerEventsSupported::Ongoing },
		{ "ETriggerEventsSupported::All", (int64)ETriggerEventsSupported::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// This trigger supports all trigger events\n" },
		{ "All.Name", "ETriggerEventsSupported::All" },
		{ "All.ToolTip", "This trigger supports all trigger events" },
		{ "Comment", "/**\n * Represents what ETriggerEvent types can be triggered off of a give UInputTrigger.\n * Used to determine if a warning should be placed on a exec pin that would never get called\n * on a K2Node_EnhancedInputAction node\n */" },
		{ "Instant.Comment", "// This trigger supports just the Triggered event type. This include ETriggerEvent::Triggered\n" },
		{ "Instant.Name", "ETriggerEventsSupported::Instant" },
		{ "Instant.ToolTip", "This trigger supports just the Triggered event type. This include ETriggerEvent::Triggered" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "None.Comment", "// This trigger supports no trigger events. \n" },
		{ "None.Name", "ETriggerEventsSupported::None" },
		{ "None.ToolTip", "This trigger supports no trigger events." },
		{ "Ongoing.Comment", "// This represents a trigger than can be held down and have a duration, and be canceled. This includes\n// the ETriggerEvents of Started, Ongoing, Canceled, and Triggered. \n" },
		{ "Ongoing.Name", "ETriggerEventsSupported::Ongoing" },
		{ "Ongoing.ToolTip", "This represents a trigger than can be held down and have a duration, and be canceled. This includes\nthe ETriggerEvents of Started, Ongoing, Canceled, and Triggered." },
		{ "ToolTip", "Represents what ETriggerEvent types can be triggered off of a give UInputTrigger.\nUsed to determine if a warning should be placed on a exec pin that would never get called\non a K2Node_EnhancedInputAction node" },
		{ "Uninterruptible.Comment", "// This trigger cannot be canceled, once it is started it cannot be stopped from being triggered\n// This includes the ETriggerEvents of Started, Ongoing, and Triggered \n" },
		{ "Uninterruptible.Name", "ETriggerEventsSupported::Uninterruptible" },
		{ "Uninterruptible.ToolTip", "This trigger cannot be canceled, once it is started it cannot be stopped from being triggered\nThis includes the ETriggerEvents of Started, Ongoing, and Triggered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"ETriggerEventsSupported",
		"ETriggerEventsSupported",
		Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported()
	{
		if (!Z_Registration_Info_UEnum_ETriggerEventsSupported.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETriggerEventsSupported.InnerSingleton, Z_Construct_UEnum_EnhancedInput_ETriggerEventsSupported_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETriggerEventsSupported.InnerSingleton;
	}
	DEFINE_FUNCTION(UInputTrigger::execUpdateState)
	{
		P_GET_OBJECT(UEnhancedPlayerInput,Z_Param_PlayerInput);
		P_GET_STRUCT(FInputActionValue,Z_Param_ModifiedValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETriggerState*)Z_Param__Result=P_THIS->UpdateState_Implementation(Z_Param_PlayerInput,Z_Param_ModifiedValue,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputTrigger::execGetTriggerType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETriggerType*)Z_Param__Result=P_THIS->GetTriggerType_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInputTrigger::execIsActuated)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_ForValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActuated(Z_Param_Out_ForValue);
		P_NATIVE_END;
	}
	struct InputTrigger_eventGetTriggerType_Parms
	{
		ETriggerType ReturnValue;

		/** Constructor, initializes return property only **/
		InputTrigger_eventGetTriggerType_Parms()
			: ReturnValue((ETriggerType)0)
		{
		}
	};
	struct InputTrigger_eventUpdateState_Parms
	{
		const UEnhancedPlayerInput* PlayerInput;
		FInputActionValue ModifiedValue;
		float DeltaTime;
		ETriggerState ReturnValue;

		/** Constructor, initializes return property only **/
		InputTrigger_eventUpdateState_Parms()
			: ReturnValue((ETriggerState)0)
		{
		}
	};
	static FName NAME_UInputTrigger_GetTriggerType = FName(TEXT("GetTriggerType"));
	ETriggerType UInputTrigger::GetTriggerType() const
	{
		InputTrigger_eventGetTriggerType_Parms Parms;
		const_cast<UInputTrigger*>(this)->ProcessEvent(FindFunctionChecked(NAME_UInputTrigger_GetTriggerType),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInputTrigger_UpdateState = FName(TEXT("UpdateState"));
	ETriggerState UInputTrigger::UpdateState(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime)
	{
		InputTrigger_eventUpdateState_Parms Parms;
		Parms.PlayerInput=PlayerInput;
		Parms.ModifiedValue=ModifiedValue;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UInputTrigger_UpdateState),&Parms);
		return Parms.ReturnValue;
	}
	void UInputTrigger::StaticRegisterNativesUInputTrigger()
	{
		UClass* Class = UInputTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTriggerType", &UInputTrigger::execGetTriggerType },
			{ "IsActuated", &UInputTrigger::execIsActuated },
			{ "UpdateState", &UInputTrigger::execUpdateState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventGetTriggerType_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_ETriggerType, METADATA_PARAMS(nullptr, 0) }; // 1732978716
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/*\n\x09""Changes the way this trigger affects an action with multiple triggers:\n\x09\x09""All implicit triggers must be triggering to trigger the action.\n\x09\x09If there are any explicit triggers at least one must be triggering to trigger the action.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Changes the way this trigger affects an action with multiple triggers:\n        All implicit triggers must be triggering to trigger the action.\n        If there are any explicit triggers at least one must be triggering to trigger the action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputTrigger, nullptr, "GetTriggerType", nullptr, nullptr, sizeof(InputTrigger_eventGetTriggerType_Parms), Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputTrigger_GetTriggerType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputTrigger_GetTriggerType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputTrigger_IsActuated_Statics
	{
		struct InputTrigger_eventIsActuated_Parms
		{
			FInputActionValue ForValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ForValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ForValue = { "ForValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventIsActuated_Parms, ForValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ForValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ForValue_MetaData)) }; // 2388133963
	void Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InputTrigger_eventIsActuated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InputTrigger_eventIsActuated_Parms), &Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ForValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/*\n\x09* Is the value passed in sufficiently large to be of interest to the trigger.\n\x09* This is a helper function that implements the most obvious (>=) interpretation of the actuation threshold.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "* Is the value passed in sufficiently large to be of interest to the trigger.\n* This is a helper function that implements the most obvious (>=) interpretation of the actuation threshold." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputTrigger, nullptr, "IsActuated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::InputTrigger_eventIsActuated_Parms), Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputTrigger_IsActuated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputTrigger_IsActuated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInputTrigger_UpdateState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifiedValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventUpdateState_Parms, PlayerInput), Z_Construct_UClass_UEnhancedPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ModifiedValue = { "ModifiedValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventUpdateState_Parms, ModifiedValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventUpdateState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputTrigger_eventUpdateState_Parms, ReturnValue), Z_Construct_UEnum_EnhancedInput_ETriggerState, METADATA_PARAMS(nullptr, 0) }; // 2827134242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ModifiedValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Trigger" },
		{ "Comment", "/*\n\x09This function checks if the requisite conditions have been met for the trigger to fire.\n\x09 Returns Trigger State None\x09\x09 - No trigger conditions have been met. Trigger is inactive.\n\x09\x09\x09 Trigger State Ongoing\x09 - Some trigger conditions have been met. Trigger is processing but not yet active.\n\x09\x09\x09 Trigger State Triggered - All trigger conditions have been met to fire. Trigger is active.\n\x09*/" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "This function checks if the requisite conditions have been met for the trigger to fire.\n Returns Trigger State None              - No trigger conditions have been met. Trigger is inactive.\n                 Trigger State Ongoing   - Some trigger conditions have been met. Trigger is processing but not yet active.\n                 Trigger State Triggered - All trigger conditions have been met to fire. Trigger is active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputTrigger, nullptr, "UpdateState", nullptr, nullptr, sizeof(InputTrigger_eventUpdateState_Parms), Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputTrigger_UpdateState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputTrigger_UpdateState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTrigger);
	UClass* Z_Construct_UClass_UInputTrigger_NoRegister()
	{
		return UInputTrigger::StaticClass();
	}
	struct Z_Construct_UClass_UInputTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActuationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActuationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAlwaysTick_MetaData[];
#endif
		static void NewProp_bShouldAlwaysTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAlwaysTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputTrigger_GetTriggerType, "GetTriggerType" }, // 3655311138
		{ &Z_Construct_UFunction_UInputTrigger_IsActuated, "IsActuated" }, // 2350726765
		{ &Z_Construct_UFunction_UInputTrigger_UpdateState, "UpdateState" }, // 1632718545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nBase class for building triggers.\nTransitions to Triggered state once the input meets or exceeds the actuation threshold.\n*/" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Base class for building triggers.\nTransitions to Triggered state once the input meets or exceeds the actuation threshold." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTrigger_Statics::NewProp_ActuationThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Point at which this trigger fires\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Point at which this trigger fires" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTrigger_Statics::NewProp_ActuationThreshold = { "ActuationThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTrigger, ActuationThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputTrigger_Statics::NewProp_ActuationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTrigger_Statics::NewProp_ActuationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "/* Decides whether this trigger ticks every frame or not.\n\x09 * This WILL affect performance and should only be used in specific custom triggers.\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Decides whether this trigger ticks every frame or not.\n       * This WILL affect performance and should only be used in specific custom triggers." },
	};
#endif
	void Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick_SetBit(void* Obj)
	{
		((UInputTrigger*)Obj)->bShouldAlwaysTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick = { "bShouldAlwaysTick", nullptr, (EPropertyFlags)0x0010000000004014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputTrigger), &Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTrigger_Statics::NewProp_LastValue_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Value passed to UpdateState on the previous tick. This will be updated automatically after the trigger is updated.\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Value passed to UpdateState on the previous tick. This will be updated automatically after the trigger is updated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTrigger_Statics::NewProp_LastValue = { "LastValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTrigger, LastValue), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UClass_UInputTrigger_Statics::NewProp_LastValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTrigger_Statics::NewProp_LastValue_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTrigger_Statics::NewProp_ActuationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTrigger_Statics::NewProp_bShouldAlwaysTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTrigger_Statics::NewProp_LastValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTrigger_Statics::ClassParams = {
		&UInputTrigger::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTrigger_Statics::PropPointers),
		0,
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTrigger()
	{
		if (!Z_Registration_Info_UClass_UInputTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTrigger.OuterSingleton, Z_Construct_UClass_UInputTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTrigger.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTrigger>()
	{
		return UInputTrigger::StaticClass();
	}
	UInputTrigger::UInputTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTrigger);
	UInputTrigger::~UInputTrigger() {}
	void UInputTriggerTimedBase::StaticRegisterNativesUInputTriggerTimedBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerTimedBase);
	UClass* Z_Construct_UClass_UInputTriggerTimedBase_NoRegister()
	{
		return UInputTriggerTimedBase::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerTimedBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectedByTimeDilation_MetaData[];
#endif
		static void NewProp_bAffectedByTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectedByTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerTimedBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerTimedBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nBase class for building triggers that have firing conditions governed by elapsed time.\nThis class transitions state to Ongoing once input is actuated, and will track Ongoing input time until input is released.\nInheriting classes should provide the logic for Triggered transitions.\n*/" },
		{ "IncludePath", "InputTriggers.h" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Base class for building triggers that have firing conditions governed by elapsed time.\nThis class transitions state to Ongoing once input is actuated, and will track Ongoing input time until input is released.\nInheriting classes should provide the logic for Triggered transitions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_HeldDuration_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// How long have we been actuating this trigger?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "How long have we been actuating this trigger?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_HeldDuration = { "HeldDuration", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerTimedBase, HeldDuration), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_HeldDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_HeldDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "/**\n\x09 * Should global time dilation be applied to the held duration?\n\x09 * Default is set to false.\n\x09 * \n\x09 * If this is set to true, then the owning Player Controller's actor time dilation\n\x09 * will be used when calculating the HeldDuration.\n\x09 * \n\x09 * @see UInputTriggerTimedBase::CalculateHeldDuration\n\x09 * @see AWorldSettings::GetEffectiveTimeDilation\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Should global time dilation be applied to the held duration?\nDefault is set to false.\n\nIf this is set to true, then the owning Player Controller's actor time dilation\nwill be used when calculating the HeldDuration.\n\n@see UInputTriggerTimedBase::CalculateHeldDuration\n@see AWorldSettings::GetEffectiveTimeDilation" },
	};
#endif
	void Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation_SetBit(void* Obj)
	{
		((UInputTriggerTimedBase*)Obj)->bAffectedByTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation = { "bAffectedByTimeDilation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputTriggerTimedBase), &Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerTimedBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_HeldDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerTimedBase_Statics::NewProp_bAffectedByTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerTimedBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerTimedBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerTimedBase_Statics::ClassParams = {
		&UInputTriggerTimedBase::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerTimedBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTimedBase_Statics::PropPointers),
		0,
		0x401030A7u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerTimedBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTimedBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerTimedBase()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerTimedBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerTimedBase.OuterSingleton, Z_Construct_UClass_UInputTriggerTimedBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerTimedBase.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerTimedBase>()
	{
		return UInputTriggerTimedBase::StaticClass();
	}
	UInputTriggerTimedBase::UInputTriggerTimedBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerTimedBase);
	UInputTriggerTimedBase::~UInputTriggerTimedBase() {}
	void UInputTriggerDown::StaticRegisterNativesUInputTriggerDown()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerDown);
	UClass* Z_Construct_UClass_UInputTriggerDown_NoRegister()
	{
		return UInputTriggerDown::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerDown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerDown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerDown_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerDown\n\x09Trigger fires when the input exceeds the actuation threshold.\n\x09Note: When no triggers are bound Down (with an actuation threshold of > 0) is the default behavior.\n\x09*/" },
		{ "DisplayName", "Down" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerDown\n      Trigger fires when the input exceeds the actuation threshold.\n      Note: When no triggers are bound Down (with an actuation threshold of > 0) is the default behavior." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerDown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerDown>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerDown_Statics::ClassParams = {
		&UInputTriggerDown::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerDown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerDown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerDown()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerDown.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerDown.OuterSingleton, Z_Construct_UClass_UInputTriggerDown_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerDown.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerDown>()
	{
		return UInputTriggerDown::StaticClass();
	}
	UInputTriggerDown::UInputTriggerDown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerDown);
	UInputTriggerDown::~UInputTriggerDown() {}
	void UInputTriggerPressed::StaticRegisterNativesUInputTriggerPressed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerPressed);
	UClass* Z_Construct_UClass_UInputTriggerPressed_NoRegister()
	{
		return UInputTriggerPressed::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerPressed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerPressed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerPressed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerPressed\n\x09Trigger fires once only when input exceeds the actuation threshold.\n\x09Holding the input will not cause further triggers.\n\x09*/" },
		{ "DisplayName", "Pressed" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerPressed\n      Trigger fires once only when input exceeds the actuation threshold.\n      Holding the input will not cause further triggers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerPressed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerPressed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerPressed_Statics::ClassParams = {
		&UInputTriggerPressed::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerPressed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPressed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerPressed()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerPressed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerPressed.OuterSingleton, Z_Construct_UClass_UInputTriggerPressed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerPressed.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerPressed>()
	{
		return UInputTriggerPressed::StaticClass();
	}
	UInputTriggerPressed::UInputTriggerPressed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerPressed);
	UInputTriggerPressed::~UInputTriggerPressed() {}
	void UInputTriggerReleased::StaticRegisterNativesUInputTriggerReleased()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerReleased);
	UClass* Z_Construct_UClass_UInputTriggerReleased_NoRegister()
	{
		return UInputTriggerReleased::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerReleased_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerReleased_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerReleased_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerReleased\n\x09Trigger returns Ongoing whilst input exceeds the actuation threshold.\n\x09Trigger fires once only when input drops back below actuation threshold.\n\x09*/" },
		{ "DisplayName", "Released" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerReleased\n      Trigger returns Ongoing whilst input exceeds the actuation threshold.\n      Trigger fires once only when input drops back below actuation threshold." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerReleased_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerReleased>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerReleased_Statics::ClassParams = {
		&UInputTriggerReleased::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerReleased_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerReleased_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerReleased()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerReleased.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerReleased.OuterSingleton, Z_Construct_UClass_UInputTriggerReleased_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerReleased.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerReleased>()
	{
		return UInputTriggerReleased::StaticClass();
	}
	UInputTriggerReleased::UInputTriggerReleased(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerReleased);
	UInputTriggerReleased::~UInputTriggerReleased() {}
	void UInputTriggerHold::StaticRegisterNativesUInputTriggerHold()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerHold);
	UClass* Z_Construct_UClass_UInputTriggerHold_NoRegister()
	{
		return UInputTriggerHold::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerHold_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTimeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOneShot_MetaData[];
#endif
		static void NewProp_bIsOneShot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerHold_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTriggerTimedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerHold_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerHold\n\x09Trigger fires once input has remained actuated for HoldTimeThreshold seconds.\n\x09Trigger may optionally fire once, or repeatedly fire.\n*/" },
		{ "DisplayName", "Hold" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerHold\n      Trigger fires once input has remained actuated for HoldTimeThreshold seconds.\n      Trigger may optionally fire once, or repeatedly fire." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_HoldTimeThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// How long does the input have to be held to cause trigger?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "How long does the input have to be held to cause trigger?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_HoldTimeThreshold = { "HoldTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerHold, HoldTimeThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_HoldTimeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_HoldTimeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Should this trigger fire only once, or fire every frame once the hold time threshold is met?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Should this trigger fire only once, or fire every frame once the hold time threshold is met?" },
	};
#endif
	void Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
	{
		((UInputTriggerHold*)Obj)->bIsOneShot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputTriggerHold), &Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerHold_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_HoldTimeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerHold_Statics::NewProp_bIsOneShot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerHold_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerHold>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerHold_Statics::ClassParams = {
		&UInputTriggerHold::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerHold_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHold_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerHold_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHold_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerHold()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerHold.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerHold.OuterSingleton, Z_Construct_UClass_UInputTriggerHold_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerHold.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerHold>()
	{
		return UInputTriggerHold::StaticClass();
	}
	UInputTriggerHold::UInputTriggerHold(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerHold);
	UInputTriggerHold::~UInputTriggerHold() {}
	void UInputTriggerHoldAndRelease::StaticRegisterNativesUInputTriggerHoldAndRelease()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerHoldAndRelease);
	UClass* Z_Construct_UClass_UInputTriggerHoldAndRelease_NoRegister()
	{
		return UInputTriggerHoldAndRelease::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTimeThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTriggerTimedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerHoldAndRelease\n\x09Trigger fires when input is released after having been actuated for at least HoldTimeThreshold seconds.\n*/" },
		{ "DisplayName", "Hold And Release" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerHoldAndRelease\n      Trigger fires when input is released after having been actuated for at least HoldTimeThreshold seconds." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::NewProp_HoldTimeThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// How long does the input have to be held to cause trigger?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "How long does the input have to be held to cause trigger?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::NewProp_HoldTimeThreshold = { "HoldTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerHoldAndRelease, HoldTimeThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::NewProp_HoldTimeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::NewProp_HoldTimeThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::NewProp_HoldTimeThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerHoldAndRelease>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::ClassParams = {
		&UInputTriggerHoldAndRelease::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerHoldAndRelease()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.OuterSingleton, Z_Construct_UClass_UInputTriggerHoldAndRelease_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerHoldAndRelease.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerHoldAndRelease>()
	{
		return UInputTriggerHoldAndRelease::StaticClass();
	}
	UInputTriggerHoldAndRelease::UInputTriggerHoldAndRelease(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerHoldAndRelease);
	UInputTriggerHoldAndRelease::~UInputTriggerHoldAndRelease() {}
	void UInputTriggerTap::StaticRegisterNativesUInputTriggerTap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerTap);
	UClass* Z_Construct_UClass_UInputTriggerTap_NoRegister()
	{
		return UInputTriggerTap::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerTap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TapReleaseTimeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TapReleaseTimeThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerTap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTriggerTimedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerTap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerTap\n\x09Input must be actuated then released within TapReleaseTimeThreshold seconds to trigger.\n*/" },
		{ "DisplayName", "Tap" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerTap\n      Input must be actuated then released within TapReleaseTimeThreshold seconds to trigger." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerTap_Statics::NewProp_TapReleaseTimeThreshold_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// Release within this time-frame to trigger a tap\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Release within this time-frame to trigger a tap" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerTap_Statics::NewProp_TapReleaseTimeThreshold = { "TapReleaseTimeThreshold", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerTap, TapReleaseTimeThreshold), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerTap_Statics::NewProp_TapReleaseTimeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTap_Statics::NewProp_TapReleaseTimeThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerTap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerTap_Statics::NewProp_TapReleaseTimeThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerTap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerTap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerTap_Statics::ClassParams = {
		&UInputTriggerTap::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerTap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTap_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerTap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerTap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerTap()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerTap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerTap.OuterSingleton, Z_Construct_UClass_UInputTriggerTap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerTap.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerTap>()
	{
		return UInputTriggerTap::StaticClass();
	}
	UInputTriggerTap::UInputTriggerTap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerTap);
	UInputTriggerTap::~UInputTriggerTap() {}
	void UInputTriggerPulse::StaticRegisterNativesUInputTriggerPulse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerPulse);
	UClass* Z_Construct_UClass_UInputTriggerPulse_NoRegister()
	{
		return UInputTriggerPulse::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerPulse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnStart_MetaData[];
#endif
		static void NewProp_bTriggerOnStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TriggerLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerPulse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTriggerTimedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerPulse_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerPulse\n\x09Trigger that fires at an Interval, in seconds, while input is actuated. \n\x09Note:\x09""Completed only fires when the repeat limit is reached or when input is released immediately after being triggered.\n\x09\x09\x09Otherwise, Canceled is fired when input is released.\n\x09*/" },
		{ "DisplayName", "Pulse" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerPulse\n      Trigger that fires at an Interval, in seconds, while input is actuated.\n      Note:   Completed only fires when the repeat limit is reached or when input is released immediately after being triggered.\n                      Otherwise, Canceled is fired when input is released." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Whether to trigger when the input first exceeds the actuation threshold or wait for the first interval?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Whether to trigger when the input first exceeds the actuation threshold or wait for the first interval?" },
	};
#endif
	void Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart_SetBit(void* Obj)
	{
		((UInputTriggerPulse*)Obj)->bTriggerOnStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart = { "bTriggerOnStart", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputTriggerPulse), &Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// How long between each trigger fire while input is held, in seconds?\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "How long between each trigger fire while input is held, in seconds?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerPulse, Interval), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_Interval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_Interval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_TriggerLimit_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// How many times can the trigger fire while input is held? (0 = no limit)\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "How many times can the trigger fire while input is held? (0 = no limit)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_TriggerLimit = { "TriggerLimit", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerPulse, TriggerLimit), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_TriggerLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_TriggerLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerPulse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_bTriggerOnStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerPulse_Statics::NewProp_TriggerLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerPulse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerPulse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerPulse_Statics::ClassParams = {
		&UInputTriggerPulse::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerPulse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPulse_Statics::PropPointers),
		0,
		0x400830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerPulse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerPulse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerPulse()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerPulse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerPulse.OuterSingleton, Z_Construct_UClass_UInputTriggerPulse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerPulse.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerPulse>()
	{
		return UInputTriggerPulse::StaticClass();
	}
	UInputTriggerPulse::UInputTriggerPulse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerPulse);
	UInputTriggerPulse::~UInputTriggerPulse() {}
	void UInputTriggerChordAction::StaticRegisterNativesUInputTriggerChordAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerChordAction);
	UClass* Z_Construct_UClass_UInputTriggerChordAction_NoRegister()
	{
		return UInputTriggerChordAction::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerChordAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChordAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChordAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerChordAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerChordAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputTriggerChordAction\n * Applies a chord action that must be triggering for this trigger's action to trigger\n*/" },
		{ "DisplayName", "Chorded Action" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "NotInputConfigurable", "true" },
		{ "ToolTip", "UInputTriggerChordAction\nApplies a chord action that must be triggering for this trigger's action to trigger" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerChordAction_Statics::NewProp_ChordAction_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// The action that must be triggering for this trigger's action to trigger\n" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The action that must be triggering for this trigger's action to trigger" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputTriggerChordAction_Statics::NewProp_ChordAction = { "ChordAction", nullptr, (EPropertyFlags)0x0014000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerChordAction, ChordAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerChordAction_Statics::NewProp_ChordAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerChordAction_Statics::NewProp_ChordAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerChordAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerChordAction_Statics::NewProp_ChordAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerChordAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerChordAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerChordAction_Statics::ClassParams = {
		&UInputTriggerChordAction::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerChordAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerChordAction_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerChordAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerChordAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerChordAction()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerChordAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerChordAction.OuterSingleton, Z_Construct_UClass_UInputTriggerChordAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerChordAction.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerChordAction>()
	{
		return UInputTriggerChordAction::StaticClass();
	}
	UInputTriggerChordAction::UInputTriggerChordAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerChordAction);
	UInputTriggerChordAction::~UInputTriggerChordAction() {}
	void UInputTriggerChordBlocker::StaticRegisterNativesUInputTriggerChordBlocker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerChordBlocker);
	UClass* Z_Construct_UClass_UInputTriggerChordBlocker_NoRegister()
	{
		return UInputTriggerChordBlocker::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerChordBlocker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerChordBlocker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTriggerChordAction,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerChordBlocker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UInputTriggerChordBlocker\n\x09""Automatically instantiated  to block mappings that are masked by a UInputTriggerChordAction chord from firing whilst the chording key is active.\n\x09NOTE: Do not attempt to add these manually.\n*/" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "UInputTriggerChordBlocker\n      Automatically instantiated  to block mappings that are masked by a UInputTriggerChordAction chord from firing whilst the chording key is active.\n      NOTE: Do not attempt to add these manually." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerChordBlocker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerChordBlocker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerChordBlocker_Statics::ClassParams = {
		&UInputTriggerChordBlocker::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x440830A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerChordBlocker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerChordBlocker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerChordBlocker()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerChordBlocker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerChordBlocker.OuterSingleton, Z_Construct_UClass_UInputTriggerChordBlocker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerChordBlocker.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerChordBlocker>()
	{
		return UInputTriggerChordBlocker::StaticClass();
	}
	UInputTriggerChordBlocker::UInputTriggerChordBlocker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerChordBlocker);
	UInputTriggerChordBlocker::~UInputTriggerChordBlocker() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputComboStepData;
class UScriptStruct* FInputComboStepData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputComboStepData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputComboStepData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputComboStepData, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputComboStepData"));
	}
	return Z_Registration_Info_UScriptStruct_InputComboStepData.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputComboStepData>()
{
	return FInputComboStepData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputComboStepData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboStepAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComboStepAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboStepCompletionStates_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComboStepCompletionStates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToPressKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToPressKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputComboStepData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputComboStepData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepAction_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// The action that must be completed (according to Combo Step Completion States) to progress the combo\n" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The action that must be completed (according to Combo Step Completion States) to progress the combo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepAction = { "ComboStepAction", nullptr, (EPropertyFlags)0x0014000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputComboStepData, ComboStepAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepCompletionStates_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EnhancedInput.ETriggerEvent" },
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Trigger events that will complete this step - what events from this action should progress the combo\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Trigger events that will complete this step - what events from this action should progress the combo" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepCompletionStates = { "ComboStepCompletionStates", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputComboStepData, ComboStepCompletionStates), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepCompletionStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepCompletionStates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_TimeToPressKey_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "/**\n\x09 * Time to press the key before combo is cancelled - starts once the previous step in the combo is completed\n\x09 * Note: This can be safely ignored for the first action in the combo\n\x09 */" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Time to press the key before combo is cancelled - starts once the previous step in the combo is completed\nNote: This can be safely ignored for the first action in the combo" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_TimeToPressKey = { "TimeToPressKey", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputComboStepData, TimeToPressKey), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_TimeToPressKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_TimeToPressKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputComboStepData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_ComboStepCompletionStates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewProp_TimeToPressKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputComboStepData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"InputComboStepData",
		sizeof(FInputComboStepData),
		alignof(FInputComboStepData),
		Z_Construct_UScriptStruct_FInputComboStepData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputComboStepData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputComboStepData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputComboStepData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputComboStepData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputComboStepData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputComboStepData.InnerSingleton, Z_Construct_UScriptStruct_FInputComboStepData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputComboStepData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputCancelAction;
class UScriptStruct* FInputCancelAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputCancelAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputCancelAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputCancelAction, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputCancelAction"));
	}
	return Z_Registration_Info_UScriptStruct_InputCancelAction.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputCancelAction>()
{
	return FInputCancelAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputCancelAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancelAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CancelAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancellationStates_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CancellationStates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCancelAction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputCancelAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancelAction_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// The action that must be completed (according to Cancellation States) to cancel the combo\n" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The action that must be completed (according to Cancellation States) to cancel the combo" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancelAction = { "CancelAction", nullptr, (EPropertyFlags)0x0014000000000805, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputCancelAction, CancelAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancelAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancelAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancellationStates_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/EnhancedInput.ETriggerEvent" },
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Trigger events for this action that will cancel the combo - what events from this action should cancel the combo\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Trigger events for this action that will cancel the combo - what events from this action should cancel the combo" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancellationStates = { "CancellationStates", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputCancelAction, CancellationStates), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancellationStates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancellationStates_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputCancelAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancelAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewProp_CancellationStates,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputCancelAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"InputCancelAction",
		sizeof(FInputCancelAction),
		alignof(FInputCancelAction),
		Z_Construct_UScriptStruct_FInputCancelAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCancelAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputCancelAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputCancelAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputCancelAction()
	{
		if (!Z_Registration_Info_UScriptStruct_InputCancelAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputCancelAction.InnerSingleton, Z_Construct_UScriptStruct_FInputCancelAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputCancelAction.InnerSingleton;
	}
	void UInputTriggerCombo::StaticRegisterNativesUInputTriggerCombo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputTriggerCombo);
	UClass* Z_Construct_UClass_UInputTriggerCombo_NoRegister()
	{
		return UInputTriggerCombo::StaticClass();
	}
	struct Z_Construct_UClass_UInputTriggerCombo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentComboStepIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentComboStepIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTimeBetweenComboSteps_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTimeBetweenComboSteps;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComboActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComboActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComboActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputCancelActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCancelActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputCancelActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputTriggerCombo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerCombo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputTriggerCombo\n * All actions in the combo array must be completed (based on combo completion event specified - triggered, completed, etc.) to trigger the action this trigger is on.\n * Actions must also be completed in the order specified by the combo actions array (starting at index 0).\n * Note: This will only trigger for one frame before resetting the combo trigger's progress \n */" },
		{ "DisplayName", "Combo (Beta)" },
		{ "IncludePath", "InputTriggers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "NotInputConfigurable", "true" },
		{ "ToolTip", "UInputTriggerCombo\nAll actions in the combo array must be completed (based on combo completion event specified - triggered, completed, etc.) to trigger the action this trigger is on.\nActions must also be completed in the order specified by the combo actions array (starting at index 0).\nNote: This will only trigger for one frame before resetting the combo trigger's progress" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentComboStepIndex_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Keeps track of what action we're currently at in the combo\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Keeps track of what action we're currently at in the combo" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentComboStepIndex = { "CurrentComboStepIndex", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerCombo, CurrentComboStepIndex), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentComboStepIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentComboStepIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Time elapsed between last combo InputAction trigger and current time\n" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Time elapsed between last combo InputAction trigger and current time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentTimeBetweenComboSteps = { "CurrentTimeBetweenComboSteps", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerCombo, CurrentTimeBetweenComboSteps), METADATA_PARAMS(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentTimeBetweenComboSteps_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions_Inner = { "ComboActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputComboStepData, METADATA_PARAMS(nullptr, 0) }; // 1161228069
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "/**\n\x09 * List of input actions that need to be completed (according to Combo Step Completion States) to trigger this action.\n\x09 * Input actions must be triggered in order (starting at index 0) to count towards the triggering of the combo.\n\x09 */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "TitleProperty", "ComboStepAction" },
		{ "ToolTip", "List of input actions that need to be completed (according to Combo Step Completion States) to trigger this action.\nInput actions must be triggered in order (starting at index 0) to count towards the triggering of the combo." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions = { "ComboActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerCombo, ComboActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions_MetaData)) }; // 1161228069
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions_Inner = { "InputCancelActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInputCancelAction, METADATA_PARAMS(nullptr, 0) }; // 3992859293
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions_MetaData[] = {
		{ "Category", "Trigger Settings" },
		{ "Comment", "// Actions that will cancel the combo if they are completed (according to Cancellation States)\n" },
		{ "DisplayName", "Cancel Actions" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/InputTriggers.h" },
		{ "ToolTip", "Actions that will cancel the combo if they are completed (according to Cancellation States)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions = { "InputCancelActions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputTriggerCombo, InputCancelActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions_MetaData)) }; // 3992859293
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputTriggerCombo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentComboStepIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_CurrentTimeBetweenComboSteps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_ComboActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputTriggerCombo_Statics::NewProp_InputCancelActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputTriggerCombo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputTriggerCombo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputTriggerCombo_Statics::ClassParams = {
		&UInputTriggerCombo::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputTriggerCombo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UInputTriggerCombo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputTriggerCombo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputTriggerCombo()
	{
		if (!Z_Registration_Info_UClass_UInputTriggerCombo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputTriggerCombo.OuterSingleton, Z_Construct_UClass_UInputTriggerCombo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputTriggerCombo.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputTriggerCombo>()
	{
		return UInputTriggerCombo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputTriggerCombo);
	UInputTriggerCombo::~UInputTriggerCombo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::EnumInfo[] = {
		{ ETriggerState_StaticEnum, TEXT("ETriggerState"), &Z_Registration_Info_UEnum_ETriggerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2827134242U) },
		{ ETriggerEvent_StaticEnum, TEXT("ETriggerEvent"), &Z_Registration_Info_UEnum_ETriggerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 983997710U) },
		{ ETriggerType_StaticEnum, TEXT("ETriggerType"), &Z_Registration_Info_UEnum_ETriggerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1732978716U) },
		{ ETriggerEventsSupported_StaticEnum, TEXT("ETriggerEventsSupported"), &Z_Registration_Info_UEnum_ETriggerEventsSupported, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2875932700U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ScriptStructInfo[] = {
		{ FInputComboStepData::StaticStruct, Z_Construct_UScriptStruct_FInputComboStepData_Statics::NewStructOps, TEXT("InputComboStepData"), &Z_Registration_Info_UScriptStruct_InputComboStepData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputComboStepData), 1161228069U) },
		{ FInputCancelAction::StaticStruct, Z_Construct_UScriptStruct_FInputCancelAction_Statics::NewStructOps, TEXT("InputCancelAction"), &Z_Registration_Info_UScriptStruct_InputCancelAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputCancelAction), 3992859293U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputTrigger, UInputTrigger::StaticClass, TEXT("UInputTrigger"), &Z_Registration_Info_UClass_UInputTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTrigger), 861575018U) },
		{ Z_Construct_UClass_UInputTriggerTimedBase, UInputTriggerTimedBase::StaticClass, TEXT("UInputTriggerTimedBase"), &Z_Registration_Info_UClass_UInputTriggerTimedBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerTimedBase), 1350119016U) },
		{ Z_Construct_UClass_UInputTriggerDown, UInputTriggerDown::StaticClass, TEXT("UInputTriggerDown"), &Z_Registration_Info_UClass_UInputTriggerDown, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerDown), 528421575U) },
		{ Z_Construct_UClass_UInputTriggerPressed, UInputTriggerPressed::StaticClass, TEXT("UInputTriggerPressed"), &Z_Registration_Info_UClass_UInputTriggerPressed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerPressed), 3193505601U) },
		{ Z_Construct_UClass_UInputTriggerReleased, UInputTriggerReleased::StaticClass, TEXT("UInputTriggerReleased"), &Z_Registration_Info_UClass_UInputTriggerReleased, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerReleased), 1957410035U) },
		{ Z_Construct_UClass_UInputTriggerHold, UInputTriggerHold::StaticClass, TEXT("UInputTriggerHold"), &Z_Registration_Info_UClass_UInputTriggerHold, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerHold), 3151652472U) },
		{ Z_Construct_UClass_UInputTriggerHoldAndRelease, UInputTriggerHoldAndRelease::StaticClass, TEXT("UInputTriggerHoldAndRelease"), &Z_Registration_Info_UClass_UInputTriggerHoldAndRelease, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerHoldAndRelease), 987969339U) },
		{ Z_Construct_UClass_UInputTriggerTap, UInputTriggerTap::StaticClass, TEXT("UInputTriggerTap"), &Z_Registration_Info_UClass_UInputTriggerTap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerTap), 4128750188U) },
		{ Z_Construct_UClass_UInputTriggerPulse, UInputTriggerPulse::StaticClass, TEXT("UInputTriggerPulse"), &Z_Registration_Info_UClass_UInputTriggerPulse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerPulse), 3116344080U) },
		{ Z_Construct_UClass_UInputTriggerChordAction, UInputTriggerChordAction::StaticClass, TEXT("UInputTriggerChordAction"), &Z_Registration_Info_UClass_UInputTriggerChordAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerChordAction), 636647937U) },
		{ Z_Construct_UClass_UInputTriggerChordBlocker, UInputTriggerChordBlocker::StaticClass, TEXT("UInputTriggerChordBlocker"), &Z_Registration_Info_UClass_UInputTriggerChordBlocker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerChordBlocker), 1880607188U) },
		{ Z_Construct_UClass_UInputTriggerCombo, UInputTriggerCombo::StaticClass, TEXT("UInputTriggerCombo"), &Z_Registration_Info_UClass_UInputTriggerCombo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputTriggerCombo), 2370511440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_3317727340(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputTriggers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
