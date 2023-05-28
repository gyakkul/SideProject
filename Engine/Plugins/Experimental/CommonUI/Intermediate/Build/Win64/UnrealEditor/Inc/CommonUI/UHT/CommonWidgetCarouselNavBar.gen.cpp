// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonWidgetCarouselNavBar.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonWidgetCarouselNavBar() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonGroupBase_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarousel_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonWidgetCarouselNavBar::execHandleButtonClicked)
	{
		P_GET_OBJECT(UCommonButtonBase,Z_Param_AssociatedButton);
		P_GET_PROPERTY(FIntProperty,Z_Param_ButtonIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked(Z_Param_AssociatedButton,Z_Param_ButtonIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarouselNavBar::execHandlePageChanged)
	{
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel);
		P_GET_PROPERTY(FIntProperty,Z_Param_PageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePageChanged(Z_Param_CommonCarousel,Z_Param_PageIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonWidgetCarouselNavBar::execSetLinkedCarousel)
	{
		P_GET_OBJECT(UCommonWidgetCarousel,Z_Param_CommonCarousel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLinkedCarousel(Z_Param_CommonCarousel);
		P_NATIVE_END;
	}
	void UCommonWidgetCarouselNavBar::StaticRegisterNativesUCommonWidgetCarouselNavBar()
	{
		UClass* Class = UCommonWidgetCarouselNavBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UCommonWidgetCarouselNavBar::execHandleButtonClicked },
			{ "HandlePageChanged", &UCommonWidgetCarouselNavBar::execHandlePageChanged },
			{ "SetLinkedCarousel", &UCommonWidgetCarouselNavBar::execSetLinkedCarousel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics
	{
		struct CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms
		{
			UCommonButtonBase* AssociatedButton;
			int32 ButtonIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssociatedButton;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ButtonIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton = { "AssociatedButton", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms, AssociatedButton), Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_ButtonIndex = { "ButtonIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms, ButtonIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_AssociatedButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::NewProp_ButtonIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, nullptr, "HandleButtonClicked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::CommonWidgetCarouselNavBar_eventHandleButtonClicked_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics
	{
		struct CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms
		{
			UCommonWidgetCarousel* CommonCarousel;
			int32 PageIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonCarousel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonCarousel;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PageIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel = { "CommonCarousel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms, CommonCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_PageIndex = { "PageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms, PageIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_CommonCarousel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::NewProp_PageIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, nullptr, "HandlePageChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::CommonWidgetCarouselNavBar_eventHandlePageChanged_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics
	{
		struct CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms
		{
			UCommonWidgetCarousel* CommonCarousel;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonCarousel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonCarousel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel = { "CommonCarousel", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms, CommonCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::NewProp_CommonCarousel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams[] = {
		{ "Category", "CarouselNavBar" },
		{ "Comment", "/**\n\x09 * Establishes the Widget Carousel instance that this Nav Bar should interact with\n\x09 * @param CommonCarousel The carousel that this nav bar should be associated with and manipulate\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
		{ "ToolTip", "Establishes the Widget Carousel instance that this Nav Bar should interact with\n@param CommonCarousel The carousel that this nav bar should be associated with and manipulate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonWidgetCarouselNavBar, nullptr, "SetLinkedCarousel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::CommonWidgetCarouselNavBar_eventSetLinkedCarousel_Parms), Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonWidgetCarouselNavBar);
	UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar_NoRegister()
	{
		return UCommonWidgetCarouselNavBar::StaticClass();
	}
	struct Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedCarousel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkedCarousel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonGroup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ButtonGroup;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Buttons_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buttons_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buttons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandleButtonClicked, "HandleButtonClicked" }, // 2718456226
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_HandlePageChanged, "HandlePageChanged" }, // 3142948157
		{ &Z_Construct_UFunction_UCommonWidgetCarouselNavBar_SetLinkedCarousel, "SetLinkedCarousel" }, // 135730333
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Navigation control for a Carousel\n */" },
		{ "IncludePath", "CommonWidgetCarouselNavBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
		{ "ToolTip", "A Navigation control for a Carousel" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData[] = {
		{ "Category", "CarouselNavBar" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType = { "ButtonWidgetType", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonWidgetType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData[] = {
		{ "Category", "CarouselNavBar" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding = { "ButtonPadding", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel = { "LinkedCarousel", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, LinkedCarousel), Z_Construct_UClass_UCommonWidgetCarousel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup = { "ButtonGroup", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, ButtonGroup), Z_Construct_UClass_UCommonButtonGroupBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner = { "Buttons", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CommonWidgetCarouselNavBar.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons = { "Buttons", nullptr, (EPropertyFlags)0x0024088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonWidgetCarouselNavBar, Buttons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonWidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_LinkedCarousel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_ButtonGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::NewProp_Buttons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonWidgetCarouselNavBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::ClassParams = {
		&UCommonWidgetCarouselNavBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonWidgetCarouselNavBar()
	{
		if (!Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.OuterSingleton, Z_Construct_UClass_UCommonWidgetCarouselNavBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonWidgetCarouselNavBar>()
	{
		return UCommonWidgetCarouselNavBar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonWidgetCarouselNavBar);
	UCommonWidgetCarouselNavBar::~UCommonWidgetCarouselNavBar() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonWidgetCarouselNavBar, UCommonWidgetCarouselNavBar::StaticClass, TEXT("UCommonWidgetCarouselNavBar"), &Z_Registration_Info_UClass_UCommonWidgetCarouselNavBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonWidgetCarouselNavBar), 1608199368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_1502903817(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonWidgetCarouselNavBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
