// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonUIInputSettings.h"
#include "InputCoreTypes.h"
#include "UITag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUIInputSettings() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIInputSettings();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIInputSettings_NoRegister();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonAnalogCursorSettings();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUIActionKeyMapping();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUIActionTag();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FUIInputAction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIActionKeyMapping;
class UScriptStruct* FUIActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("UIActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_UIActionKeyMapping.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FUIActionKeyMapping>()
{
	return FUIActionKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIActionKeyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "UI Action Key Mapping" },
		{ "Comment", "/** A key that triggers this action */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "A key that triggers this action" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_HoldTime_MetaData[] = {
		{ "Category", "UI Action Key Mapping" },
		{ "Comment", "/** How long must the key be held down for the action to be executed? */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "How long must the key be held down for the action to be executed?" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIActionKeyMapping, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_HoldTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewProp_HoldTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"UIActionKeyMapping",
		sizeof(FUIActionKeyMapping),
		alignof(FUIActionKeyMapping),
		Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIActionKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_UIActionKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIActionKeyMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIInputAction;
class UScriptStruct* FUIInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIInputAction, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("UIInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_UIInputAction.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FUIInputAction>()
{
	return FUIInputAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIInputAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DefaultDisplayName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIInputAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIInputAction>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_ActionTag_MetaData[] = {
		{ "Category", "UI Input Action" },
		{ "Comment", "/** The UI.Action tag that acts as the universal identifier of this action. */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "The UI.Action tag that acts as the universal identifier of this action." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIInputAction, ActionTag), Z_Construct_UScriptStruct_FUIActionTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_ActionTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_ActionTag_MetaData)) }; // 2018462953
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_DefaultDisplayName_MetaData[] = {
		{ "Category", "UI Input Action" },
		{ "Comment", "/** \n\x09 * Whenever a UI input action is bound, an override display name can optionally be provided.\n\x09 * This is the default generic display name of this action for use in the absence of such an override.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "Whenever a UI input action is bound, an override display name can optionally be provided.\nThis is the default generic display name of this action for use in the absence of such an override." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_DefaultDisplayName = { "DefaultDisplayName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIInputAction, DefaultDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_DefaultDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_DefaultDisplayName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings_Inner = { "KeyMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIActionKeyMapping, METADATA_PARAMS(nullptr, 0) }; // 3180858358
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings_MetaData[] = {
		{ "Category", "UI Input Action" },
		{ "Comment", "/** All key mappings that will trigger this action */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "TitleProperty", "Key" },
		{ "ToolTip", "All key mappings that will trigger this action" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings = { "KeyMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIInputAction, KeyMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings_MetaData)) }; // 3180858358
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_ActionTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_DefaultDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIInputAction_Statics::NewProp_KeyMappings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIInputAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"UIInputAction",
		sizeof(FUIInputAction),
		alignof(FUIInputAction),
		Z_Construct_UScriptStruct_FUIInputAction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputAction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIInputAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIInputAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIInputAction()
	{
		if (!Z_Registration_Info_UScriptStruct_UIInputAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIInputAction.InnerSingleton, Z_Construct_UScriptStruct_FUIInputAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIInputAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings;
class UScriptStruct* FCommonAnalogCursorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonAnalogCursorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonAnalogCursorSettings>()
{
	return FCommonAnalogCursorSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreprocessorPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreprocessorPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCursorAcceleration_MetaData[];
#endif
		static void NewProp_bEnableCursorAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCursorAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorDeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CursorDeadZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoverSlowdownFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverSlowdownFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollDeadZone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollDeadZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollUpdatePeriod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollUpdatePeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScrollMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScrollMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonAnalogCursorSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_PreprocessorPriority_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The registration priority of the analog cursor preprocessor. */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "The registration priority of the analog cursor preprocessor." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_PreprocessorPriority = { "PreprocessorPriority", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, PreprocessorPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_PreprocessorPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_PreprocessorPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration_SetBit(void* Obj)
	{
		((FCommonAnalogCursorSettings*)Obj)->bEnableCursorAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration = { "bEnableCursorAcceleration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonAnalogCursorSettings), &Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorAcceleration_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "EditCondition", "bEnableAnalogCursorAcceleration" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorAcceleration = { "CursorAcceleration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, CursorAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorMaxSpeed_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorMaxSpeed = { "CursorMaxSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, CursorMaxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorDeadZone_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ClampMax", "0.9" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorDeadZone = { "CursorDeadZone", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, CursorDeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorDeadZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_HoverSlowdownFactor_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_HoverSlowdownFactor = { "HoverSlowdownFactor", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, HoverSlowdownFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_HoverSlowdownFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_HoverSlowdownFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollDeadZone_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ClampMax", "0.9" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollDeadZone = { "ScrollDeadZone", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, ScrollDeadZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollDeadZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollDeadZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollUpdatePeriod_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollUpdatePeriod = { "ScrollUpdatePeriod", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, ScrollUpdatePeriod), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollUpdatePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollUpdatePeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollMultiplier_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollMultiplier = { "ScrollMultiplier", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonAnalogCursorSettings, ScrollMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_PreprocessorPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_bEnableCursorAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_CursorDeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_HoverSlowdownFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollDeadZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollUpdatePeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewProp_ScrollMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonAnalogCursorSettings",
		sizeof(FCommonAnalogCursorSettings),
		alignof(FCommonAnalogCursorSettings),
		Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonAnalogCursorSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.InnerSingleton, Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings.InnerSingleton;
	}
	void UCommonUIInputSettings::StaticRegisterNativesUCommonUIInputSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUIInputSettings);
	UClass* Z_Construct_UClass_UCommonUIInputSettings_NoRegister()
	{
		return UCommonUIInputSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUIInputSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinkCursorToGamepadFocus_MetaData[];
#endif
		static void NewProp_bLinkCursorToGamepadFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkCursorToGamepadFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIActionProcessingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UIActionProcessingPriority;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputActions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogCursorSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUIInputSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Project-wide input settings for UI input actions */" },
		{ "IncludePath", "Input/CommonUIInputSettings.h" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "Project-wide input settings for UI input actions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** True to have the mouse pointer automatically moved to the center of whatever widget is currently focused while using a gamepad. */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "True to have the mouse pointer automatically moved to the center of whatever widget is currently focused while using a gamepad." },
	};
#endif
	void Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus_SetBit(void* Obj)
	{
		((UCommonUIInputSettings*)Obj)->bLinkCursorToGamepadFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus = { "bLinkCursorToGamepadFocus", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUIInputSettings), &Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_UIActionProcessingPriority_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** \n\x09 * The input priority of the input components that process UI input actions.\n\x09 * The lower the value, the higher the priority of the component.\n\x09 *\n\x09 * By default, this value is incredibly high to ensure UI action processing priority over game elements.\n\x09 * Adjust as needed for the UI input components to be processed at the appropriate point in the input stack in your project.\n\x09 *\n\x09 * NOTE: When the active input mode is ECommonInputMode::Menu, ALL input components with lower priority than this will be fully blocked.\n\x09 *\x09\x09 Thus, if any game agent input components are registered with higher priority than this, behavior will not match expectation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "The input priority of the input components that process UI input actions.\nThe lower the value, the higher the priority of the component.\n\nBy default, this value is incredibly high to ensure UI action processing priority over game elements.\nAdjust as needed for the UI input components to be processed at the appropriate point in the input stack in your project.\n\nNOTE: When the active input mode is ECommonInputMode::Menu, ALL input components with lower priority than this will be fully blocked.\n              Thus, if any game agent input components are registered with higher priority than this, behavior will not match expectation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_UIActionProcessingPriority = { "UIActionProcessingPriority", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputSettings, UIActionProcessingPriority), METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_UIActionProcessingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_UIActionProcessingPriority_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions_Inner = { "InputActions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIInputAction, METADATA_PARAMS(nullptr, 0) }; // 2006394929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions_MetaData[] = {
		{ "Category", "Actions" },
		{ "Comment", "/** All UI input action mappings for the project */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "TitleProperty", "ActionTag" },
		{ "ToolTip", "All UI input action mappings for the project" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputSettings, InputActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions_MetaData)) }; // 2006394929
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides_Inner = { "ActionOverrides", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIInputAction, METADATA_PARAMS(nullptr, 0) }; // 2006394929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides_MetaData[] = {
		{ "Comment", "/** Config-only set of input action overrides - if an entry for a given action is both here and in the InputActions array, this entry wins completely. */" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
		{ "ToolTip", "Config-only set of input action overrides - if an entry for a given action is both here and in the InputActions array, this entry wins completely." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides = { "ActionOverrides", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputSettings, ActionOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides_MetaData)) }; // 2006394929
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_AnalogCursorSettings_MetaData[] = {
		{ "Category", "AnalogCursor" },
		{ "ModuleRelativePath", "Public/Input/CommonUIInputSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_AnalogCursorSettings = { "AnalogCursorSettings", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUIInputSettings, AnalogCursorSettings), Z_Construct_UScriptStruct_FCommonAnalogCursorSettings, METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_AnalogCursorSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_AnalogCursorSettings_MetaData)) }; // 1083781070
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUIInputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_bLinkCursorToGamepadFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_UIActionProcessingPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_InputActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_ActionOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUIInputSettings_Statics::NewProp_AnalogCursorSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUIInputSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUIInputSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUIInputSettings_Statics::ClassParams = {
		&UCommonUIInputSettings::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonUIInputSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUIInputSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUIInputSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUIInputSettings()
	{
		if (!Z_Registration_Info_UClass_UCommonUIInputSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUIInputSettings.OuterSingleton, Z_Construct_UClass_UCommonUIInputSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUIInputSettings.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUIInputSettings>()
	{
		return UCommonUIInputSettings::StaticClass();
	}
	UCommonUIInputSettings::UCommonUIInputSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonUIInputSettings);
	UCommonUIInputSettings::~UCommonUIInputSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ScriptStructInfo[] = {
		{ FUIActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FUIActionKeyMapping_Statics::NewStructOps, TEXT("UIActionKeyMapping"), &Z_Registration_Info_UScriptStruct_UIActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIActionKeyMapping), 3180858358U) },
		{ FUIInputAction::StaticStruct, Z_Construct_UScriptStruct_FUIInputAction_Statics::NewStructOps, TEXT("UIInputAction"), &Z_Registration_Info_UScriptStruct_UIInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIInputAction), 2006394929U) },
		{ FCommonAnalogCursorSettings::StaticStruct, Z_Construct_UScriptStruct_FCommonAnalogCursorSettings_Statics::NewStructOps, TEXT("CommonAnalogCursorSettings"), &Z_Registration_Info_UScriptStruct_CommonAnalogCursorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonAnalogCursorSettings), 1083781070U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUIInputSettings, UCommonUIInputSettings::StaticClass, TEXT("UCommonUIInputSettings"), &Z_Registration_Info_UClass_UCommonUIInputSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUIInputSettings), 1402443752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_3283466241(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonUIInputSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
