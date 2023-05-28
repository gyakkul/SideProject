// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WrapBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWrapBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBox();
	UMG_API UClass* Z_Construct_UClass_UWrapBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWrapBoxSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UWrapBox::execAddChildToWrapBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWrapBoxSlot**)Z_Param__Result=P_THIS->AddChildToWrapBox(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBox::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWrapBox::execSetInnerSlotPadding)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerSlotPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void UWrapBox::GetInnerSlotPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWrapBox* Obj = (const UWrapBox*)Object;
		FVector2D& Result = *(FVector2D*)OutValue;
		Result = (FVector2D)Obj->GetInnerSlotPadding();
	}
	void UWrapBox::SetInnerSlotPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBox* Obj = (UWrapBox*)Object;
		FVector2D& Value = *(FVector2D*)InValue;
		Obj->SetInnerSlotPadding(Value);
	}
	void UWrapBox::GetWrapSize_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWrapBox* Obj = (const UWrapBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetWrapSize();
	}
	void UWrapBox::SetWrapSize_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBox* Obj = (UWrapBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetWrapSize(Value);
	}
	void UWrapBox::GetbExplicitWrapSize_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWrapBox* Obj = (const UWrapBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->UseExplicitWrapSize();
	}
	void UWrapBox::SetbExplicitWrapSize_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBox* Obj = (UWrapBox*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetExplicitWrapSize(Value);
	}
	void UWrapBox::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWrapBox* Obj = (const UWrapBox*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetHorizontalAlignment();
	}
	void UWrapBox::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBox* Obj = (UWrapBox*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UWrapBox::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
	{
		const UWrapBox* Obj = (const UWrapBox*)Object;
		EOrientation& Result = *(EOrientation*)OutValue;
		Result = (EOrientation)Obj->GetOrientation();
	}
	void UWrapBox::SetOrientation_WrapperImpl(void* Object, const void* InValue)
	{
		UWrapBox* Obj = (UWrapBox*)Object;
		EOrientation Value = (EOrientation)*(uint8*)InValue;
		Obj->SetOrientation(Value);
	}
	void UWrapBox::StaticRegisterNativesUWrapBox()
	{
		UClass* Class = UWrapBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToWrapBox", &UWrapBox::execAddChildToWrapBox },
			{ "SetHorizontalAlignment", &UWrapBox::execSetHorizontalAlignment },
			{ "SetInnerSlotPadding", &UWrapBox::execSetInnerSlotPadding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics
	{
		struct WrapBox_eventAddChildToWrapBox_Parms
		{
			UWidget* Content;
			UWrapBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBox_eventAddChildToWrapBox_Parms, ReturnValue), Z_Construct_UClass_UWrapBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "AddChildToWrapBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::WrapBox_eventAddChildToWrapBox_Parms), Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_AddChildToWrapBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_AddChildToWrapBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics
	{
		struct WrapBox_eventSetHorizontalAlignment_Parms
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
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBox_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::WrapBox_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics
	{
		struct WrapBox_eventSetInnerSlotPadding_Parms
		{
			FVector2D InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WrapBox_eventSetInnerSlotPadding_Parms, InPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Sets the inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Sets the inner slot padding goes between slots sharing borders" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWrapBox, nullptr, "SetInnerSlotPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::WrapBox_eventSetInnerSlotPadding_Parms), Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWrapBox);
	UClass* Z_Construct_UClass_UWrapBox_NoRegister()
	{
		return UWrapBox::StaticClass();
	}
	struct Z_Construct_UClass_UWrapBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSlotPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerSlotPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitWrapSize_MetaData[];
#endif
		static void NewProp_bExplicitWrapSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitWrapSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWrapBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWrapBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWrapBox_AddChildToWrapBox, "AddChildToWrapBox" }, // 144188488
		{ &Z_Construct_UFunction_UWrapBox_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 2729457407
		{ &Z_Construct_UFunction_UWrapBox_SetInnerSlotPadding, "SetInnerSlotPadding" }, // 1613718361
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Arranges widgets left-to-right or top-to-bottom dependently of the orientation.  When the widgets exceed the wrapSize it will place widgets on the next line.\n * \n * * Many Children\n * * Flows\n * * Wraps\n */" },
		{ "IncludePath", "Components/WrapBox.h" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Arranges widgets left-to-right or top-to-bottom dependently of the orientation.  When the widgets exceed the wrapSize it will place widgets on the next line.\n\n* Many Children\n* Flows\n* Wraps" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData[] = {
		{ "BlueprintSetter", "SetInnerSlotPadding" },
		{ "Category", "Content Layout" },
		{ "Comment", "/** The inner slot padding goes between slots sharing borders */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "The inner slot padding goes between slots sharing borders" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding = { "InnerSlotPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBox::SetInnerSlotPadding_WrapperImpl, &UWrapBox::GetInnerSlotPadding_WrapperImpl, STRUCT_OFFSET(UWrapBox, InnerSlotPadding), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** When this size is exceeded, elements will start appearing on the next line. */" },
		{ "EditCondition", "bExplicitWrapSize" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "When this size is exceeded, elements will start appearing on the next line." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize = { "WrapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBox::SetWrapSize_WrapperImpl, &UWrapBox::GetWrapSize_WrapperImpl, STRUCT_OFFSET(UWrapBox, WrapSize), METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\" */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of \"wiggling UI\"" },
	};
#endif
	void Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_SetBit(void* Obj)
	{
		((UWrapBox*)Obj)->bExplicitWrapSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize = { "bExplicitWrapSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBox::SetbExplicitWrapSize_WrapperImpl, &UWrapBox::GetbExplicitWrapSize_WrapperImpl, sizeof(bool), sizeof(UWrapBox), &Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "BlueprintSetter", "SetHorizontalAlignment" },
		{ "Category", "Content Layout" },
		{ "Comment", "/** The alignment of each line of wrapped content. */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "The alignment of each line of wrapped content." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBox::SetHorizontalAlignment_WrapperImpl, &UWrapBox::GetHorizontalAlignment_WrapperImpl, STRUCT_OFFSET(UWrapBox, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Content Layout" },
		{ "Comment", "/** Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom */" },
		{ "ModuleRelativePath", "Public/Components/WrapBox.h" },
		{ "ToolTip", "Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UWrapBox::SetOrientation_WrapperImpl, &UWrapBox::GetOrientation_WrapperImpl, STRUCT_OFFSET(UWrapBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWrapBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_InnerSlotPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_WrapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_bExplicitWrapSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWrapBox_Statics::NewProp_Orientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWrapBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWrapBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWrapBox_Statics::ClassParams = {
		&UWrapBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWrapBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWrapBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWrapBox()
	{
		if (!Z_Registration_Info_UClass_UWrapBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWrapBox.OuterSingleton, Z_Construct_UClass_UWrapBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWrapBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWrapBox>()
	{
		return UWrapBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWrapBox);
	UWrapBox::~UWrapBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWrapBox, UWrapBox::StaticClass, TEXT("UWrapBox"), &Z_Registration_Info_UClass_UWrapBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWrapBox), 3795001443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_1131553967(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WrapBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
