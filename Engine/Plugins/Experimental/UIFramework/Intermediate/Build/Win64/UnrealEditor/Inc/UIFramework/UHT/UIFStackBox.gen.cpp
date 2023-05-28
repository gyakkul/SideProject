// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFStackBox.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFStackBox() {}
// Cross Module References
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkStackBox();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkStackBox_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkStackBoxSlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkStackBoxSlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot;
class UScriptStruct* FUIFrameworkStackBoxSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkStackBoxSlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkStackBoxSlot>()
{
	return FUIFrameworkStackBoxSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkStackBoxSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Horizontal alignment of the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "Horizontal alignment of the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Vertical alignment of the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "Vertical alignment of the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** Distance between that surrounds the widget inside the slot. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "Distance between that surrounds the widget inside the slot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** How much space this slot should occupy in the direction of the panel. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "How much space this slot should occupy in the direction of the panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlot, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Size_MetaData)) }; // 2981121082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Index_MetaData[] = {
		{ "Comment", "/** Index in the array the Slot is. The position in the array can change when replicated. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "Index in the array the Slot is. The position in the array can change when replicated." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlot, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkStackBoxSlot",
		sizeof(FUIFrameworkStackBoxSlot),
		alignof(FUIFrameworkStackBoxSlot),
		Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkStackBoxSlotList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkStackBoxSlotList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList;
class UScriptStruct* FUIFrameworkStackBoxSlotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkStackBoxSlotList"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkStackBoxSlotList>()
{
	return FUIFrameworkStackBoxSlotList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkStackBoxSlotList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkStackBoxSlotList);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkStackBoxSlotList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot, METADATA_PARAMS(nullptr, 0) }; // 2720479323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlotList, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots_MetaData)) }; // 2720479323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkStackBoxSlotList, Owner), Z_Construct_UClass_UUIFrameworkStackBox_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkStackBoxSlotList",
		sizeof(FUIFrameworkStackBoxSlotList),
		alignof(FUIFrameworkStackBoxSlotList),
		Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkStackBox::execOnRep_Orientation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Orientation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkStackBox::execRemoveWidget)
	{
		P_GET_OBJECT(UUIFrameworkWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkStackBox::execAddWidget)
	{
		P_GET_STRUCT(FUIFrameworkStackBoxSlot,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	void UUIFrameworkStackBox::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUIFrameworkStackBox* Obj = (const UUIFrameworkStackBox*)Object;
		EOrientation& Result = *(EOrientation*)OutValue;
		Result = (EOrientation)Obj->GetOrientation();
	}
	void UUIFrameworkStackBox::SetOrientation_WrapperImpl(void* Object, const void* InValue)
	{
		UUIFrameworkStackBox* Obj = (UUIFrameworkStackBox*)Object;
		EOrientation Value = (EOrientation)*(uint8*)InValue;
		Obj->SetOrientation(Value);
	}
	void UUIFrameworkStackBox::StaticRegisterNativesUUIFrameworkStackBox()
	{
		UClass* Class = UUIFrameworkStackBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UUIFrameworkStackBox::execAddWidget },
			{ "OnRep_Orientation", &UUIFrameworkStackBox::execOnRep_Orientation },
			{ "RemoveWidget", &UUIFrameworkStackBox::execRemoveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics
	{
		struct UIFrameworkStackBox_eventAddWidget_Parms
		{
			FUIFrameworkStackBoxSlot Widget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkStackBox_eventAddWidget_Parms, Widget), Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot, METADATA_PARAMS(nullptr, 0) }; // 2720479323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkStackBox, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::UIFrameworkStackBox_eventAddWidget_Parms), Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkStackBox, nullptr, "OnRep_Orientation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics
	{
		struct UIFrameworkStackBox_eventRemoveWidget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkStackBox_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkStackBox, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::UIFrameworkStackBox_eventRemoveWidget_Parms), Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkStackBox);
	UClass* Z_Construct_UClass_UUIFrameworkStackBox_NoRegister()
	{
		return UUIFrameworkStackBox::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkStackBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedSlotList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedSlotList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkStackBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkStackBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkStackBox_AddWidget, "AddWidget" }, // 3298658408
		{ &Z_Construct_UFunction_UUIFrameworkStackBox_OnRep_Orientation, "OnRep_Orientation" }, // 797289937
		{ &Z_Construct_UFunction_UUIFrameworkStackBox_RemoveWidget, "RemoveWidget" }, // 775572192
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkStackBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "StackBox UIFramework" },
		{ "IncludePath", "Widgets/UIFStackBox.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI Framework" },
		{ "Comment", "/** The orientation of the stack box. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
		{ "ToolTip", "The orientation of the stack box." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_Orientation = { "Orientation", "OnRep_Orientation", (EPropertyFlags)0x0040000100000025, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUIFrameworkStackBox::SetOrientation_WrapperImpl, &UUIFrameworkStackBox::GetOrientation_WrapperImpl, STRUCT_OFFSET(UUIFrameworkStackBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_ReplicatedSlotList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFStackBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_ReplicatedSlotList = { "ReplicatedSlotList", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkStackBox, ReplicatedSlotList), Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_ReplicatedSlotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_ReplicatedSlotList_MetaData)) }; // 926990479
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkStackBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkStackBox_Statics::NewProp_ReplicatedSlotList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkStackBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkStackBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkStackBox_Statics::ClassParams = {
		&UUIFrameworkStackBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkStackBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkStackBox_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkStackBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkStackBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkStackBox()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkStackBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkStackBox.OuterSingleton, Z_Construct_UClass_UUIFrameworkStackBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkStackBox.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkStackBox>()
	{
		return UUIFrameworkStackBox::StaticClass();
	}

	void UUIFrameworkStackBox::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Orientation(TEXT("Orientation"));
		static const FName Name_ReplicatedSlotList(TEXT("ReplicatedSlotList"));

		const bool bIsValid = true
			&& Name_Orientation == ClassReps[(int32)ENetFields_Private::Orientation].Property->GetFName()
			&& Name_ReplicatedSlotList == ClassReps[(int32)ENetFields_Private::ReplicatedSlotList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkStackBox"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkStackBox);
	UUIFrameworkStackBox::~UUIFrameworkStackBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkStackBoxSlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlot_Statics::NewStructOps, TEXT("UIFrameworkStackBoxSlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkStackBoxSlot), 2720479323U) },
		{ FUIFrameworkStackBoxSlotList::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkStackBoxSlotList_Statics::NewStructOps, TEXT("UIFrameworkStackBoxSlotList"), &Z_Registration_Info_UScriptStruct_UIFrameworkStackBoxSlotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkStackBoxSlotList), 926990479U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkStackBox, UUIFrameworkStackBox::StaticClass, TEXT("UUIFrameworkStackBox"), &Z_Registration_Info_UClass_UUIFrameworkStackBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkStackBox), 763256782U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_3958200605(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFStackBox_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
