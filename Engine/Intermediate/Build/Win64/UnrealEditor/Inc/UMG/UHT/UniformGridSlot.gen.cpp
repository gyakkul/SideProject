// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/UniformGridSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UUniformGridSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetColumn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColumn(Z_Param_InColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridSlot::execSetRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRow(Z_Param_InRow);
		P_NATIVE_END;
	}
	void UUniformGridSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UUniformGridSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UUniformGridSlot::SetRow_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetRow(Value);
	}
	void UUniformGridSlot::SetColumn_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridSlot* Obj = (UUniformGridSlot*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetColumn(Value);
	}
	void UUniformGridSlot::StaticRegisterNativesUUniformGridSlot()
	{
		UClass* Class = UUniformGridSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetColumn", &UUniformGridSlot::execSetColumn },
			{ "SetHorizontalAlignment", &UUniformGridSlot::execSetHorizontalAlignment },
			{ "SetRow", &UUniformGridSlot::execSetRow },
			{ "SetVerticalAlignment", &UUniformGridSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics
	{
		struct UniformGridSlot_eventSetColumn_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridSlot_eventSetColumn_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::NewProp_InColumn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the column index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the column index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetColumn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::UniformGridSlot_eventSetColumn_Parms), Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics
	{
		struct UniformGridSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::UniformGridSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics
	{
		struct UniformGridSlot_eventSetRow_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridSlot_eventSetRow_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::NewProp_InRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** Sets the row index of the slot, this determines what cell the slot is in the panel */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "Sets the row index of the slot, this determines what cell the slot is in the panel" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::UniformGridSlot_eventSetRow_Parms), Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics
	{
		struct UniformGridSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::UniformGridSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformGridSlot);
	UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister()
	{
		return UUniformGridSlot::StaticClass();
	}
	struct Z_Construct_UClass_UUniformGridSlot_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformGridSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniformGridSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformGridSlot_SetColumn, "SetColumn" }, // 4219600241
		{ &Z_Construct_UFunction_UUniformGridSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2577199313
		{ &Z_Construct_UFunction_UUniformGridSlot_SetRow, "SetRow" }, // 110985824
		{ &Z_Construct_UFunction_UUniformGridSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 591534274
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A slot for UUniformGridPanel, these slots all share the same size as the largest slot\n * in the grid.\n */" },
		{ "IncludePath", "Components/UniformGridSlot.h" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "A slot for UUniformGridPanel, these slots all share the same size as the largest slot\nin the grid." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UUniformGridSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UUniformGridSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData[] = {
		{ "BlueprintSetter", "SetRow" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The row index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The row index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridSlot::SetRow_WrapperImpl, nullptr, STRUCT_OFFSET(UUniformGridSlot, Row), METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData[] = {
		{ "BlueprintSetter", "SetColumn" },
		{ "Category", "Layout|Uniform Grid Slot" },
		{ "Comment", "/** The column index of the cell this slot is in */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridSlot.h" },
		{ "ToolTip", "The column index of the cell this slot is in" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridSlot::SetColumn_WrapperImpl, nullptr, STRUCT_OFFSET(UUniformGridSlot, Column), METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Row,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridSlot_Statics::NewProp_Column,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformGridSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformGridSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams = {
		&UUniformGridSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformGridSlot()
	{
		if (!Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton, Z_Construct_UClass_UUniformGridSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniformGridSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUniformGridSlot>()
	{
		return UUniformGridSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridSlot);
	UUniformGridSlot::~UUniformGridSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUniformGridSlot, UUniformGridSlot::StaticClass, TEXT("UUniformGridSlot"), &Z_Registration_Info_UClass_UUniformGridSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformGridSlot), 438575174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_396707953(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
