// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/HorizontalBoxSlot.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorizontalBoxSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UHorizontalBoxSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizontalBoxSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizontalBoxSlot::execSetSize)
	{
		P_GET_STRUCT(FSlateChildSize,Z_Param_InSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSize(Z_Param_InSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHorizontalBoxSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UHorizontalBoxSlot::SetSize_WrapperImpl(void* Object, const void* InValue)
	{
		UHorizontalBoxSlot* Obj = (UHorizontalBoxSlot*)Object;
		FSlateChildSize& Value = *(FSlateChildSize*)InValue;
		Obj->SetSize(Value);
	}
	void UHorizontalBoxSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UHorizontalBoxSlot* Obj = (UHorizontalBoxSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UHorizontalBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UHorizontalBoxSlot* Obj = (UHorizontalBoxSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UHorizontalBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UHorizontalBoxSlot* Obj = (UHorizontalBoxSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UHorizontalBoxSlot::StaticRegisterNativesUHorizontalBoxSlot()
	{
		UClass* Class = UHorizontalBoxSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &UHorizontalBoxSlot::execSetHorizontalAlignment },
			{ "SetPadding", &UHorizontalBoxSlot::execSetPadding },
			{ "SetSize", &UHorizontalBoxSlot::execSetSize },
			{ "SetVerticalAlignment", &UHorizontalBoxSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics
	{
		struct HorizontalBoxSlot_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HorizontalBoxSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBoxSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::HorizontalBoxSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics
	{
		struct HorizontalBoxSlot_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HorizontalBoxSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBoxSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::HorizontalBoxSlot_eventSetPadding_Parms), Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics
	{
		struct HorizontalBoxSlot_eventSetSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HorizontalBoxSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(nullptr, 0) }; // 2981121082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::NewProp_InSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBoxSlot, nullptr, "SetSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::HorizontalBoxSlot_eventSetSize_Parms), Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizontalBoxSlot_SetSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBoxSlot_SetSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics
	{
		struct HorizontalBoxSlot_eventSetVerticalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HorizontalBoxSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHorizontalBoxSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::HorizontalBoxSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHorizontalBoxSlot);
	UClass* Z_Construct_UClass_UHorizontalBoxSlot_NoRegister()
	{
		return UHorizontalBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UHorizontalBoxSlot_Statics
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
	UObject* (*const Z_Construct_UClass_UHorizontalBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHorizontalBoxSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHorizontalBoxSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 640772851
		{ &Z_Construct_UFunction_UHorizontalBoxSlot_SetPadding, "SetPadding" }, // 3991081550
		{ &Z_Construct_UFunction_UHorizontalBoxSlot_SetSize, "SetSize" }, // 506946134
		{ &Z_Construct_UFunction_UHorizontalBoxSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 2128162165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/HorizontalBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Size_MetaData[] = {
		{ "BlueprintSetter", "SetSize" },
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "Comment", "/** How much space this slot should occupy in the direction of the panel. */" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
		{ "ToolTip", "How much space this slot should occupy in the direction of the panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UHorizontalBoxSlot::SetSize_WrapperImpl, nullptr, STRUCT_OFFSET(UHorizontalBoxSlot, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Size_MetaData)) }; // 2981121082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "Comment", "/** The amount of padding between the slots parent and the content. */" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
		{ "ToolTip", "The amount of padding between the slots parent and the content." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UHorizontalBoxSlot::SetPadding_WrapperImpl, nullptr, STRUCT_OFFSET(UHorizontalBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UHorizontalBoxSlot::SetHorizontalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UHorizontalBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetVerticalAlignment" },
		{ "Category", "Layout|Horizontal Box Slot" },
		{ "ModuleRelativePath", "Public/Components/HorizontalBoxSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UHorizontalBoxSlot::SetVerticalAlignment_WrapperImpl, nullptr, STRUCT_OFFSET(UHorizontalBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHorizontalBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHorizontalBoxSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHorizontalBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHorizontalBoxSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHorizontalBoxSlot_Statics::ClassParams = {
		&UHorizontalBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHorizontalBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHorizontalBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHorizontalBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHorizontalBoxSlot()
	{
		if (!Z_Registration_Info_UClass_UHorizontalBoxSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHorizontalBoxSlot.OuterSingleton, Z_Construct_UClass_UHorizontalBoxSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHorizontalBoxSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UHorizontalBoxSlot>()
	{
		return UHorizontalBoxSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHorizontalBoxSlot);
	UHorizontalBoxSlot::~UHorizontalBoxSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHorizontalBoxSlot, UHorizontalBoxSlot::StaticClass, TEXT("UHorizontalBoxSlot"), &Z_Registration_Info_UClass_UHorizontalBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHorizontalBoxSlot), 3240169280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_3200812894(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_HorizontalBoxSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
