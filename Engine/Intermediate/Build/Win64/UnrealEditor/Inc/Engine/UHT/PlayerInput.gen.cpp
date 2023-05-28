// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerInput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBind();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyBind;
class UScriptStruct* FKeyBind::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBind, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KeyBind"));
	}
	return Z_Registration_Info_UScriptStruct_KeyBind.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKeyBind>()
{
	return FKeyBind::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyBind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static void NewProp_Control_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Shift_MetaData[];
#endif
		static void NewProp_Shift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Shift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alt_MetaData[];
#endif
		static void NewProp_Alt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Alt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static void NewProp_Cmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Cmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCtrl_MetaData[];
#endif
		static void NewProp_bIgnoreCtrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCtrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreShift_MetaData[];
#endif
		static void NewProp_bIgnoreShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreAlt_MetaData[];
#endif
		static void NewProp_bIgnoreAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCmd_MetaData[];
#endif
		static void NewProp_bIgnoreCmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing mappings for legacy method of binding keys to exec commands. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Struct containing mappings for legacy method of binding keys to exec commands." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyBind_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBind>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData[] = {
		{ "Comment", "/** The key to be bound to the command */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The key to be bound to the command" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyBind, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData[] = {
		{ "Comment", "/** The command to execute when the key is pressed/released */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "The command to execute when the key is pressed/released" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyBind, Command), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData[] = {
		{ "Comment", "/** Whether the control key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Control = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData[] = {
		{ "Comment", "/** Whether the shift key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Shift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift = { "Shift", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData[] = {
		{ "Comment", "/** Whether the alt key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Alt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt = { "Alt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData[] = {
		{ "Comment", "/** Whether the command key needs to be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key needs to be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->Cmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData[] = {
		{ "Comment", "/** Whether the control key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the control key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreCtrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl = { "bIgnoreCtrl", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData[] = {
		{ "Comment", "/** Whether the shift key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the shift key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift = { "bIgnoreShift", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData[] = {
		{ "Comment", "/** Whether the alt key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the alt key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt = { "bIgnoreAlt", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData[] = {
		{ "Comment", "/** Whether the command key must not be held when the key event occurs */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Whether the command key must not be held when the key event occurs" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bIgnoreCmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd = { "bIgnoreCmd", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FKeyBind*)Obj)->bDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FKeyBind), &Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Shift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Alt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCtrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bIgnoreCmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyBind_Statics::NewProp_bDisabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyBind_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"KeyBind",
		sizeof(FKeyBind),
		alignof(FKeyBind),
		Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBind_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyBind()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton, Z_Construct_UScriptStruct_FKeyBind_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyBind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisProperties;
class UScriptStruct* FInputAxisProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisProperties, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisProperties"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisProperties.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisProperties>()
{
	return FInputAxisProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAxisProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeadZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exponent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Exponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Configurable properties for control axes, used to transform raw input into game ready values. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes, used to transform raw input into game ready values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** What the dead zone of the axis is.  For control axes such as analog sticks. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "What the dead zone of the axis is.  For control axes such as analog sticks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone = { "DeadZone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisProperties, DeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Scaling factor to multiply raw value by. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Scaling factor to multiply raw value by." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisProperties, Sensitivity), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** For applying curves to [0..1] axes, e.g. analog sticks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "For applying curves to [0..1] axes, e.g. analog sticks" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent = { "Exponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisProperties, Exponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Inverts reported values for this axis */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Inverts reported values for this axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FInputAxisProperties*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputAxisProperties), &Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_DeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Sensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_Exponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisProperties",
		sizeof(FInputAxisProperties),
		alignof(FInputAxisProperties),
		Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAxisProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisConfigEntry;
class UScriptStruct* FInputAxisConfigEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisConfigEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisConfigEntry"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisConfigEntry>()
{
	return FInputAxisConfigEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisKeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AxisKeyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Configurable properties for control axes. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Configurable properties for control axes." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisConfigEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Axis Key these properties apply to */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Axis Key these properties apply to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName = { "AxisKeyName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisConfigEntry, AxisKeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Properties for the Axis Key */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Properties for the Axis Key" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties = { "AxisProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisConfigEntry, AxisProperties), Z_Construct_UScriptStruct_FInputAxisProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties_MetaData)) }; // 1716620365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisKeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewProp_AxisProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisConfigEntry",
		sizeof(FInputAxisConfigEntry),
		alignof(FInputAxisConfigEntry),
		Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisConfigEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAxisConfigEntry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionKeyMapping;
class UScriptStruct* FInputActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionKeyMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputActionKeyMapping>()
{
	return FInputActionKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[];
#endif
		static void NewProp_bCtrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[];
#endif
		static void NewProp_bCmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an action and key \n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an action and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionKeyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of action, e.g \"jump\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionKeyMapping, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Shift keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Ctrl keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bCtrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Alt keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "true if one of the Cmd keys must be down when the KeyEvent is received to be acknowledged" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit(void* Obj)
	{
		((FInputActionKeyMapping*)Obj)->bCmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputActionKeyMapping), &Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCtrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_bCmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputActionKeyMapping",
		sizeof(FInputActionKeyMapping),
		alignof(FInputActionKeyMapping),
		Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionKeyMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputAxisKeyMapping;
class UScriptStruct* FInputAxisKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputAxisKeyMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputAxisKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputAxisKeyMapping>()
{
	return FInputAxisKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an axis and key \n * \n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n**/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an axis and key\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputAxisKeyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of axis, e.g \"MoveForward\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of axis, e.g \"MoveForward\"" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, AxisName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Multiplier to use for the mapping when accumulating the axis value */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Multiplier to use for the mapping when accumulating the axis value" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputAxisKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_AxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputAxisKeyMapping",
		sizeof(FInputAxisKeyMapping),
		alignof(FInputAxisKeyMapping),
		Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputAxisKeyMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionSpeechMapping;
class UScriptStruct* FInputActionSpeechMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionSpeechMapping, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InputActionSpeechMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInputActionSpeechMapping>()
{
	return FInputActionSpeechMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeechKeyword_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeechKeyword;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Defines a mapping between an action and speech recognition \n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Defines a mapping between an action and speech recognition\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionSpeechMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Friendly name of action, e.g \"jump\" */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Friendly name of action, e.g \"jump\"" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionSpeechMapping, ActionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Key to bind it to. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Key to bind it to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword = { "SpeechKeyword", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputActionSpeechMapping, SpeechKeyword), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewProp_SpeechKeyword,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"InputActionSpeechMapping",
		sizeof(FInputActionSpeechMapping),
		alignof(FInputActionSpeechMapping),
		Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionSpeechMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionSpeechMapping.InnerSingleton;
	}
	DEFINE_FUNCTION(UPlayerInput::execGetOuterAPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetOuterAPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInput::execClearSmoothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSmoothing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInput::execInvertAxis)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AxisName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvertAxis(Z_Param_AxisName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInput::execInvertAxisKey)
	{
		P_GET_STRUCT(FKey,Z_Param_AxisKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvertAxisKey(Z_Param_AxisKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInput::execSetBind)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBind(Z_Param_BindName,Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerInput::execSetMouseSensitivity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Sensitivity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseSensitivity(Z_Param_Sensitivity);
		P_NATIVE_END;
	}
	void UPlayerInput::StaticRegisterNativesUPlayerInput()
	{
		UClass* Class = UPlayerInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSmoothing", &UPlayerInput::execClearSmoothing },
			{ "GetOuterAPlayerController", &UPlayerInput::execGetOuterAPlayerController },
			{ "InvertAxis", &UPlayerInput::execInvertAxis },
			{ "InvertAxisKey", &UPlayerInput::execInvertAxisKey },
			{ "SetBind", &UPlayerInput::execSetBind },
			{ "SetMouseSensitivity", &UPlayerInput::execSetMouseSensitivity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to reset mouse smoothing values */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to reset mouse smoothing values" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "ClearSmoothing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_ClearSmoothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_ClearSmoothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics
	{
		struct PlayerInput_eventGetOuterAPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventGetOuterAPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Return's this object casted to a player controller. This can be null if there is no player controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Return's this object casted to a player controller. This can be null if there is no player controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "GetOuterAPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PlayerInput_eventGetOuterAPlayerController_Parms), Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics
	{
		struct PlayerInput_eventInvertAxis_Parms
		{
			FName AxisName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AxisName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName = { "AxisName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventInvertAxis_Parms, AxisName), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::NewProp_AxisName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to invert an axis mapping */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis mapping" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PlayerInput_eventInvertAxis_Parms), Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics
	{
		struct PlayerInput_eventInvertAxisKey_Parms
		{
			FKey AxisKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AxisKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey = { "AxisKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventInvertAxisKey_Parms, AxisKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::NewProp_AxisKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to invert an axis key */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to invert an axis key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "InvertAxisKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PlayerInput_eventInvertAxisKey_Parms), Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_InvertAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_InvertAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_SetBind_Statics
	{
		struct PlayerInput_eventSetBind_Parms
		{
			FName BindName;
			FString Command;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName = { "BindName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, BindName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventSetBind_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_BindName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetBind_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec function to add a debug exec command */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Exec function to add a debug exec command" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetBind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PlayerInput_eventSetBind_Parms), Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetBind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_SetBind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetBind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics
	{
		struct PlayerInput_eventSetMouseSensitivity_Parms
		{
			float Sensitivity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Sensitivity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity = { "Sensitivity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlayerInput_eventSetMouseSensitivity_Parms, Sensitivity), METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::NewProp_Sensitivity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets both X and Y axis sensitivity to the supplied value. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Sets both X and Y axis sensitivity to the supplied value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerInput, nullptr, "SetMouseSensitivity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PlayerInput_eventSetMouseSensitivity_Parms), Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerInput);
	UClass* Z_Construct_UClass_UPlayerInput_NoRegister()
	{
		return UPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugExecBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugExecBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugExecBindings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InvertedAxis_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvertedAxis_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InvertedAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerInput_ClearSmoothing, "ClearSmoothing" }, // 4185827751
		{ &Z_Construct_UFunction_UPlayerInput_GetOuterAPlayerController, "GetOuterAPlayerController" }, // 4035165715
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxis, "InvertAxis" }, // 1262681922
		{ &Z_Construct_UFunction_UPlayerInput_InvertAxisKey, "InvertAxisKey" }, // 1935909568
		{ &Z_Construct_UFunction_UPlayerInput_SetBind, "SetBind" }, // 3741588931
		{ &Z_Construct_UFunction_UPlayerInput_SetMouseSensitivity, "SetMouseSensitivity" }, // 208491476
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object within PlayerController that processes player input.\n * Only exists on the client in network games.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html\n */" },
		{ "IncludePath", "GameFramework/PlayerInput.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Object within PlayerController that processes player input.\nOnly exists on the client in network games.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Input/index.html" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyBind, METADATA_PARAMS(nullptr, 0) }; // 697641943
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData[] = {
		{ "Comment", "/** Generic bindings of keys to Exec()-compatible strings for development purposes only */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "Generic bindings of keys to Exec()-compatible strings for development purposes only" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings = { "DebugExecBindings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInput, DebugExecBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_MetaData)) }; // 697641943
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner = { "InvertedAxis", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData[] = {
		{ "Comment", "/** List of Axis Mappings that have been inverted */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerInput.h" },
		{ "ToolTip", "List of Axis Mappings that have been inverted" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis = { "InvertedAxis", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerInput, InvertedAxis), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_DebugExecBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerInput_Statics::NewProp_InvertedAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerInput_Statics::ClassParams = {
		&UPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerInput()
	{
		if (!Z_Registration_Info_UClass_UPlayerInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerInput.OuterSingleton, Z_Construct_UClass_UPlayerInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerInput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPlayerInput>()
	{
		return UPlayerInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerInput);
	UPlayerInput::~UPlayerInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ScriptStructInfo[] = {
		{ FKeyBind::StaticStruct, Z_Construct_UScriptStruct_FKeyBind_Statics::NewStructOps, TEXT("KeyBind"), &Z_Registration_Info_UScriptStruct_KeyBind, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyBind), 697641943U) },
		{ FInputAxisProperties::StaticStruct, Z_Construct_UScriptStruct_FInputAxisProperties_Statics::NewStructOps, TEXT("InputAxisProperties"), &Z_Registration_Info_UScriptStruct_InputAxisProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisProperties), 1716620365U) },
		{ FInputAxisConfigEntry::StaticStruct, Z_Construct_UScriptStruct_FInputAxisConfigEntry_Statics::NewStructOps, TEXT("InputAxisConfigEntry"), &Z_Registration_Info_UScriptStruct_InputAxisConfigEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisConfigEntry), 3076826120U) },
		{ FInputActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FInputActionKeyMapping_Statics::NewStructOps, TEXT("InputActionKeyMapping"), &Z_Registration_Info_UScriptStruct_InputActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionKeyMapping), 1282624095U) },
		{ FInputAxisKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FInputAxisKeyMapping_Statics::NewStructOps, TEXT("InputAxisKeyMapping"), &Z_Registration_Info_UScriptStruct_InputAxisKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputAxisKeyMapping), 3112688522U) },
		{ FInputActionSpeechMapping::StaticStruct, Z_Construct_UScriptStruct_FInputActionSpeechMapping_Statics::NewStructOps, TEXT("InputActionSpeechMapping"), &Z_Registration_Info_UScriptStruct_InputActionSpeechMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionSpeechMapping), 2876416946U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerInput, UPlayerInput::StaticClass, TEXT("UPlayerInput"), &Z_Registration_Info_UClass_UPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerInput), 1567226976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_2483694222(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
