// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUITypes.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUITypes() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputMetadata();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonInputMetadata_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadata();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadata_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadataInterface();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EInputActionState();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionDataBase();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputTypeInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputActionState;
	static UEnum* EInputActionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputActionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonUI_EInputActionState, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("EInputActionState"));
		}
		return Z_Registration_Info_UEnum_EInputActionState.OuterSingleton;
	}
	template<> COMMONUI_API UEnum* StaticEnum<EInputActionState>()
	{
		return EInputActionState_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonUI_EInputActionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enumerators[] = {
		{ "EInputActionState::Enabled", (int64)EInputActionState::Enabled },
		{ "EInputActionState::Disabled", (int64)EInputActionState::Disabled },
		{ "EInputActionState::Hidden", (int64)EInputActionState::Hidden },
		{ "EInputActionState::HiddenAndDisabled", (int64)EInputActionState::HiddenAndDisabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** Disabled, will call all the disabled callback if specified otherwise do nothing */" },
		{ "Disabled.Name", "EInputActionState::Disabled" },
		{ "Disabled.ToolTip", "Disabled, will call all the disabled callback if specified otherwise do nothing" },
		{ "Enabled.Comment", "/** Enabled, will call all callbacks */" },
		{ "Enabled.Name", "EInputActionState::Enabled" },
		{ "Enabled.ToolTip", "Enabled, will call all callbacks" },
		{ "Hidden.Comment", "/** The common input reflector will not visualize this but still calls all callbacks. NOTE: Use this sparingly */" },
		{ "Hidden.Name", "EInputActionState::Hidden" },
		{ "Hidden.ToolTip", "The common input reflector will not visualize this but still calls all callbacks. NOTE: Use this sparingly" },
		{ "HiddenAndDisabled.Comment", "/** Hidden and disabled behaves as if it were never added with no callbacks being called */" },
		{ "HiddenAndDisabled.Name", "EInputActionState::HiddenAndDisabled" },
		{ "HiddenAndDisabled.ToolTip", "Hidden and disabled behaves as if it were never added with no callbacks being called" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonUI_EInputActionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		"EInputActionState",
		"EInputActionState",
		Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonUI_EInputActionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonUI_EInputActionState()
	{
		if (!Z_Registration_Info_UEnum_EInputActionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputActionState.InnerSingleton, Z_Construct_UEnum_CommonUI_EInputActionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputActionState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputTypeInfo;
class UScriptStruct* FCommonInputTypeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputTypeInfo, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputTypeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonInputTypeInfo>()
{
	return FCommonInputTypeInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrrideState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrrideState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrrideState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActionRequiresHold_MetaData[];
#endif
		static void NewProp_bActionRequiresHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActionRequiresHold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputTypeInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Key this action is bound to\x09*/" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Key this action is bound to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key_MetaData)) }; // 2101135134
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** EInputActionState::Enabled means that the state isn't overriden and the games dynamic control will work */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "EInputActionState::Enabled means that the state isn't overriden and the games dynamic control will work" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState = { "OverrrideState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, OverrrideState), Z_Construct_UEnum_CommonUI_EInputActionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_MetaData)) }; // 2789777555
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Enables hold time if true */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Enables hold time if true" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_SetBit(void* Obj)
	{
		((FCommonInputTypeInfo*)Obj)->bActionRequiresHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold = { "bActionRequiresHold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonInputTypeInfo), &Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** The hold time in seconds */" },
		{ "EditCondition", "bActionRequiresHold" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "The hold time in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Override the brush specified by the Key Display Data  */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Override the brush specified by the Key Display Data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush = { "OverrideBrush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputTypeInfo, OverrideBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrrideState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_bActionRequiresHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_HoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewProp_OverrideBrush,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonInputTypeInfo",
		sizeof(FCommonInputTypeInfo),
		alignof(FCommonInputTypeInfo),
		Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputTypeInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputTypeInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCommonInputActionDataBase>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCommonInputActionDataBase cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputActionDataBase;
class UScriptStruct* FCommonInputActionDataBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionDataBase, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputActionDataBase"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonInputActionDataBase>()
{
	return FCommonInputActionDataBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_HoldDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavBarPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NavBarPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardInputTypeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyboardInputTypeInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultGamepadInputTypeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultGamepadInputTypeInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GamepadInputOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GamepadInputOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadInputOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GamepadInputOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchInputTypeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TouchInputTypeInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputActionDataBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** User facing name (used when NOT a hold action) */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "User facing name (used when NOT a hold action)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_HoldDisplayName_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** User facing name used when it IS a hold action */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "User facing name used when it IS a hold action" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_HoldDisplayName = { "HoldDisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, HoldDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_HoldDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_HoldDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_NavBarPriority_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Priority in nav-bar */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Priority in nav-bar" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_NavBarPriority = { "NavBarPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, NavBarPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_NavBarPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_NavBarPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_KeyboardInputTypeInfo_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/**\n\x09* Key to bind to for each input method\n\x09*/" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Key to bind to for each input method" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_KeyboardInputTypeInfo = { "KeyboardInputTypeInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, KeyboardInputTypeInfo), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_KeyboardInputTypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_KeyboardInputTypeInfo_MetaData)) }; // 1302895319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DefaultGamepadInputTypeInfo_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/**\n\x09* Default input state for gamepads\n\x09*/" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Default input state for gamepads" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DefaultGamepadInputTypeInfo = { "DefaultGamepadInputTypeInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DefaultGamepadInputTypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DefaultGamepadInputTypeInfo_MetaData)) }; // 1302895319
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_ValueProp = { "GamepadInputOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(nullptr, 0) }; // 1302895319
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_Key_KeyProp = { "GamepadInputOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/**\n\x09* Override the input state for each input method\n\x09*/" },
		{ "GetOptions", "CommonInput.CommonInputBaseControllerData.GetRegisteredGamepads" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Override the input state for each input method" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides = { "GamepadInputOverrides", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, GamepadInputOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_MetaData)) }; // 1302895319
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_TouchInputTypeInfo_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/**\n\x09* Override the displayed brush for each input method\n\x09*/" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Override the displayed brush for each input method" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_TouchInputTypeInfo = { "TouchInputTypeInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionDataBase, TouchInputTypeInfo), Z_Construct_UScriptStruct_FCommonInputTypeInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_TouchInputTypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_TouchInputTypeInfo_MetaData)) }; // 1302895319
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_HoldDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_NavBarPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_KeyboardInputTypeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_DefaultGamepadInputTypeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_GamepadInputOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewProp_TouchInputTypeInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CommonInputActionDataBase",
		sizeof(FCommonInputActionDataBase),
		alignof(FCommonInputActionDataBase),
		Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionDataBase()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputActionDataBase.InnerSingleton;
	}
	void UCommonInputMetadata::StaticRegisterNativesUCommonInputMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonInputMetadata);
	UClass* Z_Construct_UClass_UCommonInputMetadata_NoRegister()
	{
		return UCommonInputMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UCommonInputMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavBarPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NavBarPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGenericInputAction_MetaData[];
#endif
		static void NewProp_bIsGenericInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGenericInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonInputMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Metadata CommonUI will try to acquire from Enhanced Input Mapping Contexts (IMC)\n * \n * You can Inherit from this class if you have any info that may need to be parsed per platform\n * by CommonUI. IMC's can be specified per platform, so each platform may have different\n * Common Input Metadata\n * \n * Note: We intentionally do not define any context-independant metadata. Even though some\n * metadata should be context-independant (Like NavBarPriority below). Locking it that info\n * to a seperate metadata type prevents any chance of future overriding. Instead, we prefer\n * info for all metadata to be set across all instances.\n */" },
		{ "IncludePath", "CommonUITypes.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Metadata CommonUI will try to acquire from Enhanced Input Mapping Contexts (IMC)\n\nYou can Inherit from this class if you have any info that may need to be parsed per platform\nby CommonUI. IMC's can be specified per platform, so each platform may have different\nCommon Input Metadata\n\nNote: We intentionally do not define any context-independant metadata. Even though some\nmetadata should be context-independant (Like NavBarPriority below). Locking it that info\nto a seperate metadata type prevents any chance of future overriding. Instead, we prefer\ninfo for all metadata to be set across all instances." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_NavBarPriority_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Priority in nav-bar */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Priority in nav-bar" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_NavBarPriority = { "NavBarPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonInputMetadata, NavBarPriority), METADATA_PARAMS(Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_NavBarPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_NavBarPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** \n\x09 * Generic actions like accept or face button top will be subscribed to by multiple\n\x09 * UI elements. These actions will not broadcast enhanced input action delegates\n\x09 * such as \"Triggered, Ongoing, Canceled, or Completed.\" Since those delegates\n\x09 * would be fired by multiple UI elements.\n\x09 * \n\x09 * Non-generic input actions will fire Enhanced Input events. However they will \n\x09 * not fire CommonUI action bindings (Since those can be manually fired in BP).\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Generic actions like accept or face button top will be subscribed to by multiple\nUI elements. These actions will not broadcast enhanced input action delegates\nsuch as \"Triggered, Ongoing, Canceled, or Completed.\" Since those delegates\nwould be fired by multiple UI elements.\n\nNon-generic input actions will fire Enhanced Input events. However they will\nnot fire CommonUI action bindings (Since those can be manually fired in BP)." },
	};
#endif
	void Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction_SetBit(void* Obj)
	{
		((UCommonInputMetadata*)Obj)->bIsGenericInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction = { "bIsGenericInputAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonInputMetadata), &Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonInputMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_NavBarPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonInputMetadata_Statics::NewProp_bIsGenericInputAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonInputMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonInputMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonInputMetadata_Statics::ClassParams = {
		&UCommonInputMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonInputMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputMetadata_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonInputMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonInputMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonInputMetadata()
	{
		if (!Z_Registration_Info_UClass_UCommonInputMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonInputMetadata.OuterSingleton, Z_Construct_UClass_UCommonInputMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonInputMetadata.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonInputMetadata>()
	{
		return UCommonInputMetadata::StaticClass();
	}
	UCommonInputMetadata::UCommonInputMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonInputMetadata);
	UCommonInputMetadata::~UCommonInputMetadata() {}
	void UCommonMappingContextMetadataInterface::StaticRegisterNativesUCommonMappingContextMetadataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonMappingContextMetadataInterface);
	UClass* Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister()
	{
		return UCommonMappingContextMetadataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonMappingContextMetadataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::ClassParams = {
		&UCommonMappingContextMetadataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonMappingContextMetadataInterface()
	{
		if (!Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.OuterSingleton, Z_Construct_UClass_UCommonMappingContextMetadataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonMappingContextMetadataInterface>()
	{
		return UCommonMappingContextMetadataInterface::StaticClass();
	}
	UCommonMappingContextMetadataInterface::UCommonMappingContextMetadataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonMappingContextMetadataInterface);
	UCommonMappingContextMetadataInterface::~UCommonMappingContextMetadataInterface() {}
	void UCommonMappingContextMetadata::StaticRegisterNativesUCommonMappingContextMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonMappingContextMetadata);
	UClass* Z_Construct_UClass_UCommonMappingContextMetadata_NoRegister()
	{
		return UCommonMappingContextMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UCommonMappingContextMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnhancedInputMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerActionEnhancedInputMetadata_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerActionEnhancedInputMetadata_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerActionEnhancedInputMetadata_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerActionEnhancedInputMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerActionEnhancedInputMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonMappingContextMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMappingContextMetadata_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base CommonUI metadata implementation for specification in IMC's.\n * \n * Utilizes a map of input actions to metadata to prevent users from having to create\n * multiple metadata assets / instances. Using this map is not mandatory.\n */" },
		{ "IncludePath", "CommonUITypes.h" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Base CommonUI metadata implementation for specification in IMC's.\n\nUtilizes a map of input actions to metadata to prevent users from having to create\nmultiple metadata assets / instances. Using this map is not mandatory." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_EnhancedInputMetadata_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Fallback or default metadata CommonUI relies on if no per-action meta is found below */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Fallback or default metadata CommonUI relies on if no per-action meta is found below" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_EnhancedInputMetadata = { "EnhancedInputMetadata", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonMappingContextMetadata, EnhancedInputMetadata), Z_Construct_UClass_UCommonInputMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_EnhancedInputMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_EnhancedInputMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_ValueProp_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Map of action to metadata, allows creation of single metadata asset rather than one per input action type */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Map of action to metadata, allows creation of single metadata asset rather than one per input action type" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_ValueProp = { "PerActionEnhancedInputMetadata", nullptr, (EPropertyFlags)0x0006000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UCommonInputMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_ValueProp_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_Key_KeyProp = { "PerActionEnhancedInputMetadata_Key", nullptr, (EPropertyFlags)0x0006000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_MetaData[] = {
		{ "Category", "CommonInput" },
		{ "Comment", "/** Map of action to metadata, allows creation of single metadata asset rather than one per input action type */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
		{ "ToolTip", "Map of action to metadata, allows creation of single metadata asset rather than one per input action type" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata = { "PerActionEnhancedInputMetadata", nullptr, (EPropertyFlags)0x001400800000001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonMappingContextMetadata, PerActionEnhancedInputMetadata), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonMappingContextMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_EnhancedInputMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonMappingContextMetadata_Statics::NewProp_PerActionEnhancedInputMetadata,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCommonMappingContextMetadataInterface_NoRegister, (int32)VTABLE_OFFSET(UCommonMappingContextMetadata, ICommonMappingContextMetadataInterface), false },  // 749643337
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonMappingContextMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonMappingContextMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonMappingContextMetadata_Statics::ClassParams = {
		&UCommonMappingContextMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonMappingContextMetadata_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonMappingContextMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonMappingContextMetadata()
	{
		if (!Z_Registration_Info_UClass_UCommonMappingContextMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonMappingContextMetadata.OuterSingleton, Z_Construct_UClass_UCommonMappingContextMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonMappingContextMetadata.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonMappingContextMetadata>()
	{
		return UCommonMappingContextMetadata::StaticClass();
	}
	UCommonMappingContextMetadata::UCommonMappingContextMetadata(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonMappingContextMetadata);
	UCommonMappingContextMetadata::~UCommonMappingContextMetadata() {}
	struct Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnItemClicked_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnItemClicked_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnItemClicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::_Script_CommonUI_eventOnItemClicked_Parms), Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnItemClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemClicked_DelegateWrapper(const FScriptDelegate& OnItemClicked, UUserWidget* Widget)
{
	struct _Script_CommonUI_eventOnItemClicked_Parms
	{
		UUserWidget* Widget;
	};
	_Script_CommonUI_eventOnItemClicked_Parms Parms;
	Parms.Widget=Widget;
	OnItemClicked.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnItemSelected_Parms
		{
			UUserWidget* Widget;
			bool Selected;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventOnItemSelected_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((_Script_CommonUI_eventOnItemSelected_Parms*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CommonUI_eventOnItemSelected_Parms), &Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::NewProp_Selected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonUITypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnItemSelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::_Script_CommonUI_eventOnItemSelected_Parms), Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnItemSelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnItemSelected_DelegateWrapper(const FScriptDelegate& OnItemSelected, UUserWidget* Widget, bool Selected)
{
	struct _Script_CommonUI_eventOnItemSelected_Parms
	{
		UUserWidget* Widget;
		bool Selected;
	};
	_Script_CommonUI_eventOnItemSelected_Parms Parms;
	Parms.Widget=Widget;
	Parms.Selected=Selected ? true : false;
	OnItemSelected.ProcessDelegate<UObject>(&Parms);
}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::EnumInfo[] = {
		{ EInputActionState_StaticEnum, TEXT("EInputActionState"), &Z_Registration_Info_UEnum_EInputActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2789777555U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ScriptStructInfo[] = {
		{ FCommonInputTypeInfo::StaticStruct, Z_Construct_UScriptStruct_FCommonInputTypeInfo_Statics::NewStructOps, TEXT("CommonInputTypeInfo"), &Z_Registration_Info_UScriptStruct_CommonInputTypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputTypeInfo), 1302895319U) },
		{ FCommonInputActionDataBase::StaticStruct, Z_Construct_UScriptStruct_FCommonInputActionDataBase_Statics::NewStructOps, TEXT("CommonInputActionDataBase"), &Z_Registration_Info_UScriptStruct_CommonInputActionDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputActionDataBase), 3999039770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonInputMetadata, UCommonInputMetadata::StaticClass, TEXT("UCommonInputMetadata"), &Z_Registration_Info_UClass_UCommonInputMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonInputMetadata), 1496466493U) },
		{ Z_Construct_UClass_UCommonMappingContextMetadataInterface, UCommonMappingContextMetadataInterface::StaticClass, TEXT("UCommonMappingContextMetadataInterface"), &Z_Registration_Info_UClass_UCommonMappingContextMetadataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonMappingContextMetadataInterface), 749643337U) },
		{ Z_Construct_UClass_UCommonMappingContextMetadata, UCommonMappingContextMetadata::StaticClass, TEXT("UCommonMappingContextMetadata"), &Z_Registration_Info_UClass_UCommonMappingContextMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonMappingContextMetadata), 981436320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_1463080564(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUITypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
