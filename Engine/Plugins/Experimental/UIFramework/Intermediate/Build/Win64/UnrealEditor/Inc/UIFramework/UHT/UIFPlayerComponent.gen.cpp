// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UIFPlayerComponent.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Types/UIFWidgetId.h"
#include "Types/UIFWidgetTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFPlayerComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkPlayerComponent();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkPresenter_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UEnum* Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType();
	UIFRAMEWORK_API UEnum* Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSlotBase();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetTree();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIFrameworkGameLayerType;
	static UEnum* EUIFrameworkGameLayerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("EUIFrameworkGameLayerType"));
		}
		return Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UEnum* StaticEnum<EUIFrameworkGameLayerType>()
	{
		return EUIFrameworkGameLayerType_StaticEnum();
	}
	struct Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enumerators[] = {
		{ "EUIFrameworkGameLayerType::Viewport", (int64)EUIFrameworkGameLayerType::Viewport },
		{ "EUIFrameworkGameLayerType::PlayerScreen", (int64)EUIFrameworkGameLayerType::PlayerScreen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
		{ "PlayerScreen.Comment", "/**\n *\n */" },
		{ "PlayerScreen.Name", "EUIFrameworkGameLayerType::PlayerScreen" },
		{ "Viewport.Comment", "/**\n *\n */" },
		{ "Viewport.Name", "EUIFrameworkGameLayerType::Viewport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		"EUIFrameworkGameLayerType",
		"EUIFrameworkGameLayerType",
		Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType()
	{
		if (!Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.InnerSingleton, Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIFrameworkGameLayerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIFrameworkInputMode;
	static UEnum* EUIFrameworkInputMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIFrameworkInputMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIFrameworkInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("EUIFrameworkInputMode"));
		}
		return Z_Registration_Info_UEnum_EUIFrameworkInputMode.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UEnum* StaticEnum<EUIFrameworkInputMode>()
	{
		return EUIFrameworkInputMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enumerators[] = {
		{ "EUIFrameworkInputMode::UI", (int64)EUIFrameworkInputMode::UI },
		{ "EUIFrameworkInputMode::Game", (int64)EUIFrameworkInputMode::Game },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "Game.Comment", "// Input is received by the Game.\n" },
		{ "Game.Name", "EUIFrameworkInputMode::Game" },
		{ "Game.ToolTip", "Input is received by the Game." },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
		{ "UI.Comment", "/**\n *\n */// Input is received by the UI.\n" },
		{ "UI.Name", "EUIFrameworkInputMode::UI" },
		{ "UI.ToolTip", "// Input is received by the UI." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		"EUIFrameworkInputMode",
		"EUIFrameworkInputMode",
		Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode()
	{
		if (!Z_Registration_Info_UEnum_EUIFrameworkInputMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIFrameworkInputMode.InnerSingleton, Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIFrameworkInputMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkGameLayerSlot>() == std::is_polymorphic<FUIFrameworkSlotBase>(), "USTRUCT FUIFrameworkGameLayerSlot cannot be polymorphic unless super FUIFrameworkSlotBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot;
class UScriptStruct* FUIFrameworkGameLayerSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkGameLayerSlot"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkGameLayerSlot>()
{
	return FUIFrameworkGameLayerSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkGameLayerSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkGameLayerSlot, ZOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_ZOrder_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkGameLayerSlot, InputMode), Z_Construct_UEnum_UIFramework_EUIFrameworkInputMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode_MetaData)) }; // 3252064282
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkGameLayerSlot, Type), Z_Construct_UEnum_UIFramework_EUIFrameworkGameLayerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type_MetaData)) }; // 3150447538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_InputMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSlotBase,
		&NewStructOps,
		"UIFrameworkGameLayerSlot",
		sizeof(FUIFrameworkGameLayerSlot),
		alignof(FUIFrameworkGameLayerSlot),
		Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkGameLayerSlotList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkGameLayerSlotList cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList;
