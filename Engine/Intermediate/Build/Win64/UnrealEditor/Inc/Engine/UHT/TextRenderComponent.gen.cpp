// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/TextRenderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHorizTextAligment;
	static UEnum* EHorizTextAligment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHorizTextAligment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHorizTextAligment"));
		}
		return Z_Registration_Info_UEnum_EHorizTextAligment.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHorizTextAligment>()
	{
		return EHorizTextAligment_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHorizTextAligment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enumerators[] = {
		{ "EHTA_Left", (int64)EHTA_Left },
		{ "EHTA_Center", (int64)EHTA_Center },
		{ "EHTA_Right", (int64)EHTA_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enum_MetaDataParams[] = {
		{ "EHTA_Center.Comment", "/**  */" },
		{ "EHTA_Center.DisplayName", "Center" },
		{ "EHTA_Center.Name", "EHTA_Center" },
		{ "EHTA_Left.Comment", "/**  */" },
		{ "EHTA_Left.DisplayName", "Left" },
		{ "EHTA_Left.Name", "EHTA_Left" },
		{ "EHTA_Right.Comment", "/**  */" },
		{ "EHTA_Right.DisplayName", "Right" },
		{ "EHTA_Right.Name", "EHTA_Right" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHorizTextAligment",
		"EHorizTextAligment",
		Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHorizTextAligment()
	{
		if (!Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton, Z_Construct_UEnum_Engine_EHorizTextAligment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHorizTextAligment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerticalTextAligment;
	static UEnum* EVerticalTextAligment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVerticalTextAligment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVerticalTextAligment"));
		}
		return Z_Registration_Info_UEnum_EVerticalTextAligment.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EVerticalTextAligment>()
	{
		return EVerticalTextAligment_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enumerators[] = {
		{ "EVRTA_TextTop", (int64)EVRTA_TextTop },
		{ "EVRTA_TextCenter", (int64)EVRTA_TextCenter },
		{ "EVRTA_TextBottom", (int64)EVRTA_TextBottom },
		{ "EVRTA_QuadTop", (int64)EVRTA_QuadTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enum_MetaDataParams[] = {
		{ "EVRTA_QuadTop.Comment", "/**  */" },
		{ "EVRTA_QuadTop.DisplayName", "Quad Top" },
		{ "EVRTA_QuadTop.Name", "EVRTA_QuadTop" },
		{ "EVRTA_TextBottom.Comment", "/**  */" },
		{ "EVRTA_TextBottom.DisplayName", "Text Bottom" },
		{ "EVRTA_TextBottom.Name", "EVRTA_TextBottom" },
		{ "EVRTA_TextCenter.Comment", "/**  */" },
		{ "EVRTA_TextCenter.DisplayName", "Text Center" },
		{ "EVRTA_TextCenter.Name", "EVRTA_TextCenter" },
		{ "EVRTA_TextTop.Comment", "/**  */" },
		{ "EVRTA_TextTop.DisplayName", "Text Top" },
		{ "EVRTA_TextTop.Name", "EVRTA_TextTop" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EVerticalTextAligment",
		"EVerticalTextAligment",
		Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EVerticalTextAligment()
	{
		if (!Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton, Z_Construct_UEnum_Engine_EVerticalTextAligment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVerticalTextAligment.InnerSingleton;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execGetTextWorldSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTextWorldSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execGetTextLocalSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTextLocalSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetWorldSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldSize(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetVertSpacingAdjust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVertSpacingAdjust(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetHorizSpacingAdjust)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizSpacingAdjust(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetYScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetYScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetXScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetXScale(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetTextRenderColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextRenderColor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalTextAligment(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizTextAligment(Z_Param_Value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetFont)
	{
		P_GET_OBJECT(UFont,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFont(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execSetTextMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextRenderComponent::execK2_SetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetText(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void UTextRenderComponent::StaticRegisterNativesUTextRenderComponent()
	{
		UClass* Class = UTextRenderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextLocalSize", &UTextRenderComponent::execGetTextLocalSize },
			{ "GetTextWorldSize", &UTextRenderComponent::execGetTextWorldSize },
			{ "K2_SetText", &UTextRenderComponent::execK2_SetText },
			{ "SetFont", &UTextRenderComponent::execSetFont },
			{ "SetHorizontalAlignment", &UTextRenderComponent::execSetHorizontalAlignment },
			{ "SetHorizSpacingAdjust", &UTextRenderComponent::execSetHorizSpacingAdjust },
			{ "SetTextMaterial", &UTextRenderComponent::execSetTextMaterial },
			{ "SetTextRenderColor", &UTextRenderComponent::execSetTextRenderColor },
			{ "SetVerticalAlignment", &UTextRenderComponent::execSetVerticalAlignment },
			{ "SetVertSpacingAdjust", &UTextRenderComponent::execSetVertSpacingAdjust },
			{ "SetWorldSize", &UTextRenderComponent::execSetWorldSize },
			{ "SetXScale", &UTextRenderComponent::execSetXScale },
			{ "SetYScale", &UTextRenderComponent::execSetYScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics
	{
		struct TextRenderComponent_eventGetTextLocalSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventGetTextLocalSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get local size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get local size of text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextLocalSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::TextRenderComponent_eventGetTextLocalSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics
	{
		struct TextRenderComponent_eventGetTextWorldSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventGetTextWorldSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Get world space size of text */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Get world space size of text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "GetTextWorldSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::TextRenderComponent_eventGetTextWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics
	{
		struct TextRenderComponent_eventK2_SetText_Parms
		{
			FText Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventK2_SetText_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text value and signal the primitives to be rebuilt */" },
		{ "DisplayName", "Set Text" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ScriptName", "SetText" },
		{ "ToolTip", "Change the text value and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "K2_SetText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::TextRenderComponent_eventK2_SetText_Parms), Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_K2_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_K2_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics
	{
		struct TextRenderComponent_eventSetFont_Parms
		{
			UFont* Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetFont_Parms, Value), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the font and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the font and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetFont", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::TextRenderComponent_eventSetFont_Parms), Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetFont()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetFont_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics
	{
		struct TextRenderComponent_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizTextAligment> Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetHorizontalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(nullptr, 0) }; // 3345174201
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the horizontal alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the horizontal alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::TextRenderComponent_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetHorizSpacingAdjust_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetHorizSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text horizontal spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text horizontal spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetHorizSpacingAdjust", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::TextRenderComponent_eventSetHorizSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics
	{
		struct TextRenderComponent_eventSetTextMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetTextMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text material and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text material and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::TextRenderComponent_eventSetTextMaterial_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics
	{
		struct TextRenderComponent_eventSetTextRenderColor_Parms
		{
			FColor Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetTextRenderColor_Parms, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text render color and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text render color and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetTextRenderColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::TextRenderComponent_eventSetTextRenderColor_Parms), Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics
	{
		struct TextRenderComponent_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalTextAligment> Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetVerticalAlignment_Parms, Value), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(nullptr, 0) }; // 3582681937
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the vertical alignment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the vertical alignment and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::TextRenderComponent_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics
	{
		struct TextRenderComponent_eventSetVertSpacingAdjust_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetVertSpacingAdjust_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text vertical spacing adjustment and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text vertical spacing adjustment and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetVertSpacingAdjust", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::TextRenderComponent_eventSetVertSpacingAdjust_Parms), Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics
	{
		struct TextRenderComponent_eventSetWorldSize_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetWorldSize_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the world size of the text and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the world size of the text and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetWorldSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::TextRenderComponent_eventSetWorldSize_Parms), Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetWorldSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetWorldSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics
	{
		struct TextRenderComponent_eventSetXScale_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetXScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text X scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text X scale and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetXScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::TextRenderComponent_eventSetXScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetXScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetXScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics
	{
		struct TextRenderComponent_eventSetYScale_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextRenderComponent_eventSetYScale_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|TextRender" },
		{ "Comment", "/** Change the text Y scale and signal the primitives to be rebuilt */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Change the text Y scale and signal the primitives to be rebuilt" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextRenderComponent, nullptr, "SetYScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::TextRenderComponent_eventSetYScale_Parms), Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextRenderComponent_SetYScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextRenderComponent_SetYScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextRenderComponent);
	UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister()
	{
		return UTextRenderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTextRenderComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextRenderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_XScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvDefaultSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InvDefaultSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizSpacingAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizSpacingAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertSpacingAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertSpacingAdjust;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRenderAsText_MetaData[];
#endif
		static void NewProp_bAlwaysRenderAsText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRenderAsText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextRenderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextRenderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextLocalSize, "GetTextLocalSize" }, // 3819777821
		{ &Z_Construct_UFunction_UTextRenderComponent_GetTextWorldSize, "GetTextWorldSize" }, // 1827520026
		{ &Z_Construct_UFunction_UTextRenderComponent_K2_SetText, "K2_SetText" }, // 850148882
		{ &Z_Construct_UFunction_UTextRenderComponent_SetFont, "SetFont" }, // 951525584
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 991518718
		{ &Z_Construct_UFunction_UTextRenderComponent_SetHorizSpacingAdjust, "SetHorizSpacingAdjust" }, // 2428350956
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextMaterial, "SetTextMaterial" }, // 658213563
		{ &Z_Construct_UFunction_UTextRenderComponent_SetTextRenderColor, "SetTextRenderColor" }, // 2625701536
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVerticalAlignment, "SetVerticalAlignment" }, // 3964357332
		{ &Z_Construct_UFunction_UTextRenderComponent_SetVertSpacingAdjust, "SetVertSpacingAdjust" }, // 3928413461
		{ &Z_Construct_UFunction_UTextRenderComponent_SetWorldSize, "SetWorldSize" }, // 3063834397
		{ &Z_Construct_UFunction_UTextRenderComponent_SetXScale, "SetXScale" }, // 668143596
		{ &Z_Construct_UFunction_UTextRenderComponent_SetYScale, "SetYScale" }, // 4070441104
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc.\n */" },
		{ "HideCategories", "Object LOD Physics TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/TextRenderComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Renders text in the world with given font. Contains usual font related attributes such as Scale, Alignment, Color etc." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text content, can be multi line using <br> as line separator */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Text content, can be multi line using <br> as line separator" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, Text), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text material */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, TextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Text font */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Text font" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal text alignment */" },
		{ "DisplayName", "Horizontal Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal text alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, HorizontalAlignment), Z_Construct_UEnum_Engine_EHorizTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 3345174201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical text alignment */" },
		{ "DisplayName", "Vertical Alignment" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical text alignment" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, VerticalAlignment), Z_Construct_UEnum_Engine_EVerticalTextAligment, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment_MetaData)) }; // 3582681937
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Color of the text, can be accessed as vertex color */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Color of the text, can be accessed as vertex color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor = { "TextRenderColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, TextRenderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal scale, default is 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale = { "XScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, XScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical scale, default is 1.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical scale, default is 1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale = { "YScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, YScale), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical size of the fonts largest character in world units. Transform, XScale and YScale will affect final size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, WorldSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData[] = {
		{ "Comment", "/** The inverse of the Font's character height. */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "The inverse of the Font's character height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize = { "InvDefaultSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, InvDefaultSize), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Horizontal adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Horizontal adjustment per character, default is 0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust = { "HorizSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, HorizSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData[] = {
		{ "Category", "Text" },
		{ "Comment", "/** Vertical adjustment per character, default is 0.0 */" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Vertical adjustment per character, default is 0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust = { "VertSpacingAdjust", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextRenderComponent, VertSpacingAdjust), METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Allows text to draw unmodified when using debug visualization modes. **/" },
		{ "ModuleRelativePath", "Classes/Components/TextRenderComponent.h" },
		{ "ToolTip", "Allows text to draw unmodified when using debug visualization modes. *" },
	};
#endif
	void Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit(void* Obj)
	{
		((UTextRenderComponent*)Obj)->bAlwaysRenderAsText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText = { "bAlwaysRenderAsText", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTextRenderComponent), &Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_TextRenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_XScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_YScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_WorldSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_InvDefaultSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_HorizSpacingAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_VertSpacingAdjust,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextRenderComponent_Statics::NewProp_bAlwaysRenderAsText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextRenderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextRenderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams = {
		&UTextRenderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextRenderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextRenderComponent()
	{
		if (!Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton, Z_Construct_UClass_UTextRenderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextRenderComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextRenderComponent>()
	{
		return UTextRenderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextRenderComponent);
	UTextRenderComponent::~UTextRenderComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::EnumInfo[] = {
		{ EHorizTextAligment_StaticEnum, TEXT("EHorizTextAligment"), &Z_Registration_Info_UEnum_EHorizTextAligment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3345174201U) },
		{ EVerticalTextAligment_StaticEnum, TEXT("EVerticalTextAligment"), &Z_Registration_Info_UEnum_EVerticalTextAligment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3582681937U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextRenderComponent, UTextRenderComponent::StaticClass, TEXT("UTextRenderComponent"), &Z_Registration_Info_UClass_UTextRenderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextRenderComponent), 861928840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_2904178870(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TextRenderComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
