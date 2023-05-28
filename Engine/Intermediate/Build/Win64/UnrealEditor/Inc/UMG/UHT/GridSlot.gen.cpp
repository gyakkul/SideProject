// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GridSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSlot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UGridSlot();
	UMG_API UClass* Z_Construct_UClass_UGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UGridSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetNudge)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InNudge);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNudge(Z_Param_InNudge);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetLayer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLayer(Z_Param_InLayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetColumnSpan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumnSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumnSpan(Z_Param_InColumnSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumn(Z_Param_InColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetRowSpan)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRowSpan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRowSpan(Z_Param_InRowSpan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRow(Z_Param_InRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGridSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UGridSlot::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void UGridSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UGridSlot::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetHorizontalAlignment();
	}
	void UGridSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UGridSlot::GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		EVerticalAlignment& Result = *(EVerticalAlignment*)OutValue;
		Result = (EVerticalAlignment)Obj->GetVerticalAlignment();
	}
	void UGridSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UGridSlot::GetRow_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetRow();
	}
	void UGridSlot::SetRow_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetRow(Value);
	}
	void UGridSlot::GetRowSpan_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetRowSpan();
	}
	void UGridSlot::SetRowSpan_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetRowSpan(Value);
	}
	void UGridSlot::GetColumn_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetColumn();
	}
	void UGridSlot::SetColumn_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetColumn(Value);
	}
	void UGridSlot::GetColumnSpan_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetColumnSpan();
	}
	void UGridSlot::SetColumnSpan_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetColumnSpan(Value);
	}
	void UGridSlot::GetLayer_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetLayer();
	}
	void UGridSlot::SetLayer_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetLayer(Value);
	}
	void UGridSlot::GetNudge_WrapperImpl(const void* Object, void* OutValue)
	{
		const UGridSlot* Obj = (const UGridSlot*)Object;
		FVector2D& Result = *(FVector2D*)OutValue;
		Result = (FVector2D)Obj->GetNudge();
	}
	void UGridSlot::SetNudge_WrapperImpl(void* Object, const void* InValue)
	{
		UGridSlot* Obj = (UGridSlot*)Object;
		FVector2D& Value = *(FVector2D*)InValue;
		Obj->SetNudge(Value);
	}
	void UGridSlot::StaticRegisterNativesUGridSlot()
	{
		UClass* Class = UGridSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColumn", &UGridSlot::execSetColumn },
			{ "SetColumnSpan", &UGridSlot::execSetColumnSpan },
			{ "SetHorizontalAlignment", &UGridSlot::execSetHorizontalAlignment },
			{ "SetLayer", &UGridSlot::execSetLayer },
			{ "SetNudge", &UGridSlot::execSetNudge },
			{ "SetPadding", &UGridSlot::execSetPadding },
			{ "SetRow", &UGridSlot::execSetRow },
			{ "SetRowSpan", &UGridSlot::execSetRowSpan },
			{ "SetVerticalAlignment", &UGridSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGridSlot_SetColumn_Statics
	{
		struct GridSlot_eventSetColumn_Parms
		{
			int32 InColumn;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InColumn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetColumn_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetColumn_Statics::NewProp_InColumn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the column index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetColumn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::GridSlot_eventSetColumn_Parms), Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics
	{
		struct GridSlot_eventSetColumnSpan_Parms
		{
			int32 InColumnSpan;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InColumnSpan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::NewProp_InColumnSpan = { "InColumnSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetColumnSpan_Parms, InColumnSpan), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::NewProp_InColumnSpan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** How many columns this slot spans over */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "How many columns this slot spans over" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetColumnSpan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::GridSlot_eventSetColumnSpan_Parms), Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetColumnSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetColumnSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics
	{
		struct GridSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::GridSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetLayer_Statics
	{
		struct GridSlot_eventSetLayer_Parms
		{
			int32 InLayer;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetLayer_Statics::NewProp_InLayer = { "InLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetLayer_Parms, InLayer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetLayer_Statics::NewProp_InLayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets positive values offset this cell to be hit-tested and drawn on top of others. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets positive values offset this cell to be hit-tested and drawn on top of others." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::GridSlot_eventSetLayer_Parms), Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetNudge_Statics
	{
		struct GridSlot_eventSetNudge_Parms
		{
			FVector2D InNudge;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNudge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSlot_SetNudge_Statics::NewProp_InNudge = { "InNudge", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetNudge_Parms, InNudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetNudge_Statics::NewProp_InNudge,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the offset for this slot's content by some amount; positive values offset to lower right*/" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the offset for this slot's content by some amount; positive values offset to lower right" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetNudge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetNudge", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::GridSlot_eventSetNudge_Parms), Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetNudge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetNudge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetNudge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetPadding_Statics
	{
		struct GridSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Border Slot" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::GridSlot_eventSetPadding_Parms), Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetRow_Statics
	{
		struct GridSlot_eventSetRow_Parms
		{
			int32 InRow;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetRow_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetRow_Statics::NewProp_InRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Sets the row index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetRow_Statics::GridSlot_eventSetRow_Parms), Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics
	{
		struct GridSlot_eventSetRowSpan_Parms
		{
			int32 InRowSpan;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InRowSpan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::NewProp_InRowSpan = { "InRowSpan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetRowSpan_Parms, InRowSpan), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::NewProp_InRowSpan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** How many rows this this slot spans over */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "How many rows this this slot spans over" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetRowSpan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::GridSlot_eventSetRowSpan_Parms), Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetRowSpan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetRowSpan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics
	{
		struct GridSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::GridSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGridSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridSlot);
	UClass* Z_Construct_UClass_UGridSlot_NoRegister()
	{
		return UGridSlot::StaticClass();
	}
	struct Z_Construct_UClass_UGridSlot_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowSpan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RowSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnSpan_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ColumnSpan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Layer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nudge_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nudge;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGridSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridSlot_SetColumn, "SetColumn" }, // 4281521973
		{ &Z_Construct_UFunction_UGridSlot_SetColumnSpan, "SetColumnSpan" }, // 3978694314
		{ &Z_Construct_UFunction_UGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1973712428
		{ &Z_Construct_UFunction_UGridSlot_SetLayer, "SetLayer" }, // 2317382912
		{ &Z_Construct_UFunction_UGridSlot_SetNudge, "SetNudge" }, // 1232027670
		{ &Z_Construct_UFunction_UGridSlot_SetPadding, "SetPadding" }, // 2805893627
		{ &Z_Construct_UFunction_UGridSlot_SetRow, "SetRow" }, // 3964331411
		{ &Z_Construct_UFunction_UGridSlot_SetRowSpan, "SetRowSpan" }, // 549648254
		{ &Z_Construct_UFunction_UGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3933069331
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot for UGridPanel, these slots all share the same size as the largest slot\n * in the grid.\n */" },
		{ "IncludePath", "Components/GridSlot.h" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "A slot for UGridPanel, these slots all share the same size as the largest slot\nin the grid." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetPadding_WrapperImpl, &UGridSlot::GetPadding_WrapperImpl, STRUCT_OFFSET(UGridSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetHorizontalAlignment_WrapperImpl, &UGridSlot::GetHorizontalAlignment_WrapperImpl, STRUCT_OFFSET(UGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetVerticalAlignment_WrapperImpl, &UGridSlot::GetVerticalAlignment_WrapperImpl, STRUCT_OFFSET(UGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData[] = {
		{ "BlueprintSetter", "SetRow" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The row index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The row index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetRow_WrapperImpl, &UGridSlot::GetRow_WrapperImpl, STRUCT_OFFSET(UGridSlot, Row), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData[] = {
		{ "BlueprintSetter", "SetRowSpan" },
		{ "Category", "Layout|Grid Slot" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan = { "RowSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetRowSpan_WrapperImpl, &UGridSlot::GetRowSpan_WrapperImpl, STRUCT_OFFSET(UGridSlot, RowSpan), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData[] = {
		{ "BlueprintSetter", "SetColumn" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** The column index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "The column index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetColumn_WrapperImpl, &UGridSlot::GetColumn_WrapperImpl, STRUCT_OFFSET(UGridSlot, Column), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Column_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData[] = {
		{ "BlueprintSetter", "SetColumnSpan" },
		{ "Category", "Layout|Grid Slot" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan = { "ColumnSpan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetColumnSpan_WrapperImpl, &UGridSlot::GetColumnSpan_WrapperImpl, STRUCT_OFFSET(UGridSlot, ColumnSpan), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData[] = {
		{ "BlueprintSetter", "SetLayer" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset. */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Positive values offset this cell to be hit-tested and drawn on top of others. Default is 0; i.e. no offset." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetLayer_WrapperImpl, &UGridSlot::GetLayer_WrapperImpl, STRUCT_OFFSET(UGridSlot, Layer), METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData[] = {
		{ "BlueprintSetter", "SetNudge" },
		{ "Category", "Layout|Grid Slot" },
		{ "Comment", "/** Offset this slot's content by some amount; positive values offset to lower right */" },
		{ "ModuleRelativePath", "Public/Components/GridSlot.h" },
		{ "ToolTip", "Offset this slot's content by some amount; positive values offset to lower right" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge = { "Nudge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UGridSlot::SetNudge_WrapperImpl, &UGridSlot::GetNudge_WrapperImpl, STRUCT_OFFSET(UGridSlot, Nudge), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_RowSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Column,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_ColumnSpan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Layer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSlot_Statics::NewProp_Nudge,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSlot_Statics::ClassParams = {
		&UGridSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGridSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridSlot()
	{
		if (!Z_Registration_Info_UClass_UGridSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSlot.OuterSingleton, Z_Construct_UClass_UGridSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UGridSlot>()
	{
		return UGridSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSlot);
	UGridSlot::~UGridSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridSlot, UGridSlot::StaticClass, TEXT("UGridSlot"), &Z_Registration_Info_UClass_UGridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSlot), 1370382500U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_205674197(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_GridSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
