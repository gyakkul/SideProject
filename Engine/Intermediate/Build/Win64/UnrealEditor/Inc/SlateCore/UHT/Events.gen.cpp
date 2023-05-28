// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/Events.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvents() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFocusCause();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCaptureLostEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFocusCause;
	static UEnum* EFocusCause_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFocusCause.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFocusCause.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFocusCause, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EFocusCause"));
		}
		return Z_Registration_Info_UEnum_EFocusCause.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFocusCause>()
	{
		return EFocusCause_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EFocusCause_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enumerators[] = {
		{ "EFocusCause::Mouse", (int64)EFocusCause::Mouse },
		{ "EFocusCause::Navigation", (int64)EFocusCause::Navigation },
		{ "EFocusCause::SetDirectly", (int64)EFocusCause::SetDirectly },
		{ "EFocusCause::Cleared", (int64)EFocusCause::Cleared },
		{ "EFocusCause::OtherWidgetLostFocus", (int64)EFocusCause::OtherWidgetLostFocus },
		{ "EFocusCause::WindowActivate", (int64)EFocusCause::WindowActivate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enum_MetaDataParams[] = {
		{ "Cleared.Comment", "/** Focus was explicitly cleared via the escape key or other similar action. */" },
		{ "Cleared.Name", "EFocusCause::Cleared" },
		{ "Cleared.ToolTip", "Focus was explicitly cleared via the escape key or other similar action." },
		{ "Comment", "/**\n* Context for focus change\n*/" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "Mouse.Comment", "/** Focus was changed because of a mouse action. */" },
		{ "Mouse.Name", "EFocusCause::Mouse" },
		{ "Mouse.ToolTip", "Focus was changed because of a mouse action." },
		{ "Navigation.Comment", "/** Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ... */" },
		{ "Navigation.Name", "EFocusCause::Navigation" },
		{ "Navigation.ToolTip", "Focus was changed in response to a navigation, such as the arrow keys, TAB key, controller DPad, ..." },
		{ "OtherWidgetLostFocus.Comment", "/** Focus was changed because another widget lost focus, and focus moved to a new widget. */" },
		{ "OtherWidgetLostFocus.Name", "EFocusCause::OtherWidgetLostFocus" },
		{ "OtherWidgetLostFocus.ToolTip", "Focus was changed because another widget lost focus, and focus moved to a new widget." },
		{ "SetDirectly.Comment", "/** Focus was changed because someone asked the application to change it. */" },
		{ "SetDirectly.Name", "EFocusCause::SetDirectly" },
		{ "SetDirectly.ToolTip", "Focus was changed because someone asked the application to change it." },
		{ "ToolTip", "Context for focus change" },
		{ "WindowActivate.Comment", "/** Focus was set in response to the owning window being activated. */" },
		{ "WindowActivate.Name", "EFocusCause::WindowActivate" },
		{ "WindowActivate.ToolTip", "Focus was set in response to the owning window being activated." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EFocusCause_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EFocusCause",
		"EFocusCause",
		Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EFocusCause_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EFocusCause()
	{
		if (!Z_Registration_Info_UEnum_EFocusCause.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFocusCause.InnerSingleton, Z_Construct_UEnum_SlateCore_EFocusCause_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFocusCause.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FocusEvent;
class UScriptStruct* FFocusEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FocusEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FocusEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFocusEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("FocusEvent"));
	}
	return Z_Registration_Info_UScriptStruct_FocusEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FFocusEvent>()
{
	return FFocusEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFocusEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FFocusEvent is used when notifying widgets about keyboard focus changes\n * It is passed to event handlers dealing with keyboard focus\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FFocusEvent is used when notifying widgets about keyboard focus changes\nIt is passed to event handlers dealing with keyboard focus" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFocusEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFocusEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFocusEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"FocusEvent",
		sizeof(FFocusEvent),
		alignof(FFocusEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFocusEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_FocusEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FocusEvent.InnerSingleton, Z_Construct_UScriptStruct_FFocusEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FocusEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CaptureLostEvent;
class UScriptStruct* FCaptureLostEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CaptureLostEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CaptureLostEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCaptureLostEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CaptureLostEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CaptureLostEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCaptureLostEvent>()
{
	return FCaptureLostEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCaptureLostEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCaptureLostEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"CaptureLostEvent",
		sizeof(FCaptureLostEvent),
		alignof(FCaptureLostEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCaptureLostEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_CaptureLostEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CaptureLostEvent.InnerSingleton, Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CaptureLostEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputEvent;
class UScriptStruct* FInputEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("InputEvent"));
	}
	return Z_Registration_Info_UScriptStruct_InputEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FInputEvent>()
{
	return FInputEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for all mouse and keyevents.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "Base class for all mouse and keyevents." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"InputEvent",
		sizeof(FInputEvent),
		alignof(FInputEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_InputEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputEvent.InnerSingleton, Z_Construct_UScriptStruct_FInputEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FKeyEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FKeyEvent cannot be polymorphic unless super FInputEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyEvent;
class UScriptStruct* FKeyEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("KeyEvent"));
	}
	return Z_Registration_Info_UScriptStruct_KeyEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FKeyEvent>()
{
	return FKeyEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FKeyEvent describes a key action (keyboard/controller key/button pressed or released.)\n * It is passed to event handlers dealing with key input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FKeyEvent describes a key action (keyboard/controller key/button pressed or released.)\nIt is passed to event handlers dealing with key input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"KeyEvent",
		sizeof(FKeyEvent),
		alignof(FKeyEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyEvent.InnerSingleton, Z_Construct_UScriptStruct_FKeyEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnalogInputEvent>() == std::is_polymorphic<FKeyEvent>(), "USTRUCT FAnalogInputEvent cannot be polymorphic unless super FKeyEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnalogInputEvent;
class UScriptStruct* FAnalogInputEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnalogInputEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnalogInputEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnalogInputEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("AnalogInputEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AnalogInputEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FAnalogInputEvent>()
{
	return FAnalogInputEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnalogInputEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FAnalogEvent describes a analog key value.\n * It is passed to event handlers dealing with analog keys.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FAnalogEvent describes a analog key value.\nIt is passed to event handlers dealing with analog keys." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnalogInputEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FKeyEvent,
		&NewStructOps,
		"AnalogInputEvent",
		sizeof(FAnalogInputEvent),
		alignof(FAnalogInputEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AnalogInputEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnalogInputEvent.InnerSingleton, Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnalogInputEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCharacterEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FCharacterEvent cannot be polymorphic unless super FInputEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CharacterEvent;
class UScriptStruct* FCharacterEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CharacterEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CharacterEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("CharacterEvent"));
	}
	return Z_Registration_Info_UScriptStruct_CharacterEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FCharacterEvent>()
{
	return FCharacterEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCharacterEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FCharacterEvent describes a keyboard action where the utf-16 code is given.  Used for OnKeyChar messages\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FCharacterEvent describes a keyboard action where the utf-16 code is given.  Used for OnKeyChar messages" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"CharacterEvent",
		sizeof(FCharacterEvent),
		alignof(FCharacterEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_CharacterEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CharacterEvent.InnerSingleton, Z_Construct_UScriptStruct_FCharacterEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CharacterEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPointerEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FPointerEvent cannot be polymorphic unless super FInputEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointerEvent;
class UScriptStruct* FPointerEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointerEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointerEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointerEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("PointerEvent"));
	}
	return Z_Registration_Info_UScriptStruct_PointerEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FPointerEvent>()
{
	return FPointerEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FPointerEvent describes a mouse or touch action (e.g. Press, Release, Move, etc).\n * It is passed to event handlers dealing with pointer-based input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FPointerEvent describes a mouse or touch action (e.g. Press, Release, Move, etc).\nIt is passed to event handlers dealing with pointer-based input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointerEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointerEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointerEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"PointerEvent",
		sizeof(FPointerEvent),
		alignof(FPointerEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointerEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_PointerEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointerEvent.InnerSingleton, Z_Construct_UScriptStruct_FPointerEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointerEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMotionEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FMotionEvent cannot be polymorphic unless super FInputEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionEvent;
class UScriptStruct* FMotionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("MotionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_MotionEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FMotionEvent>()
{
	return FMotionEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMotionEvent describes a touch pad action (press, move, lift)\n * It is passed to event handlers dealing with touch input.\n */" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FMotionEvent describes a touch pad action (press, move, lift)\nIt is passed to event handlers dealing with touch input." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"MotionEvent",
		sizeof(FMotionEvent),
		alignof(FMotionEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionEvent.InnerSingleton, Z_Construct_UScriptStruct_FMotionEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionEvent.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNavigationEvent>() == std::is_polymorphic<FInputEvent>(), "USTRUCT FNavigationEvent cannot be polymorphic unless super FInputEvent is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationEvent;
class UScriptStruct* FNavigationEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationEvent, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("NavigationEvent"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationEvent.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FNavigationEvent>()
{
	return FNavigationEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* FNavigationEvent describes a navigation action (Left, Right, Up, Down)\n* It is passed to event handlers dealing with navigation.\n*/" },
		{ "ModuleRelativePath", "Public/Input/Events.h" },
		{ "ToolTip", "FNavigationEvent describes a navigation action (Left, Right, Up, Down)\nIt is passed to event handlers dealing with navigation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationEvent>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		Z_Construct_UScriptStruct_FInputEvent,
		&NewStructOps,
		"NavigationEvent",
		sizeof(FNavigationEvent),
		alignof(FNavigationEvent),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationEvent.InnerSingleton, Z_Construct_UScriptStruct_FNavigationEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationEvent.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::EnumInfo[] = {
		{ EFocusCause_StaticEnum, TEXT("EFocusCause"), &Z_Registration_Info_UEnum_EFocusCause, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1598530408U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::ScriptStructInfo[] = {
		{ FFocusEvent::StaticStruct, Z_Construct_UScriptStruct_FFocusEvent_Statics::NewStructOps, TEXT("FocusEvent"), &Z_Registration_Info_UScriptStruct_FocusEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFocusEvent), 1366461117U) },
		{ FCaptureLostEvent::StaticStruct, Z_Construct_UScriptStruct_FCaptureLostEvent_Statics::NewStructOps, TEXT("CaptureLostEvent"), &Z_Registration_Info_UScriptStruct_CaptureLostEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCaptureLostEvent), 4121083362U) },
		{ FInputEvent::StaticStruct, Z_Construct_UScriptStruct_FInputEvent_Statics::NewStructOps, TEXT("InputEvent"), &Z_Registration_Info_UScriptStruct_InputEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputEvent), 2771026803U) },
		{ FKeyEvent::StaticStruct, Z_Construct_UScriptStruct_FKeyEvent_Statics::NewStructOps, TEXT("KeyEvent"), &Z_Registration_Info_UScriptStruct_KeyEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyEvent), 1482041026U) },
		{ FAnalogInputEvent::StaticStruct, Z_Construct_UScriptStruct_FAnalogInputEvent_Statics::NewStructOps, TEXT("AnalogInputEvent"), &Z_Registration_Info_UScriptStruct_AnalogInputEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnalogInputEvent), 4262370743U) },
		{ FCharacterEvent::StaticStruct, Z_Construct_UScriptStruct_FCharacterEvent_Statics::NewStructOps, TEXT("CharacterEvent"), &Z_Registration_Info_UScriptStruct_CharacterEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCharacterEvent), 379286313U) },
		{ FPointerEvent::StaticStruct, Z_Construct_UScriptStruct_FPointerEvent_Statics::NewStructOps, TEXT("PointerEvent"), &Z_Registration_Info_UScriptStruct_PointerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointerEvent), 3180245440U) },
		{ FMotionEvent::StaticStruct, Z_Construct_UScriptStruct_FMotionEvent_Statics::NewStructOps, TEXT("MotionEvent"), &Z_Registration_Info_UScriptStruct_MotionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionEvent), 2504140278U) },
		{ FNavigationEvent::StaticStruct, Z_Construct_UScriptStruct_FNavigationEvent_Statics::NewStructOps, TEXT("NavigationEvent"), &Z_Registration_Info_UScriptStruct_NavigationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationEvent), 3225496676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_3044230148(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Input_Events_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