class UScriptStruct* FUIFrameworkGameLayerSlotList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkGameLayerSlotList"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkGameLayerSlotList>()
{
	return FUIFrameworkGameLayerSlotList::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkGameLayerSlotList);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkGameLayerSlotList);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkGameLayerSlotList>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot, METADATA_PARAMS(nullptr, 0) }; // 4211819498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkGameLayerSlotList, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries_MetaData)) }; // 4211819498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000080082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkGameLayerSlotList, Owner), Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkGameLayerSlotList",
		sizeof(FUIFrameworkGameLayerSlotList),
		alignof(FUIFrameworkGameLayerSlotList),
		Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkPlayerComponent::execServerRemoveWidgetRootFromTree)
	{
		P_GET_STRUCT(FUIFrameworkWidgetId,Z_Param_WidgetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRemoveWidgetRootFromTree_Implementation(Z_Param_WidgetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkPlayerComponent::execRemoveWidget)
	{
		P_GET_OBJECT(UUIFrameworkWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkPlayerComponent::execAddWidget)
	{
		P_GET_STRUCT(FUIFrameworkGameLayerSlot,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	struct UIFrameworkPlayerComponent_eventServerRemoveWidgetRootFromTree_Parms
	{
		FUIFrameworkWidgetId WidgetId;
	};
	static FName NAME_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree = FName(TEXT("ServerRemoveWidgetRootFromTree"));
	void UUIFrameworkPlayerComponent::ServerRemoveWidgetRootFromTree(FUIFrameworkWidgetId WidgetId)
	{
		UIFrameworkPlayerComponent_eventServerRemoveWidgetRootFromTree_Parms Parms;
		Parms.WidgetId=WidgetId;
		ProcessEvent(FindFunctionChecked(NAME_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree),&Parms);
	}
	void UUIFrameworkPlayerComponent::StaticRegisterNativesUUIFrameworkPlayerComponent()
	{
		UClass* Class = UUIFrameworkPlayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UUIFrameworkPlayerComponent::execAddWidget },
			{ "RemoveWidget", &UUIFrameworkPlayerComponent::execRemoveWidget },
			{ "ServerRemoveWidgetRootFromTree", &UUIFrameworkPlayerComponent::execServerRemoveWidgetRootFromTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics
	{
		struct UIFrameworkPlayerComponent_eventAddWidget_Parms
		{
			FUIFrameworkGameLayerSlot Widget;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkPlayerComponent_eventAddWidget_Parms, Widget), Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot, METADATA_PARAMS(nullptr, 0) }; // 4211819498
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkPlayerComponent, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::UIFrameworkPlayerComponent_eventAddWidget_Parms), Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics
	{
		struct UIFrameworkPlayerComponent_eventRemoveWidget_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkPlayerComponent_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkPlayerComponent, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::UIFrameworkPlayerComponent_eventRemoveWidget_Parms), Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::NewProp_WidgetId = { "WidgetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkPlayerComponent_eventServerRemoveWidgetRootFromTree_Parms, WidgetId), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(nullptr, 0) }; // 4193507828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::NewProp_WidgetId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkPlayerComponent, nullptr, "ServerRemoveWidgetRootFromTree", nullptr, nullptr, sizeof(UIFrameworkPlayerComponent_eventServerRemoveWidgetRootFromTree_Parms), Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkPlayerComponent);
	UClass* Z_Construct_UClass_UUIFrameworkPlayerComponent_NoRegister()
	{
		return UUIFrameworkPlayerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootList_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Presenter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Presenter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NetReplicationPending_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetReplicationPending_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_NetReplicationPending;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AddPending_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddPending_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AddPending;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkPlayerComponent_AddWidget, "AddWidget" }, // 3167876588
		{ &Z_Construct_UFunction_UUIFrameworkPlayerComponent_RemoveWidget, "RemoveWidget" }, // 3974549680
		{ &Z_Construct_UFunction_UUIFrameworkPlayerComponent_ServerRemoveWidgetRootFromTree, "ServerRemoveWidgetRootFromTree" }, // 1844370860
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UIFPlayerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_RootList_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_RootList = { "RootList", nullptr, (EPropertyFlags)0x0040008000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkPlayerComponent, RootList), Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_RootList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_RootList_MetaData)) }; // 2269195573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkPlayerComponent, WidgetTree), Z_Construct_UScriptStruct_FUIFrameworkWidgetTree, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_WidgetTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_WidgetTree_MetaData)) }; // 1595032571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_Presenter_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_Presenter = { "Presenter", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkPlayerComponent, Presenter), Z_Construct_UClass_UUIFrameworkPresenter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_Presenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_Presenter_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending_ElementProp = { "NetReplicationPending", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending_MetaData[] = {
		{ "Comment", "//~ Widget can be net replicated but not constructed yet.\n" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending = { "NetReplicationPending", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkPlayerComponent, NetReplicationPending), METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending_ElementProp = { "AddPending", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending_MetaData[] = {
		{ "Comment", "//~ Widgets are created and ready to be added.\n" },
		{ "ModuleRelativePath", "Public/UIFPlayerComponent.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending = { "AddPending", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkPlayerComponent, AddPending), METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_RootList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_WidgetTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_Presenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_NetReplicationPending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::NewProp_AddPending,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkPlayerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::ClassParams = {
		&UUIFrameworkPlayerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkPlayerComponent()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkPlayerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkPlayerComponent.OuterSingleton, Z_Construct_UClass_UUIFrameworkPlayerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkPlayerComponent.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkPlayerComponent>()
	{
		return UUIFrameworkPlayerComponent::StaticClass();
	}

	void UUIFrameworkPlayerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RootList(TEXT("RootList"));
		static const FName Name_WidgetTree(TEXT("WidgetTree"));

		const bool bIsValid = true
			&& Name_RootList == ClassReps[(int32)ENetFields_Private::RootList].Property->GetFName()
			&& Name_WidgetTree == ClassReps[(int32)ENetFields_Private::WidgetTree].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkPlayerComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkPlayerComponent);
	UUIFrameworkPlayerComponent::~UUIFrameworkPlayerComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::EnumInfo[] = {
		{ EUIFrameworkGameLayerType_StaticEnum, TEXT("EUIFrameworkGameLayerType"), &Z_Registration_Info_UEnum_EUIFrameworkGameLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3150447538U) },
		{ EUIFrameworkInputMode_StaticEnum, TEXT("EUIFrameworkInputMode"), &Z_Registration_Info_UEnum_EUIFrameworkInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3252064282U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkGameLayerSlot::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlot_Statics::NewStructOps, TEXT("UIFrameworkGameLayerSlot"), &Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkGameLayerSlot), 4211819498U) },
		{ FUIFrameworkGameLayerSlotList::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkGameLayerSlotList_Statics::NewStructOps, TEXT("UIFrameworkGameLayerSlotList"), &Z_Registration_Info_UScriptStruct_UIFrameworkGameLayerSlotList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkGameLayerSlotList), 2269195573U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkPlayerComponent, UUIFrameworkPlayerComponent::StaticClass, TEXT("UUIFrameworkPlayerComponent"), &Z_Registration_Info_UClass_UUIFrameworkPlayerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkPlayerComponent), 2337327242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_2765879674(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_UIFPlayerComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
