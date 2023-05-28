// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputAction() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	void UInputAction::StaticRegisterNativesUInputAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAction);
	UClass* Z_Construct_UClass_UInputAction_NoRegister()
	{
		return UInputAction::StaticClass();
	}
	struct Z_Construct_UClass_UInputAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ActionDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerWhenPaused_MetaData[];
#endif
		static void NewProp_bTriggerWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReserveAllMappings_MetaData[];
#endif
		static void NewProp_bReserveAllMappings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReserveAllMappings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMappableKeySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerMappableKeySettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input action definition. These are instanced per player (via FInputActionInstance)\n" },
		{ "IncludePath", "InputAction.h" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Input action definition. These are instanced per player (via FInputActionInstance)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription_MetaData[] = {
		{ "Category", "Description" },
		{ "Comment", "// A localized descriptor of this input action\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "A localized descriptor of this input action" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription = { "ActionDescription", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction, ActionDescription), METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Should this action swallow any inputs bound to it or allow them to pass through to affect lower priority bound actions?\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Should this action swallow any inputs bound to it or allow them to pass through to affect lower priority bound actions?" },
	};
#endif
	void Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UInputAction*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Should this action be able to trigger whilst the game is paused - Replaces bExecuteWhenPaused\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Should this action be able to trigger whilst the game is paused - Replaces bExecuteWhenPaused" },
	};
#endif
	void Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_SetBit(void* Obj)
	{
		((UInputAction*)Obj)->bTriggerWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused = { "bTriggerWhenPaused", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// This action's mappings are not intended to be automatically overridden by higher priority context mappings. Users must explicitly remove the mapping first. NOTE: It is the responsibility of the author of the mapping code to enforce this!\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "This action's mappings are not intended to be automatically overridden by higher priority context mappings. Users must explicitly remove the mapping first. NOTE: It is the responsibility of the author of the mapping code to enforce this!" },
	};
#endif
	void Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_SetBit(void* Obj)
	{
		((UInputAction*)Obj)->bReserveAllMappings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings = { "bReserveAllMappings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputAction), &Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// The type that this action returns from a GetActionValue query or action event\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "The type that this action returns from a GetActionValue query or action event" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction, ValueType), Z_Construct_UEnum_EnhancedInput_EInputActionValueType, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_MetaData)) }; // 554781252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\n\x09* At least one Explicit trigger in this list has been met.\n\x09* All Implicit triggers in this list are met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\nAt least one Explicit trigger in this list has been met.\nAll Implicit triggers in this list are met." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\n\x09* At least one Explicit trigger in this list has been met.\n\x09* All Implicit triggers in this list are met.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the action will not trigger unless:\nAt least one Explicit trigger in this list has been met.\nAll Implicit triggers in this list are met." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Modifiers are applied to the final action value.\n\x09* These are applied sequentially in array order.\n\x09* They are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\x09*/" },
		{ "DisplayAfter", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Modifiers are applied to the final action value.\nThese are applied sequentially in array order.\nThey are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "/**\n\x09* Modifiers are applied to the final action value.\n\x09* These are applied sequentially in array order.\n\x09* They are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input\n\x09*/" },
		{ "DisplayAfter", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Modifiers are applied to the final action value.\nThese are applied sequentially in array order.\nThey are applied on top of any FEnhancedActionKeyMapping modifiers that drove the initial input" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Input|Settings" },
		{ "Comment", "/**\n\x09* Holds setting information about this Action Input for setting screen and save purposes.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Holds setting information about this Action Input for setting screen and save purposes." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings = { "PlayerMappableKeySettings", nullptr, (EPropertyFlags)0x004600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction, PlayerMappableKeySettings), Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ActionDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bTriggerWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_bReserveAllMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Statics::NewProp_PlayerMappableKeySettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAction_Statics::ClassParams = {
		&UInputAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputAction()
	{
		if (!Z_Registration_Info_UClass_UInputAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAction.OuterSingleton, Z_Construct_UClass_UInputAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputAction.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UInputAction>()
	{
		return UInputAction::StaticClass();
	}
	UInputAction::UInputAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAction);
	UInputAction::~UInputAction() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionInstance;
class UScriptStruct* FInputActionInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionInstance, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputActionInstance"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionInstance.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputActionInstance>()
{
	return FInputActionInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTriggeredWorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastTriggeredWorldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedProcessedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedProcessedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTriggeredTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTriggeredTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Run time queryable action instance\n// Generated from UInputAction templates above\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Run time queryable action instance\nGenerated from UInputAction templates above" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionInstance>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Input" },
		{ "Comment", "// The source action that this instance is created from\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The source action that this instance is created from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction = { "SourceAction", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, SourceAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Trigger state\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Trigger state" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_MetaData)) }; // 983997710
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// The last time that this evaluated to a Triggered State\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "The last time that this evaluated to a Triggered State" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime = { "LastTriggeredWorldTime", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, LastTriggeredWorldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x002408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Config" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x002408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Total trigger processing/evaluation time (How long this action has been in event Started, Ongoing, or Triggered\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Total trigger processing/evaluation time (How long this action has been in event Started, Ongoing, or Triggered" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime = { "ElapsedProcessedTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, ElapsedProcessedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime_MetaData[] = {
		{ "Category", "Action" },
		{ "Comment", "// Triggered time (How long this action has been in event Triggered only)\n" },
		{ "ModuleRelativePath", "Public/InputAction.h" },
		{ "ToolTip", "Triggered time (How long this action has been in event Triggered only)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime = { "ElapsedTriggeredTime", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionInstance, ElapsedTriggeredTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_SourceAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_TriggerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_LastTriggeredWorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedProcessedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewProp_ElapsedTriggeredTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"InputActionInstance",
		sizeof(FInputActionInstance),
		alignof(FInputActionInstance),
		Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton, Z_Construct_UScriptStruct_FInputActionInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionInstance.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ScriptStructInfo[] = {
		{ FInputActionInstance::StaticStruct, Z_Construct_UScriptStruct_FInputActionInstance_Statics::NewStructOps, TEXT("InputActionInstance"), &Z_Registration_Info_UScriptStruct_InputActionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionInstance), 1544263722U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputAction, UInputAction::StaticClass, TEXT("UInputAction"), &Z_Registration_Info_UClass_UInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAction), 3251813886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_4155171745(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputAction_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
