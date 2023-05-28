// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Text3DCharacterTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText3DCharacterTransform() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DCharacterTransform();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DCharacterTransform_NoRegister();
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder();
	UPackage* Z_Construct_UPackage__Script_Text3D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EText3DCharacterEffectOrder;
	static UEnum* EText3DCharacterEffectOrder_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("EText3DCharacterEffectOrder"));
		}
		return Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.OuterSingleton;
	}
	template<> TEXT3D_API UEnum* StaticEnum<EText3DCharacterEffectOrder>()
	{
		return EText3DCharacterEffectOrder_StaticEnum();
	}
	struct Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enumerators[] = {
		{ "EText3DCharacterEffectOrder::Normal", (int64)EText3DCharacterEffectOrder::Normal },
		{ "EText3DCharacterEffectOrder::FromCenter", (int64)EText3DCharacterEffectOrder::FromCenter },
		{ "EText3DCharacterEffectOrder::ToCenter", (int64)EText3DCharacterEffectOrder::ToCenter },
		{ "EText3DCharacterEffectOrder::Opposite", (int64)EText3DCharacterEffectOrder::Opposite },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enum_MetaDataParams[] = {
		{ "FromCenter.DisplayName", "From Center" },
		{ "FromCenter.Name", "EText3DCharacterEffectOrder::FromCenter" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EText3DCharacterEffectOrder::Normal" },
		{ "Opposite.DisplayName", "Opposite" },
		{ "Opposite.Name", "EText3DCharacterEffectOrder::Opposite" },
		{ "ToCenter.DisplayName", "To Center" },
		{ "ToCenter.Name", "EText3DCharacterEffectOrder::ToCenter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		"EText3DCharacterEffectOrder",
		"EText3DCharacterEffectOrder",
		Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder()
	{
		if (!Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.InnerSingleton, Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EText3DCharacterEffectOrder.InnerSingleton;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateEnd)
	{
		P_GET_STRUCT(FRotator,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateEnd(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateBegin)
	{
		P_GET_STRUCT(FRotator,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateBegin(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateRange(Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateOrder)
	{
		P_GET_ENUM(EText3DCharacterEffectOrder,Z_Param_Order);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateOrder(EText3DCharacterEffectOrder(Z_Param_Order));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateProgress(Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetRotateEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotateEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleEnd)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleEnd(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleBegin)
	{
		P_GET_STRUCT(FVector,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleBegin(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleRange(Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleOrder)
	{
		P_GET_ENUM(EText3DCharacterEffectOrder,Z_Param_Order);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleOrder(EText3DCharacterEffectOrder(Z_Param_Order));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleProgress(Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetScaleEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetLocationDistance)
	{
		P_GET_STRUCT(FVector,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetLocationRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Range);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationRange(Z_Param_Range);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetLocationOrder)
	{
		P_GET_ENUM(EText3DCharacterEffectOrder,Z_Param_Order);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationOrder(EText3DCharacterEffectOrder(Z_Param_Order));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetLocationProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationProgress(Z_Param_Progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UText3DCharacterTransform::execSetLocationEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLocationEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UText3DCharacterTransform::StaticRegisterNativesUText3DCharacterTransform()
	{
		UClass* Class = UText3DCharacterTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLocationDistance", &UText3DCharacterTransform::execSetLocationDistance },
			{ "SetLocationEnabled", &UText3DCharacterTransform::execSetLocationEnabled },
			{ "SetLocationOrder", &UText3DCharacterTransform::execSetLocationOrder },
			{ "SetLocationProgress", &UText3DCharacterTransform::execSetLocationProgress },
			{ "SetLocationRange", &UText3DCharacterTransform::execSetLocationRange },
			{ "SetRotateBegin", &UText3DCharacterTransform::execSetRotateBegin },
			{ "SetRotateEnabled", &UText3DCharacterTransform::execSetRotateEnabled },
			{ "SetRotateEnd", &UText3DCharacterTransform::execSetRotateEnd },
			{ "SetRotateOrder", &UText3DCharacterTransform::execSetRotateOrder },
			{ "SetRotateProgress", &UText3DCharacterTransform::execSetRotateProgress },
			{ "SetRotateRange", &UText3DCharacterTransform::execSetRotateRange },
			{ "SetScaleBegin", &UText3DCharacterTransform::execSetScaleBegin },
			{ "SetScaleEnabled", &UText3DCharacterTransform::execSetScaleEnabled },
			{ "SetScaleEnd", &UText3DCharacterTransform::execSetScaleEnd },
			{ "SetScaleOrder", &UText3DCharacterTransform::execSetScaleOrder },
			{ "SetScaleProgress", &UText3DCharacterTransform::execSetScaleProgress },
			{ "SetScaleRange", &UText3DCharacterTransform::execSetScaleRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics
	{
		struct Text3DCharacterTransform_eventSetLocationDistance_Parms
		{
			FVector Distance;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetLocationDistance_Parms, Distance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetLocationDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::Text3DCharacterTransform_eventSetLocationDistance_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics
	{
		struct Text3DCharacterTransform_eventSetLocationEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Text3DCharacterTransform_eventSetLocationEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DCharacterTransform_eventSetLocationEnabled_Parms), &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetLocationEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::Text3DCharacterTransform_eventSetLocationEnabled_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics
	{
		struct Text3DCharacterTransform_eventSetLocationOrder_Parms
		{
			EText3DCharacterEffectOrder Order;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetLocationOrder_Parms, Order), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(nullptr, 0) }; // 3828086055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::NewProp_Order_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetLocationOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::Text3DCharacterTransform_eventSetLocationOrder_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics
	{
		struct Text3DCharacterTransform_eventSetLocationProgress_Parms
		{
			float Progress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetLocationProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetLocationProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::Text3DCharacterTransform_eventSetLocationProgress_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics
	{
		struct Text3DCharacterTransform_eventSetLocationRange_Parms
		{
			float Range;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetLocationRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::NewProp_Range,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetLocationRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::Text3DCharacterTransform_eventSetLocationRange_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateBegin_Parms
		{
			FRotator Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetRotateBegin_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::Text3DCharacterTransform_eventSetRotateBegin_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Text3DCharacterTransform_eventSetRotateEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DCharacterTransform_eventSetRotateEnabled_Parms), &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::Text3DCharacterTransform_eventSetRotateEnabled_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateEnd_Parms
		{
			FRotator Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetRotateEnd_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::Text3DCharacterTransform_eventSetRotateEnd_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateOrder_Parms
		{
			EText3DCharacterEffectOrder Order;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetRotateOrder_Parms, Order), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(nullptr, 0) }; // 3828086055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::NewProp_Order_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::Text3DCharacterTransform_eventSetRotateOrder_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateProgress_Parms
		{
			float Progress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetRotateProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::Text3DCharacterTransform_eventSetRotateProgress_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics
	{
		struct Text3DCharacterTransform_eventSetRotateRange_Parms
		{
			float Range;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetRotateRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::NewProp_Range,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rotate" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetRotateRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::Text3DCharacterTransform_eventSetRotateRange_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleBegin_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetScaleBegin_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::Text3DCharacterTransform_eventSetScaleBegin_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((Text3DCharacterTransform_eventSetScaleEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Text3DCharacterTransform_eventSetScaleEnabled_Parms), &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::Text3DCharacterTransform_eventSetScaleEnabled_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleEnd_Parms
		{
			FVector Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetScaleEnd_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::Text3DCharacterTransform_eventSetScaleEnd_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleOrder_Parms
		{
			EText3DCharacterEffectOrder Order;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Order_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Order;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::NewProp_Order_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetScaleOrder_Parms, Order), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(nullptr, 0) }; // 3828086055
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::NewProp_Order_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleOrder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::Text3DCharacterTransform_eventSetScaleOrder_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleProgress_Parms
		{
			float Progress;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetScaleProgress_Parms, Progress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::NewProp_Progress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleProgress", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::Text3DCharacterTransform_eventSetScaleProgress_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics
	{
		struct Text3DCharacterTransform_eventSetScaleRange_Parms
		{
			float Range;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Text3DCharacterTransform_eventSetScaleRange_Parms, Range), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::NewProp_Range,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UText3DCharacterTransform, nullptr, "SetScaleRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::Text3DCharacterTransform_eventSetScaleRange_Parms), Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UText3DCharacterTransform);
	UClass* Z_Construct_UClass_UText3DCharacterTransform_NoRegister()
	{
		return UText3DCharacterTransform::StaticClass();
	}
	struct Z_Construct_UClass_UText3DCharacterTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocationEnabled_MetaData[];
#endif
		static void NewProp_bLocationEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocationEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LocationOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleEnabled_MetaData[];
#endif
		static void NewProp_bScaleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBegin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRotateEnabled_MetaData[];
#endif
		static void NewProp_bRotateEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateProgress;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotateOrder_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateOrder_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotateOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateBegin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UText3DCharacterTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UText3DCharacterTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationDistance, "SetLocationDistance" }, // 2526974590
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationEnabled, "SetLocationEnabled" }, // 1198264523
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationOrder, "SetLocationOrder" }, // 1294908624
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationProgress, "SetLocationProgress" }, // 1718289061
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetLocationRange, "SetLocationRange" }, // 3529913890
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateBegin, "SetRotateBegin" }, // 119061828
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnabled, "SetRotateEnabled" }, // 1125919022
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateEnd, "SetRotateEnd" }, // 1249880587
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateOrder, "SetRotateOrder" }, // 2079182155
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateProgress, "SetRotateProgress" }, // 1151713639
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetRotateRange, "SetRotateRange" }, // 207582244
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleBegin, "SetScaleBegin" }, // 2161216415
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnabled, "SetScaleEnabled" }, // 1301507069
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleEnd, "SetScaleEnd" }, // 3413320266
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleOrder, "SetScaleOrder" }, // 3223652802
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleProgress, "SetScaleProgress" }, // 328067374
		{ &Z_Construct_UFunction_UText3DCharacterTransform_SetScaleRange, "SetScaleRange" }, // 2312727360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Text3D" },
		{ "HideCategories", "Collision Tags Activation Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "Text3DCharacterTransform.h" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled_MetaData[] = {
		{ "BlueprintSetter", "SetLocationEnabled" },
		{ "Category", "Location" },
		{ "Comment", "// Location\n" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
		{ "ToolTip", "Location" },
	};
#endif
	void Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled_SetBit(void* Obj)
	{
		((UText3DCharacterTransform*)Obj)->bLocationEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled = { "bLocationEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DCharacterTransform), &Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationProgress_MetaData[] = {
		{ "BlueprintSetter", "SetLocationProgress" },
		{ "Category", "Location" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocationEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationProgress = { "LocationProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, LocationProgress), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationProgress_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder_MetaData[] = {
		{ "BlueprintSetter", "SetLocationOrder" },
		{ "Category", "Location" },
		{ "EditCondition", "bLocationEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder = { "LocationOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, LocationOrder), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder_MetaData)) }; // 3828086055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationRange_MetaData[] = {
		{ "BlueprintSetter", "SetLocationRange" },
		{ "Category", "Location" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bLocationEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationRange = { "LocationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, LocationRange), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationDistance_MetaData[] = {
		{ "BlueprintSetter", "SetLocationDistance" },
		{ "Category", "Location" },
		{ "EditCondition", "bLocationEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationDistance = { "LocationDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, LocationDistance), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled_MetaData[] = {
		{ "BlueprintSetter", "SetScaleEnabled" },
		{ "Category", "Scale" },
		{ "Comment", "// Scale\n" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
		{ "ToolTip", "Scale" },
	};
#endif
	void Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled_SetBit(void* Obj)
	{
		((UText3DCharacterTransform*)Obj)->bScaleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled = { "bScaleEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DCharacterTransform), &Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleProgress_MetaData[] = {
		{ "BlueprintSetter", "SetScaleProgress" },
		{ "Category", "Scale" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bScaleEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleProgress = { "ScaleProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, ScaleProgress), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleProgress_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder_MetaData[] = {
		{ "BlueprintSetter", "SetScaleOrder" },
		{ "Category", "Scale" },
		{ "EditCondition", "bScaleEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder = { "ScaleOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, ScaleOrder), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder_MetaData)) }; // 3828086055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleRange_MetaData[] = {
		{ "BlueprintSetter", "SetScaleRange" },
		{ "Category", "Scale" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bScaleEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, ScaleRange), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleBegin_MetaData[] = {
		{ "BlueprintSetter", "SetScaleBegin" },
		{ "Category", "Scale" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bScaleEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleBegin = { "ScaleBegin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, ScaleBegin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleEnd_MetaData[] = {
		{ "BlueprintSetter", "SetScaleEnd" },
		{ "Category", "Scale" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bScaleEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleEnd = { "ScaleEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, ScaleEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled_MetaData[] = {
		{ "BlueprintSetter", "SetRotateEnabled" },
		{ "Category", "Rotate" },
		{ "Comment", "// Rotate\n" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
		{ "ToolTip", "Rotate" },
	};
#endif
	void Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled_SetBit(void* Obj)
	{
		((UText3DCharacterTransform*)Obj)->bRotateEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled = { "bRotateEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UText3DCharacterTransform), &Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateProgress_MetaData[] = {
		{ "BlueprintSetter", "SetRotateProgress" },
		{ "Category", "Rotate" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bRotateEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateProgress = { "RotateProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, RotateProgress), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateProgress_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder_MetaData[] = {
		{ "BlueprintSetter", "SetRotateOrder" },
		{ "Category", "Rotate" },
		{ "EditCondition", "bRotateEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder = { "RotateOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, RotateOrder), Z_Construct_UEnum_Text3D_EText3DCharacterEffectOrder, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder_MetaData)) }; // 3828086055
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateRange_MetaData[] = {
		{ "BlueprintSetter", "SetRotateRange" },
		{ "Category", "Rotate" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bRotateEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateRange = { "RotateRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, RotateRange), METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateBegin_MetaData[] = {
		{ "BlueprintSetter", "SetRotateBegin" },
		{ "Category", "Rotate" },
		{ "EditCondition", "bRotateEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateBegin = { "RotateBegin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, RotateBegin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateEnd_MetaData[] = {
		{ "BlueprintSetter", "SetRotateEnd" },
		{ "Category", "Rotate" },
		{ "EditCondition", "bRotateEnabled" },
		{ "ModuleRelativePath", "Public/Text3DCharacterTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateEnd = { "RotateEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UText3DCharacterTransform, RotateEnd), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UText3DCharacterTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bLocationEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_LocationDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bScaleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_ScaleEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_bRotateEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UText3DCharacterTransform_Statics::NewProp_RotateEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UText3DCharacterTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UText3DCharacterTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UText3DCharacterTransform_Statics::ClassParams = {
		&UText3DCharacterTransform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UText3DCharacterTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UText3DCharacterTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UText3DCharacterTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UText3DCharacterTransform()
	{
		if (!Z_Registration_Info_UClass_UText3DCharacterTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UText3DCharacterTransform.OuterSingleton, Z_Construct_UClass_UText3DCharacterTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UText3DCharacterTransform.OuterSingleton;
	}
	template<> TEXT3D_API UClass* StaticClass<UText3DCharacterTransform>()
	{
		return UText3DCharacterTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UText3DCharacterTransform);
	UText3DCharacterTransform::~UText3DCharacterTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::EnumInfo[] = {
		{ EText3DCharacterEffectOrder_StaticEnum, TEXT("EText3DCharacterEffectOrder"), &Z_Registration_Info_UEnum_EText3DCharacterEffectOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3828086055U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UText3DCharacterTransform, UText3DCharacterTransform::StaticClass, TEXT("UText3DCharacterTransform"), &Z_Registration_Info_UClass_UText3DCharacterTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UText3DCharacterTransform), 1939284191U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_209590235(TEXT("/Script/Text3D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DCharacterTransform_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
