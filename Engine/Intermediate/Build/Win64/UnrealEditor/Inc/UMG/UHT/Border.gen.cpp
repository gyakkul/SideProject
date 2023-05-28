// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Border.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorder() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UBorder();
	UMG_API UClass* Z_Construct_UClass_UBorder_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UBorder::execSetDesiredSizeScale)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSizeScale(Z_Param_InScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execGetDynamicMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDynamicMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetShowEffectWhenDisabled)
	{
		P_GET_UBOOL(Z_Param_bInShowEffectWhenDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowEffectWhenDisabled(Z_Param_bInShowEffectWhenDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromTexture(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushFromAsset)
	{
		P_GET_OBJECT(USlateBrushAsset,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrush)
	{
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrush(Z_Param_Out_InBrush);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetBrushColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InBrushColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushColor(Z_Param_InBrushColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBorder::execSetContentColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InContentColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContentColorAndOpacity(Z_Param_InContentColorAndOpacity);
		P_NATIVE_END;
	}
	void UBorder::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetHorizontalAlignment();
	}
	void UBorder::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UBorder::GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		EVerticalAlignment& Result = *(EVerticalAlignment*)OutValue;
		Result = (EVerticalAlignment)Obj->GetVerticalAlignment();
	}
	void UBorder::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UBorder::GetbShowEffectWhenDisabled_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetShowEffectWhenDisabled();
	}
	void UBorder::SetbShowEffectWhenDisabled_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetShowEffectWhenDisabled(Value);
	}
	void UBorder::GetContentColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetContentColorAndOpacity();
	}
	void UBorder::SetContentColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetContentColorAndOpacity(Value);
	}
	void UBorder::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void UBorder::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UBorder::GetBrushColor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetBrushColor();
	}
	void UBorder::SetBrushColor_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetBrushColor(Value);
	}
	void UBorder::GetDesiredSizeScale_WrapperImpl(const void* Object, void* OutValue)
	{
		const UBorder* Obj = (const UBorder*)Object;
		FVector2D& Result = *(FVector2D*)OutValue;
		Result = (FVector2D)Obj->GetDesiredSizeScale();
	}
	void UBorder::SetDesiredSizeScale_WrapperImpl(void* Object, const void* InValue)
	{
		UBorder* Obj = (UBorder*)Object;
		FVector2D& Value = *(FVector2D*)InValue;
		Obj->SetDesiredSizeScale(Value);
	}
	void UBorder::StaticRegisterNativesUBorder()
	{
		UClass* Class = UBorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDynamicMaterial", &UBorder::execGetDynamicMaterial },
			{ "SetBrush", &UBorder::execSetBrush },
			{ "SetBrushColor", &UBorder::execSetBrushColor },
			{ "SetBrushFromAsset", &UBorder::execSetBrushFromAsset },
			{ "SetBrushFromMaterial", &UBorder::execSetBrushFromMaterial },
			{ "SetBrushFromTexture", &UBorder::execSetBrushFromTexture },
			{ "SetContentColorAndOpacity", &UBorder::execSetContentColorAndOpacity },
			{ "SetDesiredSizeScale", &UBorder::execSetDesiredSizeScale },
			{ "SetHorizontalAlignment", &UBorder::execSetHorizontalAlignment },
			{ "SetPadding", &UBorder::execSetPadding },
			{ "SetShowEffectWhenDisabled", &UBorder::execSetShowEffectWhenDisabled },
			{ "SetVerticalAlignment", &UBorder::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics
	{
		struct Border_eventGetDynamicMaterial_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventGetDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "GetDynamicMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Border_eventGetDynamicMaterial_Parms), Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_GetDynamicMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_GetDynamicMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrush_Statics
	{
		struct Border_eventSetBrush_Parms
		{
			FSlateBrush InBrush;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBrush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush = { "InBrush", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetBrush_Parms, InBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrush_Statics::NewProp_InBrush,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrush_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrush", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetBrush_Statics::Border_eventSetBrush_Parms), Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrush_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrush()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetBrush_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushColor_Statics
	{
		struct Border_eventSetBrushColor_Parms
		{
			FLinearColor InBrushColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InBrushColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetBrushColor_Statics::NewProp_InBrushColor = { "InBrushColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetBrushColor_Parms, InBrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushColor_Statics::NewProp_InBrushColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Border_eventSetBrushColor_Parms), Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics
	{
		struct Border_eventSetBrushFromAsset_Parms
		{
			USlateBrushAsset* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromAsset_Parms, Asset), Z_Construct_UClass_USlateBrushAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Border_eventSetBrushFromAsset_Parms), Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics
	{
		struct Border_eventSetBrushFromMaterial_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Border_eventSetBrushFromMaterial_Parms), Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics
	{
		struct Border_eventSetBrushFromTexture_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetBrushFromTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetBrushFromTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Border_eventSetBrushFromTexture_Parms), Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetBrushFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetBrushFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics
	{
		struct Border_eventSetContentColorAndOpacity_Parms
		{
			FLinearColor InContentColorAndOpacity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InContentColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity = { "InContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetContentColorAndOpacity_Parms, InContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::NewProp_InContentColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetContentColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Border_eventSetContentColorAndOpacity_Parms), Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetContentColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetContentColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics
	{
		struct Border_eventSetDesiredSizeScale_Parms
		{
			FVector2D InScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::NewProp_InScale = { "InScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetDesiredSizeScale_Parms, InScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::NewProp_InScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Sets the DesiredSizeScale of this border.\n\x09 *\n\x09 * @param InScale    The X and Y multipliers for the desired size\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Sets the DesiredSizeScale of this border.\n\n@param InScale    The X and Y multipliers for the desired size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetDesiredSizeScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Border_eventSetDesiredSizeScale_Parms), Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetDesiredSizeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetDesiredSizeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics
	{
		struct Border_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Border_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetPadding_Statics
	{
		struct Border_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBorder_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetPadding_Statics::Border_eventSetPadding_Parms), Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics
	{
		struct Border_eventSetShowEffectWhenDisabled_Parms
		{
			bool bInShowEffectWhenDisabled;
		};
		static void NewProp_bInShowEffectWhenDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShowEffectWhenDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::NewProp_bInShowEffectWhenDisabled_SetBit(void* Obj)
	{
		((Border_eventSetShowEffectWhenDisabled_Parms*)Obj)->bInShowEffectWhenDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::NewProp_bInShowEffectWhenDisabled = { "bInShowEffectWhenDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Border_eventSetShowEffectWhenDisabled_Parms), &Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::NewProp_bInShowEffectWhenDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::NewProp_bInShowEffectWhenDisabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetShowEffectWhenDisabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::Border_eventSetShowEffectWhenDisabled_Parms), Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics
	{
		struct Border_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Border_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBorder, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Border_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBorder_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBorder_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBorder);
	UClass* Z_Construct_UClass_UBorder_NoRegister()
	{
		return UBorder::StaticClass();
	}
	struct Z_Construct_UClass_UBorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEffectWhenDisabled_MetaData[];
#endif
		static void NewProp_bShowEffectWhenDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEffectWhenDisabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContentColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentColorAndOpacityDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ContentColorAndOpacityDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Background;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_BackgroundDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushColorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_BrushColorDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipForRightToLeftFlowDirection_MetaData[];
#endif
		static void NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipForRightToLeftFlowDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonDownEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonDownEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseButtonUpEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseButtonUpEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseMoveEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseMoveEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMouseDoubleClickEvent_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnMouseDoubleClickEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBorder_GetDynamicMaterial, "GetDynamicMaterial" }, // 1616318274
		{ &Z_Construct_UFunction_UBorder_SetBrush, "SetBrush" }, // 160095942
		{ &Z_Construct_UFunction_UBorder_SetBrushColor, "SetBrushColor" }, // 1621547463
		{ &Z_Construct_UFunction_UBorder_SetBrushFromAsset, "SetBrushFromAsset" }, // 256044249
		{ &Z_Construct_UFunction_UBorder_SetBrushFromMaterial, "SetBrushFromMaterial" }, // 2862092562
		{ &Z_Construct_UFunction_UBorder_SetBrushFromTexture, "SetBrushFromTexture" }, // 3413300705
		{ &Z_Construct_UFunction_UBorder_SetContentColorAndOpacity, "SetContentColorAndOpacity" }, // 1928062828
		{ &Z_Construct_UFunction_UBorder_SetDesiredSizeScale, "SetDesiredSizeScale" }, // 3562192820
		{ &Z_Construct_UFunction_UBorder_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3556858366
		{ &Z_Construct_UFunction_UBorder_SetPadding, "SetPadding" }, // 2453928090
		{ &Z_Construct_UFunction_UBorder_SetShowEffectWhenDisabled, "SetShowEffectWhenDisabled" }, // 2905998080
		{ &Z_Construct_UFunction_UBorder_SetVerticalAlignment, "SetVerticalAlignment" }, // 1083717138
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A border is a container widget that can contain one child widget, providing an opportunity \n * to surround it with a background image and adjustable padding.\n *\n * * Single Child\n * * Image\n */" },
		{ "IncludePath", "Components/Border.h" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A border is a container widget that can contain one child widget, providing an opportunity\nto surround it with a background image and adjustable padding.\n\n* Single Child\n* Image" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The alignment of the content horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetHorizontalAlignment_WrapperImpl, &UBorder::GetHorizontalAlignment_WrapperImpl, STRUCT_OFFSET(UBorder, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Content" },
		{ "Comment", "/** The alignment of the content vertically. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The alignment of the content vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetVerticalAlignment_WrapperImpl, &UBorder::GetVerticalAlignment_WrapperImpl, STRUCT_OFFSET(UBorder, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData[] = {
		{ "BlueprintSetter", "SetShowEffectWhenDisabled" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Whether or not to show the disabled effect when this border is disabled */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Whether or not to show the disabled effect when this border is disabled" },
	};
#endif
	void Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit(void* Obj)
	{
		((UBorder*)Obj)->bShowEffectWhenDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled = { "bShowEffectWhenDisabled", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetbShowEffectWhenDisabled_WrapperImpl, &UBorder::GetbShowEffectWhenDisabled_WrapperImpl, sizeof(uint8), sizeof(UBorder), &Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetContentColorAndOpacity" },
		{ "Category", "Content" },
		{ "Comment", "/** Color and opacity multiplier of content in the border */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity multiplier of content in the border" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity = { "ContentColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetContentColorAndOpacity_WrapperImpl, &UBorder::GetContentColorAndOpacity_WrapperImpl, STRUCT_OFFSET(UBorder, ContentColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the ContentColorAndOpacity. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the ContentColorAndOpacity." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate = { "ContentColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, ContentColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate_MetaData)) }; // 2649853791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Content" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetPadding_WrapperImpl, &UBorder::GetPadding_WrapperImpl, STRUCT_OFFSET(UBorder, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Brush to drag as the background */" },
		{ "DisplayName", "Brush" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Brush to drag as the background" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, Background), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_Background_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the Brush. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the Brush." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate = { "BackgroundDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, BackgroundDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateBrush__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate_MetaData)) }; // 4095717017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData[] = {
		{ "BlueprintSetter", "SetBrushColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Color and opacity of the actual border image */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "sRGB", "true" },
		{ "ToolTip", "Color and opacity of the actual border image" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor = { "BrushColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetBrushColor_WrapperImpl, &UBorder::GetBrushColor_WrapperImpl, STRUCT_OFFSET(UBorder, BrushColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData[] = {
		{ "Comment", "/** A bindable delegate for the BrushColor. */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "A bindable delegate for the BrushColor." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate = { "BrushColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, BrushColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate_MetaData)) }; // 2649853791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData[] = {
		{ "BlueprintSetter", "SetDesiredSizeScale" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Scales the computed desired size of this border and its contents. Useful\n\x09 * for making things that slide open without having to hard-code their size.\n\x09 * Note: if the parent widget is set up to ignore this widget's desired size,\n\x09 * then changing this value will have no effect.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Scales the computed desired size of this border and its contents. Useful\nfor making things that slide open without having to hard-code their size.\nNote: if the parent widget is set up to ignore this widget's desired size,\nthen changing this value will have no effect." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale = { "DesiredSizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UBorder::SetDesiredSizeScale_WrapperImpl, &UBorder::GetDesiredSizeScale_WrapperImpl, STRUCT_OFFSET(UBorder, DesiredSizeScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData[] = {
		{ "Category", "Localization" },
		{ "Comment", "/** Flips the background image if the localization's flow direction is RightToLeft */" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
		{ "ToolTip", "Flips the background image if the localization's flow direction is RightToLeft" },
	};
#endif
	void Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit(void* Obj)
	{
		((UBorder*)Obj)->bFlipForRightToLeftFlowDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection = { "bFlipForRightToLeftFlowDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBorder), &Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent = { "OnMouseButtonDownEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, OnMouseButtonDownEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent_MetaData)) }; // 2519213161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent = { "OnMouseButtonUpEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, OnMouseButtonUpEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent_MetaData)) }; // 2519213161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent = { "OnMouseMoveEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, OnMouseMoveEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent_MetaData)) }; // 2519213161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData[] = {
		{ "Category", "Events" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Components/Border.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent = { "OnMouseDoubleClickEvent", nullptr, (EPropertyFlags)0x0010000000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBorder, OnMouseDoubleClickEvent), Z_Construct_UDelegateFunction_UWidget_OnPointerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent_MetaData)) }; // 2519213161
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBorder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_bShowEffectWhenDisabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_ContentColorAndOpacityDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_Background,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BackgroundDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BrushColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_BrushColorDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_DesiredSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_bFlipForRightToLeftFlowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonDownEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseButtonUpEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseMoveEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBorder_Statics::NewProp_OnMouseDoubleClickEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBorder_Statics::ClassParams = {
		&UBorder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBorder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBorder()
	{
		if (!Z_Registration_Info_UClass_UBorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBorder.OuterSingleton, Z_Construct_UClass_UBorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBorder.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UBorder>()
	{
		return UBorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBorder);
	UBorder::~UBorder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBorder, UBorder::StaticClass, TEXT("UBorder"), &Z_Registration_Info_UClass_UBorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBorder), 1524874402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_3244324119(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Border_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
