// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFTextBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFTextBlock() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ETextJustify();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextOverflowPolicy();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBase();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBase_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBlock();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkTextBlock_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UUIFrameworkTextBase::execOnRep_OverflowPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OverflowPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execOnRep_Justification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Justification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execOnRep_TextColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TextColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execOnRep_Text)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Text();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execGetOverflowPolicy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETextOverflowPolicy*)Z_Param__Result=P_THIS->GetOverflowPolicy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execSetOverflowPolicy)
	{
		P_GET_ENUM(ETextOverflowPolicy,Z_Param_OverflowPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverflowPolicy(ETextOverflowPolicy(Z_Param_OverflowPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execGetJustification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ETextJustify::Type>*)Z_Param__Result=P_THIS->GetJustification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execSetJustification)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Justification);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJustification(ETextJustify::Type(Z_Param_Justification));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execGetTextColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTextColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execSetTextColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextColor(Z_Param_TextColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBase::execSetText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Text);
		P_NATIVE_END;
	}
	void UUIFrameworkTextBase::StaticRegisterNativesUUIFrameworkTextBase()
	{
		UClass* Class = UUIFrameworkTextBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetJustification", &UUIFrameworkTextBase::execGetJustification },
			{ "GetOverflowPolicy", &UUIFrameworkTextBase::execGetOverflowPolicy },
			{ "GetText", &UUIFrameworkTextBase::execGetText },
			{ "GetTextColor", &UUIFrameworkTextBase::execGetTextColor },
			{ "OnRep_Justification", &UUIFrameworkTextBase::execOnRep_Justification },
			{ "OnRep_OverflowPolicy", &UUIFrameworkTextBase::execOnRep_OverflowPolicy },
			{ "OnRep_Text", &UUIFrameworkTextBase::execOnRep_Text },
			{ "OnRep_TextColor", &UUIFrameworkTextBase::execOnRep_TextColor },
			{ "SetJustification", &UUIFrameworkTextBase::execSetJustification },
			{ "SetOverflowPolicy", &UUIFrameworkTextBase::execSetOverflowPolicy },
			{ "SetText", &UUIFrameworkTextBase::execSetText },
			{ "SetTextColor", &UUIFrameworkTextBase::execSetTextColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics
	{
		struct UIFrameworkTextBase_eventGetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventGetJustification_Parms, ReturnValue), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) }; // 2107748386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "GetJustification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::UIFrameworkTextBase_eventGetJustification_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics
	{
		struct UIFrameworkTextBase_eventGetOverflowPolicy_Parms
		{
			ETextOverflowPolicy ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventGetOverflowPolicy_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(nullptr, 0) }; // 1604726165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "GetOverflowPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::UIFrameworkTextBase_eventGetOverflowPolicy_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics
	{
		struct UIFrameworkTextBase_eventGetText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "GetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::UIFrameworkTextBase_eventGetText_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics
	{
		struct UIFrameworkTextBase_eventGetTextColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventGetTextColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "GetTextColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::UIFrameworkTextBase_eventGetTextColor_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "OnRep_Justification", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "OnRep_OverflowPolicy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "OnRep_Text", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "OnRep_TextColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics
	{
		struct UIFrameworkTextBase_eventSetJustification_Parms
		{
			TEnumAsByte<ETextJustify::Type> Justification;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::NewProp_Justification = { "Justification", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventSetJustification_Parms, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(nullptr, 0) }; // 2107748386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::NewProp_Justification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "SetJustification", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::UIFrameworkTextBase_eventSetJustification_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics
	{
		struct UIFrameworkTextBase_eventSetOverflowPolicy_Parms
		{
			ETextOverflowPolicy OverflowPolicy;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventSetOverflowPolicy_Parms, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(nullptr, 0) }; // 1604726165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::NewProp_OverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::NewProp_OverflowPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "SetOverflowPolicy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::UIFrameworkTextBase_eventSetOverflowPolicy_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics
	{
		struct UIFrameworkTextBase_eventSetText_Parms
		{
			FText Text;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventSetText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::UIFrameworkTextBase_eventSetText_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics
	{
		struct UIFrameworkTextBase_eventSetTextColor_Parms
		{
			FLinearColor TextColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBase_eventSetTextColor_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::NewProp_TextColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBase, nullptr, "SetTextColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::UIFrameworkTextBase_eventSetTextColor_Parms), Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkTextBase);
	UClass* Z_Construct_UClass_UUIFrameworkTextBase_NoRegister()
	{
		return UUIFrameworkTextBase::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkTextBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Justification_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Justification;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverflowPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverflowPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkTextBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkTextBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_GetJustification, "GetJustification" }, // 183599181
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_GetOverflowPolicy, "GetOverflowPolicy" }, // 167909992
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_GetText, "GetText" }, // 3123524345
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_GetTextColor, "GetTextColor" }, // 489217831
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Justification, "OnRep_Justification" }, // 2680904378
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_OverflowPolicy, "OnRep_OverflowPolicy" }, // 3425217014
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_Text, "OnRep_Text" }, // 885073791
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_OnRep_TextColor, "OnRep_TextColor" }, // 525896046
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_SetJustification, "SetJustification" }, // 2996693315
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_SetOverflowPolicy, "SetOverflowPolicy" }, // 3411756620
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_SetText, "SetText" }, // 3766056590
		{ &Z_Construct_UFunction_UUIFrameworkTextBase_SetTextColor, "SetTextColor" }, // 3416295284
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Widgets/UIFTextBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Text_MetaData[] = {
		{ "Comment", "/*ExposeOnSpawn, */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
		{ "ToolTip", "ExposeOnSpawn," },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Text = { "Text", "OnRep_Text", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBase, Text), METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_TextColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_TextColor = { "TextColor", "OnRep_TextColor", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBase, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Justification_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Justification = { "Justification", "OnRep_Justification", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBase, Justification), Z_Construct_UEnum_Slate_ETextJustify, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Justification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Justification_MetaData)) }; // 2107748386
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", "OnRep_OverflowPolicy", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBase, OverflowPolicy), Z_Construct_UEnum_SlateCore_ETextOverflowPolicy, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy_MetaData)) }; // 1604726165
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkTextBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_Justification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBase_Statics::NewProp_OverflowPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkTextBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkTextBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkTextBase_Statics::ClassParams = {
		&UUIFrameworkTextBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkTextBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::PropPointers),
		0,
		0x049000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkTextBase()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkTextBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkTextBase.OuterSingleton, Z_Construct_UClass_UUIFrameworkTextBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkTextBase.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkTextBase>()
	{
		return UUIFrameworkTextBase::StaticClass();
	}

	void UUIFrameworkTextBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Text(TEXT("Text"));
		static const FName Name_TextColor(TEXT("TextColor"));
		static const FName Name_Justification(TEXT("Justification"));
		static const FName Name_OverflowPolicy(TEXT("OverflowPolicy"));

		const bool bIsValid = true
			&& Name_Text == ClassReps[(int32)ENetFields_Private::Text].Property->GetFName()
			&& Name_TextColor == ClassReps[(int32)ENetFields_Private::TextColor].Property->GetFName()
			&& Name_Justification == ClassReps[(int32)ENetFields_Private::Justification].Property->GetFName()
			&& Name_OverflowPolicy == ClassReps[(int32)ENetFields_Private::OverflowPolicy].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkTextBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkTextBase);
	UUIFrameworkTextBase::~UUIFrameworkTextBase() {}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execOnRep_ShadowColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShadowColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execOnRep_ShadowOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShadowOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execGetShadowColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetShadowColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execSetShadowColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ShadowColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowColor(Z_Param_ShadowColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execGetShadowOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2f*)Z_Param__Result=P_THIS->GetShadowOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkTextBlock::execSetShadowOffset)
	{
		P_GET_STRUCT(FVector2f,Z_Param_ShadowOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShadowOffset(Z_Param_ShadowOffset);
		P_NATIVE_END;
	}
	void UUIFrameworkTextBlock::StaticRegisterNativesUUIFrameworkTextBlock()
	{
		UClass* Class = UUIFrameworkTextBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetShadowColor", &UUIFrameworkTextBlock::execGetShadowColor },
			{ "GetShadowOffset", &UUIFrameworkTextBlock::execGetShadowOffset },
			{ "OnRep_ShadowColor", &UUIFrameworkTextBlock::execOnRep_ShadowColor },
			{ "OnRep_ShadowOffset", &UUIFrameworkTextBlock::execOnRep_ShadowOffset },
			{ "SetShadowColor", &UUIFrameworkTextBlock::execSetShadowColor },
			{ "SetShadowOffset", &UUIFrameworkTextBlock::execSetShadowOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics
	{
		struct UIFrameworkTextBlock_eventGetShadowColor_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBlock_eventGetShadowColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "GetShadowColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::UIFrameworkTextBlock_eventGetShadowColor_Parms), Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics
	{
		struct UIFrameworkTextBlock_eventGetShadowOffset_Parms
		{
			FVector2f ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBlock_eventGetShadowOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "GetShadowOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::UIFrameworkTextBlock_eventGetShadowOffset_Parms), Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "OnRep_ShadowColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "OnRep_ShadowOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics
	{
		struct UIFrameworkTextBlock_eventSetShadowColor_Parms
		{
			FLinearColor ShadowColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBlock_eventSetShadowColor_Parms, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::NewProp_ShadowColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "SetShadowColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::UIFrameworkTextBlock_eventSetShadowColor_Parms), Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics
	{
		struct UIFrameworkTextBlock_eventSetShadowOffset_Parms
		{
			FVector2f ShadowOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkTextBlock_eventSetShadowOffset_Parms, ShadowOffset), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::NewProp_ShadowOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkTextBlock, nullptr, "SetShadowOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::UIFrameworkTextBlock_eventSetShadowOffset_Parms), Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkTextBlock);
	UClass* Z_Construct_UClass_UUIFrameworkTextBlock_NoRegister()
	{
		return UUIFrameworkTextBlock::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkTextBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkTextBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkTextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkTextBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowColor, "GetShadowColor" }, // 269348948
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_GetShadowOffset, "GetShadowOffset" }, // 3547073273
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowColor, "OnRep_ShadowColor" }, // 3510343709
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_OnRep_ShadowOffset, "OnRep_ShadowOffset" }, // 2978686882
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowColor, "SetShadowColor" }, // 1780831284
		{ &Z_Construct_UFunction_UUIFrameworkTextBlock_SetShadowOffset, "SetShadowOffset" }, // 3168678398
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Text Block UIFramework" },
		{ "IncludePath", "Widgets/UIFTextBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowOffset = { "ShadowOffset", "OnRep_ShadowOffset", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBlock, ShadowOffset), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFTextBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowColor = { "ShadowColor", "OnRep_ShadowColor", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkTextBlock, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkTextBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkTextBlock_Statics::NewProp_ShadowColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkTextBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkTextBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkTextBlock_Statics::ClassParams = {
		&UUIFrameworkTextBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkTextBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkTextBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkTextBlock()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkTextBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkTextBlock.OuterSingleton, Z_Construct_UClass_UUIFrameworkTextBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkTextBlock.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkTextBlock>()
	{
		return UUIFrameworkTextBlock::StaticClass();
	}

	void UUIFrameworkTextBlock::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ShadowOffset(TEXT("ShadowOffset"));
		static const FName Name_ShadowColor(TEXT("ShadowColor"));

		const bool bIsValid = true
			&& Name_ShadowOffset == ClassReps[(int32)ENetFields_Private::ShadowOffset].Property->GetFName()
			&& Name_ShadowColor == ClassReps[(int32)ENetFields_Private::ShadowColor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkTextBlock"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkTextBlock);
	UUIFrameworkTextBlock::~UUIFrameworkTextBlock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkTextBase, UUIFrameworkTextBase::StaticClass, TEXT("UUIFrameworkTextBase"), &Z_Registration_Info_UClass_UUIFrameworkTextBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkTextBase), 695135534U) },
		{ Z_Construct_UClass_UUIFrameworkTextBlock, UUIFrameworkTextBlock::StaticClass, TEXT("UUIFrameworkTextBlock"), &Z_Registration_Info_UClass_UUIFrameworkTextBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkTextBlock), 3847191820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_2670480315(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFTextBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
