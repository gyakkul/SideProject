// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "Framework/Commands/InputChord.h"
#include "Input/Events.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetInputLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESlateGesture();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateModifierKeysState();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationAction();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESlateGesture;
	static UEnum* ESlateGesture_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESlateGesture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESlateGesture"));
		}
		return Z_Registration_Info_UEnum_ESlateGesture.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESlateGesture>()
	{
		return ESlateGesture_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESlateGesture_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enumerators[] = {
		{ "ESlateGesture::None", (int64)ESlateGesture::None },
		{ "ESlateGesture::Scroll", (int64)ESlateGesture::Scroll },
		{ "ESlateGesture::Magnify", (int64)ESlateGesture::Magnify },
		{ "ESlateGesture::Swipe", (int64)ESlateGesture::Swipe },
		{ "ESlateGesture::Rotate", (int64)ESlateGesture::Rotate },
		{ "ESlateGesture::LongPress", (int64)ESlateGesture::LongPress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LongPress.Name", "ESlateGesture::LongPress" },
		{ "Magnify.Name", "ESlateGesture::Magnify" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "None.Name", "ESlateGesture::None" },
		{ "Rotate.Name", "ESlateGesture::Rotate" },
		{ "Scroll.Name", "ESlateGesture::Scroll" },
		{ "Swipe.Name", "ESlateGesture::Swipe" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESlateGesture_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESlateGesture",
		"ESlateGesture",
		Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESlateGesture_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESlateGesture()
	{
		if (!Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton, Z_Construct_UEnum_Engine_ESlateGesture_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESlateGesture.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateModifierKeysState;
class UScriptStruct* FSlateModifierKeysState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateModifierKeysState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SlateModifierKeysState"));
	}
	return Z_Registration_Info_UScriptStruct_SlateModifierKeysState.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSlateModifierKeysState>()
{
	return FSlateModifierKeysState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierKeysStateMask_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifierKeysStateMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A structure which captures the application's modifier key states (shift, alt, ctrl, etc.) */" },
		{ "DisplayName", "Modifier Keys State" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "A structure which captures the application's modifier key states (shift, alt, ctrl, etc.)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateModifierKeysState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask = { "ModifierKeysStateMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSlateModifierKeysState, ModifierKeysStateMask), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewProp_ModifierKeysStateMask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SlateModifierKeysState",
		sizeof(FSlateModifierKeysState),
		alignof(FSlateModifierKeysState),
		Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateModifierKeysState()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton, Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateModifierKeysState.InnerSingleton;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetGestureDelta)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureDelta(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetGestureType)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESlateGesture*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetGestureType(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_IsTouchEvent)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsTouchEvent(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetTouchpadIndex)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetTouchpadIndex(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetPointerIndex)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetPointerIndex(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetUserIndex)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetUserIndex(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetWheelDelta)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetWheelDelta(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetEffectingButton)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetEffectingButton(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_IsMouseButtonDown)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_GET_STRUCT(FKey,Z_Param_MouseButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::PointerEvent_IsMouseButtonDown(Z_Param_Out_Input,Z_Param_MouseButton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetCursorDelta)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetCursorDelta(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetLastScreenSpacePosition(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition)
	{
		P_GET_STRUCT_REF(FPointerEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execGetAnalogValue)
	{
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UKismetInputLibrary::GetAnalogValue(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execGetUserIndex)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UKismetInputLibrary::GetUserIndex(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execGetKey)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=UKismetInputLibrary::GetKey(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputChord_GetDisplayName)
	{
		P_GET_STRUCT_REF(FInputChord,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetInputLibrary::InputChord_GetDisplayName(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execGetModifierKeysState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateModifierKeysState*)Z_Param__Result=UKismetInputLibrary::GetModifierKeysState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsCommandDown)
	{
		P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsCommandDown(Z_Param_Out_KeysState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsAltDown)
	{
		P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsAltDown(Z_Param_Out_KeysState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsControlDown)
	{
		P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsControlDown(Z_Param_Out_KeysState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execModifierKeysState_IsShiftDown)
	{
		P_GET_STRUCT_REF(FSlateModifierKeysState,Z_Param_Out_KeysState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::ModifierKeysState_IsShiftDown(Z_Param_Out_KeysState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightCommandDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightCommandDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftCommandDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftCommandDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsCommandDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsCommandDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightAltDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightAltDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftAltDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftAltDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsAltDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsAltDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightControlDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightControlDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftControlDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftControlDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsControlDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsControlDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRightShiftDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRightShiftDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsLeftShiftDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsLeftShiftDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsShiftDown)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsShiftDown(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execInputEvent_IsRepeat)
	{
		P_GET_STRUCT_REF(FInputEvent,Z_Param_Out_Input);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::InputEvent_IsRepeat(Z_Param_Out_Input);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetDisplayName)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_UBOOL(Z_Param_bLongDisplayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetInputLibrary::Key_GetDisplayName(Z_Param_Out_Key,Z_Param_bLongDisplayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog)
	{
		P_GET_STRUCT_REF(FAnalogInputEvent,Z_Param_Out_InAnalogEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUINavigation*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationDirectionFromAnalog(Z_Param_Out_InAnalogEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationDirectionFromKey)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUINavigation*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationDirectionFromKey(Z_Param_Out_InKeyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationActionFromKey)
	{
		P_GET_STRUCT_REF(FKeyEvent,Z_Param_Out_InKeyEvent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUINavigationAction*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationActionFromKey(Z_Param_Out_InKeyEvent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_GetNavigationAction)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_InKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EUINavigationAction*)Z_Param__Result=UKismetInputLibrary::Key_GetNavigationAction(Z_Param_Out_InKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsValid)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsValid(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsDigital)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsDigital(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAnalog)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAnalog(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsButtonAxis)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsButtonAxis(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis3D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis3D(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis2D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis2D(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsAxis1D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsAxis1D(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsVectorAxis)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsVectorAxis(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsKeyboardKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsKeyboardKey(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsMouseButton)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsMouseButton(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsGamepadKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsGamepadKey(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execKey_IsModifierKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::Key_IsModifierKey(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execEqualEqual_InputChordInputChord)
	{
		P_GET_STRUCT(FInputChord,Z_Param_A);
		P_GET_STRUCT(FInputChord,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_InputChordInputChord(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execEqualEqual_KeyKey)
	{
		P_GET_STRUCT(FKey,Z_Param_A);
		P_GET_STRUCT(FKey,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetInputLibrary::EqualEqual_KeyKey(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetInputLibrary::execCalibrateTilt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetInputLibrary::CalibrateTilt();
		P_NATIVE_END;
	}
	void UKismetInputLibrary::StaticRegisterNativesUKismetInputLibrary()
	{
		UClass* Class = UKismetInputLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalibrateTilt", &UKismetInputLibrary::execCalibrateTilt },
			{ "EqualEqual_InputChordInputChord", &UKismetInputLibrary::execEqualEqual_InputChordInputChord },
			{ "EqualEqual_KeyKey", &UKismetInputLibrary::execEqualEqual_KeyKey },
			{ "GetAnalogValue", &UKismetInputLibrary::execGetAnalogValue },
			{ "GetKey", &UKismetInputLibrary::execGetKey },
			{ "GetModifierKeysState", &UKismetInputLibrary::execGetModifierKeysState },
			{ "GetUserIndex", &UKismetInputLibrary::execGetUserIndex },
			{ "InputChord_GetDisplayName", &UKismetInputLibrary::execInputChord_GetDisplayName },
			{ "InputEvent_IsAltDown", &UKismetInputLibrary::execInputEvent_IsAltDown },
			{ "InputEvent_IsCommandDown", &UKismetInputLibrary::execInputEvent_IsCommandDown },
			{ "InputEvent_IsControlDown", &UKismetInputLibrary::execInputEvent_IsControlDown },
			{ "InputEvent_IsLeftAltDown", &UKismetInputLibrary::execInputEvent_IsLeftAltDown },
			{ "InputEvent_IsLeftCommandDown", &UKismetInputLibrary::execInputEvent_IsLeftCommandDown },
			{ "InputEvent_IsLeftControlDown", &UKismetInputLibrary::execInputEvent_IsLeftControlDown },
			{ "InputEvent_IsLeftShiftDown", &UKismetInputLibrary::execInputEvent_IsLeftShiftDown },
			{ "InputEvent_IsRepeat", &UKismetInputLibrary::execInputEvent_IsRepeat },
			{ "InputEvent_IsRightAltDown", &UKismetInputLibrary::execInputEvent_IsRightAltDown },
			{ "InputEvent_IsRightCommandDown", &UKismetInputLibrary::execInputEvent_IsRightCommandDown },
			{ "InputEvent_IsRightControlDown", &UKismetInputLibrary::execInputEvent_IsRightControlDown },
			{ "InputEvent_IsRightShiftDown", &UKismetInputLibrary::execInputEvent_IsRightShiftDown },
			{ "InputEvent_IsShiftDown", &UKismetInputLibrary::execInputEvent_IsShiftDown },
			{ "Key_GetDisplayName", &UKismetInputLibrary::execKey_GetDisplayName },
			{ "Key_GetNavigationAction", &UKismetInputLibrary::execKey_GetNavigationAction },
			{ "Key_GetNavigationActionFromKey", &UKismetInputLibrary::execKey_GetNavigationActionFromKey },
			{ "Key_GetNavigationDirectionFromAnalog", &UKismetInputLibrary::execKey_GetNavigationDirectionFromAnalog },
			{ "Key_GetNavigationDirectionFromKey", &UKismetInputLibrary::execKey_GetNavigationDirectionFromKey },
			{ "Key_IsAnalog", &UKismetInputLibrary::execKey_IsAnalog },
			{ "Key_IsAxis1D", &UKismetInputLibrary::execKey_IsAxis1D },
			{ "Key_IsAxis2D", &UKismetInputLibrary::execKey_IsAxis2D },
			{ "Key_IsAxis3D", &UKismetInputLibrary::execKey_IsAxis3D },
			{ "Key_IsButtonAxis", &UKismetInputLibrary::execKey_IsButtonAxis },
			{ "Key_IsDigital", &UKismetInputLibrary::execKey_IsDigital },
			{ "Key_IsGamepadKey", &UKismetInputLibrary::execKey_IsGamepadKey },
			{ "Key_IsKeyboardKey", &UKismetInputLibrary::execKey_IsKeyboardKey },
			{ "Key_IsModifierKey", &UKismetInputLibrary::execKey_IsModifierKey },
			{ "Key_IsMouseButton", &UKismetInputLibrary::execKey_IsMouseButton },
			{ "Key_IsValid", &UKismetInputLibrary::execKey_IsValid },
			{ "Key_IsVectorAxis", &UKismetInputLibrary::execKey_IsVectorAxis },
			{ "ModifierKeysState_IsAltDown", &UKismetInputLibrary::execModifierKeysState_IsAltDown },
			{ "ModifierKeysState_IsCommandDown", &UKismetInputLibrary::execModifierKeysState_IsCommandDown },
			{ "ModifierKeysState_IsControlDown", &UKismetInputLibrary::execModifierKeysState_IsControlDown },
			{ "ModifierKeysState_IsShiftDown", &UKismetInputLibrary::execModifierKeysState_IsShiftDown },
			{ "PointerEvent_GetCursorDelta", &UKismetInputLibrary::execPointerEvent_GetCursorDelta },
			{ "PointerEvent_GetEffectingButton", &UKismetInputLibrary::execPointerEvent_GetEffectingButton },
			{ "PointerEvent_GetGestureDelta", &UKismetInputLibrary::execPointerEvent_GetGestureDelta },
			{ "PointerEvent_GetGestureType", &UKismetInputLibrary::execPointerEvent_GetGestureType },
			{ "PointerEvent_GetLastScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetLastScreenSpacePosition },
			{ "PointerEvent_GetPointerIndex", &UKismetInputLibrary::execPointerEvent_GetPointerIndex },
			{ "PointerEvent_GetScreenSpacePosition", &UKismetInputLibrary::execPointerEvent_GetScreenSpacePosition },
			{ "PointerEvent_GetTouchpadIndex", &UKismetInputLibrary::execPointerEvent_GetTouchpadIndex },
			{ "PointerEvent_GetUserIndex", &UKismetInputLibrary::execPointerEvent_GetUserIndex },
			{ "PointerEvent_GetWheelDelta", &UKismetInputLibrary::execPointerEvent_GetWheelDelta },
			{ "PointerEvent_IsMouseButtonDown", &UKismetInputLibrary::execPointerEvent_IsMouseButtonDown },
			{ "PointerEvent_IsTouchEvent", &UKismetInputLibrary::execPointerEvent_IsTouchEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|MotionTracking" },
		{ "Comment", "/** Calibrate the tilt for the input device */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Calibrate the tilt for the input device" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "CalibrateTilt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics
	{
		struct KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms
		{
			FInputChord A;
			FInputChord B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, A), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms, B), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) }; // 2392822822
	void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09* Test if the input chords are equal (A == B)\n\x09* @param A - The chord to compare against\n\x09* @param B - The chord to compare\n\x09* Returns true if the chords are equal, false otherwise\n\x09*/" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (InputChord)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input chords are equal (A == B)\n@param A - The chord to compare against\n@param B - The chord to compare\nReturns true if the chords are equal, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_InputChordInputChord", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::KismetInputLibrary_eventEqualEqual_InputChordInputChord_Parms), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics
	{
		struct KismetInputLibrary_eventEqualEqual_KeyKey_Parms
		{
			FKey A;
			FKey B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, A), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventEqualEqual_KeyKey_Parms, B), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventEqualEqual_KeyKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventEqualEqual_KeyKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Test if the input key are equal (A == B)\n\x09 * @param A - The key to compare against\n\x09 * @param B - The key to compare\n\x09 * Returns true if the key are equal, false otherwise\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (Key)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Test if the input key are equal (A == B)\n@param A - The key to compare against\n@param B - The key to compare\nReturns true if the key are equal, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "EqualEqual_KeyKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::KismetInputLibrary_eventEqualEqual_KeyKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics
	{
		struct KismetInputLibrary_eventGetAnalogValue_Parms
		{
			FAnalogInputEvent Input;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, Input), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input_MetaData)) }; // 4262370743
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetAnalogValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetAnalogValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::KismetInputLibrary_eventGetAnalogValue_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics
	{
		struct KismetInputLibrary_eventGetKey_Parms
		{
			FKeyEvent Input;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input_MetaData)) }; // 1482041026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/**\n\x09 * Returns the key for this event.\n\x09 *\n\x09 * @return  Key name\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the key for this event.\n\n@return  Key name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::KismetInputLibrary_eventGetKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics
	{
		struct KismetInputLibrary_eventGetModifierKeysState_Parms
		{
			FSlateModifierKeysState ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetModifierKeysState_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(nullptr, 0) }; // 2554259254
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/** Returns a snapshot of the cached modifier-keys state for the application. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns a snapshot of the cached modifier-keys state for the application." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetModifierKeysState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::KismetInputLibrary_eventGetModifierKeysState_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics
	{
		struct KismetInputLibrary_eventGetUserIndex_Parms
		{
			FKeyEvent Input;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input_MetaData)) }; // 1482041026
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventGetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "GetUserIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::KismetInputLibrary_eventGetUserIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics
	{
		struct KismetInputLibrary_eventInputChord_GetDisplayName_Parms
		{
			FInputChord Key;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key_MetaData)) }; // 2392822822
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputChord_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/** @return The display name of the input chord */" },
		{ "DisplayName", "Get Input Chord Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "@return The display name of the input chord" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputChord_GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::KismetInputLibrary_eventInputChord_GetDisplayName_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either alt key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::KismetInputLibrary_eventInputEvent_IsAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either command key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsCommandDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either control key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsControlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::KismetInputLibrary_eventInputEvent_IsControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left alt key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left command key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftCommandDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftControlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Left Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left shift key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsLeftShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsLeftShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRepeat_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRepeat_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRepeat_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns whether or not this character is an auto-repeated keystroke\n\x09 */" },
		{ "DisplayName", "Is Repeat" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns whether or not this character is an auto-repeated keystroke" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRepeat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::KismetInputLibrary_eventInputEvent_IsRepeat_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right alt key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right alt key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::KismetInputLibrary_eventInputEvent_IsRightAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right command key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right command key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightCommandDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::KismetInputLibrary_eventInputEvent_IsRightCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if left control key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if left control key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightControlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::KismetInputLibrary_eventInputEvent_IsRightControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if right shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Right Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if right shift key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsRightShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsRightShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics
	{
		struct KismetInputLibrary_eventInputEvent_IsShiftDown_Parms
		{
			FInputEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms, Input), Z_Construct_UScriptStruct_FInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input_MetaData)) }; // 2771026803
	void Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventInputEvent_IsShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|InputEvent" },
		{ "Comment", "/**\n\x09 * Returns true if either shift key was down when this event occurred\n\x09 */" },
		{ "DisplayName", "Is Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either shift key was down when this event occurred" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "InputEvent_IsShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::KismetInputLibrary_eventInputEvent_IsShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics
	{
		struct KismetInputLibrary_eventKey_GetDisplayName_Parms
		{
			FKey Key;
			bool bLongDisplayName;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_bLongDisplayName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongDisplayName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_GetDisplayName_Parms*)Obj)->bLongDisplayName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName = { "bLongDisplayName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_GetDisplayName_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_bLongDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns the display name of the key.\n\x09 */" },
		{ "CPP_Default_bLongDisplayName", "true" },
		{ "DisplayName", "Get Key Display Name" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the display name of the key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::KismetInputLibrary_eventKey_GetDisplayName_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationAction_Parms
		{
			FKey InKey;
			EUINavigationAction ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKey;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey = { "InKey", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, InKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey_MetaData)) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationAction_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigationAction, METADATA_PARAMS(nullptr, 0) }; // 520136403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_InKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Get Key Event Navigation Action instead" },
		{ "DisplayName", "Get Key Navigation Action" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::KismetInputLibrary_eventKey_GetNavigationAction_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms
		{
			FKeyEvent InKeyEvent;
			EUINavigationAction ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent_MetaData)) }; // 1482041026
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigationAction, METADATA_PARAMS(nullptr, 0) }; // 520136403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_InKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Event Navigation Action" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationActionFromKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationActionFromKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms
		{
			FAnalogInputEvent InAnalogEvent;
			EUINavigation ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnalogEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAnalogEvent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent = { "InAnalogEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, InAnalogEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent_MetaData)) }; // 4262370743
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) }; // 637548137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_InAnalogEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|AnalogEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Analog Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromAnalog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromAnalog_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics
	{
		struct KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms
		{
			FKeyEvent InKeyEvent;
			EUINavigation ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InKeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent_MetaData)) }; // 1482041026
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) }; // 637548137
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_InKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|KeyEvent" },
		{ "Comment", "/** Returns the navigation action corresponding to this key, or Invalid if not found */" },
		{ "DisplayName", "Get Key Event Navigation Direction" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the navigation action corresponding to this key, or Invalid if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_GetNavigationDirectionFromKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::KismetInputLibrary_eventKey_GetNavigationDirectionFromKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics
	{
		struct KismetInputLibrary_eventKey_IsAnalog_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAnalog_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsAnalog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAnalog_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is an analog axis\n\x09 */" },
		{ "DisplayName", "Is Analog" },
		{ "Keywords", "IsFloatAxis, IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is an analog axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAnalog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::KismetInputLibrary_eventKey_IsAnalog_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics
	{
		struct KismetInputLibrary_eventKey_IsAxis1D_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis1D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsAxis1D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis1D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 1D (float) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 1D" },
		{ "Keywords", "IsFloatAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 1D (float) axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis1D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::KismetInputLibrary_eventKey_IsAxis1D_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics
	{
		struct KismetInputLibrary_eventKey_IsAxis2D_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsAxis2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis2D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 2D (vector) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 2D" },
		{ "Keywords", "IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 2D (vector) axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::KismetInputLibrary_eventKey_IsAxis2D_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics
	{
		struct KismetInputLibrary_eventKey_IsAxis3D_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsAxis3D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsAxis3D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsAxis3D_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 3D (vector) axis\n\x09 */" },
		{ "DisplayName", "Is Axis 3D" },
		{ "Keywords", "IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 3D (vector) axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsAxis3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::KismetInputLibrary_eventKey_IsAxis3D_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics
	{
		struct KismetInputLibrary_eventKey_IsButtonAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsButtonAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsButtonAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsButtonAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a 1D axis emulating a digital button press.\n\x09 */" },
		{ "DisplayName", "Is Button Axis" },
		{ "Keywords", "IsFloatAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a 1D axis emulating a digital button press." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsButtonAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::KismetInputLibrary_eventKey_IsButtonAxis_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics
	{
		struct KismetInputLibrary_eventKey_IsDigital_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsDigital_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsDigital_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsDigital_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a digital button press\n\x09 */" },
		{ "DisplayName", "Is Digital" },
		{ "Keywords", "IsFloatAxis, IsVectorAxis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a digital button press" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsDigital", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::KismetInputLibrary_eventKey_IsDigital_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsGamepadKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsGamepadKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsGamepadKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsGamepadKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a gamepad button\n\x09 */" },
		{ "DisplayName", "Is Gamepad Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a gamepad button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsGamepadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::KismetInputLibrary_eventKey_IsGamepadKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsKeyboardKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsKeyboardKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsKeyboardKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsKeyboardKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a keyboard button\n\x09 */" },
		{ "DisplayName", "Is Keyboard Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a keyboard button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsKeyboardKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::KismetInputLibrary_eventKey_IsKeyboardKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics
	{
		struct KismetInputLibrary_eventKey_IsModifierKey_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsModifierKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsModifierKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsModifierKey_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift\n\x09 */" },
		{ "DisplayName", "Is Modifier Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsModifierKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::KismetInputLibrary_eventKey_IsModifierKey_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics
	{
		struct KismetInputLibrary_eventKey_IsMouseButton_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsMouseButton_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsMouseButton_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsMouseButton_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a mouse button\n\x09 */" },
		{ "DisplayName", "Is Mouse Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a mouse button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsMouseButton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::KismetInputLibrary_eventKey_IsMouseButton_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics
	{
		struct KismetInputLibrary_eventKey_IsValid_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsValid_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsValid_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if this is a valid key.\n\x09 */" },
		{ "DisplayName", "Is Valid Key" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this is a valid key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::KismetInputLibrary_eventKey_IsValid_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics
	{
		struct KismetInputLibrary_eventKey_IsVectorAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventKey_IsVectorAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key_MetaData)) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventKey_IsVectorAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventKey_IsVectorAxis_Parms), &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Key" },
		{ "Comment", "/**\n\x09 * Returns true if the key is a vector axis\n\x09 * @note Deprecated. Use Is Axis 2D/3D instead.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Is Axis 2D/3D instead." },
		{ "DisplayName", "Is Vector Axis" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if the key is a vector axis\n@note Deprecated. Use Is Axis 2D/3D instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "Key_IsVectorAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::KismetInputLibrary_eventKey_IsVectorAxis_Parms), Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics
	{
		struct KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms
		{
			FSlateModifierKeysState KeysState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState_MetaData)) }; // 2554259254
	void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_KeysState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either alt key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Alt Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either alt key was down when the key state was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsAltDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::KismetInputLibrary_eventModifierKeysState_IsAltDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics
	{
		struct KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms
		{
			FSlateModifierKeysState KeysState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState_MetaData)) }; // 2554259254
	void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_KeysState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either command key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Command Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either command key was down when the key state was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsCommandDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::KismetInputLibrary_eventModifierKeysState_IsCommandDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics
	{
		struct KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms
		{
			FSlateModifierKeysState KeysState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState_MetaData)) }; // 2554259254
	void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_KeysState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either control key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Control Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either control key was down when the key state was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsControlDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::KismetInputLibrary_eventModifierKeysState_IsControlDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics
	{
		struct KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms
		{
			FSlateModifierKeysState KeysState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState = { "KeysState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms, KeysState), Z_Construct_UScriptStruct_FSlateModifierKeysState, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState_MetaData)) }; // 2554259254
	void Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_KeysState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|ModifierKeys" },
		{ "Comment", "/**\n\x09 * Returns true if either shift key was down when the key state was captured \n\x09 */" },
		{ "DisplayName", "Is Shift Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if either shift key was down when the key state was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "ModifierKeysState_IsShiftDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::KismetInputLibrary_eventModifierKeysState_IsShiftDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the distance the mouse traveled since the last event was handled. */" },
		{ "DisplayName", "Get Cursor Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the distance the mouse traveled since the last event was handled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetCursorDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::KismetInputLibrary_eventPointerEvent_GetCursorDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms
		{
			FPointerEvent Input;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Mouse button that caused this event to be raised (possibly FKey::Invalid) */" },
		{ "DisplayName", "Get Effecting Button" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse button that caused this event to be raised (possibly FKey::Invalid)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetEffectingButton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::KismetInputLibrary_eventPointerEvent_GetEffectingButton_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the change in gesture value since the last gesture event of the same type. */" },
		{ "DisplayName", "Get Gesture Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the change in gesture value since the last gesture event of the same type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::KismetInputLibrary_eventPointerEvent_GetGestureDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetGestureType_Parms
		{
			FPointerEvent Input;
			ESlateGesture ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetGestureType_Parms, ReturnValue), Z_Construct_UEnum_Engine_ESlateGesture, METADATA_PARAMS(nullptr, 0) }; // 2588686421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the type of touch gesture */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the type of touch gesture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetGestureType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::KismetInputLibrary_eventPointerEvent_GetGestureType_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the position of the cursor in screen space last time we handled an input event */" },
		{ "DisplayName", "Get Last Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the position of the cursor in screen space last time we handled an input event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetLastScreenSpacePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetLastScreenSpacePosition_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the unique identifier of the pointer (e.g., finger index) */" },
		{ "DisplayName", "Get Pointer Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the unique identifier of the pointer (e.g., finger index)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetPointerIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::KismetInputLibrary_eventPointerEvent_GetPointerIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms
		{
			FPointerEvent Input;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns The position of the cursor in screen space */" },
		{ "DisplayName", "Get Screen Space Position" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns The position of the cursor in screen space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetScreenSpacePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::KismetInputLibrary_eventPointerEvent_GetScreenSpacePosition_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user) */" },
		{ "DisplayName", "Get Touchpad Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetTouchpadIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::KismetInputLibrary_eventPointerEvent_GetTouchpadIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms
		{
			FPointerEvent Input;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns the index of the user that caused the event */" },
		{ "DisplayName", "Get User Index" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns the index of the user that caused the event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetUserIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::KismetInputLibrary_eventPointerEvent_GetUserIndex_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms
		{
			FPointerEvent Input;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** How much did the mouse wheel turn since the last mouse event */" },
		{ "DisplayName", "Get Wheel Delta" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "How much did the mouse wheel turn since the last mouse event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_GetWheelDelta", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::KismetInputLibrary_eventPointerEvent_GetWheelDelta_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms
		{
			FPointerEvent Input;
			FKey MouseButton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseButton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_MouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Mouse buttons that are currently pressed */" },
		{ "DisplayName", "Is Mouse Button Down" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Mouse buttons that are currently pressed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsMouseButtonDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::KismetInputLibrary_eventPointerEvent_IsMouseButtonDown_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics
	{
		struct KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms
		{
			FPointerEvent Input;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms, Input), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input_MetaData)) }; // 3180245440
	void Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|PointerEvent" },
		{ "Comment", "/** Returns true if this event a result from a touch (as opposed to a mouse) */" },
		{ "DisplayName", "Is Touch Event" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ToolTip", "Returns true if this event a result from a touch (as opposed to a mouse)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetInputLibrary, nullptr, "PointerEvent_IsTouchEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::KismetInputLibrary_eventPointerEvent_IsTouchEvent_Parms), Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetInputLibrary);
	UClass* Z_Construct_UClass_UKismetInputLibrary_NoRegister()
	{
		return UKismetInputLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetInputLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetInputLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetInputLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetInputLibrary_CalibrateTilt, "CalibrateTilt" }, // 2853620388
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_InputChordInputChord, "EqualEqual_InputChordInputChord" }, // 4271708740
		{ &Z_Construct_UFunction_UKismetInputLibrary_EqualEqual_KeyKey, "EqualEqual_KeyKey" }, // 1229305710
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetAnalogValue, "GetAnalogValue" }, // 2887941659
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetKey, "GetKey" }, // 1624490568
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetModifierKeysState, "GetModifierKeysState" }, // 2300563024
		{ &Z_Construct_UFunction_UKismetInputLibrary_GetUserIndex, "GetUserIndex" }, // 3664630068
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputChord_GetDisplayName, "InputChord_GetDisplayName" }, // 1850714006
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsAltDown, "InputEvent_IsAltDown" }, // 4006829374
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsCommandDown, "InputEvent_IsCommandDown" }, // 364222244
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsControlDown, "InputEvent_IsControlDown" }, // 25078059
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftAltDown, "InputEvent_IsLeftAltDown" }, // 1604468140
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftCommandDown, "InputEvent_IsLeftCommandDown" }, // 334218587
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftControlDown, "InputEvent_IsLeftControlDown" }, // 4089086790
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsLeftShiftDown, "InputEvent_IsLeftShiftDown" }, // 3060641442
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRepeat, "InputEvent_IsRepeat" }, // 3389747410
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightAltDown, "InputEvent_IsRightAltDown" }, // 723136080
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightCommandDown, "InputEvent_IsRightCommandDown" }, // 2279074973
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightControlDown, "InputEvent_IsRightControlDown" }, // 2196790454
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsRightShiftDown, "InputEvent_IsRightShiftDown" }, // 1267451646
		{ &Z_Construct_UFunction_UKismetInputLibrary_InputEvent_IsShiftDown, "InputEvent_IsShiftDown" }, // 4074694905
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetDisplayName, "Key_GetDisplayName" }, // 2050001248
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationAction, "Key_GetNavigationAction" }, // 3549122025
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationActionFromKey, "Key_GetNavigationActionFromKey" }, // 4245361881
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromAnalog, "Key_GetNavigationDirectionFromAnalog" }, // 2842477408
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_GetNavigationDirectionFromKey, "Key_GetNavigationDirectionFromKey" }, // 384140258
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAnalog, "Key_IsAnalog" }, // 210062619
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis1D, "Key_IsAxis1D" }, // 1636840065
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis2D, "Key_IsAxis2D" }, // 2095957522
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsAxis3D, "Key_IsAxis3D" }, // 840406319
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsButtonAxis, "Key_IsButtonAxis" }, // 1483774974
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsDigital, "Key_IsDigital" }, // 2420902620
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsGamepadKey, "Key_IsGamepadKey" }, // 668071895
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsKeyboardKey, "Key_IsKeyboardKey" }, // 1149581031
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsModifierKey, "Key_IsModifierKey" }, // 2788972167
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsMouseButton, "Key_IsMouseButton" }, // 1232449359
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsValid, "Key_IsValid" }, // 1936710914
		{ &Z_Construct_UFunction_UKismetInputLibrary_Key_IsVectorAxis, "Key_IsVectorAxis" }, // 2822614353
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsAltDown, "ModifierKeysState_IsAltDown" }, // 2502665846
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsCommandDown, "ModifierKeysState_IsCommandDown" }, // 3483786625
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsControlDown, "ModifierKeysState_IsControlDown" }, // 2773896637
		{ &Z_Construct_UFunction_UKismetInputLibrary_ModifierKeysState_IsShiftDown, "ModifierKeysState_IsShiftDown" }, // 1710443923
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetCursorDelta, "PointerEvent_GetCursorDelta" }, // 3178444476
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetEffectingButton, "PointerEvent_GetEffectingButton" }, // 3785729128
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureDelta, "PointerEvent_GetGestureDelta" }, // 215966067
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetGestureType, "PointerEvent_GetGestureType" }, // 3618510496
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetLastScreenSpacePosition, "PointerEvent_GetLastScreenSpacePosition" }, // 2582767308
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetPointerIndex, "PointerEvent_GetPointerIndex" }, // 3131474791
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetScreenSpacePosition, "PointerEvent_GetScreenSpacePosition" }, // 2964520202
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetTouchpadIndex, "PointerEvent_GetTouchpadIndex" }, // 3273115405
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetUserIndex, "PointerEvent_GetUserIndex" }, // 2499726190
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_GetWheelDelta, "PointerEvent_GetWheelDelta" }, // 3229783088
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsMouseButtonDown, "PointerEvent_IsMouseButtonDown" }, // 1092820842
		{ &Z_Construct_UFunction_UKismetInputLibrary_PointerEvent_IsTouchEvent, "PointerEvent_IsTouchEvent" }, // 3624394244
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Kismet/KismetInputLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetInputLibrary.h" },
		{ "ScriptName", "InputLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetInputLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetInputLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams = {
		&UKismetInputLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetInputLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetInputLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton, Z_Construct_UClass_UKismetInputLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetInputLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetInputLibrary>()
	{
		return UKismetInputLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetInputLibrary);
	UKismetInputLibrary::~UKismetInputLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::EnumInfo[] = {
		{ ESlateGesture_StaticEnum, TEXT("ESlateGesture"), &Z_Registration_Info_UEnum_ESlateGesture, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2588686421U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ScriptStructInfo[] = {
		{ FSlateModifierKeysState::StaticStruct, Z_Construct_UScriptStruct_FSlateModifierKeysState_Statics::NewStructOps, TEXT("SlateModifierKeysState"), &Z_Registration_Info_UScriptStruct_SlateModifierKeysState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateModifierKeysState), 2554259254U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetInputLibrary, UKismetInputLibrary::StaticClass, TEXT("UKismetInputLibrary"), &Z_Registration_Info_UClass_UKismetInputLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetInputLibrary), 1958424111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_1283202432(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetInputLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
