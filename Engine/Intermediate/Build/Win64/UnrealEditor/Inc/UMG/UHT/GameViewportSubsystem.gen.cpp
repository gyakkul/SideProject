// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/GameViewportSubsystem.h"
#include "Layout/Margin.h"
#include "Widgets/Layout/Anchors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameViewportSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UGameViewportSubsystem();
	UMG_API UClass* Z_Construct_UClass_UGameViewportSubsystem_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FGameViewportWidgetSlot();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot;
class UScriptStruct* FGameViewportWidgetSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameViewportWidgetSlot, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("GameViewportWidgetSlot"));
	}
	return Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FGameViewportWidgetSlot>()
{
	return FGameViewportWidgetSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The default value fills the entire screen / player region.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "The default value fills the entire screen / player region." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameViewportWidgetSlot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Anchors_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameViewportWidgetSlot, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Anchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Anchors_MetaData)) }; // 3429000087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Offsets_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Offsets = { "Offsets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameViewportWidgetSlot, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Offsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Offsets_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Alignment_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameViewportWidgetSlot, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Alignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Alignment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The higher the number, the more on top this widget will be. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "The higher the number, the more on top this widget will be." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameViewportWidgetSlot, ZOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_ZOrder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Anchors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Offsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_Alignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewProp_ZOrder,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"GameViewportWidgetSlot",
		sizeof(FGameViewportWidgetSlot),
		alignof(FGameViewportWidgetSlot),
		Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameViewportWidgetSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.InnerSingleton, Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot.InnerSingleton;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execSetWidgetSlotDesiredSize)
	{
		P_GET_STRUCT(FGameViewportWidgetSlot,Z_Param_Slot);
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameViewportWidgetSlot*)Z_Param__Result=UGameViewportSubsystem::SetWidgetSlotDesiredSize(Z_Param_Slot,Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execSetWidgetSlotPosition)
	{
		P_GET_STRUCT(FGameViewportWidgetSlot,Z_Param_Slot);
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bRemoveDPIScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameViewportWidgetSlot*)Z_Param__Result=UGameViewportSubsystem::SetWidgetSlotPosition(Z_Param_Slot,Z_Param_Widget,Z_Param_Position,Z_Param_bRemoveDPIScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execSetWidgetSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_STRUCT(FGameViewportWidgetSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetSlot(Z_Param_Widget,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execGetWidgetSlot)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameViewportWidgetSlot*)Z_Param__Result=P_THIS->GetWidgetSlot(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execRemoveWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execAddWidgetForPlayer)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_OBJECT(ULocalPlayer,Z_Param_Player);
		P_GET_STRUCT(FGameViewportWidgetSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidgetForPlayer(Z_Param_Widget,Z_Param_Player,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execAddWidget)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_GET_STRUCT(FGameViewportWidgetSlot,Z_Param_Slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddWidget(Z_Param_Widget,Z_Param_Slot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportSubsystem::execIsWidgetAdded)
	{
		P_GET_OBJECT(UWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetAdded(Z_Param_Widget);
		P_NATIVE_END;
	}
	void UGameViewportSubsystem::StaticRegisterNativesUGameViewportSubsystem()
	{
		UClass* Class = UGameViewportSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddWidget", &UGameViewportSubsystem::execAddWidget },
			{ "AddWidgetForPlayer", &UGameViewportSubsystem::execAddWidgetForPlayer },
			{ "GetWidgetSlot", &UGameViewportSubsystem::execGetWidgetSlot },
			{ "IsWidgetAdded", &UGameViewportSubsystem::execIsWidgetAdded },
			{ "RemoveWidget", &UGameViewportSubsystem::execRemoveWidget },
			{ "SetWidgetSlot", &UGameViewportSubsystem::execSetWidgetSlot },
			{ "SetWidgetSlotDesiredSize", &UGameViewportSubsystem::execSetWidgetSlotDesiredSize },
			{ "SetWidgetSlotPosition", &UGameViewportSubsystem::execSetWidgetSlotPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics
	{
		struct GameViewportSubsystem_eventAddWidget_Parms
		{
			UWidget* Widget;
			FGameViewportWidgetSlot Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventAddWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventAddWidget_Parms, Slot), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** Adds it to the game's viewport. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Adds it to the game's viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "AddWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::GameViewportSubsystem_eventAddWidget_Parms), Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_AddWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_AddWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics
	{
		struct GameViewportSubsystem_eventAddWidgetForPlayer_Parms
		{
			UWidget* Widget;
			ULocalPlayer* Player;
			FGameViewportWidgetSlot Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventAddWidgetForPlayer_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventAddWidgetForPlayer_Parms, Player), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventAddWidgetForPlayer_Parms, Slot), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Adds the widget to the game's viewport in the section dedicated to the player. This is valuable in a split screen\n\x09 * game where you need to only show a widget over a player's portion of the viewport.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Adds the widget to the game's viewport in the section dedicated to the player. This is valuable in a split screen\ngame where you need to only show a widget over a player's portion of the viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "AddWidgetForPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::GameViewportSubsystem_eventAddWidgetForPlayer_Parms), Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics
	{
		struct GameViewportSubsystem_eventGetWidgetSlot_Parms
		{
			const UWidget* Widget;
			FGameViewportWidgetSlot ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventGetWidgetSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventGetWidgetSlot_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/* The slot info from previously added widget or info that is store for later. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "The slot info from previously added widget or info that is store for later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "GetWidgetSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::GameViewportSubsystem_eventGetWidgetSlot_Parms), Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics
	{
		struct GameViewportSubsystem_eventIsWidgetAdded_Parms
		{
			const UWidget* Widget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventIsWidgetAdded_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_Widget_MetaData)) };
	void Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameViewportSubsystem_eventIsWidgetAdded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameViewportSubsystem_eventIsWidgetAdded_Parms), &Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/* @return true if the widget was added to the viewport using AddWidget or AddWidgetForPlayer. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "@return true if the widget was added to the viewport using AddWidget or AddWidgetForPlayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "IsWidgetAdded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::GameViewportSubsystem_eventIsWidgetAdded_Parms), Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics
	{
		struct GameViewportSubsystem_eventRemoveWidget_Parms
		{
			UWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventRemoveWidget_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** Removes the widget from the viewport. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Removes the widget from the viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "RemoveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::GameViewportSubsystem_eventRemoveWidget_Parms), Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics
	{
		struct GameViewportSubsystem_eventSetWidgetSlot_Parms
		{
			UWidget* Widget;
			FGameViewportWidgetSlot Slot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlot_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlot_Parms, Slot), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/* Update the slot info of a previously added widget or Store the slot info for later use. */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Update the slot info of a previously added widget or Store the slot info for later use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "SetWidgetSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::GameViewportSubsystem_eventSetWidgetSlot_Parms), Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics
	{
		struct GameViewportSubsystem_eventSetWidgetSlotDesiredSize_Parms
		{
			FGameViewportWidgetSlot Slot;
			FVector2D Size;
			FGameViewportWidgetSlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotDesiredSize_Parms, Slot), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotDesiredSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotDesiredSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameViewportWidgetSlot" },
		{ "Comment", "/**\n\x09 * Helper function to set the desired size in the viewport for the Slot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Helper function to set the desired size in the viewport for the Slot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "SetWidgetSlotDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::GameViewportSubsystem_eventSetWidgetSlotDesiredSize_Parms), Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics
	{
		struct GameViewportSubsystem_eventSetWidgetSlotPosition_Parms
		{
			FGameViewportWidgetSlot Slot;
			const UWidget* Widget;
			FVector2D Position;
			bool bRemoveDPIScale;
			FGameViewportWidgetSlot ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bRemoveDPIScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDPIScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotPosition_Parms, Slot), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotPosition_Parms, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotPosition_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_bRemoveDPIScale_SetBit(void* Obj)
	{
		((GameViewportSubsystem_eventSetWidgetSlotPosition_Parms*)Obj)->bRemoveDPIScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_bRemoveDPIScale = { "bRemoveDPIScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameViewportSubsystem_eventSetWidgetSlotPosition_Parms), &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_bRemoveDPIScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportSubsystem_eventSetWidgetSlotPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameViewportWidgetSlot, METADATA_PARAMS(nullptr, 0) }; // 3926945838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Slot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_bRemoveDPIScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameViewportWidgetSlot" },
		{ "Comment", "/**\n\x09 * Helper function to set the position in the viewport for the Slot.\n\x09 * @param Position The 2D position to set the widget to in the viewport.\n\x09 * @param bRemoveDPIScale If you've already calculated inverse DPI, set this to false.\n\x09 * Otherwise inverse DPI is applied to the position so that when the location is scaled\n\x09 * by DPI, it ends up in the expected position.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
		{ "ToolTip", "Helper function to set the position in the viewport for the Slot.\n@param Position The 2D position to set the widget to in the viewport.\n@param bRemoveDPIScale If you've already calculated inverse DPI, set this to false.\nOtherwise inverse DPI is applied to the position so that when the location is scaled\nby DPI, it ends up in the expected position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportSubsystem, nullptr, "SetWidgetSlotPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::GameViewportSubsystem_eventSetWidgetSlotPosition_Parms), Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameViewportSubsystem);
	UClass* Z_Construct_UClass_UGameViewportSubsystem_NoRegister()
	{
		return UGameViewportSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameViewportSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameViewportSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameViewportSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameViewportSubsystem_AddWidget, "AddWidget" }, // 1605106758
		{ &Z_Construct_UFunction_UGameViewportSubsystem_AddWidgetForPlayer, "AddWidgetForPlayer" }, // 4146426122
		{ &Z_Construct_UFunction_UGameViewportSubsystem_GetWidgetSlot, "GetWidgetSlot" }, // 4052739250
		{ &Z_Construct_UFunction_UGameViewportSubsystem_IsWidgetAdded, "IsWidgetAdded" }, // 1339893055
		{ &Z_Construct_UFunction_UGameViewportSubsystem_RemoveWidget, "RemoveWidget" }, // 1475823884
		{ &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlot, "SetWidgetSlot" }, // 1306892506
		{ &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotDesiredSize, "SetWidgetSlotDesiredSize" }, // 2628499378
		{ &Z_Construct_UFunction_UGameViewportSubsystem_SetWidgetSlotPosition, "SetWidgetSlotPosition" }, // 3528721051
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprint/GameViewportSubsystem.h" },
		{ "ModuleRelativePath", "Public/Blueprint/GameViewportSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameViewportSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameViewportSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameViewportSubsystem_Statics::ClassParams = {
		&UGameViewportSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameViewportSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameViewportSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton, Z_Construct_UClass_UGameViewportSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameViewportSubsystem.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UGameViewportSubsystem>()
	{
		return UGameViewportSubsystem::StaticClass();
	}
	UGameViewportSubsystem::UGameViewportSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameViewportSubsystem);
	UGameViewportSubsystem::~UGameViewportSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FGameViewportWidgetSlot::StaticStruct, Z_Construct_UScriptStruct_FGameViewportWidgetSlot_Statics::NewStructOps, TEXT("GameViewportWidgetSlot"), &Z_Registration_Info_UScriptStruct_GameViewportWidgetSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameViewportWidgetSlot), 3926945838U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameViewportSubsystem, UGameViewportSubsystem::StaticClass, TEXT("UGameViewportSubsystem"), &Z_Registration_Info_UClass_UGameViewportSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameViewportSubsystem), 990075960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_4181697860(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_GameViewportSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
