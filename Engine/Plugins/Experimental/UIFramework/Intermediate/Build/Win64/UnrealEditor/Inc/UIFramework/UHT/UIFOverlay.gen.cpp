// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFOverlay.h"
#include "Layout/Margin.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFOverlay() {}
// Cross Module References
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkOverlay();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkOverlay_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkOverlaySlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkOverlaySlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot;
class UScriptStruct* FUIFrameworkOverlaySlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkOverlaySlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkOverlaySlot>()
{
	return FUIFrameworkOverlaySlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkOverlaySlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Distance between that surrounds the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
		{ "ToolTip", "Distance between that surrounds the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Horizontal alignment of the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
		{ "ToolTip", "Horizontal alignment of the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Vertical alignment of the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
		{ "ToolTip", "Vertical alignment of the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** Index in the array the Slot is. The position in the array can change when replicated. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
		{ "ToolTip", "Index in the array the Slot is. The position in the array can change when replicated." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlot, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkOverlaySlot",
		sizeof(FUIFrameworkOverlaySlot),
		alignof(FUIFrameworkOverlaySlot),
		Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkOverlaySlotList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkOverlaySlotList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList;
class UScriptStruct* FUIFrameworkOverlaySlotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkOverlaySlotList"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkOverlaySlotList>()
{
	return FUIFrameworkOverlaySlotList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkOverlaySlotList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkOverlaySlotList);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Slots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkOverlaySlotList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot, METADATA_PARAMS(nullptr, 0) }; // 2610717848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlotList, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots_MetaData)) }; // 2610717848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkOverlaySlotList, Owner), Z_Construct_UClass_UUIFrameworkOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkOverlaySlotList",
		sizeof(FUIFrameworkOverlaySlotList),
		alignof(FUIFrameworkOverlaySlotList),
		Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkOverlay::execRemoveWidget)
	{
		P_GET_OBJECT(UUIFrameworkWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkOverlay::execAddWidget)
	{
		P_GET_STRUCT(FUIFrameworkOverlaySlot,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	void UUIFrameworkOverlay::StaticRegisterNativesUUIFrameworkOverlay()
	{
		UClass* Class = UUIFrameworkOverlay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UUIFrameworkOverlay::execAddWidget },
			{ "RemoveWidget", &UUIFrameworkOverlay::execRemoveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics
	{
		struct UIFrameworkOverlay_eventAddWidget_Parms
		{
			FUIFrameworkOverlaySlot Widget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkOverlay_eventAddWidget_Parms, Widget), Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot, METADATA_PARAMS(nullptr, 0) }; // 2610717848
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkOverlay, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::UIFrameworkOverlay_eventAddWidget_Parms), Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics
	{
		struct UIFrameworkOverlay_eventRemoveWidget_Parms
		{
			UUIFrameworkWidget* Widget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkOverlay_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkOverlay, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::UIFrameworkOverlay_eventRemoveWidget_Parms), Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkOverlay);
	UClass* Z_Construct_UClass_UUIFrameworkOverlay_NoRegister()
	{
		return UUIFrameworkOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedSlotList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedSlotList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkOverlay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkOverlay_AddWidget, "AddWidget" }, // 2126640321
		{ &Z_Construct_UFunction_UUIFrameworkOverlay_RemoveWidget, "RemoveWidget" }, // 3322512406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Overlay UIFramework" },
		{ "IncludePath", "Widgets/UIFOverlay.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkOverlay_Statics::NewProp_ReplicatedSlotList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFOverlay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkOverlay_Statics::NewProp_ReplicatedSlotList = { "ReplicatedSlotList", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkOverlay, ReplicatedSlotList), Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkOverlay_Statics::NewProp_ReplicatedSlotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkOverlay_Statics::NewProp_ReplicatedSlotList_MetaData)) }; // 82172062
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkOverlay_Statics::NewProp_ReplicatedSlotList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkOverlay_Statics::ClassParams = {
		&UUIFrameworkOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkOverlay_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkOverlay()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkOverlay.OuterSingleton, Z_Construct_UClass_UUIFrameworkOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkOverlay.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkOverlay>()
	{
		return UUIFrameworkOverlay::StaticClass();
	}

	void UUIFrameworkOverlay::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedSlotList(TEXT("ReplicatedSlotList"));

		const bool bIsValid = true
			&& Name_ReplicatedSlotList == ClassReps[(int32)ENetFields_Private::ReplicatedSlotList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkOverlay"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkOverlay);
	UUIFrameworkOverlay::~UUIFrameworkOverlay() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkOverlaySlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkOverlaySlot_Statics::NewStructOps, TEXT("UIFrameworkOverlaySlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkOverlaySlot), 2610717848U) },
		{ FUIFrameworkOverlaySlotList::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkOverlaySlotList_Statics::NewStructOps, TEXT("UIFrameworkOverlaySlotList"), &Z_Registration_Info_UScriptStruct_UIFrameworkOverlaySlotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkOverlaySlotList), 82172062U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkOverlay, UUIFrameworkOverlay::StaticClass, TEXT("UUIFrameworkOverlay"), &Z_Registration_Info_UClass_UUIFrameworkOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkOverlay), 3015685740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_1438807606(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFOverlay_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
