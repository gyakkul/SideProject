// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/UniformGridPanel.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniformGridPanel() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UUniformGridPanel::execAddChildToUniformGrid)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_GET_PROPERTY(FIntProperty,Z_Param_InRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_InColumn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUniformGridSlot**)Z_Param__Result=P_THIS->AddChildToUniformGrid(Z_Param_Content,Z_Param_InRow,Z_Param_InColumn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridPanel::execSetMinDesiredSlotHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredSlotHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredSlotHeight(Z_Param_InMinDesiredSlotHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridPanel::execSetMinDesiredSlotWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredSlotWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredSlotWidth(Z_Param_InMinDesiredSlotWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUniformGridPanel::execSetSlotPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InSlotPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSlotPadding(Z_Param_InSlotPadding);
		P_NATIVE_END;
	}
	void UUniformGridPanel::GetSlotPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUniformGridPanel* Obj = (const UUniformGridPanel*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetSlotPadding();
	}
	void UUniformGridPanel::SetSlotPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridPanel* Obj = (UUniformGridPanel*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetSlotPadding(Value);
	}
	void UUniformGridPanel::GetMinDesiredSlotWidth_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUniformGridPanel* Obj = (const UUniformGridPanel*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMinDesiredSlotWidth();
	}
	void UUniformGridPanel::SetMinDesiredSlotWidth_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridPanel* Obj = (UUniformGridPanel*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMinDesiredSlotWidth(Value);
	}
	void UUniformGridPanel::GetMinDesiredSlotHeight_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUniformGridPanel* Obj = (const UUniformGridPanel*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMinDesiredSlotHeight();
	}
	void UUniformGridPanel::SetMinDesiredSlotHeight_WrapperImpl(void* Object, const void* InValue)
	{
		UUniformGridPanel* Obj = (UUniformGridPanel*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMinDesiredSlotHeight(Value);
	}
	void UUniformGridPanel::StaticRegisterNativesUUniformGridPanel()
	{
		UClass* Class = UUniformGridPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToUniformGrid", &UUniformGridPanel::execAddChildToUniformGrid },
			{ "SetMinDesiredSlotHeight", &UUniformGridPanel::execSetMinDesiredSlotHeight },
			{ "SetMinDesiredSlotWidth", &UUniformGridPanel::execSetMinDesiredSlotWidth },
			{ "SetSlotPadding", &UUniformGridPanel::execSetSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics
	{
		struct UniformGridPanel_eventAddChildToUniformGrid_Parms
		{
			UWidget* Content;
			int32 InRow;
			int32 InColumn;
			UUniformGridSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InRow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InColumn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_InRow = { "InRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, InRow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_InColumn = { "InColumn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, InColumn), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventAddChildToUniformGrid_Parms, ReturnValue), Z_Construct_UClass_UUniformGridSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_InRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_InColumn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Widget" },
		{ "Comment", "/**  */" },
		{ "CPP_Default_InColumn", "0" },
		{ "CPP_Default_InRow", "0" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "AddChildToUniformGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::UniformGridPanel_eventAddChildToUniformGrid_Parms), Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics
	{
		struct UniformGridPanel_eventSetMinDesiredSlotHeight_Parms
		{
			float InMinDesiredSlotHeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::NewProp_InMinDesiredSlotHeight = { "InMinDesiredSlotHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotHeight_Parms, InMinDesiredSlotHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::NewProp_InMinDesiredSlotHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetMinDesiredSlotHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::UniformGridPanel_eventSetMinDesiredSlotHeight_Parms), Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics
	{
		struct UniformGridPanel_eventSetMinDesiredSlotWidth_Parms
		{
			float InMinDesiredSlotWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredSlotWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::NewProp_InMinDesiredSlotWidth = { "InMinDesiredSlotWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetMinDesiredSlotWidth_Parms, InMinDesiredSlotWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::NewProp_InMinDesiredSlotWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetMinDesiredSlotWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::UniformGridPanel_eventSetMinDesiredSlotWidth_Parms), Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics
	{
		struct UniformGridPanel_eventSetSlotPadding_Parms
		{
			FMargin InSlotPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSlotPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::NewProp_InSlotPadding = { "InSlotPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniformGridPanel_eventSetSlotPadding_Parms, InSlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::NewProp_InSlotPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUniformGridPanel, nullptr, "SetSlotPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::UniformGridPanel_eventSetSlotPadding_Parms), Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniformGridPanel);
	UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister()
	{
		return UUniformGridPanel::StaticClass();
	}
	struct Z_Construct_UClass_UUniformGridPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredSlotHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredSlotHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniformGridPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUniformGridPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUniformGridPanel_AddChildToUniformGrid, "AddChildToUniformGrid" }, // 679666214
		{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotHeight, "SetMinDesiredSlotHeight" }, // 179209086
		{ &Z_Construct_UFunction_UUniformGridPanel_SetMinDesiredSlotWidth, "SetMinDesiredSlotWidth" }, // 1960705058
		{ &Z_Construct_UFunction_UUniformGridPanel_SetSlotPadding, "SetSlotPadding" }, // 1851817899
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A panel that evenly divides up available space between all of its children.\n */" },
		{ "IncludePath", "Components/UniformGridPanel.h" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "A panel that evenly divides up available space between all of its children." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData[] = {
		{ "BlueprintSetter", "SetSlotPadding" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** Padding given to each slot */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "Padding given to each slot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding = { "SlotPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridPanel::SetSlotPadding_WrapperImpl, &UUniformGridPanel::GetSlotPadding_WrapperImpl, STRUCT_OFFSET(UUniformGridPanel, SlotPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMinDesiredSlotWidth" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** The minimum desired width of the slots */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "The minimum desired width of the slots" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth = { "MinDesiredSlotWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridPanel::SetMinDesiredSlotWidth_WrapperImpl, &UUniformGridPanel::GetMinDesiredSlotWidth_WrapperImpl, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotWidth), METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData[] = {
		{ "BlueprintSetter", "SetMinDesiredSlotHeight" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** The minimum desired height of the slots */" },
		{ "ModuleRelativePath", "Public/Components/UniformGridPanel.h" },
		{ "ToolTip", "The minimum desired height of the slots" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight = { "MinDesiredSlotHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUniformGridPanel::SetMinDesiredSlotHeight_WrapperImpl, &UUniformGridPanel::GetMinDesiredSlotHeight_WrapperImpl, STRUCT_OFFSET(UUniformGridPanel, MinDesiredSlotHeight), METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_SlotPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniformGridPanel_Statics::NewProp_MinDesiredSlotHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniformGridPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniformGridPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniformGridPanel_Statics::ClassParams = {
		&UUniformGridPanel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniformGridPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniformGridPanel()
	{
		if (!Z_Registration_Info_UClass_UUniformGridPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniformGridPanel.OuterSingleton, Z_Construct_UClass_UUniformGridPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniformGridPanel.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUniformGridPanel>()
	{
		return UUniformGridPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniformGridPanel);
	UUniformGridPanel::~UUniformGridPanel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUniformGridPanel, UUniformGridPanel::StaticClass, TEXT("UUniformGridPanel"), &Z_Registration_Info_UClass_UUniformGridPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniformGridPanel), 2046380845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_4218831773(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_UniformGridPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
