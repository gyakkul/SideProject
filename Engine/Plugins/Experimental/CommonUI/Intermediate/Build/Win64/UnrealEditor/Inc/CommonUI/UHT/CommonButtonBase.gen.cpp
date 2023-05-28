// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonButtonBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "Layout/Margin.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonButtonBase() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputMode();
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionWidget_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonInternalBase();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonInternalBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUserWidget();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound;
class UScriptStruct* FCommonButtonStyleOptionalSlateSound::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonButtonStyleOptionalSlateSound"));
	}
	return Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonButtonStyleOptionalSlateSound>()
{
	return FCommonButtonStyleOptionalSlateSound::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSound_MetaData[];
#endif
		static void NewProp_bHasSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonButtonStyleOptionalSlateSound>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_SetBit(void* Obj)
	{
		((FCommonButtonStyleOptionalSlateSound*)Obj)->bHasSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound = { "bHasSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCommonButtonStyleOptionalSlateSound), &Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData[] = {
		{ "Category", "Properties" },
		{ "EditCondition", "bHasSound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonButtonStyleOptionalSlateSound, Sound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound_MetaData)) }; // 2826200611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_bHasSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewProp_Sound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonButtonStyleOptionalSlateSound",
		sizeof(FCommonButtonStyleOptionalSlateSound),
		alignof(FCommonButtonStyleOptionalSlateSound),
		Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.InnerSingleton, Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound.InnerSingleton;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetDisabledTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetDisabledTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetSelectedHoveredTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedHoveredTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetSelectedTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetSelectedTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetNormalHoveredTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalHoveredTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetNormalTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetNormalTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetCustomPadding)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomPadding(Z_Param_Out_OutCustomPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetButtonPadding)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetButtonPadding(Z_Param_Out_OutButtonPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetDisabledBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDisabledBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetSelectedPressedBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelectedPressedBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetSelectedHoveredBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelectedHoveredBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetSelectedBaseBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelectedBaseBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetNormalPressedBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalPressedBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetNormalHoveredBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalHoveredBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetNormalBaseBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNormalBaseBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonStyle::execGetMaterialBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_Brush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMaterialBrush(Z_Param_Out_Brush);
		P_NATIVE_END;
	}
	void UCommonButtonStyle::StaticRegisterNativesUCommonButtonStyle()
	{
		UClass* Class = UCommonButtonStyle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetButtonPadding", &UCommonButtonStyle::execGetButtonPadding },
			{ "GetCustomPadding", &UCommonButtonStyle::execGetCustomPadding },
			{ "GetDisabledBrush", &UCommonButtonStyle::execGetDisabledBrush },
			{ "GetDisabledTextStyle", &UCommonButtonStyle::execGetDisabledTextStyle },
			{ "GetMaterialBrush", &UCommonButtonStyle::execGetMaterialBrush },
			{ "GetNormalBaseBrush", &UCommonButtonStyle::execGetNormalBaseBrush },
			{ "GetNormalHoveredBrush", &UCommonButtonStyle::execGetNormalHoveredBrush },
			{ "GetNormalHoveredTextStyle", &UCommonButtonStyle::execGetNormalHoveredTextStyle },
			{ "GetNormalPressedBrush", &UCommonButtonStyle::execGetNormalPressedBrush },
			{ "GetNormalTextStyle", &UCommonButtonStyle::execGetNormalTextStyle },
			{ "GetSelectedBaseBrush", &UCommonButtonStyle::execGetSelectedBaseBrush },
			{ "GetSelectedHoveredBrush", &UCommonButtonStyle::execGetSelectedHoveredBrush },
			{ "GetSelectedHoveredTextStyle", &UCommonButtonStyle::execGetSelectedHoveredTextStyle },
			{ "GetSelectedPressedBrush", &UCommonButtonStyle::execGetSelectedPressedBrush },
			{ "GetSelectedTextStyle", &UCommonButtonStyle::execGetSelectedTextStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics
	{
		struct CommonButtonStyle_eventGetButtonPadding_Parms
		{
			FMargin OutButtonPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutButtonPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::NewProp_OutButtonPadding = { "OutButtonPadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetButtonPadding_Parms, OutButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::NewProp_OutButtonPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetButtonPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::CommonButtonStyle_eventGetButtonPadding_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics
	{
		struct CommonButtonStyle_eventGetCustomPadding_Parms
		{
			FMargin OutCustomPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCustomPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::NewProp_OutCustomPadding = { "OutCustomPadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetCustomPadding_Parms, OutCustomPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::NewProp_OutCustomPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetCustomPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::CommonButtonStyle_eventGetCustomPadding_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics
	{
		struct CommonButtonStyle_eventGetDisabledBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetDisabledBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetDisabledBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::CommonButtonStyle_eventGetDisabledBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetDisabledTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetDisabledTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetDisabledTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::CommonButtonStyle_eventGetDisabledTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics
	{
		struct CommonButtonStyle_eventGetMaterialBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetMaterialBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetMaterialBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::CommonButtonStyle_eventGetMaterialBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalBaseBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalBaseBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetNormalBaseBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::CommonButtonStyle_eventGetNormalBaseBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalHoveredBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalHoveredBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetNormalHoveredBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::CommonButtonStyle_eventGetNormalHoveredBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetNormalHoveredTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::CommonButtonStyle_eventGetNormalHoveredTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics
	{
		struct CommonButtonStyle_eventGetNormalPressedBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalPressedBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetNormalPressedBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::CommonButtonStyle_eventGetNormalPressedBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetNormalTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetNormalTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetNormalTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::CommonButtonStyle_eventGetNormalTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedBaseBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedBaseBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetSelectedBaseBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::CommonButtonStyle_eventGetSelectedBaseBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedHoveredBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedHoveredBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetSelectedHoveredBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::CommonButtonStyle_eventGetSelectedHoveredBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetSelectedHoveredTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::CommonButtonStyle_eventGetSelectedHoveredTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics
	{
		struct CommonButtonStyle_eventGetSelectedPressedBrush_Parms
		{
			FSlateBrush Brush;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedPressedBrush_Parms, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(nullptr, 0) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::NewProp_Brush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetSelectedPressedBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::CommonButtonStyle_eventGetSelectedPressedBrush_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics
	{
		struct CommonButtonStyle_eventGetSelectedTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonStyle_eventGetSelectedTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common ButtonStyle|Getters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonStyle, nullptr, "GetSelectedTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::CommonButtonStyle_eventGetSelectedTextStyle_Parms), Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonButtonStyle);
	UClass* Z_Construct_UClass_UCommonButtonStyle_NoRegister()
	{
		return UCommonButtonStyle::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleMaterial_MetaData[];
#endif
		static void NewProp_bSingleMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleMaterialBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleMaterialBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalHovered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalPressed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHovered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Disabled_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Disabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NormalTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalHoveredTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NormalHoveredTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SelectedHoveredTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledTextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DisabledTextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedPressedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedPressedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedHoveredSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedHoveredSlateSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonButtonStyle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetButtonPadding, "GetButtonPadding" }, // 3778760444
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetCustomPadding, "GetCustomPadding" }, // 2061519423
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetDisabledBrush, "GetDisabledBrush" }, // 2082577865
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetDisabledTextStyle, "GetDisabledTextStyle" }, // 427164096
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetMaterialBrush, "GetMaterialBrush" }, // 2564998960
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalBaseBrush, "GetNormalBaseBrush" }, // 113668713
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredBrush, "GetNormalHoveredBrush" }, // 2262306947
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalHoveredTextStyle, "GetNormalHoveredTextStyle" }, // 40496561
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalPressedBrush, "GetNormalPressedBrush" }, // 270043013
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetNormalTextStyle, "GetNormalTextStyle" }, // 3227475194
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedBaseBrush, "GetSelectedBaseBrush" }, // 1178051966
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredBrush, "GetSelectedHoveredBrush" }, // 3416655409
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedHoveredTextStyle, "GetSelectedHoveredTextStyle" }, // 2465248835
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedPressedBrush, "GetSelectedPressedBrush" }, // 814926763
		{ &Z_Construct_UFunction_UCommonButtonStyle_GetSelectedTextStyle, "GetSelectedTextStyle" }, // 3834164643
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/* ---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n *       we return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)\n */" },
		{ "IncludePath", "CommonButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "---- All properties must be EditDefaultsOnly, BlueprintReadOnly !!! -----\n*       we return the CDO to blueprints, so we cannot allow any changes (blueprint doesn't support const variables)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Whether or not the style uses a drop shadow */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Whether or not the style uses a drop shadow" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_SetBit(void* Obj)
	{
		((UCommonButtonStyle*)Obj)->bSingleMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial = { "bSingleMaterial", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonStyle), &Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The normal (un-selected) brush to apply to each size of this button */" },
		{ "EditCondition", "bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The normal (un-selected) brush to apply to each size of this button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush = { "SingleMaterialBrush", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SingleMaterialBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData[] = {
		{ "Category", "Normal" },
		{ "Comment", "/** The normal (un-selected) brush to apply to each size of this button */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The normal (un-selected) brush to apply to each size of this button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase = { "NormalBase", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalBase), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData[] = {
		{ "Category", "Normal" },
		{ "Comment", "/** The normal (un-selected) brush to apply to each size of this button when hovered */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The normal (un-selected) brush to apply to each size of this button when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered = { "NormalHovered", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData[] = {
		{ "Category", "Normal" },
		{ "Comment", "/** The normal (un-selected) brush to apply to each size of this button when pressed */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The normal (un-selected) brush to apply to each size of this button when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed = { "NormalPressed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalPressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData[] = {
		{ "Category", "Selected" },
		{ "Comment", "/** The selected brush to apply to each size of this button */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The selected brush to apply to each size of this button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase = { "SelectedBase", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedBase), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData[] = {
		{ "Category", "Selected" },
		{ "Comment", "/** The selected brush to apply to each size of this button when hovered */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The selected brush to apply to each size of this button when hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered = { "SelectedHovered", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHovered), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData[] = {
		{ "Category", "Selected" },
		{ "Comment", "/** The selected brush to apply to each size of this button when pressed */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The selected brush to apply to each size of this button when pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed = { "SelectedPressed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedPressed), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData[] = {
		{ "Category", "Disabled" },
		{ "Comment", "/** The disabled brush to apply to each size of this button */" },
		{ "EditCondition", "!bSingleMaterial" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The disabled brush to apply to each size of this button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled = { "Disabled", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, Disabled), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The button content padding to apply for each size */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The button content padding to apply for each size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The custom padding of the button to use for each size */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The custom padding of the button to use for each size" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding = { "CustomPadding", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, CustomPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The minimum width of buttons using this style */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum width of buttons using this style" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth = { "MinWidth", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, MinWidth), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The minimum height of buttons using this style */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum height of buttons using this style" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The text style to use when un-selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The text style to use when un-selected" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle = { "NormalTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The text style to use when un-selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The text style to use when un-selected" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle = { "NormalHoveredTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, NormalHoveredTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The text style to use when selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The text style to use when selected" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle = { "SelectedTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The text style to use when un-selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The text style to use when un-selected" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle = { "SelectedHoveredTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHoveredTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The text style to use when disabled */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The text style to use when disabled" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle = { "DisabledTextStyle", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, DisabledTextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is pressed */" },
		{ "DisplayName", "Pressed Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound = { "PressedSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, PressedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is pressed while selected */" },
		{ "DisplayName", "Selected Pressed Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is pressed while selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound = { "SelectedPressedSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedPressedSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound_MetaData)) }; // 3960252859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedPressedSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is pressed while locked */" },
		{ "DisplayName", "Locked Pressed Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is pressed while locked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedPressedSlateSound = { "LockedPressedSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, LockedPressedSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedPressedSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedPressedSlateSound_MetaData)) }; // 3960252859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is hovered */" },
		{ "DisplayName", "Hovered Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is hovered" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound = { "HoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, HoveredSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is hovered while selected */" },
		{ "DisplayName", "Selected Hovered Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is hovered while selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound = { "SelectedHoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, SelectedHoveredSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound_MetaData)) }; // 3960252859
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedHoveredSlateSound_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The sound to play when the button is hovered while locked */" },
		{ "DisplayName", "Locked Hovered Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The sound to play when the button is hovered while locked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedHoveredSlateSound = { "LockedHoveredSlateSound", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonStyle, LockedHoveredSlateSound), Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedHoveredSlateSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedHoveredSlateSound_MetaData)) }; // 3960252859
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_bSingleMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SingleMaterialBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_Disabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_ButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_CustomPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_NormalHoveredTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_DisabledTextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_PressedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedPressedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedPressedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_HoveredSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_SelectedHoveredSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonStyle_Statics::NewProp_LockedHoveredSlateSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonStyle_Statics::ClassParams = {
		&UCommonButtonStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonStyle()
	{
		if (!Z_Registration_Info_UClass_UCommonButtonStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonButtonStyle.OuterSingleton, Z_Construct_UClass_UCommonButtonStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonButtonStyle.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonButtonStyle>()
	{
		return UCommonButtonStyle::StaticClass();
	}
	UCommonButtonStyle::UCommonButtonStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonStyle);
	UCommonButtonStyle::~UCommonButtonStyle() {}
	void UCommonButtonInternalBase::StaticRegisterNativesUCommonButtonInternalBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonButtonInternalBase);
	UClass* Z_Construct_UClass_UCommonButtonInternalBase_NoRegister()
	{
		return UCommonButtonInternalBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonInternalBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoubleClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoubleClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bButtonEnabled_MetaData[];
#endif
		static void NewProp_bButtonEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bButtonEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractionEnabled_MetaData[];
#endif
		static void NewProp_bInteractionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonInternalBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Custom UButton override that allows us to disable clicking without disabling the widget entirely */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "CommonButtonBase.h" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Custom UButton override that allows us to disable clicking without disabling the widget entirely" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_OnDoubleClicked_MetaData[] = {
		{ "Category", "Common Button Internal|Event" },
		{ "Comment", "/** Called when the button is clicked */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Called when the button is clicked" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_OnDoubleClicked = { "OnDoubleClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonInternalBase, OnDoubleClicked), Z_Construct_UDelegateFunction_UMG_OnButtonClickedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_OnDoubleClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_OnDoubleClicked_MetaData)) }; // 2358670591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinWidth_MetaData[] = {
		{ "Comment", "/** The minimum width of the button */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum width of the button" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinWidth = { "MinWidth", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonInternalBase, MinWidth), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Comment", "/** The minimum height of the button */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum height of the button" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonInternalBase, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled_MetaData[] = {
		{ "Comment", "/** If true, this button is enabled. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "If true, this button is enabled." },
	};
#endif
	void Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled_SetBit(void* Obj)
	{
		((UCommonButtonInternalBase*)Obj)->bButtonEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled = { "bButtonEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonInternalBase), &Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled_MetaData[] = {
		{ "Comment", "/** If true, this button can be interacted with it normally. Otherwise, it will not react to being hovered or clicked. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "If true, this button can be interacted with it normally. Otherwise, it will not react to being hovered or clicked." },
	};
#endif
	void Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled_SetBit(void* Obj)
	{
		((UCommonButtonInternalBase*)Obj)->bInteractionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled = { "bInteractionEnabled", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonInternalBase), &Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonInternalBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_OnDoubleClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bButtonEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonInternalBase_Statics::NewProp_bInteractionEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonInternalBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonInternalBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonInternalBase_Statics::ClassParams = {
		&UCommonButtonInternalBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonButtonInternalBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonInternalBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonInternalBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonInternalBase()
	{
		if (!Z_Registration_Info_UClass_UCommonButtonInternalBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonButtonInternalBase.OuterSingleton, Z_Construct_UClass_UCommonButtonInternalBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonButtonInternalBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonButtonInternalBase>()
	{
		return UCommonButtonInternalBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonInternalBase);
	UCommonButtonInternalBase::~UCommonButtonInternalBase() {}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventCommonSelectedStateChangedBase_Parms
		{
			UCommonButtonBase* Button;
			bool Selected;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static void NewProp_Selected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Selected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventCommonSelectedStateChangedBase_Parms, Button), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Button_MetaData)) };
	void Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Selected_SetBit(void* Obj)
	{
		((_Script_CommonUI_eventCommonSelectedStateChangedBase_Parms*)Obj)->Selected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Selected = { "Selected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CommonUI_eventCommonSelectedStateChangedBase_Parms), &Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Selected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Button,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::NewProp_Selected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonSelectedStateChangedBase__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::_Script_CommonUI_eventCommonSelectedStateChangedBase_Parms), Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonSelectedStateChangedBase_DelegateWrapper(const FMulticastScriptDelegate& CommonSelectedStateChangedBase, UCommonButtonBase* Button, bool Selected)
{
	struct _Script_CommonUI_eventCommonSelectedStateChangedBase_Parms
	{
		UCommonButtonBase* Button;
		bool Selected;
	};
	_Script_CommonUI_eventCommonSelectedStateChangedBase_Parms Parms;
	Parms.Button=Button;
	Parms.Selected=Selected ? true : false;
	CommonSelectedStateChangedBase.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventCommonButtonBaseClicked_Parms
		{
			UCommonButtonBase* Button;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Button_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Button;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::NewProp_Button_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventCommonButtonBaseClicked_Parms, Button), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::NewProp_Button_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::NewProp_Button_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonButtonBaseClicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::_Script_CommonUI_eventCommonButtonBaseClicked_Parms), Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonButtonBaseClicked_DelegateWrapper(const FMulticastScriptDelegate& CommonButtonBaseClicked, UCommonButtonBase* Button)
{
	struct _Script_CommonUI_eventCommonButtonBaseClicked_Parms
	{
		UCommonButtonBase* Button;
	};
	_Script_CommonUI_eventCommonButtonBaseClicked_Parms Parms;
	Parms.Button=Button;
	CommonButtonBaseClicked.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonButtonBase::execNativeOnActionComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnActionComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execNativeOnActionProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeldPercent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativeOnActionProgress(Z_Param_HeldPercent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetSelectedInternal)
	{
		P_GET_UBOOL(Z_Param_bInSelected);
		P_GET_UBOOL(Z_Param_bAllowSound);
		P_GET_UBOOL(Z_Param_bBroadcast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedInternal(Z_Param_bInSelected,Z_Param_bAllowSound,Z_Param_bBroadcast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execStopDoubleClickPropagation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopDoubleClickPropagation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleFocusLost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFocusLost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleFocusReceived)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleFocusReceived();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execHandleTriggeringActionCommited)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bPassthrough);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTriggeringActionCommited(Z_Param_Out_bPassthrough);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execOnInputMethodChanged)
	{
		P_GET_ENUM(ECommonInputType,Z_Param_CurrentInputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputMethodChanged(ECommonInputType(Z_Param_CurrentInputType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetLockedHoveredSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockedHoveredSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetLockedPressedSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLockedPressedSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetSelectedHoveredSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedHoveredSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetSelectedPressedSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectedPressedSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetHoveredSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHoveredSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetPressedSoundOverride)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressedSoundOverride(Z_Param_Sound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetInputActionProgressMaterial)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InProgressMaterialBrush);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InProgressMaterialParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputActionProgressMaterial(Z_Param_Out_InProgressMaterialBrush,Z_Param_Out_InProgressMaterialParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetSingleMaterialStyleMID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetSingleMaterialStyleMID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetIsFocusable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsFocusable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsFocusable)
	{
		P_GET_UBOOL(Z_Param_bInIsFocusable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsFocusable(Z_Param_bInIsFocusable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetEnhancedInputAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputAction**)Z_Param__Result=P_THIS->GetEnhancedInputAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetInputAction)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInputAction(Z_Param_Out_InputActionRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetTriggeringEnhancedInputAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_InInputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggeringEnhancedInputAction(Z_Param_InInputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetTriggeringInputAction)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggeringInputAction(Z_Param_Out_InputActionRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetTriggeredInputAction)
	{
		P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_InputActionRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTriggeredInputAction(Z_Param_Out_InputActionRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetMinDimensions)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinWidth);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDimensions(Z_Param_InMinWidth,Z_Param_InMinHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetCurrentTextStyleClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UCommonTextStyle> *)Z_Param__Result=P_THIS->GetCurrentTextStyleClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetCurrentTextStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonTextStyle**)Z_Param__Result=P_THIS->GetCurrentTextStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetCurrentCustomPadding)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutCustomPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentCustomPadding(Z_Param_Out_OutCustomPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetCurrentButtonPadding)
	{
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_OutButtonPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentButtonPadding(Z_Param_Out_OutButtonPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCommonButtonStyle**)Z_Param__Result=P_THIS->GetStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetStyle)
	{
		P_GET_OBJECT(UClass,Z_Param_InStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStyle(Z_Param_InStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetShouldSelectUponReceivingFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldSelectUponReceivingFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetShouldSelectUponReceivingFocus)
	{
		P_GET_UBOOL(Z_Param_bInShouldSelectUponReceivingFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldSelectUponReceivingFocus(Z_Param_bInShouldSelectUponReceivingFocus);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execClearSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetLocked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLocked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execGetSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsLocked)
	{
		P_GET_UBOOL(Z_Param_bInIsLocked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLocked(Z_Param_bInIsLocked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsSelected)
	{
		P_GET_UBOOL(Z_Param_InSelected);
		P_GET_UBOOL(Z_Param_bGiveClickFeedback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSelected(Z_Param_InSelected,Z_Param_bGiveClickFeedback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetShouldUseFallbackDefaultInputAction)
	{
		P_GET_UBOOL(Z_Param_bInShouldUseFallbackDefaultInputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldUseFallbackDefaultInputAction(Z_Param_bInShouldUseFallbackDefaultInputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsToggleable)
	{
		P_GET_UBOOL(Z_Param_bInIsToggleable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsToggleable(Z_Param_bInIsToggleable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsInteractableWhenSelected)
	{
		P_GET_UBOOL(Z_Param_bInInteractableWhenSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInteractableWhenSelected(Z_Param_bInInteractableWhenSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsSelectable)
	{
		P_GET_UBOOL(Z_Param_bInIsSelectable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSelectable(Z_Param_bInIsSelectable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetPressMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InPressMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressMethod(EButtonPressMethod::Type(Z_Param_InPressMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetTouchMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InTouchMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTouchMethod(EButtonTouchMethod::Type(Z_Param_InTouchMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetClickMethod)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InClickMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetClickMethod(EButtonClickMethod::Type(Z_Param_InClickMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execIsPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execIsInteractionEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInteractionEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetHideInputAction)
	{
		P_GET_UBOOL(Z_Param_bInHideInputAction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHideInputAction(Z_Param_bInHideInputAction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execSetIsInteractionEnabled)
	{
		P_GET_UBOOL(Z_Param_bInIsInteractionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsInteractionEnabled(Z_Param_bInIsInteractionEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonButtonBase::execDisableButtonWithReason)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_DisabledReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableButtonWithReason(Z_Param_Out_DisabledReason);
		P_NATIVE_END;
	}
	struct CommonButtonBase_eventBP_OnInputMethodChanged_Parms
	{
		ECommonInputType CurrentInputType;
	};
	struct CommonButtonBase_eventBP_OnLockedChanged_Parms
	{
		bool bIsLocked;
	};
	struct CommonButtonBase_eventOnActionProgress_Parms
	{
		float HeldPercent;
	};
	struct CommonButtonBase_eventOnTriggeredInputActionChanged_Parms
	{
		FDataTableRowHandle NewTriggeredAction;
	};
	struct CommonButtonBase_eventOnTriggeringEnhancedInputActionChanged_Parms
	{
		const UInputAction* InInputAction;
	};
	struct CommonButtonBase_eventOnTriggeringInputActionChanged_Parms
	{
		FDataTableRowHandle NewTriggeredAction;
	};
	static FName NAME_UCommonButtonBase_BP_OnClicked = FName(TEXT("BP_OnClicked"));
	void UCommonButtonBase::BP_OnClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnClicked),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnDeselected = FName(TEXT("BP_OnDeselected"));
	void UCommonButtonBase::BP_OnDeselected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnDeselected),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnDisabled = FName(TEXT("BP_OnDisabled"));
	void UCommonButtonBase::BP_OnDisabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnDisabled),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnDoubleClicked = FName(TEXT("BP_OnDoubleClicked"));
	void UCommonButtonBase::BP_OnDoubleClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnDoubleClicked),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnEnabled = FName(TEXT("BP_OnEnabled"));
	void UCommonButtonBase::BP_OnEnabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnEnabled),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnFocusLost = FName(TEXT("BP_OnFocusLost"));
	void UCommonButtonBase::BP_OnFocusLost()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnFocusLost),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnFocusReceived = FName(TEXT("BP_OnFocusReceived"));
	void UCommonButtonBase::BP_OnFocusReceived()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnFocusReceived),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnHovered = FName(TEXT("BP_OnHovered"));
	void UCommonButtonBase::BP_OnHovered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnHovered),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnInputMethodChanged = FName(TEXT("BP_OnInputMethodChanged"));
	void UCommonButtonBase::BP_OnInputMethodChanged(ECommonInputType CurrentInputType)
	{
		CommonButtonBase_eventBP_OnInputMethodChanged_Parms Parms;
		Parms.CurrentInputType=CurrentInputType;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnInputMethodChanged),&Parms);
	}
	static FName NAME_UCommonButtonBase_BP_OnLockClicked = FName(TEXT("BP_OnLockClicked"));
	void UCommonButtonBase::BP_OnLockClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnLockClicked),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnLockDoubleClicked = FName(TEXT("BP_OnLockDoubleClicked"));
	void UCommonButtonBase::BP_OnLockDoubleClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnLockDoubleClicked),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnLockedChanged = FName(TEXT("BP_OnLockedChanged"));
	void UCommonButtonBase::BP_OnLockedChanged(bool bIsLocked)
	{
		CommonButtonBase_eventBP_OnLockedChanged_Parms Parms;
		Parms.bIsLocked=bIsLocked ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnLockedChanged),&Parms);
	}
	static FName NAME_UCommonButtonBase_BP_OnPressed = FName(TEXT("BP_OnPressed"));
	void UCommonButtonBase::BP_OnPressed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnPressed),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnReleased = FName(TEXT("BP_OnReleased"));
	void UCommonButtonBase::BP_OnReleased()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnReleased),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnSelected = FName(TEXT("BP_OnSelected"));
	void UCommonButtonBase::BP_OnSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnSelected),NULL);
	}
	static FName NAME_UCommonButtonBase_BP_OnUnhovered = FName(TEXT("BP_OnUnhovered"));
	void UCommonButtonBase::BP_OnUnhovered()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_BP_OnUnhovered),NULL);
	}
	static FName NAME_UCommonButtonBase_OnActionComplete = FName(TEXT("OnActionComplete"));
	void UCommonButtonBase::OnActionComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnActionComplete),NULL);
	}
	static FName NAME_UCommonButtonBase_OnActionProgress = FName(TEXT("OnActionProgress"));
	void UCommonButtonBase::OnActionProgress(float HeldPercent)
	{
		CommonButtonBase_eventOnActionProgress_Parms Parms;
		Parms.HeldPercent=HeldPercent;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnActionProgress),&Parms);
	}
	static FName NAME_UCommonButtonBase_OnCurrentTextStyleChanged = FName(TEXT("OnCurrentTextStyleChanged"));
	void UCommonButtonBase::OnCurrentTextStyleChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnCurrentTextStyleChanged),NULL);
	}
	static FName NAME_UCommonButtonBase_OnTriggeredInputActionChanged = FName(TEXT("OnTriggeredInputActionChanged"));
	void UCommonButtonBase::OnTriggeredInputActionChanged(FDataTableRowHandle const& NewTriggeredAction)
	{
		CommonButtonBase_eventOnTriggeredInputActionChanged_Parms Parms;
		Parms.NewTriggeredAction=NewTriggeredAction;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnTriggeredInputActionChanged),&Parms);
	}
	static FName NAME_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged = FName(TEXT("OnTriggeringEnhancedInputActionChanged"));
	void UCommonButtonBase::OnTriggeringEnhancedInputActionChanged(const UInputAction* InInputAction)
	{
		CommonButtonBase_eventOnTriggeringEnhancedInputActionChanged_Parms Parms;
		Parms.InInputAction=InInputAction;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged),&Parms);
	}
	static FName NAME_UCommonButtonBase_OnTriggeringInputActionChanged = FName(TEXT("OnTriggeringInputActionChanged"));
	void UCommonButtonBase::OnTriggeringInputActionChanged(FDataTableRowHandle const& NewTriggeredAction)
	{
		CommonButtonBase_eventOnTriggeringInputActionChanged_Parms Parms;
		Parms.NewTriggeredAction=NewTriggeredAction;
		ProcessEvent(FindFunctionChecked(NAME_UCommonButtonBase_OnTriggeringInputActionChanged),&Parms);
	}
	void UCommonButtonBase::StaticRegisterNativesUCommonButtonBase()
	{
		UClass* Class = UCommonButtonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearSelection", &UCommonButtonBase::execClearSelection },
			{ "DisableButtonWithReason", &UCommonButtonBase::execDisableButtonWithReason },
			{ "GetCurrentButtonPadding", &UCommonButtonBase::execGetCurrentButtonPadding },
			{ "GetCurrentCustomPadding", &UCommonButtonBase::execGetCurrentCustomPadding },
			{ "GetCurrentTextStyle", &UCommonButtonBase::execGetCurrentTextStyle },
			{ "GetCurrentTextStyleClass", &UCommonButtonBase::execGetCurrentTextStyleClass },
			{ "GetEnhancedInputAction", &UCommonButtonBase::execGetEnhancedInputAction },
			{ "GetInputAction", &UCommonButtonBase::execGetInputAction },
			{ "GetIsFocusable", &UCommonButtonBase::execGetIsFocusable },
			{ "GetLocked", &UCommonButtonBase::execGetLocked },
			{ "GetSelected", &UCommonButtonBase::execGetSelected },
			{ "GetShouldSelectUponReceivingFocus", &UCommonButtonBase::execGetShouldSelectUponReceivingFocus },
			{ "GetSingleMaterialStyleMID", &UCommonButtonBase::execGetSingleMaterialStyleMID },
			{ "GetStyle", &UCommonButtonBase::execGetStyle },
			{ "HandleButtonClicked", &UCommonButtonBase::execHandleButtonClicked },
			{ "HandleButtonPressed", &UCommonButtonBase::execHandleButtonPressed },
			{ "HandleButtonReleased", &UCommonButtonBase::execHandleButtonReleased },
			{ "HandleFocusLost", &UCommonButtonBase::execHandleFocusLost },
			{ "HandleFocusReceived", &UCommonButtonBase::execHandleFocusReceived },
			{ "HandleTriggeringActionCommited", &UCommonButtonBase::execHandleTriggeringActionCommited },
			{ "IsInteractionEnabled", &UCommonButtonBase::execIsInteractionEnabled },
			{ "IsPressed", &UCommonButtonBase::execIsPressed },
			{ "NativeOnActionComplete", &UCommonButtonBase::execNativeOnActionComplete },
			{ "NativeOnActionProgress", &UCommonButtonBase::execNativeOnActionProgress },
			{ "OnInputMethodChanged", &UCommonButtonBase::execOnInputMethodChanged },
			{ "SetClickMethod", &UCommonButtonBase::execSetClickMethod },
			{ "SetHideInputAction", &UCommonButtonBase::execSetHideInputAction },
			{ "SetHoveredSoundOverride", &UCommonButtonBase::execSetHoveredSoundOverride },
			{ "SetInputActionProgressMaterial", &UCommonButtonBase::execSetInputActionProgressMaterial },
			{ "SetIsFocusable", &UCommonButtonBase::execSetIsFocusable },
			{ "SetIsInteractableWhenSelected", &UCommonButtonBase::execSetIsInteractableWhenSelected },
			{ "SetIsInteractionEnabled", &UCommonButtonBase::execSetIsInteractionEnabled },
			{ "SetIsLocked", &UCommonButtonBase::execSetIsLocked },
			{ "SetIsSelectable", &UCommonButtonBase::execSetIsSelectable },
			{ "SetIsSelected", &UCommonButtonBase::execSetIsSelected },
			{ "SetIsToggleable", &UCommonButtonBase::execSetIsToggleable },
			{ "SetLockedHoveredSoundOverride", &UCommonButtonBase::execSetLockedHoveredSoundOverride },
			{ "SetLockedPressedSoundOverride", &UCommonButtonBase::execSetLockedPressedSoundOverride },
			{ "SetMinDimensions", &UCommonButtonBase::execSetMinDimensions },
			{ "SetPressedSoundOverride", &UCommonButtonBase::execSetPressedSoundOverride },
			{ "SetPressMethod", &UCommonButtonBase::execSetPressMethod },
			{ "SetSelectedHoveredSoundOverride", &UCommonButtonBase::execSetSelectedHoveredSoundOverride },
			{ "SetSelectedInternal", &UCommonButtonBase::execSetSelectedInternal },
			{ "SetSelectedPressedSoundOverride", &UCommonButtonBase::execSetSelectedPressedSoundOverride },
			{ "SetShouldSelectUponReceivingFocus", &UCommonButtonBase::execSetShouldSelectUponReceivingFocus },
			{ "SetShouldUseFallbackDefaultInputAction", &UCommonButtonBase::execSetShouldUseFallbackDefaultInputAction },
			{ "SetStyle", &UCommonButtonBase::execSetStyle },
			{ "SetTouchMethod", &UCommonButtonBase::execSetTouchMethod },
			{ "SetTriggeredInputAction", &UCommonButtonBase::execSetTriggeredInputAction },
			{ "SetTriggeringEnhancedInputAction", &UCommonButtonBase::execSetTriggeringEnhancedInputAction },
			{ "SetTriggeringInputAction", &UCommonButtonBase::execSetTriggeringInputAction },
			{ "StopDoubleClickPropagation", &UCommonButtonBase::execStopDoubleClickPropagation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Clicked" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Deselected" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnDeselected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Disabled" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnDisabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Double Clicked" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnDoubleClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Enabled" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Unfocused" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnFocusLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Focused" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnFocusReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Hovered" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnHovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventBP_OnInputMethodChanged_Parms, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::NewProp_CurrentInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Input Method Changed" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnInputMethodChanged", nullptr, nullptr, sizeof(CommonButtonBase_eventBP_OnInputMethodChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Lock Clicked" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnLockClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Lock Double Clicked" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnLockDoubleClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics
	{
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((CommonButtonBase_eventBP_OnLockedChanged_Parms*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventBP_OnLockedChanged_Parms), &Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::NewProp_bIsLocked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Locked Changed" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnLockedChanged", nullptr, nullptr, sizeof(CommonButtonBase_eventBP_OnLockedChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Pressed" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Released" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Selected" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "DisplayName", "On Unhovered" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "BP_OnUnhovered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "ClearSelection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_ClearSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_ClearSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics
	{
		struct CommonButtonBase_eventDisableButtonWithReason_Parms
		{
			FText DisabledReason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledReason_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisabledReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::NewProp_DisabledReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::NewProp_DisabledReason = { "DisabledReason", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventDisableButtonWithReason_Parms, DisabledReason), METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::NewProp_DisabledReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::NewProp_DisabledReason_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::NewProp_DisabledReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Disables this button with a reason (use instead of SetIsEnabled) */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Disables this button with a reason (use instead of SetIsEnabled)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "DisableButtonWithReason", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::CommonButtonBase_eventDisableButtonWithReason_Parms), Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics
	{
		struct CommonButtonBase_eventGetCurrentButtonPadding_Parms
		{
			FMargin OutButtonPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutButtonPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::NewProp_OutButtonPadding = { "OutButtonPadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetCurrentButtonPadding_Parms, OutButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::NewProp_OutButtonPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @return The current button padding that corresponds to the current size and selection state */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@return The current button padding that corresponds to the current size and selection state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetCurrentButtonPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::CommonButtonBase_eventGetCurrentButtonPadding_Parms), Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics
	{
		struct CommonButtonBase_eventGetCurrentCustomPadding_Parms
		{
			FMargin OutCustomPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutCustomPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::NewProp_OutCustomPadding = { "OutCustomPadding", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetCurrentCustomPadding_Parms, OutCustomPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::NewProp_OutCustomPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @return The custom padding that corresponds to the current size and selection state */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@return The custom padding that corresponds to the current size and selection state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetCurrentCustomPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::CommonButtonBase_eventGetCurrentCustomPadding_Parms), Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics
	{
		struct CommonButtonBase_eventGetCurrentTextStyle_Parms
		{
			UCommonTextStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetCurrentTextStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @return The text style that corresponds to the current size and selection state */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@return The text style that corresponds to the current size and selection state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetCurrentTextStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::CommonButtonBase_eventGetCurrentTextStyle_Parms), Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics
	{
		struct CommonButtonBase_eventGetCurrentTextStyleClass_Parms
		{
			TSubclassOf<UCommonTextStyle>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetCurrentTextStyleClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @return The class of the text style that corresponds to the current size and selection state */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@return The class of the text style that corresponds to the current size and selection state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetCurrentTextStyleClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::CommonButtonBase_eventGetCurrentTextStyleClass_Parms), Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics
	{
		struct CommonButtonBase_eventGetEnhancedInputAction_Parms
		{
			UInputAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetEnhancedInputAction_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Gets the appropriate enhanced input action that is set */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Gets the appropriate enhanced input action that is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetEnhancedInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::CommonButtonBase_eventGetEnhancedInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics
	{
		struct CommonButtonBase_eventGetInputAction_Parms
		{
			FDataTableRowHandle InputActionRow;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_InputActionRow = { "InputActionRow", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetInputAction_Parms, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(nullptr, 0) }; // 2710926200
	void Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventGetInputAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventGetInputAction_Parms), &Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_InputActionRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Gets the appropriate input action that is set */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Gets the appropriate input action that is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::CommonButtonBase_eventGetInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics
	{
		struct CommonButtonBase_eventGetIsFocusable_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventGetIsFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventGetIsFocusable_Parms), &Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Gets the bIsFocusable flag */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Gets the bIsFocusable flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetIsFocusable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::CommonButtonBase_eventGetIsFocusable_Parms), Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics
	{
		struct CommonButtonBase_eventGetLocked_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventGetLocked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventGetLocked_Parms), &Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @returns True if the button is currently locked, False otherwise */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@returns True if the button is currently locked, False otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::CommonButtonBase_eventGetLocked_Parms), Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics
	{
		struct CommonButtonBase_eventGetSelected_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventGetSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventGetSelected_Parms), &Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @returns True if the button is currently in a selected state, False otherwise */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@returns True if the button is currently in a selected state, False otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::CommonButtonBase_eventGetSelected_Parms), Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics
	{
		struct CommonButtonBase_eventGetShouldSelectUponReceivingFocus_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventGetShouldSelectUponReceivingFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventGetShouldSelectUponReceivingFocus_Parms), &Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Get whether the button should become selected upon receiving focus or not */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Get whether the button should become selected upon receiving focus or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetShouldSelectUponReceivingFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::CommonButtonBase_eventGetShouldSelectUponReceivingFocus_Parms), Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics
	{
		struct CommonButtonBase_eventGetSingleMaterialStyleMID_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetSingleMaterialStyleMID_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Returns the dynamic instance of the material being used for this button, if it is using a single material style. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Returns the dynamic instance of the material being used for this button, if it is using a single material style." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetSingleMaterialStyleMID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::CommonButtonBase_eventGetSingleMaterialStyleMID_Parms), Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics
	{
		struct CommonButtonBase_eventGetStyle_Parms
		{
			UCommonButtonStyle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventGetStyle_Parms, ReturnValue), Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** @Returns Current button style*/" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "@Returns Current button style" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "GetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::CommonButtonBase_eventGetStyle_Parms), Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_GetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_GetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Handler function registered to the underlying button's click. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Handler function registered to the underlying button's click." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Helper function registered to the underlying button when pressed */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Helper function registered to the underlying button when pressed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Helper function registered to the underlying button when released */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Helper function registered to the underlying button when released" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleButtonReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Helper function registered to the underlying button losing focus */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Helper function registered to the underlying button losing focus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleFocusLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Helper function registered to the underlying button receiving focus */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Helper function registered to the underlying button receiving focus" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleFocusReceived", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics
	{
		struct CommonButtonBase_eventHandleTriggeringActionCommited_Parms
		{
			bool bPassthrough;
		};
		static void NewProp_bPassthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassthrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::NewProp_bPassthrough_SetBit(void* Obj)
	{
		((CommonButtonBase_eventHandleTriggeringActionCommited_Parms*)Obj)->bPassthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::NewProp_bPassthrough = { "bPassthrough", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventHandleTriggeringActionCommited_Parms), &Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::NewProp_bPassthrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::NewProp_bPassthrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "HandleTriggeringActionCommited", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::CommonButtonBase_eventHandleTriggeringActionCommited_Parms), Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics
	{
		struct CommonButtonBase_eventIsInteractionEnabled_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventIsInteractionEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventIsInteractionEnabled_Parms), &Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Is this button currently interactable? (use instead of GetIsEnabled) */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Is this button currently interactable? (use instead of GetIsEnabled)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "IsInteractionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::CommonButtonBase_eventIsInteractionEnabled_Parms), Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics
	{
		struct CommonButtonBase_eventIsPressed_Parms
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
	void Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonButtonBase_eventIsPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventIsPressed_Parms), &Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Is this button currently pressed? */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Is this button currently pressed?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "IsPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::CommonButtonBase_eventIsPressed_Parms), Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_IsPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_IsPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "NativeOnActionComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics
	{
		struct CommonButtonBase_eventNativeOnActionProgress_Parms
		{
			float HeldPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::NewProp_HeldPercent = { "HeldPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventNativeOnActionProgress_Parms, HeldPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::NewProp_HeldPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "NativeOnActionProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::CommonButtonBase_eventNativeOnActionProgress_Parms), Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "Comment", "/** Callback fired when hold events complete */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Callback fired when hold events complete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnActionComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnActionComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnActionComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::NewProp_HeldPercent = { "HeldPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventOnActionProgress_Parms, HeldPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::NewProp_HeldPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "Comment", "/** Callback fired continously during hold interactions */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Callback fired continously during hold interactions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnActionProgress", nullptr, nullptr, sizeof(CommonButtonBase_eventOnActionProgress_Parms), Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnActionProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnActionProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Common Button" },
		{ "Comment", "/** Allows derived classes to take action when the current text style has changed */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Allows derived classes to take action when the current text style has changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnCurrentTextStyleChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics
	{
		struct CommonButtonBase_eventOnInputMethodChanged_Parms
		{
			ECommonInputType CurrentInputType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventOnInputMethodChanged_Parms, CurrentInputType), Z_Construct_UEnum_CommonInput_ECommonInputType, METADATA_PARAMS(nullptr, 0) }; // 3567225506
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::NewProp_CurrentInputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called via delegate when the input method changes */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Called via delegate when the input method changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnInputMethodChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::CommonButtonBase_eventOnInputMethodChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTriggeredAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTriggeredAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::NewProp_NewTriggeredAction = { "NewTriggeredAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventOnTriggeredInputActionChanged_Parms, NewTriggeredAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::NewProp_NewTriggeredAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "Comment", "/** Callback fired when input action datatable row changes */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Callback fired when input action datatable row changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnTriggeredInputActionChanged", nullptr, nullptr, sizeof(CommonButtonBase_eventOnTriggeredInputActionChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::NewProp_InInputAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::NewProp_InInputAction = { "InInputAction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventOnTriggeringEnhancedInputActionChanged_Parms, InInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::NewProp_InInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::NewProp_InInputAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::NewProp_InInputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "Comment", "/** Callback fired when enhanced input action changes */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Callback fired when enhanced input action changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnTriggeringEnhancedInputActionChanged", nullptr, nullptr, sizeof(CommonButtonBase_eventOnTriggeringEnhancedInputActionChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTriggeredAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTriggeredAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::NewProp_NewTriggeredAction = { "NewTriggeredAction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventOnTriggeringInputActionChanged_Parms, NewTriggeredAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::NewProp_NewTriggeredAction_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::NewProp_NewTriggeredAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button" },
		{ "Comment", "/** Callback fired when triggered input action datatable row changes */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Callback fired when triggered input action datatable row changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "OnTriggeringInputActionChanged", nullptr, nullptr, sizeof(CommonButtonBase_eventOnTriggeringInputActionChanged_Parms), Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics
	{
		struct CommonButtonBase_eventSetClickMethod_Parms
		{
			TEnumAsByte<EButtonClickMethod::Type> InClickMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InClickMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::NewProp_InClickMethod = { "InClickMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetClickMethod_Parms, InClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(nullptr, 0) }; // 4238010345
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::NewProp_InClickMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Set the click method for mouse interaction */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Set the click method for mouse interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetClickMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::CommonButtonBase_eventSetClickMethod_Parms), Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetClickMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetClickMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics
	{
		struct CommonButtonBase_eventSetHideInputAction_Parms
		{
			bool bInHideInputAction;
		};
		static void NewProp_bInHideInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInHideInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::NewProp_bInHideInputAction_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetHideInputAction_Parms*)Obj)->bInHideInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::NewProp_bInHideInputAction = { "bInHideInputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetHideInputAction_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::NewProp_bInHideInputAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::NewProp_bInHideInputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetHideInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::CommonButtonBase_eventSetHideInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetHoveredSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetHoveredSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetHoveredSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::CommonButtonBase_eventSetHoveredSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics
	{
		struct CommonButtonBase_eventSetInputActionProgressMaterial_Parms
		{
			FSlateBrush InProgressMaterialBrush;
			FName InProgressMaterialParam;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgressMaterialBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProgressMaterialBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InProgressMaterialParam_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InProgressMaterialParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialBrush = { "InProgressMaterialBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetInputActionProgressMaterial_Parms, InProgressMaterialBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialParam = { "InProgressMaterialParam", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetInputActionProgressMaterial_Parms, InProgressMaterialParam), METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialParam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::NewProp_InProgressMaterialParam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Input" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetInputActionProgressMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::CommonButtonBase_eventSetInputActionProgressMaterial_Parms), Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics
	{
		struct CommonButtonBase_eventSetIsFocusable_Parms
		{
			bool bInIsFocusable;
		};
		static void NewProp_bInIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsFocusable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::NewProp_bInIsFocusable_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsFocusable_Parms*)Obj)->bInIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::NewProp_bInIsFocusable = { "bInIsFocusable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsFocusable_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::NewProp_bInIsFocusable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::NewProp_bInIsFocusable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Getters" },
		{ "Comment", "/** Updates the bIsFocusable flag */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Updates the bIsFocusable flag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsFocusable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::CommonButtonBase_eventSetIsFocusable_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics
	{
		struct CommonButtonBase_eventSetIsInteractableWhenSelected_Parms
		{
			bool bInInteractableWhenSelected;
		};
		static void NewProp_bInInteractableWhenSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInInteractableWhenSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::NewProp_bInInteractableWhenSelected_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsInteractableWhenSelected_Parms*)Obj)->bInInteractableWhenSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::NewProp_bInInteractableWhenSelected = { "bInInteractableWhenSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsInteractableWhenSelected_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::NewProp_bInInteractableWhenSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::NewProp_bInInteractableWhenSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget is selectable at all. If false and currently selected, will deselect. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget is selectable at all. If false and currently selected, will deselect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsInteractableWhenSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::CommonButtonBase_eventSetIsInteractableWhenSelected_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics
	{
		struct CommonButtonBase_eventSetIsInteractionEnabled_Parms
		{
			bool bInIsInteractionEnabled;
		};
		static void NewProp_bInIsInteractionEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsInteractionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::NewProp_bInIsInteractionEnabled_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsInteractionEnabled_Parms*)Obj)->bInIsInteractionEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::NewProp_bInIsInteractionEnabled = { "bInIsInteractionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsInteractionEnabled_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::NewProp_bInIsInteractionEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::NewProp_bInIsInteractionEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget is selectable at all. If false and currently selected, will deselect. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget is selectable at all. If false and currently selected, will deselect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsInteractionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::CommonButtonBase_eventSetIsInteractionEnabled_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics
	{
		struct CommonButtonBase_eventSetIsLocked_Parms
		{
			bool bInIsLocked;
		};
		static void NewProp_bInIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsLocked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsLocked_Parms*)Obj)->bInIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::NewProp_bInIsLocked = { "bInIsLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsLocked_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::NewProp_bInIsLocked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::NewProp_bInIsLocked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget is locked. If locked, the button can be focusable and responsive to mouse input but will not broadcast OnClicked events. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget is locked. If locked, the button can be focusable and responsive to mouse input but will not broadcast OnClicked events." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsLocked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::CommonButtonBase_eventSetIsLocked_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsLocked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsLocked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics
	{
		struct CommonButtonBase_eventSetIsSelectable_Parms
		{
			bool bInIsSelectable;
		};
		static void NewProp_bInIsSelectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsSelectable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::NewProp_bInIsSelectable_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsSelectable_Parms*)Obj)->bInIsSelectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::NewProp_bInIsSelectable = { "bInIsSelectable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsSelectable_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::NewProp_bInIsSelectable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::NewProp_bInIsSelectable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget is selectable at all. If false and currently selected, will deselect. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget is selectable at all. If false and currently selected, will deselect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsSelectable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::CommonButtonBase_eventSetIsSelectable_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics
	{
		struct CommonButtonBase_eventSetIsSelected_Parms
		{
			bool InSelected;
			bool bGiveClickFeedback;
		};
		static void NewProp_InSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InSelected;
		static void NewProp_bGiveClickFeedback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGiveClickFeedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_InSelected_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsSelected_Parms*)Obj)->InSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_InSelected = { "InSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsSelected_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_InSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_bGiveClickFeedback_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsSelected_Parms*)Obj)->bGiveClickFeedback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_bGiveClickFeedback = { "bGiveClickFeedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsSelected_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_bGiveClickFeedback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_InSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::NewProp_bGiveClickFeedback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** \n\x09 * Change the selected state manually.\n\x09 * @param bGiveClickFeedback\x09If true, the button may give user feedback as if it were clicked. IE: Play a click sound, trigger animations as if it were clicked.\n\x09 */" },
		{ "CPP_Default_bGiveClickFeedback", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change the selected state manually.\n@param bGiveClickFeedback    If true, the button may give user feedback as if it were clicked. IE: Play a click sound, trigger animations as if it were clicked." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::CommonButtonBase_eventSetIsSelected_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics
	{
		struct CommonButtonBase_eventSetIsToggleable_Parms
		{
			bool bInIsToggleable;
		};
		static void NewProp_bInIsToggleable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsToggleable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::NewProp_bInIsToggleable_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetIsToggleable_Parms*)Obj)->bInIsToggleable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::NewProp_bInIsToggleable = { "bInIsToggleable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetIsToggleable_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::NewProp_bInIsToggleable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::NewProp_bInIsToggleable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget is toggleable. If toggleable, clicking when selected will deselect. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget is toggleable. If toggleable, clicking when selected will deselect." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetIsToggleable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::CommonButtonBase_eventSetIsToggleable_Parms), Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetLockedHoveredSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetLockedHoveredSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetLockedHoveredSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::CommonButtonBase_eventSetLockedHoveredSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetLockedPressedSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetLockedPressedSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetLockedPressedSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::CommonButtonBase_eventSetLockedPressedSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics
	{
		struct CommonButtonBase_eventSetMinDimensions_Parms
		{
			int32 InMinWidth;
			int32 InMinHeight;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMinWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InMinHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::NewProp_InMinWidth = { "InMinWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetMinDimensions_Parms, InMinWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::NewProp_InMinHeight = { "InMinHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetMinDimensions_Parms, InMinHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::NewProp_InMinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::NewProp_InMinHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Sets the minimum dimensions of this button */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Sets the minimum dimensions of this button" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetMinDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::CommonButtonBase_eventSetMinDimensions_Parms), Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetPressedSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetPressedSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetPressedSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::CommonButtonBase_eventSetPressedSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics
	{
		struct CommonButtonBase_eventSetPressMethod_Parms
		{
			TEnumAsByte<EButtonPressMethod::Type> InPressMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPressMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::NewProp_InPressMethod = { "InPressMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetPressMethod_Parms, InPressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(nullptr, 0) }; // 73978870
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::NewProp_InPressMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Set the click method for keyboard/gamepad button press interaction */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Set the click method for keyboard/gamepad button press interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetPressMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::CommonButtonBase_eventSetPressMethod_Parms), Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetPressMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetPressMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetSelectedHoveredSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetSelectedHoveredSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetSelectedHoveredSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::CommonButtonBase_eventSetSelectedHoveredSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics
	{
		struct CommonButtonBase_eventSetSelectedInternal_Parms
		{
			bool bInSelected;
			bool bAllowSound;
			bool bBroadcast;
		};
		static void NewProp_bInSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSelected;
		static void NewProp_bAllowSound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSound;
		static void NewProp_bBroadcast_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBroadcast;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bInSelected_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetSelectedInternal_Parms*)Obj)->bInSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bInSelected = { "bInSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetSelectedInternal_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bInSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bAllowSound_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetSelectedInternal_Parms*)Obj)->bAllowSound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bAllowSound = { "bAllowSound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetSelectedInternal_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bAllowSound_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bBroadcast_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetSelectedInternal_Parms*)Obj)->bBroadcast = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bBroadcast = { "bBroadcast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetSelectedInternal_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bBroadcast_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bInSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bAllowSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::NewProp_bBroadcast,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Common Button" },
		{ "Comment", "/** Internal method to allow the selected state to be set regardless of selectability or toggleability */" },
		{ "CPP_Default_bAllowSound", "true" },
		{ "CPP_Default_bBroadcast", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Internal method to allow the selected state to be set regardless of selectability or toggleability" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetSelectedInternal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::CommonButtonBase_eventSetSelectedInternal_Parms), Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics
	{
		struct CommonButtonBase_eventSetSelectedPressedSoundOverride_Parms
		{
			USoundBase* Sound;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetSelectedPressedSoundOverride_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Sound" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetSelectedPressedSoundOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::CommonButtonBase_eventSetSelectedPressedSoundOverride_Parms), Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics
	{
		struct CommonButtonBase_eventSetShouldSelectUponReceivingFocus_Parms
		{
			bool bInShouldSelectUponReceivingFocus;
		};
		static void NewProp_bInShouldSelectUponReceivingFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldSelectUponReceivingFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::NewProp_bInShouldSelectUponReceivingFocus_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetShouldSelectUponReceivingFocus_Parms*)Obj)->bInShouldSelectUponReceivingFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::NewProp_bInShouldSelectUponReceivingFocus = { "bInShouldSelectUponReceivingFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetShouldSelectUponReceivingFocus_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::NewProp_bInShouldSelectUponReceivingFocus_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::NewProp_bInShouldSelectUponReceivingFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Set whether the button should become selected upon receiving focus or not; Only settable for buttons that are selectable */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Set whether the button should become selected upon receiving focus or not; Only settable for buttons that are selectable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetShouldSelectUponReceivingFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::CommonButtonBase_eventSetShouldSelectUponReceivingFocus_Parms), Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics
	{
		struct CommonButtonBase_eventSetShouldUseFallbackDefaultInputAction_Parms
		{
			bool bInShouldUseFallbackDefaultInputAction;
		};
		static void NewProp_bInShouldUseFallbackDefaultInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldUseFallbackDefaultInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::NewProp_bInShouldUseFallbackDefaultInputAction_SetBit(void* Obj)
	{
		((CommonButtonBase_eventSetShouldUseFallbackDefaultInputAction_Parms*)Obj)->bInShouldUseFallbackDefaultInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::NewProp_bInShouldUseFallbackDefaultInputAction = { "bInShouldUseFallbackDefaultInputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonButtonBase_eventSetShouldUseFallbackDefaultInputAction_Parms), &Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::NewProp_bInShouldUseFallbackDefaultInputAction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::NewProp_bInShouldUseFallbackDefaultInputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Change whether this widget should use the fallback default input action. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Change whether this widget should use the fallback default input action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetShouldUseFallbackDefaultInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::CommonButtonBase_eventSetShouldUseFallbackDefaultInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics
	{
		struct CommonButtonBase_eventSetStyle_Parms
		{
			TSubclassOf<UCommonButtonStyle>  InStyle;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::NewProp_InStyle = { "InStyle", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetStyle_Parms, InStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::NewProp_InStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Sets the style of this button, rebuilds the internal styling */" },
		{ "CPP_Default_InStyle", "None" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Sets the style of this button, rebuilds the internal styling" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::CommonButtonBase_eventSetStyle_Parms), Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics
	{
		struct CommonButtonBase_eventSetTouchMethod_Parms
		{
			TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTouchMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::NewProp_InTouchMethod = { "InTouchMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetTouchMethod_Parms, InTouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(nullptr, 0) }; // 922219495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::NewProp_InTouchMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Set the click method for touch interaction */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Set the click method for touch interaction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetTouchMethod", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::CommonButtonBase_eventSetTouchMethod_Parms), Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics
	{
		struct CommonButtonBase_eventSetTriggeredInputAction_Parms
		{
			FDataTableRowHandle InputActionRow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::NewProp_InputActionRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::NewProp_InputActionRow = { "InputActionRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetTriggeredInputAction_Parms, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::NewProp_InputActionRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::NewProp_InputActionRow_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::NewProp_InputActionRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Updates the current triggered action */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Updates the current triggered action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetTriggeredInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::CommonButtonBase_eventSetTriggeredInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics
	{
		struct CommonButtonBase_eventSetTriggeringEnhancedInputAction_Parms
		{
			UInputAction* InInputAction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInputAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::NewProp_InInputAction = { "InInputAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetTriggeringEnhancedInputAction_Parms, InInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::NewProp_InInputAction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Updates the current triggering enhanced input action, requires enhanced input enabled in CommonUI settings */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Updates the current triggering enhanced input action, requires enhanced input enabled in CommonUI settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetTriggeringEnhancedInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::CommonButtonBase_eventSetTriggeringEnhancedInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics
	{
		struct CommonButtonBase_eventSetTriggeringInputAction_Parms
		{
			FDataTableRowHandle InputActionRow;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::NewProp_InputActionRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::NewProp_InputActionRow = { "InputActionRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonButtonBase_eventSetTriggeringInputAction_Parms, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::NewProp_InputActionRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::NewProp_InputActionRow_MetaData)) }; // 2710926200
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::NewProp_InputActionRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Common Button|Setters" },
		{ "Comment", "/** Updates the current triggering action */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Updates the current triggering action" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "SetTriggeringInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::CommonButtonBase_eventSetTriggeringInputAction_Parms), Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonButton" },
		{ "Comment", "/** Unless this is called, we will assume the double click should be converted into a normal click. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Unless this is called, we will assume the double click should be converted into a normal click." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonButtonBase, nullptr, "StopDoubleClickPropagation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonButtonBase);
	UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister()
	{
		return UCommonButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_UCommonButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideInputAction_MetaData[];
#endif
		static void NewProp_bHideInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressedSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoveredSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPressedSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPressedSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedHoveredSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedHoveredSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedPressedSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedPressedSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedHoveredSlateSoundOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedHoveredSlateSoundOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAlphaOnDisable_MetaData[];
#endif
		static void NewProp_bApplyAlphaOnDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAlphaOnDisable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectable_MetaData[];
#endif
		static void NewProp_bSelectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSelectUponReceivingFocus_MetaData[];
#endif
		static void NewProp_bShouldSelectUponReceivingFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSelectUponReceivingFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInteractableWhenSelected_MetaData[];
#endif
		static void NewProp_bInteractableWhenSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractableWhenSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToggleable_MetaData[];
#endif
		static void NewProp_bToggleable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToggleable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerClickedAfterSelection_MetaData[];
#endif
		static void NewProp_bTriggerClickedAfterSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerClickedAfterSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInputActionWhenNotInteractable_MetaData[];
#endif
		static void NewProp_bDisplayInputActionWhenNotInteractable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInputActionWhenNotInteractable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideInputActionWithKeyboard_MetaData[];
#endif
		static void NewProp_bHideInputActionWithKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInputActionWithKeyboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseFallbackDefaultInputAction_MetaData[];
#endif
		static void NewProp_bShouldUseFallbackDefaultInputAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseFallbackDefaultInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClickMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TouchMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TouchMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PressMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggeringInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggeringInputAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggeringEnhancedInputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TriggeringEnhancedInputAction;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStyleNoLongerNeedsConversion_MetaData[];
#endif
		static void NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStyleNoLongerNeedsConversion;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSelectedChangedBase_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedChangedBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseDoubleClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseDoubleClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseHovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseHovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnButtonBaseUnhovered_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnButtonBaseUnhovered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPersistentBinding_MetaData[];
#endif
		static void NewProp_bIsPersistentBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPersistentBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputModeOverride_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputModeOverride_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputModeOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleMaterialStyleMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SingleMaterialStyleMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockedStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LockedStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopDoubleClickPropagation_MetaData[];
#endif
		static void NewProp_bStopDoubleClickPropagation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopDoubleClickPropagation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputActionWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonButtonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnClicked, "BP_OnClicked" }, // 2250439054
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnDeselected, "BP_OnDeselected" }, // 2062445896
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnDisabled, "BP_OnDisabled" }, // 3016596183
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnDoubleClicked, "BP_OnDoubleClicked" }, // 3571772977
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnEnabled, "BP_OnEnabled" }, // 2722297014
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusLost, "BP_OnFocusLost" }, // 1531674203
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnFocusReceived, "BP_OnFocusReceived" }, // 149903226
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnHovered, "BP_OnHovered" }, // 257260259
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnInputMethodChanged, "BP_OnInputMethodChanged" }, // 2896463475
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnLockClicked, "BP_OnLockClicked" }, // 2993315517
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnLockDoubleClicked, "BP_OnLockDoubleClicked" }, // 277787808
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnLockedChanged, "BP_OnLockedChanged" }, // 1016181576
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnPressed, "BP_OnPressed" }, // 3269505966
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnReleased, "BP_OnReleased" }, // 2526991427
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnSelected, "BP_OnSelected" }, // 3461860445
		{ &Z_Construct_UFunction_UCommonButtonBase_BP_OnUnhovered, "BP_OnUnhovered" }, // 3250946936
		{ &Z_Construct_UFunction_UCommonButtonBase_ClearSelection, "ClearSelection" }, // 3721388918
		{ &Z_Construct_UFunction_UCommonButtonBase_DisableButtonWithReason, "DisableButtonWithReason" }, // 296837565
		{ &Z_Construct_UFunction_UCommonButtonBase_GetCurrentButtonPadding, "GetCurrentButtonPadding" }, // 729574349
		{ &Z_Construct_UFunction_UCommonButtonBase_GetCurrentCustomPadding, "GetCurrentCustomPadding" }, // 1884036117
		{ &Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyle, "GetCurrentTextStyle" }, // 1029907876
		{ &Z_Construct_UFunction_UCommonButtonBase_GetCurrentTextStyleClass, "GetCurrentTextStyleClass" }, // 1423397163
		{ &Z_Construct_UFunction_UCommonButtonBase_GetEnhancedInputAction, "GetEnhancedInputAction" }, // 842713651
		{ &Z_Construct_UFunction_UCommonButtonBase_GetInputAction, "GetInputAction" }, // 1061394952
		{ &Z_Construct_UFunction_UCommonButtonBase_GetIsFocusable, "GetIsFocusable" }, // 1974448329
		{ &Z_Construct_UFunction_UCommonButtonBase_GetLocked, "GetLocked" }, // 1045137164
		{ &Z_Construct_UFunction_UCommonButtonBase_GetSelected, "GetSelected" }, // 3672299871
		{ &Z_Construct_UFunction_UCommonButtonBase_GetShouldSelectUponReceivingFocus, "GetShouldSelectUponReceivingFocus" }, // 1650496889
		{ &Z_Construct_UFunction_UCommonButtonBase_GetSingleMaterialStyleMID, "GetSingleMaterialStyleMID" }, // 274873778
		{ &Z_Construct_UFunction_UCommonButtonBase_GetStyle, "GetStyle" }, // 4270424171
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleButtonClicked, "HandleButtonClicked" }, // 3297747063
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleButtonPressed, "HandleButtonPressed" }, // 168507364
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleButtonReleased, "HandleButtonReleased" }, // 2638355284
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleFocusLost, "HandleFocusLost" }, // 2541064108
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleFocusReceived, "HandleFocusReceived" }, // 3868711117
		{ &Z_Construct_UFunction_UCommonButtonBase_HandleTriggeringActionCommited, "HandleTriggeringActionCommited" }, // 2199380803
		{ &Z_Construct_UFunction_UCommonButtonBase_IsInteractionEnabled, "IsInteractionEnabled" }, // 2678260738
		{ &Z_Construct_UFunction_UCommonButtonBase_IsPressed, "IsPressed" }, // 1318888883
		{ &Z_Construct_UFunction_UCommonButtonBase_NativeOnActionComplete, "NativeOnActionComplete" }, // 353571899
		{ &Z_Construct_UFunction_UCommonButtonBase_NativeOnActionProgress, "NativeOnActionProgress" }, // 261395601
		{ &Z_Construct_UFunction_UCommonButtonBase_OnActionComplete, "OnActionComplete" }, // 237614704
		{ &Z_Construct_UFunction_UCommonButtonBase_OnActionProgress, "OnActionProgress" }, // 2135686689
		{ &Z_Construct_UFunction_UCommonButtonBase_OnCurrentTextStyleChanged, "OnCurrentTextStyleChanged" }, // 2723633620
		{ &Z_Construct_UFunction_UCommonButtonBase_OnInputMethodChanged, "OnInputMethodChanged" }, // 3699008458
		{ &Z_Construct_UFunction_UCommonButtonBase_OnTriggeredInputActionChanged, "OnTriggeredInputActionChanged" }, // 954772373
		{ &Z_Construct_UFunction_UCommonButtonBase_OnTriggeringEnhancedInputActionChanged, "OnTriggeringEnhancedInputActionChanged" }, // 437503698
		{ &Z_Construct_UFunction_UCommonButtonBase_OnTriggeringInputActionChanged, "OnTriggeringInputActionChanged" }, // 2474237287
		{ &Z_Construct_UFunction_UCommonButtonBase_SetClickMethod, "SetClickMethod" }, // 3550815607
		{ &Z_Construct_UFunction_UCommonButtonBase_SetHideInputAction, "SetHideInputAction" }, // 2953768819
		{ &Z_Construct_UFunction_UCommonButtonBase_SetHoveredSoundOverride, "SetHoveredSoundOverride" }, // 1805377402
		{ &Z_Construct_UFunction_UCommonButtonBase_SetInputActionProgressMaterial, "SetInputActionProgressMaterial" }, // 3131784166
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsFocusable, "SetIsFocusable" }, // 921915261
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsInteractableWhenSelected, "SetIsInteractableWhenSelected" }, // 2323059248
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsInteractionEnabled, "SetIsInteractionEnabled" }, // 3476386134
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsLocked, "SetIsLocked" }, // 650103568
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsSelectable, "SetIsSelectable" }, // 1610966940
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsSelected, "SetIsSelected" }, // 2509360734
		{ &Z_Construct_UFunction_UCommonButtonBase_SetIsToggleable, "SetIsToggleable" }, // 3142250284
		{ &Z_Construct_UFunction_UCommonButtonBase_SetLockedHoveredSoundOverride, "SetLockedHoveredSoundOverride" }, // 2278696121
		{ &Z_Construct_UFunction_UCommonButtonBase_SetLockedPressedSoundOverride, "SetLockedPressedSoundOverride" }, // 1420321964
		{ &Z_Construct_UFunction_UCommonButtonBase_SetMinDimensions, "SetMinDimensions" }, // 3158870146
		{ &Z_Construct_UFunction_UCommonButtonBase_SetPressedSoundOverride, "SetPressedSoundOverride" }, // 3322924030
		{ &Z_Construct_UFunction_UCommonButtonBase_SetPressMethod, "SetPressMethod" }, // 4002733398
		{ &Z_Construct_UFunction_UCommonButtonBase_SetSelectedHoveredSoundOverride, "SetSelectedHoveredSoundOverride" }, // 2157899546
		{ &Z_Construct_UFunction_UCommonButtonBase_SetSelectedInternal, "SetSelectedInternal" }, // 2763782660
		{ &Z_Construct_UFunction_UCommonButtonBase_SetSelectedPressedSoundOverride, "SetSelectedPressedSoundOverride" }, // 3256336903
		{ &Z_Construct_UFunction_UCommonButtonBase_SetShouldSelectUponReceivingFocus, "SetShouldSelectUponReceivingFocus" }, // 995095953
		{ &Z_Construct_UFunction_UCommonButtonBase_SetShouldUseFallbackDefaultInputAction, "SetShouldUseFallbackDefaultInputAction" }, // 4127109158
		{ &Z_Construct_UFunction_UCommonButtonBase_SetStyle, "SetStyle" }, // 1986439304
		{ &Z_Construct_UFunction_UCommonButtonBase_SetTouchMethod, "SetTouchMethod" }, // 2568334286
		{ &Z_Construct_UFunction_UCommonButtonBase_SetTriggeredInputAction, "SetTriggeredInputAction" }, // 3331491441
		{ &Z_Construct_UFunction_UCommonButtonBase_SetTriggeringEnhancedInputAction, "SetTriggeringEnhancedInputAction" }, // 2621243113
		{ &Z_Construct_UFunction_UCommonButtonBase_SetTriggeringInputAction, "SetTriggeringInputAction" }, // 2405927010
		{ &Z_Construct_UFunction_UCommonButtonBase_StopDoubleClickPropagation, "StopDoubleClickPropagation" }, // 4084843535
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * Button that disables itself when not active. Also updates actions for CommonActionWidget if bound to display platform-specific icons.\n */" },
		{ "DisableNativeTick", "" },
		{ "IncludePath", "CommonButtonBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Button that disables itself when not active. Also updates actions for CommonActionWidget if bound to display platform-specific icons." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinWidth_MetaData[] = {
		{ "Category", "Layout" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum width of the button (only used if greater than the style's minimum) */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum width of the button (only used if greater than the style's minimum)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinWidth = { "MinWidth", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, MinWidth), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Layout" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum height of the button (only used if greater than the style's minimum) */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The minimum height of the button (only used if greater than the style's minimum)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, MinHeight), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** References the button style asset that defines a style in multiple sizes */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "References the button style asset that defines a style in multiple sizes" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0025080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, Style), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Whether to hide the input action widget at all times (useful for textless small buttons) */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Whether to hide the input action widget at all times (useful for textless small buttons)" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bHideInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction = { "bHideInputAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressedSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Optional override for the sound to play when this button is pressed.\n\x09 * Also used for the Selected and Locked Pressed state if their respective overrides are empty.\n\x09 */" },
		{ "DisplayName", "Pressed Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is pressed.\nAlso used for the Selected and Locked Pressed state if their respective overrides are empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressedSlateSoundOverride = { "PressedSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, PressedSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressedSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressedSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_HoveredSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Optional override for the sound to play when this button is hovered.\n\x09 * Also used for the Selected and Locked Hovered state if their respective overrides are empty.\n\x09 */" },
		{ "DisplayName", "Hovered Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is hovered.\nAlso used for the Selected and Locked Hovered state if their respective overrides are empty." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_HoveredSlateSoundOverride = { "HoveredSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, HoveredSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_HoveredSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_HoveredSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedPressedSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional override for the sound to play when this button is pressed while Selected */" },
		{ "DisplayName", "Selected Pressed Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is pressed while Selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedPressedSlateSoundOverride = { "SelectedPressedSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, SelectedPressedSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedPressedSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedPressedSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedHoveredSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional override for the sound to play when this button is hovered while Selected */" },
		{ "DisplayName", "Selected Hovered Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is hovered while Selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedHoveredSlateSoundOverride = { "SelectedHoveredSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, SelectedHoveredSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedHoveredSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedHoveredSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedPressedSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional override for the sound to play when this button is pressed while Locked */" },
		{ "DisplayName", "Locked Pressed Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is pressed while Locked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedPressedSlateSoundOverride = { "LockedPressedSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, LockedPressedSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedPressedSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedPressedSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedHoveredSlateSoundOverride_MetaData[] = {
		{ "Category", "Sound" },
		{ "Comment", "/** Optional override for the sound to play when this button is hovered while Locked */" },
		{ "DisplayName", "Locked Hovered Sound Override" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Optional override for the sound to play when this button is hovered while Locked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedHoveredSlateSoundOverride = { "LockedHoveredSlateSoundOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, LockedHoveredSlateSoundOverride), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedHoveredSlateSoundOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedHoveredSlateSoundOverride_MetaData)) }; // 2826200611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the button's 'Click' */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the button's 'Click'" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bApplyAlphaOnDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable = { "bApplyAlphaOnDisable", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked_MetaData[] = {
		{ "Category", "Locked" },
		{ "Comment", "/**\n\x09 * True if this button is currently locked.\n\x09 * Locked button can be hovered, focused, and pressed, but the Click event will not go through.\n\x09 * Business logic behind it will not be executed. Designed for progressive disclosure\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if this button is currently locked.\nLocked button can be hovered, focused, and pressed, but the Click event will not go through.\nBusiness logic behind it will not be executed. Designed for progressive disclosure" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** True if the button supports being in a \"selected\" state, which will update the style accordingly */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if the button supports being in a \"selected\" state, which will update the style accordingly" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bSelectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable = { "bSelectable", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** If true, the button will be selected when it receives focus. */" },
		{ "EditCondition", "bSelectable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "If true, the button will be selected when it receives focus." },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bShouldSelectUponReceivingFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus = { "bShouldSelectUponReceivingFocus", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** If true, the button may be clicked while selected. Otherwise, interaction is disabled in the selected state. */" },
		{ "EditCondition", "bSelectable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "If true, the button may be clicked while selected. Otherwise, interaction is disabled in the selected state." },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bInteractableWhenSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected = { "bInteractableWhenSelected", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable_MetaData[] = {
		{ "Category", "Selection" },
		{ "Comment", "/** True if the button can be deselected by clicking it when selected */" },
		{ "EditCondition", "bSelectable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if the button can be deselected by clicking it when selected" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bToggleable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable = { "bToggleable", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection_MetaData[] = {
		{ "Category", "Selection" },
		{ "EditCondition", "bSelectable" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bTriggerClickedAfterSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection = { "bTriggerClickedAfterSelection", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** True if the input action should be displayed when the button is not interactable */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if the input action should be displayed when the button is not interactable" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bDisplayInputActionWhenNotInteractable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable = { "bDisplayInputActionWhenNotInteractable", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** True if the input action should be hidden while the user is using a keyboard */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if the input action should be hidden while the user is using a keyboard" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bHideInputActionWithKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard = { "bHideInputActionWithKeyboard", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** True if this button should use the default fallback input action (bool is useful for buttons that shouldn't because they are never directly hit via controller) */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "True if this button should use the default fallback input action (bool is useful for buttons that shouldn't because they are never directly hit via controller)" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bShouldUseFallbackDefaultInputAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction = { "bShouldUseFallbackDefaultInputAction", nullptr, (EPropertyFlags)0x0021080000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_ClickMethod_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** The type of mouse action required by the user to trigger the button's 'Click' */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The type of mouse action required by the user to trigger the button's 'Click'" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_ClickMethod = { "ClickMethod", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, ClickMethod), Z_Construct_UEnum_SlateCore_EButtonClickMethod, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_ClickMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_ClickMethod_MetaData)) }; // 4238010345
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TouchMethod_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TouchMethod = { "TouchMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, TouchMethod), Z_Construct_UEnum_SlateCore_EButtonTouchMethod, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TouchMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TouchMethod_MetaData)) }; // 922219495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressMethod_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressMethod = { "PressMethod", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, PressMethod), Z_Construct_UEnum_SlateCore_EButtonPressMethod, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressMethod_MetaData)) }; // 73978870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 * This is the priority for the TriggeringInputAction.  The first, HIGHEST PRIORITY widget will handle the input action, and no other widgets will be considered.  \n\x09 * Additionally, no inputs with a priority below the current ActivatablePanel's Input Priority value will even be considered! \n\x09 * \n\x09 * @TODO: This is part of legacy CommonUI and should be removed\n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "This is the priority for the TriggeringInputAction.  The first, HIGHEST PRIORITY widget will handle the input action, and no other widgets will be considered.\nAdditionally, no inputs with a priority below the current ActivatablePanel's Input Priority value will even be considered!\n\n@TODO: This is part of legacy CommonUI and should be removed" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputPriority = { "InputPriority", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, InputPriority), METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 *\x09The input action that is bound to this button. The common input manager will trigger this button to \n\x09 *\x09""click if the action was pressed \n\x09 */" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "RowType", "/Script/CommonUI.CommonInputActionDataBase" },
		{ "ToolTip", "The input action that is bound to this button. The common input manager will trigger this button to\nclick if the action was pressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringInputAction = { "TriggeringInputAction", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, TriggeringInputAction), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringInputAction_MetaData)) }; // 2710926200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringEnhancedInputAction_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** \n\x09 *\x09The enhanced input action that is bound to this button. The common input manager will trigger this button to \n\x09 *\x09""click if the action was pressed \n\x09 */" },
		{ "EditCondition", "CommonInput.CommonInputSettings.IsEnhancedInputSupportEnabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The enhanced input action that is bound to this button. The common input manager will trigger this button to\nclick if the action was pressed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringEnhancedInputAction = { "TriggeringEnhancedInputAction", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, TriggeringEnhancedInputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringEnhancedInputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringEnhancedInputAction_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData[] = {
		{ "Comment", "/** Used to track widgets that were created before changing the default style pointer to null */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Used to track widgets that were created before changing the default style pointer to null" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bStyleNoLongerNeedsConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion = { "bStyleNoLongerNeedsConversion", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnSelectedChangedBase_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnSelectedChangedBase = { "OnSelectedChangedBase", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, OnSelectedChangedBase), Z_Construct_UDelegateFunction_CommonUI_CommonSelectedStateChangedBase__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnSelectedChangedBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnSelectedChangedBase_MetaData)) }; // 3257612282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseClicked = { "OnButtonBaseClicked", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, OnButtonBaseClicked), Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseClicked_MetaData)) }; // 2991062521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseDoubleClicked = { "OnButtonBaseDoubleClicked", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, OnButtonBaseDoubleClicked), Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseDoubleClicked_MetaData)) }; // 2991062521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseHovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseHovered = { "OnButtonBaseHovered", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, OnButtonBaseHovered), Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseHovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseHovered_MetaData)) }; // 2991062521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseUnhovered_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseUnhovered = { "OnButtonBaseUnhovered", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, OnButtonBaseUnhovered), Z_Construct_UDelegateFunction_CommonUI_CommonButtonBaseClicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseUnhovered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseUnhovered_MetaData)) }; // 2991062521
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * DANGER! Be very, very careful with this. Unless you absolutely know what you're doing, this is not the property you're looking for.\n\x09 *\n\x09 * True to register the action bound to this button as a \"persistent\" binding. False (default) will register a standard activation-based binding.\n\x09 * A persistent binding ignores the standard ruleset for UI input routing - the binding will be live immediately upon construction of the button.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "DANGER! Be very, very careful with this. Unless you absolutely know what you're doing, this is not the property you're looking for.\n\nTrue to register the action bound to this button as a \"persistent\" binding. False (default) will register a standard activation-based binding.\nA persistent binding ignores the standard ruleset for UI input routing - the binding will be live immediately upon construction of the button." },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bIsPersistentBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding = { "bIsPersistentBinding", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "//Set this to Game for special cases where an input action needs to be set for an in-game button.\n" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Set this to Game for special cases where an input action needs to be set for an in-game button." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride = { "InputModeOverride", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, InputModeOverride), Z_Construct_UEnum_CommonInput_ECommonInputMode, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride_MetaData)) }; // 1573311200
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SingleMaterialStyleMID_MetaData[] = {
		{ "Comment", "/** The dynamic material instance of the material set by the single material style, if specified. */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "The dynamic material instance of the material set by the single material style, if specified." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SingleMaterialStyleMID = { "SingleMaterialStyleMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, SingleMaterialStyleMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SingleMaterialStyleMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SingleMaterialStyleMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_NormalStyle_MetaData[] = {
		{ "Comment", "/** Internally managed and applied style to use when not selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Internally managed and applied style to use when not selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_NormalStyle = { "NormalStyle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, NormalStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_NormalStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_NormalStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedStyle_MetaData[] = {
		{ "Comment", "/** Internally managed and applied style to use when selected */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Internally managed and applied style to use when selected" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedStyle = { "SelectedStyle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, SelectedStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_DisabledStyle_MetaData[] = {
		{ "Comment", "/** Internally managed and applied style to use when disabled */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Internally managed and applied style to use when disabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_DisabledStyle = { "DisabledStyle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, DisabledStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_DisabledStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_DisabledStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedStyle_MetaData[] = {
		{ "Comment", "/** Internally managed and applied style to use when locked */" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "ToolTip", "Internally managed and applied style to use when locked" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedStyle = { "LockedStyle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, LockedStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
	};
#endif
	void Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation_SetBit(void* Obj)
	{
		((UCommonButtonBase*)Obj)->bStopDoubleClickPropagation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation = { "bStopDoubleClickPropagation", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCommonButtonBase), &Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputActionWidget_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BindWidget", "" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Optionally bound widget for visualization behavior of an input action;\n\x09 * NOTE: If specified, will visualize according to the following algorithm:\n\x09 * If TriggeringEnhancedInputAction is specified, visualize it else:\n\x09 * If TriggeringInputAction is specified, visualize it else:\n\x09 * If TriggeredInputAction is specified, visualize it else:\n\x09 * Visualize the default click action while hovered\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonButtonBase.h" },
		{ "OptionalWidget", "TRUE" },
		{ "ToolTip", "Optionally bound widget for visualization behavior of an input action;\nNOTE: If specified, will visualize according to the following algorithm:\nIf TriggeringEnhancedInputAction is specified, visualize it else:\nIf TriggeringInputAction is specified, visualize it else:\nIf TriggeredInputAction is specified, visualize it else:\nVisualize the default click action while hovered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputActionWidget = { "InputActionWidget", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonButtonBase, InputActionWidget), Z_Construct_UClass_UCommonActionWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputActionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputActionWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonButtonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressedSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_HoveredSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedPressedSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedHoveredSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedPressedSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedHoveredSlateSoundOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bApplyAlphaOnDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bSelectable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldSelectUponReceivingFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bInteractableWhenSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bToggleable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bTriggerClickedAfterSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bDisplayInputActionWhenNotInteractable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bHideInputActionWithKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bShouldUseFallbackDefaultInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_ClickMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TouchMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_PressMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringInputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_TriggeringEnhancedInputAction,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStyleNoLongerNeedsConversion,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnSelectedChangedBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseDoubleClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseHovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_OnButtonBaseUnhovered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bIsPersistentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputModeOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SingleMaterialStyleMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_NormalStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_SelectedStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_DisabledStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_LockedStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_bStopDoubleClickPropagation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonButtonBase_Statics::NewProp_InputActionWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonButtonBase_Statics::ClassParams = {
		&UCommonButtonBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonButtonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonButtonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonButtonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonButtonBase()
	{
		if (!Z_Registration_Info_UClass_UCommonButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonButtonBase.OuterSingleton, Z_Construct_UClass_UCommonButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonButtonBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonButtonBase>()
	{
		return UCommonButtonBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonButtonBase);
	UCommonButtonBase::~UCommonButtonBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ScriptStructInfo[] = {
		{ FCommonButtonStyleOptionalSlateSound::StaticStruct, Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound_Statics::NewStructOps, TEXT("CommonButtonStyleOptionalSlateSound"), &Z_Registration_Info_UScriptStruct_CommonButtonStyleOptionalSlateSound, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonButtonStyleOptionalSlateSound), 3960252859U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonButtonStyle, UCommonButtonStyle::StaticClass, TEXT("UCommonButtonStyle"), &Z_Registration_Info_UClass_UCommonButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonButtonStyle), 1384267570U) },
		{ Z_Construct_UClass_UCommonButtonInternalBase, UCommonButtonInternalBase::StaticClass, TEXT("UCommonButtonInternalBase"), &Z_Registration_Info_UClass_UCommonButtonInternalBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonButtonInternalBase), 3796419846U) },
		{ Z_Construct_UClass_UCommonButtonBase, UCommonButtonBase::StaticClass, TEXT("UCommonButtonBase"), &Z_Registration_Info_UClass_UCommonButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonButtonBase), 770772860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_1246630191(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonButtonBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
