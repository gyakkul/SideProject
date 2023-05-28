// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/VerticalBoxSlot.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVerticalBoxSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UVerticalBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVerticalBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVerticalBoxSlot::execSetSize)
	{
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize(Z_Param_InSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVerticalBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UVerticalBoxSlot::SetSize_WrapperImpl(void* Object, const void* InValue)
	{
		UVerticalBoxSlot* Obj = (UVerticalBoxSlot*)Object;
		FSlateChildSize& Value = *(FSlateChildSize*)InValue;
		Obj->SetSize(Value);
	}
	void UVerticalBoxSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UVerticalBoxSlot* Obj = (UVerticalBoxSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UVerticalBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UVerticalBoxSlot* Obj = (UVerticalBoxSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UVerticalBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UVerticalBoxSlot* Obj = (UVerticalBoxSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UVerticalBoxSlot::StaticRegisterNativesUVerticalBoxSlot()
	{
		UClass* Class = UVerticalBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UVerticalBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UVerticalBoxSlot::execSetPadding },
			{ "SetSize", &UVerticalBoxSlot::execSetSize },
			{ "SetVerticalAlignment", &UVerticalBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics
	{
		struct VerticalBoxSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Vertical Box Slot" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::VerticalBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics
	{
		struct VerticalBoxSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Vertical Box Slot" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::VerticalBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics
	{
		struct VerticalBoxSlot_eventSetSize_Parms
		{
			FSlateChildSize InSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBoxSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(nullptr, 0) }; // 2981121082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Vertical Box Slot" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBoxSlot, nullptr, "SetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::VerticalBoxSlot_eventSetSize_Parms), Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBoxSlot_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBoxSlot_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics
	{
		struct VerticalBoxSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VerticalBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Vertical Box Slot" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVerticalBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::VerticalBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVerticalBoxSlot);
	UClass* Z_Construct_UClass_UVerticalBoxSlot_NoRegister()
	{
		return UVerticalBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UVerticalBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVerticalBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVerticalBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVerticalBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 1974511525
		{ &Z_Construct_UFunction_UVerticalBoxSlot_SetPadding, "SetPadding" }, // 1263432632
		{ &Z_Construct_UFunction_UVerticalBoxSlot_SetSize, "SetSize" }, // 2373323546
		{ &Z_Construct_UFunction_UVerticalBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3193848633
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UVerticalBox, contains the widget that is flowed vertically */" },
		{ "IncludePath", "Components/VerticalBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
		{ "ToolTip", "The Slot for the UVerticalBox, contains the widget that is flowed vertically" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Size_MetaData[] = {
		{ "BlueprintSetter", "SetSize" },
		{ "Category", "Layout|Vertical Box Slot" },
		{ "Comment", "/** How much space this slot should occupy in the direction of the panel. */" },
		{ "DisplayAfter", "Padding" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
		{ "ToolTip", "How much space this slot should occupy in the direction of the panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UVerticalBoxSlot::SetSize_WrapperImpl, nullptr, STRUCT_OFFSET(UVerticalBoxSlot, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Size_MetaData)) }; // 2981121082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Vertical Box Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UVerticalBoxSlot::SetPadding_WrapperImpl, nullptr, STRUCT_OFFSET(UVerticalBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Vertical Box Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UVerticalBoxSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UVerticalBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Vertical Box Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/VerticalBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UVerticalBoxSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UVerticalBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVerticalBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVerticalBoxSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVerticalBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVerticalBoxSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVerticalBoxSlot_Statics::ClassParams = {
		&UVerticalBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVerticalBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVerticalBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVerticalBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVerticalBoxSlot()
	{
		if (!Z_Registration_Info_UClass_UVerticalBoxSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVerticalBoxSlot.OuterSingleton, Z_Construct_UClass_UVerticalBoxSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVerticalBoxSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UVerticalBoxSlot>()
	{
		return UVerticalBoxSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVerticalBoxSlot);
	UVerticalBoxSlot::~UVerticalBoxSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVerticalBoxSlot, UVerticalBoxSlot::StaticClass, TEXT("UVerticalBoxSlot"), &Z_Registration_Info_UClass_UVerticalBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVerticalBoxSlot), 3764840451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_1339714020(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_VerticalBoxSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
