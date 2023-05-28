// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WrapBoxSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBoxSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWrapBoxSlot::execSetNewLine)
	{
		P_GET_UBOOL(Z_Param_InForceNewLine);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewLine(Z_Param_InForceNewLine);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetFillSpanWhenLessThan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFillSpanWhenLessThan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillSpanWhenLessThan(Z_Param_InFillSpanWhenLessThan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetFillEmptySpace)
	{
		P_GET_UBOOL(Z_Param_InbFillEmptySpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFillEmptySpace(Z_Param_InbFillEmptySpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWrapBoxSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UWrapBoxSlot::SetFillSpanWhenLessThan_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		float& Value = *(float*)InValue;
		Obj->SetFillSpanWhenLessThan(Value);
	}
	void UWrapBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UWrapBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UWrapBoxSlot::SetbFillEmptySpace_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetFillEmptySpace(Value);
	}
	void UWrapBoxSlot::SetbForceNewLine_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBoxSlot* Obj = (UWrapBoxSlot*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetNewLine(Value);
	}
	void UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot()
	{
		UClass* Class = UWrapBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetFillEmptySpace", &UWrapBoxSlot::execSetFillEmptySpace },
			{ "SetFillSpanWhenLessThan", &UWrapBoxSlot::execSetFillSpanWhenLessThan },
			{ "SetHorizontalAlignment", &UWrapBoxSlot::execSetHorizontalAlignment },
			{ "SetNewLine", &UWrapBoxSlot::execSetNewLine },
			{ "SetPadding", &UWrapBoxSlot::execSetPadding },
			{ "SetVerticalAlignment", &UWrapBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics
	{
		struct WrapBoxSlot_eventSetFillEmptySpace_Parms
		{
			bool InbFillEmptySpace;
		};
		static void NewProp_InbFillEmptySpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InbFillEmptySpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit(void* Obj)
	{
		((WrapBoxSlot_eventSetFillEmptySpace_Parms*)Obj)->InbFillEmptySpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace = { "InbFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WrapBoxSlot_eventSetFillEmptySpace_Parms), &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::NewProp_InbFillEmptySpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetFillEmptySpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::WrapBoxSlot_eventSetFillEmptySpace_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics
	{
		struct WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms
		{
			float InFillSpanWhenLessThan;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFillSpanWhenLessThan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan = { "InFillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms, InFillSpanWhenLessThan), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::NewProp_InFillSpanWhenLessThan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetFillSpanWhenLessThan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::WrapBoxSlot_eventSetFillSpanWhenLessThan_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics
	{
		struct WrapBoxSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::WrapBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics
	{
		struct WrapBoxSlot_eventSetNewLine_Parms
		{
			bool InForceNewLine;
		};
		static void NewProp_InForceNewLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InForceNewLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::NewProp_InForceNewLine_SetBit(void* Obj)
	{
		((WrapBoxSlot_eventSetNewLine_Parms*)Obj)->InForceNewLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::NewProp_InForceNewLine = { "InForceNewLine", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WrapBoxSlot_eventSetNewLine_Parms), &Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::NewProp_InForceNewLine_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::NewProp_InForceNewLine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetNewLine", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::WrapBoxSlot_eventSetNewLine_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetNewLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetNewLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics
	{
		struct WrapBoxSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::WrapBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics
	{
		struct WrapBoxSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Wrap Box Slot" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::WrapBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWrapBoxSlot);
	UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister()
	{
		return UWrapBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UWrapBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillSpanWhenLessThan_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FillSpanWhenLessThan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillEmptySpace_MetaData[];
#endif
		static void NewProp_bFillEmptySpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillEmptySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceNewLine_MetaData[];
#endif
		static void NewProp_bForceNewLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNewLine;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillEmptySpace, "SetFillEmptySpace" }, // 1965906216
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetFillSpanWhenLessThan, "SetFillSpanWhenLessThan" }, // 191010443
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2358387875
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetNewLine, "SetNewLine" }, // 2811381551
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetPadding, "SetPadding" }, // 1289727401
		{ &Z_Construct_UFunction_UWrapBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2696125796
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UWrapBox, contains the widget that is flowed vertically */" },
		{ "IncludePath", "Components/WrapBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The Slot for the UWrapBox, contains the widget that is flowed vertically" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetPadding_WrapperImpl, nullptr, STRUCT_OFFSET(UWrapBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData[] = {
		{ "BlueprintSetter", "SetFillSpanWhenLessThan" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/**\n\x09 * If the total available space in the wrap panel drops below this threshold, this slot will attempt to fill an entire line.\n\x09 * NOTE: A value of 0, denotes no filling will occur.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "If the total available space in the wrap panel drops below this threshold, this slot will attempt to fill an entire line.\nNOTE: A value of 0, denotes no filling will occur." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan = { "FillSpanWhenLessThan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetFillSpanWhenLessThan_WrapperImpl, nullptr, STRUCT_OFFSET(UWrapBoxSlot, FillSpanWhenLessThan), METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UWrapBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UWrapBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData[] = {
		{ "BlueprintSetter", "SetFillEmptySpace" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** Should this slot fill the remaining space on the line? */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "Should this slot fill the remaining space on the line?" },
	};
#endif
	void Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit(void* Obj)
	{
		((UWrapBoxSlot*)Obj)->bFillEmptySpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace = { "bFillEmptySpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetbFillEmptySpace_WrapperImpl, nullptr, sizeof(bool), sizeof(UWrapBoxSlot), &Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_MetaData[] = {
		{ "BlueprintSetter", "SetNewLine" },
		{ "Category", "Layout|Wrap Box Slot" },
		{ "Comment", "/** Should this slot start on a new line? */" },
		{ "ModuleRelativePath", "Public/Components/WrapBoxSlot.h" },
		{ "ToolTip", "Should this slot start on a new line?" },
	};
#endif
	void Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_SetBit(void* Obj)
	{
		((UWrapBoxSlot*)Obj)->bForceNewLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine = { "bForceNewLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBoxSlot::SetbForceNewLine_WrapperImpl, nullptr, sizeof(bool), sizeof(UWrapBoxSlot), &Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_FillSpanWhenLessThan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bFillEmptySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBoxSlot_Statics::NewProp_bForceNewLine,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapBoxSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWrapBoxSlot_Statics::ClassParams = {
		&UWrapBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrapBoxSlot()
	{
		if (!Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton, Z_Construct_UClass_UWrapBoxSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWrapBoxSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWrapBoxSlot>()
	{
		return UWrapBoxSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBoxSlot);
	UWrapBoxSlot::~UWrapBoxSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWrapBoxSlot, UWrapBoxSlot::StaticClass, TEXT("UWrapBoxSlot"), &Z_Registration_Info_UClass_UWrapBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWrapBoxSlot), 3745945089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_3387957809(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBoxSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
