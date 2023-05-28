// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFUserWidget.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFUserWidget() {}
// Cross Module References
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkUserWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkUserWidgetSlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkUserWidgetSlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot;
class UScriptStruct* FUIFrameworkUserWidgetSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkUserWidgetSlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkUserWidgetSlot>()
{
	return FUIFrameworkUserWidgetSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkUserWidgetSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "Comment", "/** The name of the NamedSlot */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
		{ "ToolTip", "The name of the NamedSlot" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkUserWidgetSlot, SlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewProp_SlotName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkUserWidgetSlot",
		sizeof(FUIFrameworkUserWidgetSlot),
		alignof(FUIFrameworkUserWidgetSlot),
		Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkUserWidgetSlotList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkUserWidgetSlotList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList;
class UScriptStruct* FUIFrameworkUserWidgetSlotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkUserWidgetSlotList"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkUserWidgetSlotList>()
{
	return FUIFrameworkUserWidgetSlotList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkUserWidgetSlotList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkUserWidgetSlotList);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkUserWidgetSlotList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots_Inner = { "Slots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3981559246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots = { "Slots", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkUserWidgetSlotList, Slots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots_MetaData)) }; // 3981559246
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkUserWidgetSlotList, Owner), Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Slots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkUserWidgetSlotList",
		sizeof(FUIFrameworkUserWidgetSlotList),
		alignof(FUIFrameworkUserWidgetSlotList),
		Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkUserWidget::execSetNamedSlot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_OBJECT(UUIFrameworkWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNamedSlot(Z_Param_SlotName,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkUserWidget::execSetWidgetClass)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<UWidget> ,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetClass(Z_Param_Value);
		P_NATIVE_END;
	}
	void UUIFrameworkUserWidget::StaticRegisterNativesUUIFrameworkUserWidget()
	{
		UClass* Class = UUIFrameworkUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNamedSlot", &UUIFrameworkUserWidget::execSetNamedSlot },
			{ "SetWidgetClass", &UUIFrameworkUserWidget::execSetWidgetClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics
	{
		struct UIFrameworkUserWidget_eventSetNamedSlot_Parms
		{
			FName SlotName;
			UUIFrameworkWidget* Widget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkUserWidget_eventSetNamedSlot_Parms, SlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkUserWidget_eventSetNamedSlot_Parms, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkUserWidget, nullptr, "SetNamedSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::UIFrameworkUserWidget_eventSetNamedSlot_Parms), Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics
	{
		struct UIFrameworkUserWidget_eventSetWidgetClass_Parms
		{
			TSoftClassPtr<UWidget>  Value;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkUserWidget_eventSetWidgetClass_Parms, Value), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkUserWidget, nullptr, "SetWidgetClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::UIFrameworkUserWidget_eventSetWidgetClass_Parms), Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkUserWidget);
	UClass* Z_Construct_UClass_UUIFrameworkUserWidget_NoRegister()
	{
		return UUIFrameworkUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkUserWidget_Statics
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
	UObject* (*const Z_Construct_UClass_UUIFrameworkUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkUserWidget_SetNamedSlot, "SetNamedSlot" }, // 4091899004
		{ &Z_Construct_UFunction_UUIFrameworkUserWidget_SetWidgetClass, "SetWidgetClass" }, // 2325645675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "UserWidget UIFramework" },
		{ "IncludePath", "Widgets/UIFUserWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkUserWidget_Statics::NewProp_ReplicatedSlotList_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFUserWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkUserWidget_Statics::NewProp_ReplicatedSlotList = { "ReplicatedSlotList", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkUserWidget, ReplicatedSlotList), Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkUserWidget_Statics::NewProp_ReplicatedSlotList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkUserWidget_Statics::NewProp_ReplicatedSlotList_MetaData)) }; // 1261052808
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkUserWidget_Statics::NewProp_ReplicatedSlotList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkUserWidget_Statics::ClassParams = {
		&UUIFrameworkUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkUserWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkUserWidget()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkUserWidget.OuterSingleton, Z_Construct_UClass_UUIFrameworkUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkUserWidget.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkUserWidget>()
	{
		return UUIFrameworkUserWidget::StaticClass();
	}

	void UUIFrameworkUserWidget::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedSlotList(TEXT("ReplicatedSlotList"));

		const bool bIsValid = true
			&& Name_ReplicatedSlotList == ClassReps[(int32)ENetFields_Private::ReplicatedSlotList].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkUserWidget"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkUserWidget);
	UUIFrameworkUserWidget::~UUIFrameworkUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkUserWidgetSlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlot_Statics::NewStructOps, TEXT("UIFrameworkUserWidgetSlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkUserWidgetSlot), 3981559246U) },
		{ FUIFrameworkUserWidgetSlotList::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkUserWidgetSlotList_Statics::NewStructOps, TEXT("UIFrameworkUserWidgetSlotList"), &Z_Registration_Info_UScriptStruct_UIFrameworkUserWidgetSlotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkUserWidgetSlotList), 1261052808U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkUserWidget, UUIFrameworkUserWidget::StaticClass, TEXT("UUIFrameworkUserWidget"), &Z_Registration_Info_UClass_UUIFrameworkUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkUserWidget), 784537217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_2749255680(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFUserWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
