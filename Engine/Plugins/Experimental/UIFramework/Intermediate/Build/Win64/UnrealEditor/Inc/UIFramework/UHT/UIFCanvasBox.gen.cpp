// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFCanvasBox.h"
#include "Layout/Margin.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Widgets/Layout/Anchors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFCanvasBox() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkCanvasBox();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkCanvasBoxSlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkCanvasBoxSlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot;
class UScriptStruct* FUIFrameworkCanvasBoxSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkCanvasBoxSlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkCanvasBoxSlot>()
{
	return FUIFrameworkCanvasBoxSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anchors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offsets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSizeToContent_MetaData[];
#endif
		static void NewProp_bSizeToContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkCanvasBoxSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/** Anchors. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
		{ "ToolTip", "Anchors." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlot, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Anchors_MetaData)) }; // 3429000087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/** Offset. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
		{ "ToolTip", "Offset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlot, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Offsets_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/**\n\x09 * Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\n\x09 * ending in the lower right at (1,1).  Moving the alignment point allows you to move\n\x09 * the origin of the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
		{ "ToolTip", "Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\nending in the lower right at (1,1).  Moving the alignment point allows you to move\nthe origin of the widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlot, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/** The order priority this widget is rendered inside the layer. Higher values are rendered last (and so they will appear to be on top). */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
		{ "ToolTip", "The order priority this widget is rendered inside the layer. Higher values are rendered last (and so they will appear to be on top)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlot, ZOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent_MetaData[] = {
		{ "Category", "Canvas" },
		{ "Comment", "/** When true we use the widget's desired size */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
		{ "ToolTip", "When true we use the widget's desired size" },
	};
#endif
	void Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent_SetBit(void* Obj)
	{
		((FUIFrameworkCanvasBoxSlot*)Obj)->bSizeToContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent = { "bSizeToContent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUIFrameworkCanvasBoxSlot), &Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Anchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Offsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewProp_bSizeToContent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkCanvasBoxSlot",
		sizeof(FUIFrameworkCanvasBoxSlot),
		alignof(FUIFrameworkCanvasBoxSlot),
		Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkCanvasBoxSlotList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkCanvasBoxSlotList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList;
class UScriptStruct* FUIFrameworkCanvasBoxSlotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkCanvasBoxSlotList"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkCanvasBoxSlotList>()
{
	return FUIFrameworkCanvasBoxSlotList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkCanvasBoxSlotList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkCanvasBoxSlotList);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkCanvasBoxSlotList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot, METADATA_PARAMS(nullptr, 0) }; // 3566480880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlotList, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots_MetaData)) }; // 3566480880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkCanvasBoxSlotList, Owner), Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkCanvasBoxSlotList",
		sizeof(FUIFrameworkCanvasBoxSlotList),
		alignof(FUIFrameworkCanvasBoxSlotList),
		Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkCanvasBox::execRemoveWidget)
	{
		P_GET_OBJECT(UUIFrameworkWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkCanvasBox::execAddWidget)
	{
		P_GET_STRUCT(FUIFrameworkCanvasBoxSlot,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	void UUIFrameworkCanvasBox::StaticRegisterNativesUUIFrameworkCanvasBox()
	{
		UClass* Class = UUIFrameworkCanvasBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UUIFrameworkCanvasBox::execAddWidget },
			{ "RemoveWidget", &UUIFrameworkCanvasBox::execRemoveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics
	{
		struct UIFrameworkCanvasBox_eventAddWidget_Parms
		{
			FUIFrameworkCanvasBoxSlot Widget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkCanvasBox_eventAddWidget_Parms, Widget), Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot, METADATA_PARAMS(nullptr, 0) }; // 3566480880
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkCanvasBox, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::UIFrameworkCanvasBox_eventAddWidget_Parms), Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics
	{
		struct UIFrameworkCanvasBox_eventRemoveWidget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkCanvasBox_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkCanvasBox, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::UIFrameworkCanvasBox_eventRemoveWidget_Parms), Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkCanvasBox);
	UClass* Z_Construct_UClass_UUIFrameworkCanvasBox_NoRegister()
	{
		return UUIFrameworkCanvasBox::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkCanvasBox_Statics
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
	UObject* (*const Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkCanvasBox_AddWidget, "AddWidget" }, // 225562283
		{ &Z_Construct_UFunction_UUIFrameworkCanvasBox_RemoveWidget, "RemoveWidget" }, // 1035244816
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Canvas UIFramework" },
		{ "IncludePath", "Widgets/UIFCanvasBox.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::NewProp_ReplicatedSlotList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFCanvasBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::NewProp_ReplicatedSlotList = { "ReplicatedSlotList", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkCanvasBox, ReplicatedSlotList), Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::NewProp_ReplicatedSlotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::NewProp_ReplicatedSlotList_MetaData)) }; // 507466640
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::NewProp_ReplicatedSlotList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkCanvasBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::ClassParams = {
		&UUIFrameworkCanvasBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkCanvasBox()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkCanvasBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkCanvasBox.OuterSingleton, Z_Construct_UClass_UUIFrameworkCanvasBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkCanvasBox.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkCanvasBox>()
	{
		return UUIFrameworkCanvasBox::StaticClass();
	}

	void UUIFrameworkCanvasBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedSlotList(TEXT("ReplicatedSlotList"));

		const bool bIsValid = true
			&& Name_ReplicatedSlotList == ClassReps[(int32)ENetFields_Private::ReplicatedSlotList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkCanvasBox"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkCanvasBox);
	UUIFrameworkCanvasBox::~UUIFrameworkCanvasBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkCanvasBoxSlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlot_Statics::NewStructOps, TEXT("UIFrameworkCanvasBoxSlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkCanvasBoxSlot), 3566480880U) },
		{ FUIFrameworkCanvasBoxSlotList::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkCanvasBoxSlotList_Statics::NewStructOps, TEXT("UIFrameworkCanvasBoxSlotList"), &Z_Registration_Info_UScriptStruct_UIFrameworkCanvasBoxSlotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkCanvasBoxSlotList), 507466640U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkCanvasBox, UUIFrameworkCanvasBox::StaticClass, TEXT("UUIFrameworkCanvasBox"), &Z_Registration_Info_UClass_UUIFrameworkCanvasBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkCanvasBox), 424685208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_2001573167(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFCanvasBox_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
