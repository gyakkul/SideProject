// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/UserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Layout/Margin.h"
#include "Styling/SlateColor.h"
#include "Widgets/Layout/Anchors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FAnalogInputEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocusEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometry();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FKeyEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMotionEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FPointerEvent();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UMG_API UClass* Z_Construct_UClass_UDragDropOperation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlotInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUMGSequenceTickManager_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EDesignPreviewSizeMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTickFrequency();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationEventBinding();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FEventReply();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FNamedSlotBinding();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FPaintContext();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetTickFrequency;
	static UEnum* EWidgetTickFrequency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTickFrequency, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetTickFrequency"));
		}
		return Z_Registration_Info_UEnum_EWidgetTickFrequency.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetTickFrequency>()
	{
		return EWidgetTickFrequency_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enumerators[] = {
		{ "EWidgetTickFrequency::Never", (int64)EWidgetTickFrequency::Never },
		{ "EWidgetTickFrequency::Auto", (int64)EWidgetTickFrequency::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Comment", "/** \n\x09 * This widget will tick if a blueprint tick function is implemented, any latent actions are found or animations need to play\n\x09 * If the widget inherits from something other than UserWidget it will also tick so that native C++ or inherited ticks function\n\x09 * To disable native ticking use add the class metadata flag \"DisableNativeTick\".  I.E: meta=(DisableNativeTick) \n\x09 */" },
		{ "Auto.Name", "EWidgetTickFrequency::Auto" },
		{ "Auto.ToolTip", "This widget will tick if a blueprint tick function is implemented, any latent actions are found or animations need to play\nIf the widget inherits from something other than UserWidget it will also tick so that native C++ or inherited ticks function\nTo disable native ticking use add the class metadata flag \"DisableNativeTick\".  I.E: meta=(DisableNativeTick)" },
		{ "Comment", "/** Determines what strategy we use to determine when and if the widget ticks. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "Never.Comment", "/** This widget never ticks */" },
		{ "Never.Name", "EWidgetTickFrequency::Never" },
		{ "Never.ToolTip", "This widget never ticks" },
		{ "ToolTip", "Determines what strategy we use to determine when and if the widget ticks." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetTickFrequency",
		"EWidgetTickFrequency",
		Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetTickFrequency()
	{
		if (!Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetTickFrequency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetTickFrequency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetAnimationEvent;
	static UEnum* EWidgetAnimationEvent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetAnimationEvent, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetAnimationEvent"));
		}
		return Z_Registration_Info_UEnum_EWidgetAnimationEvent.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetAnimationEvent>()
	{
		return EWidgetAnimationEvent_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enumerators[] = {
		{ "EWidgetAnimationEvent::Started", (int64)EWidgetAnimationEvent::Started },
		{ "EWidgetAnimationEvent::Finished", (int64)EWidgetAnimationEvent::Finished },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Different animation events. */" },
		{ "Finished.Name", "EWidgetAnimationEvent::Finished" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "Started.Name", "EWidgetAnimationEvent::Started" },
		{ "ToolTip", "Different animation events." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetAnimationEvent",
		"EWidgetAnimationEvent",
		Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent()
	{
		if (!Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetAnimationEvent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetAnimationEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationEventBinding;
class UScriptStruct* FAnimationEventBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationEventBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationEventBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationEventBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("AnimationEventBinding"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationEventBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FAnimationEventBinding>()
{
	return FAnimationEventBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationEventBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to manage different animation event bindings that users want callbacks on. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Used to manage different animation event bindings that users want callbacks on." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationEventBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Animation_MetaData[] = {
		{ "Comment", "/** The animation to look for. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The animation to look for." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationEventBinding, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Delegate_MetaData[] = {
		{ "Comment", "/** The callback. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The callback." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationEventBinding, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Delegate_MetaData)) }; // 2583291704
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent_MetaData[] = {
		{ "Comment", "/** The type of animation event. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The type of animation event." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent = { "AnimationEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationEventBinding, AnimationEvent), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent_MetaData)) }; // 1444873952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_UserTag_MetaData[] = {
		{ "Comment", "/** A user tag used to only get callbacks for specific runs of the animation. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "A user tag used to only get callbacks for specific runs of the animation." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationEventBinding, UserTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_UserTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_UserTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_AnimationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewProp_UserTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"AnimationEventBinding",
		sizeof(FAnimationEventBinding),
		alignof(FAnimationEventBinding),
		Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationEventBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationEventBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationEventBinding.InnerSingleton, Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationEventBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaintContext;
class UScriptStruct* FPaintContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaintContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaintContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaintContext, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("PaintContext"));
	}
	return Z_Registration_Info_UScriptStruct_PaintContext.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FPaintContext>()
{
	return FPaintContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPaintContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaintContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The state passed into OnPaint that we can expose as a single painting structure to blueprints to\n * allow script code to override OnPaint behavior.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The state passed into OnPaint that we can expose as a single painting structure to blueprints to\nallow script code to override OnPaint behavior." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaintContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaintContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaintContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"PaintContext",
		sizeof(FPaintContext),
		alignof(FPaintContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaintContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaintContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaintContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PaintContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaintContext.InnerSingleton, Z_Construct_UScriptStruct_FPaintContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PaintContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedSlotBinding;
class UScriptStruct* FNamedSlotBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedSlotBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedSlotBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedSlotBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("NamedSlotBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NamedSlotBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FNamedSlotBinding>()
{
	return FNamedSlotBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedSlotBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedSlotBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedSlotBinding, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Name_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "// GUID of the NamedSlot is used as a secondary identifier to find a binding in case the name of NamedSlot has changed.\n" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "GUID of the NamedSlot is used as a secondary identifier to find a binding in case the name of NamedSlot has changed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedSlotBinding, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Guid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0016000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedSlotBinding, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Content_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Name,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Guid,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewProp_Content,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"NamedSlotBinding",
		sizeof(FNamedSlotBinding),
		alignof(FNamedSlotBinding),
		Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedSlotBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedSlotBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedSlotBinding.InnerSingleton, Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedSlotBinding.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUMGSequencePlayMode;
	static UEnum* EUMGSequencePlayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EUMGSequencePlayMode, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EUMGSequencePlayMode"));
		}
		return Z_Registration_Info_UEnum_EUMGSequencePlayMode.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EUMGSequencePlayMode::Type>()
	{
		return EUMGSequencePlayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enumerators[] = {
		{ "EUMGSequencePlayMode::Forward", (int64)EUMGSequencePlayMode::Forward },
		{ "EUMGSequencePlayMode::Reverse", (int64)EUMGSequencePlayMode::Reverse },
		{ "EUMGSequencePlayMode::PingPong", (int64)EUMGSequencePlayMode::PingPong },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes playback modes for UMG sequences. */" },
		{ "Forward.Comment", "/** Animation plays and loops from the beginning to the end. */" },
		{ "Forward.Name", "EUMGSequencePlayMode::Forward" },
		{ "Forward.ToolTip", "Animation plays and loops from the beginning to the end." },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "PingPong.Comment", "/** Animation plays from the beginning to the end and then from the end to the beginning. */" },
		{ "PingPong.Name", "EUMGSequencePlayMode::PingPong" },
		{ "PingPong.ToolTip", "Animation plays from the beginning to the end and then from the end to the beginning." },
		{ "Reverse.Comment", "/** Animation plays and loops from the end to the beginning. */" },
		{ "Reverse.Name", "EUMGSequencePlayMode::Reverse" },
		{ "Reverse.ToolTip", "Animation plays and loops from the end to the beginning." },
		{ "ToolTip", "Describes playback modes for UMG sequences." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EUMGSequencePlayMode",
		"EUMGSequencePlayMode::Type",
		Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EUMGSequencePlayMode()
	{
		if (!Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton, Z_Construct_UEnum_UMG_EUMGSequencePlayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUMGSequencePlayMode.InnerSingleton;
	}
#if WITH_EDITORONLY_DATA
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDesignPreviewSizeMode;
	static UEnum* EDesignPreviewSizeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDesignPreviewSizeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDesignPreviewSizeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EDesignPreviewSizeMode, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EDesignPreviewSizeMode"));
		}
		return Z_Registration_Info_UEnum_EDesignPreviewSizeMode.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EDesignPreviewSizeMode>()
	{
		return EDesignPreviewSizeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enumerators[] = {
		{ "EDesignPreviewSizeMode::FillScreen", (int64)EDesignPreviewSizeMode::FillScreen },
		{ "EDesignPreviewSizeMode::Custom", (int64)EDesignPreviewSizeMode::Custom },
		{ "EDesignPreviewSizeMode::CustomOnScreen", (int64)EDesignPreviewSizeMode::CustomOnScreen },
		{ "EDesignPreviewSizeMode::Desired", (int64)EDesignPreviewSizeMode::Desired },
		{ "EDesignPreviewSizeMode::DesiredOnScreen", (int64)EDesignPreviewSizeMode::DesiredOnScreen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Name", "EDesignPreviewSizeMode::Custom" },
		{ "CustomOnScreen.Name", "EDesignPreviewSizeMode::CustomOnScreen" },
		{ "Desired.Name", "EDesignPreviewSizeMode::Desired" },
		{ "DesiredOnScreen.Name", "EDesignPreviewSizeMode::DesiredOnScreen" },
		{ "FillScreen.Name", "EDesignPreviewSizeMode::FillScreen" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EDesignPreviewSizeMode",
		"EDesignPreviewSizeMode",
		Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EDesignPreviewSizeMode()
	{
		if (!Z_Registration_Info_UEnum_EDesignPreviewSizeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDesignPreviewSizeMode.InnerSingleton, Z_Construct_UEnum_UMG_EDesignPreviewSizeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDesignPreviewSizeMode.InnerSingleton;
	}
#endif // WITH_EDITORONLY_DATA
	struct Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnConstructEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnConstructEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnConstructEvent_DelegateWrapper(const FMulticastScriptDelegate& OnConstructEvent)
{
	OnConstructEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnInputAction__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnInputAction_DelegateWrapper(const FScriptDelegate& OnInputAction)
{
	OnInputAction.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics
	{
		struct _Script_UMG_eventOnVisibilityChangedEvent_Parms
		{
			ESlateVisibility InVisibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventOnVisibilityChangedEvent_Parms, InVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::NewProp_InVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "OnVisibilityChangedEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::_Script_UMG_eventOnVisibilityChangedEvent_Parms), Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnVisibilityChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnVisibilityChangedEvent, ESlateVisibility InVisibility)
{
	struct _Script_UMG_eventOnVisibilityChangedEvent_Parms
	{
		ESlateVisibility InVisibility;
	};
	_Script_UMG_eventOnVisibilityChangedEvent_Parms Parms;
	Parms.InVisibility=InVisibility;
	OnVisibilityChangedEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUserWidget::execSetInputActionBlocking)
	{
		P_GET_UBOOL(Z_Param_bShouldBlock);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputActionBlocking(Z_Param_bShouldBlock);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetInputActionPriority)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputActionPriority(Z_Param_NewPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execIsListeningForInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsListeningForInputAction(Z_Param_ActionName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execUnregisterInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execRegisterInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execStopListeningForAllInputActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListeningForAllInputActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execStopListeningForInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListeningForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execListenForInputAction)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ActionName);
		P_GET_PROPERTY(FByteProperty,Z_Param_EventType);
		P_GET_UBOOL(Z_Param_bConsume);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenForInputAction(Z_Param_ActionName,EInputEvent(Z_Param_EventType),Z_Param_bConsume,FOnInputAction(Z_Param_Callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execIsPlayingAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayingAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPlaySound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_SoundToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlaySound(Z_Param_SoundToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execRemoveExtensions)
	{
		P_GET_OBJECT(UClass,Z_Param_InExtensionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExtensions(Z_Param_InExtensionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execRemoveExtension)
	{
		P_GET_OBJECT(UUserWidgetExtension,Z_Param_InExtension);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveExtension(Z_Param_InExtension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execAddExtension)
	{
		P_GET_OBJECT(UClass,Z_Param_InExtensionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidgetExtension**)Z_Param__Result=P_THIS->AddExtension(Z_Param_InExtensionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetExtensions)
	{
		P_GET_OBJECT(UClass,Z_Param_ExtensionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUserWidgetExtension*>*)Z_Param__Result=P_THIS->GetExtensions(Z_Param_ExtensionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetExtension)
	{
		P_GET_OBJECT(UClass,Z_Param_ExtensionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidgetExtension**)Z_Param__Result=P_THIS->GetExtension(Z_Param_ExtensionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execFlushAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FlushAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execIsAnimationPlayingForward)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlayingForward(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execReverseAnimation)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReverseAnimation(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetPlaybackSpeed)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlaybackSpeed(Z_Param_InAnimation,Z_Param_PlaybackSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetNumLoopsToPlay)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNumLoopsToPlay(Z_Param_InAnimation,Z_Param_NumLoopsToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execIsAnyAnimationPlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnyAnimationPlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execIsAnimationPlaying)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAnimationPlaying(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetAnimationCurrentTime)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimationCurrentTime(Z_Param_InAnimation,Z_Param_InTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetAnimationCurrentTime)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetAnimationCurrentTime(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPauseAnimation)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->PauseAnimation(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execStopAllAnimations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAllAnimations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execStopAnimation)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimation(Z_Param_InAnimation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPlayAnimationReverse)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_GET_UBOOL(Z_Param_bRestoreState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationReverse(Z_Param_InAnimation,Z_Param_PlaybackSpeed,Z_Param_bRestoreState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPlayAnimationForward)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_GET_UBOOL(Z_Param_bRestoreState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationForward(Z_Param_InAnimation,Z_Param_PlaybackSpeed,Z_Param_bRestoreState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPlayAnimationTimeRange)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAtTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_GET_UBOOL(Z_Param_bRestoreState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimationTimeRange(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_EndAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed,Z_Param_bRestoreState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execPlayAnimation)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAtTime);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumLoopsToPlay);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlayMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlaybackSpeed);
		P_GET_UBOOL(Z_Param_bRestoreState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGSequencePlayer**)Z_Param__Result=P_THIS->PlayAnimation(Z_Param_InAnimation,Z_Param_StartAtTime,Z_Param_NumLoopsToPlay,EUMGSequencePlayMode::Type(Z_Param_PlayMode),Z_Param_PlaybackSpeed,Z_Param_bRestoreState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetForegroundColor)
	{
		P_GET_STRUCT(FSlateColor,Z_Param_InForegroundColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForegroundColor(Z_Param_InForegroundColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorAndOpacity(Z_Param_InColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execOnAnimationFinished)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationFinished_Implementation(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execOnAnimationStarted)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationStarted_Implementation(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execBindToAnimationEvent)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_ENUM(EWidgetAnimationEvent,Z_Param_AnimationEvent);
		P_GET_PROPERTY(FNameProperty,Z_Param_UserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToAnimationEvent(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate),EWidgetAnimationEvent(Z_Param_AnimationEvent),Z_Param_UserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execUnbindAllFromAnimationFinished)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllFromAnimationFinished(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execUnbindFromAnimationFinished)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execBindToAnimationFinished)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToAnimationFinished(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execUnbindAllFromAnimationStarted)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindAllFromAnimationStarted(Z_Param_Animation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execUnbindFromAnimationStarted)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnbindFromAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execBindToAnimationStarted)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Animation);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindToAnimationStarted(Z_Param_Animation,FWidgetAnimationDynamicEvent(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execStopAnimationsAndLatentActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAnimationsAndLatentActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execCancelLatentActions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelLatentActions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetOwningPlayerCameraManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=P_THIS->GetOwningPlayerCameraManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetOwningPlayerPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetOwningPlayerPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetOwningPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwningPlayer(Z_Param_LocalPlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetAlignmentInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetAlignmentInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execGetAnchorsInViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAnchors*)Z_Param__Result=P_THIS->GetAnchorsInViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetAlignmentInViewport)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Alignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignmentInViewport(Z_Param_Alignment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetAnchorsInViewport)
	{
		P_GET_STRUCT(FAnchors,Z_Param_Anchors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnchorsInViewport(Z_Param_Anchors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetDesiredSizeInViewport)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSizeInViewport(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execSetPositionInViewport)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Position);
		P_GET_UBOOL(Z_Param_bRemoveDPIScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPositionInViewport(Z_Param_Position,Z_Param_bRemoveDPIScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execRemoveFromViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFromViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execAddToPlayerScreen)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToPlayerScreen(Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserWidget::execAddToViewport)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddToViewport(Z_Param_ZOrder);
		P_NATIVE_END;
	}
	void UUserWidget::GetColorAndOpacity_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetColorAndOpacity();
	}
	void UUserWidget::SetColorAndOpacity_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetColorAndOpacity(Value);
	}
	void UUserWidget::GetForegroundColor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		FSlateColor& Result = *(FSlateColor*)OutValue;
		Result = (FSlateColor)Obj->GetForegroundColor();
	}
	void UUserWidget::SetForegroundColor_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		FSlateColor& Value = *(FSlateColor*)InValue;
		Obj->SetForegroundColor(Value);
	}
	void UUserWidget::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void UUserWidget::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UUserWidget::GetPriority_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetInputActionPriority();
	}
	void UUserWidget::SetPriority_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		int32& Value = *(int32*)InValue;
		Obj->SetInputActionPriority(Value);
	}
	void UUserWidget::GetbIsFocusable_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsFocusable();
	}
	void UUserWidget::SetbIsFocusable_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetIsFocusable(Value);
	}
	void UUserWidget::GetbStopAction_WrapperImpl(const void* Object, void* OutValue)
	{
		const UUserWidget* Obj = (const UUserWidget*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsInputActionBlocking();
	}
	void UUserWidget::SetbStopAction_WrapperImpl(void* Object, const void* InValue)
	{
		UUserWidget* Obj = (UUserWidget*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetInputActionBlocking(Value);
	}
	struct UserWidget_eventIsInteractable_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		UserWidget_eventIsInteractable_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct UserWidget_eventOnAddedToFocusPath_Parms
	{
		FFocusEvent InFocusEvent;
	};
	struct UserWidget_eventOnAnalogValueChanged_Parms
	{
		FGeometry MyGeometry;
		FAnalogInputEvent InAnalogInputEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnAnimationFinished_Parms
	{
		const UWidgetAnimation* Animation;
	};
	struct UserWidget_eventOnAnimationStarted_Parms
	{
		const UWidgetAnimation* Animation;
	};
	struct UserWidget_eventOnDragCancelled_Parms
	{
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
	};
	struct UserWidget_eventOnDragDetected_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
	};
	struct UserWidget_eventOnDragEnter_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
	};
	struct UserWidget_eventOnDragLeave_Parms
	{
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
	};
	struct UserWidget_eventOnDragOver_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		UserWidget_eventOnDragOver_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct UserWidget_eventOnDrop_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent PointerEvent;
		UDragDropOperation* Operation;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		UserWidget_eventOnDrop_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct UserWidget_eventOnFocusLost_Parms
	{
		FFocusEvent InFocusEvent;
	};
	struct UserWidget_eventOnFocusReceived_Parms
	{
		FGeometry MyGeometry;
		FFocusEvent InFocusEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnKeyChar_Parms
	{
		FGeometry MyGeometry;
		FCharacterEvent InCharacterEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnKeyDown_Parms
	{
		FGeometry MyGeometry;
		FKeyEvent InKeyEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnKeyUp_Parms
	{
		FGeometry MyGeometry;
		FKeyEvent InKeyEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMotionDetected_Parms
	{
		FGeometry MyGeometry;
		FMotionEvent InMotionEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMouseButtonDoubleClick_Parms
	{
		FGeometry InMyGeometry;
		FPointerEvent InMouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMouseButtonDown_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMouseButtonUp_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMouseEnter_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
	};
	struct UserWidget_eventOnMouseLeave_Parms
	{
		FPointerEvent MouseEvent;
	};
	struct UserWidget_eventOnMouseMove_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnMouseWheel_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnPaint_Parms
	{
		FPaintContext Context;
	};
	struct UserWidget_eventOnPreviewKeyDown_Parms
	{
		FGeometry MyGeometry;
		FKeyEvent InKeyEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnPreviewMouseButtonDown_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent MouseEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnRemovedFromFocusPath_Parms
	{
		FFocusEvent InFocusEvent;
	};
	struct UserWidget_eventOnTouchEnded_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent InTouchEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnTouchForceChanged_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent InTouchEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnTouchGesture_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent GestureEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnTouchMoved_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent InTouchEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventOnTouchStarted_Parms
	{
		FGeometry MyGeometry;
		FPointerEvent InTouchEvent;
		FEventReply ReturnValue;
	};
	struct UserWidget_eventPreConstruct_Parms
	{
		bool IsDesignTime;
	};
	struct UserWidget_eventTick_Parms
	{
		FGeometry MyGeometry;
		float InDeltaTime;
	};
	static FName NAME_UUserWidget_Construct = FName(TEXT("Construct"));
	void UUserWidget::Construct()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_Construct),NULL);
	}
	static FName NAME_UUserWidget_Destruct = FName(TEXT("Destruct"));
	void UUserWidget::Destruct()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_Destruct),NULL);
	}
	static FName NAME_UUserWidget_IsInteractable = FName(TEXT("IsInteractable"));
	bool UUserWidget::IsInteractable() const
	{
		UserWidget_eventIsInteractable_Parms Parms;
		const_cast<UUserWidget*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUserWidget_IsInteractable),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnAddedToFocusPath = FName(TEXT("OnAddedToFocusPath"));
	void UUserWidget::OnAddedToFocusPath(FFocusEvent InFocusEvent)
	{
		UserWidget_eventOnAddedToFocusPath_Parms Parms;
		Parms.InFocusEvent=InFocusEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnAddedToFocusPath),&Parms);
	}
	static FName NAME_UUserWidget_OnAnalogValueChanged = FName(TEXT("OnAnalogValueChanged"));
	FEventReply UUserWidget::OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent)
	{
		UserWidget_eventOnAnalogValueChanged_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InAnalogInputEvent=InAnalogInputEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnAnalogValueChanged),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnAnimationFinished = FName(TEXT("OnAnimationFinished"));
	void UUserWidget::OnAnimationFinished(const UWidgetAnimation* Animation)
	{
		UserWidget_eventOnAnimationFinished_Parms Parms;
		Parms.Animation=Animation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnAnimationFinished),&Parms);
	}
	static FName NAME_UUserWidget_OnAnimationStarted = FName(TEXT("OnAnimationStarted"));
	void UUserWidget::OnAnimationStarted(const UWidgetAnimation* Animation)
	{
		UserWidget_eventOnAnimationStarted_Parms Parms;
		Parms.Animation=Animation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnAnimationStarted),&Parms);
	}
	static FName NAME_UUserWidget_OnDragCancelled = FName(TEXT("OnDragCancelled"));
	void UUserWidget::OnDragCancelled(FPointerEvent const& PointerEvent, UDragDropOperation* Operation)
	{
		UserWidget_eventOnDragCancelled_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDragCancelled),&Parms);
	}
	static FName NAME_UUserWidget_OnDragDetected = FName(TEXT("OnDragDetected"));
	void UUserWidget::OnDragDetected(FGeometry MyGeometry, FPointerEvent const& PointerEvent, UDragDropOperation*& Operation)
	{
		UserWidget_eventOnDragDetected_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDragDetected),&Parms);
		Operation=Parms.Operation;
	}
	static FName NAME_UUserWidget_OnDragEnter = FName(TEXT("OnDragEnter"));
	void UUserWidget::OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation)
	{
		UserWidget_eventOnDragEnter_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDragEnter),&Parms);
	}
	static FName NAME_UUserWidget_OnDragLeave = FName(TEXT("OnDragLeave"));
	void UUserWidget::OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation)
	{
		UserWidget_eventOnDragLeave_Parms Parms;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDragLeave),&Parms);
	}
	static FName NAME_UUserWidget_OnDragOver = FName(TEXT("OnDragOver"));
	bool UUserWidget::OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation)
	{
		UserWidget_eventOnDragOver_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDragOver),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnDrop = FName(TEXT("OnDrop"));
	bool UUserWidget::OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation)
	{
		UserWidget_eventOnDrop_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.PointerEvent=PointerEvent;
		Parms.Operation=Operation;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnDrop),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnFocusLost = FName(TEXT("OnFocusLost"));
	void UUserWidget::OnFocusLost(FFocusEvent InFocusEvent)
	{
		UserWidget_eventOnFocusLost_Parms Parms;
		Parms.InFocusEvent=InFocusEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnFocusLost),&Parms);
	}
	static FName NAME_UUserWidget_OnFocusReceived = FName(TEXT("OnFocusReceived"));
	FEventReply UUserWidget::OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent)
	{
		UserWidget_eventOnFocusReceived_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InFocusEvent=InFocusEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnFocusReceived),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnInitialized = FName(TEXT("OnInitialized"));
	void UUserWidget::OnInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnInitialized),NULL);
	}
	static FName NAME_UUserWidget_OnKeyChar = FName(TEXT("OnKeyChar"));
	FEventReply UUserWidget::OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent)
	{
		UserWidget_eventOnKeyChar_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InCharacterEvent=InCharacterEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnKeyChar),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnKeyDown = FName(TEXT("OnKeyDown"));
	FEventReply UUserWidget::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent)
	{
		UserWidget_eventOnKeyDown_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InKeyEvent=InKeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnKeyDown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnKeyUp = FName(TEXT("OnKeyUp"));
	FEventReply UUserWidget::OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent)
	{
		UserWidget_eventOnKeyUp_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InKeyEvent=InKeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnKeyUp),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMotionDetected = FName(TEXT("OnMotionDetected"));
	FEventReply UUserWidget::OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent)
	{
		UserWidget_eventOnMotionDetected_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InMotionEvent=InMotionEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMotionDetected),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMouseButtonDoubleClick = FName(TEXT("OnMouseButtonDoubleClick"));
	FEventReply UUserWidget::OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent const& InMouseEvent)
	{
		UserWidget_eventOnMouseButtonDoubleClick_Parms Parms;
		Parms.InMyGeometry=InMyGeometry;
		Parms.InMouseEvent=InMouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseButtonDoubleClick),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMouseButtonDown = FName(TEXT("OnMouseButtonDown"));
	FEventReply UUserWidget::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseButtonDown_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseButtonDown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMouseButtonUp = FName(TEXT("OnMouseButtonUp"));
	FEventReply UUserWidget::OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseButtonUp_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseButtonUp),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMouseCaptureLost = FName(TEXT("OnMouseCaptureLost"));
	void UUserWidget::OnMouseCaptureLost()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseCaptureLost),NULL);
	}
	static FName NAME_UUserWidget_OnMouseEnter = FName(TEXT("OnMouseEnter"));
	void UUserWidget::OnMouseEnter(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseEnter_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseEnter),&Parms);
	}
	static FName NAME_UUserWidget_OnMouseLeave = FName(TEXT("OnMouseLeave"));
	void UUserWidget::OnMouseLeave(FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseLeave_Parms Parms;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseLeave),&Parms);
	}
	static FName NAME_UUserWidget_OnMouseMove = FName(TEXT("OnMouseMove"));
	FEventReply UUserWidget::OnMouseMove(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseMove_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseMove),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnMouseWheel = FName(TEXT("OnMouseWheel"));
	FEventReply UUserWidget::OnMouseWheel(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnMouseWheel_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnMouseWheel),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnPaint = FName(TEXT("OnPaint"));
	void UUserWidget::OnPaint(FPaintContext& Context) const
	{
		UserWidget_eventOnPaint_Parms Parms;
		Parms.Context=Context;
		const_cast<UUserWidget*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnPaint),&Parms);
		Context=Parms.Context;
	}
	static FName NAME_UUserWidget_OnPreviewKeyDown = FName(TEXT("OnPreviewKeyDown"));
	FEventReply UUserWidget::OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent)
	{
		UserWidget_eventOnPreviewKeyDown_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InKeyEvent=InKeyEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnPreviewKeyDown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnPreviewMouseButtonDown = FName(TEXT("OnPreviewMouseButtonDown"));
	FEventReply UUserWidget::OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent const& MouseEvent)
	{
		UserWidget_eventOnPreviewMouseButtonDown_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.MouseEvent=MouseEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnPreviewMouseButtonDown),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnRemovedFromFocusPath = FName(TEXT("OnRemovedFromFocusPath"));
	void UUserWidget::OnRemovedFromFocusPath(FFocusEvent InFocusEvent)
	{
		UserWidget_eventOnRemovedFromFocusPath_Parms Parms;
		Parms.InFocusEvent=InFocusEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnRemovedFromFocusPath),&Parms);
	}
	static FName NAME_UUserWidget_OnTouchEnded = FName(TEXT("OnTouchEnded"));
	FEventReply UUserWidget::OnTouchEnded(FGeometry MyGeometry, FPointerEvent const& InTouchEvent)
	{
		UserWidget_eventOnTouchEnded_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InTouchEvent=InTouchEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnTouchEnded),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnTouchForceChanged = FName(TEXT("OnTouchForceChanged"));
	FEventReply UUserWidget::OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent const& InTouchEvent)
	{
		UserWidget_eventOnTouchForceChanged_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InTouchEvent=InTouchEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnTouchForceChanged),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnTouchGesture = FName(TEXT("OnTouchGesture"));
	FEventReply UUserWidget::OnTouchGesture(FGeometry MyGeometry, FPointerEvent const& GestureEvent)
	{
		UserWidget_eventOnTouchGesture_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.GestureEvent=GestureEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnTouchGesture),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnTouchMoved = FName(TEXT("OnTouchMoved"));
	FEventReply UUserWidget::OnTouchMoved(FGeometry MyGeometry, FPointerEvent const& InTouchEvent)
	{
		UserWidget_eventOnTouchMoved_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InTouchEvent=InTouchEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnTouchMoved),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_OnTouchStarted = FName(TEXT("OnTouchStarted"));
	FEventReply UUserWidget::OnTouchStarted(FGeometry MyGeometry, FPointerEvent const& InTouchEvent)
	{
		UserWidget_eventOnTouchStarted_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InTouchEvent=InTouchEvent;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_OnTouchStarted),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUserWidget_PreConstruct = FName(TEXT("PreConstruct"));
	void UUserWidget::PreConstruct(bool IsDesignTime)
	{
		UserWidget_eventPreConstruct_Parms Parms;
		Parms.IsDesignTime=IsDesignTime ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_PreConstruct),&Parms);
	}
	static FName NAME_UUserWidget_Tick = FName(TEXT("Tick"));
	void UUserWidget::Tick(FGeometry MyGeometry, float InDeltaTime)
	{
		UserWidget_eventTick_Parms Parms;
		Parms.MyGeometry=MyGeometry;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UUserWidget_Tick),&Parms);
	}
	void UUserWidget::StaticRegisterNativesUUserWidget()
	{
		UClass* Class = UUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddExtension", &UUserWidget::execAddExtension },
			{ "AddToPlayerScreen", &UUserWidget::execAddToPlayerScreen },
			{ "AddToViewport", &UUserWidget::execAddToViewport },
			{ "BindToAnimationEvent", &UUserWidget::execBindToAnimationEvent },
			{ "BindToAnimationFinished", &UUserWidget::execBindToAnimationFinished },
			{ "BindToAnimationStarted", &UUserWidget::execBindToAnimationStarted },
			{ "CancelLatentActions", &UUserWidget::execCancelLatentActions },
			{ "FlushAnimations", &UUserWidget::execFlushAnimations },
			{ "GetAlignmentInViewport", &UUserWidget::execGetAlignmentInViewport },
			{ "GetAnchorsInViewport", &UUserWidget::execGetAnchorsInViewport },
			{ "GetAnimationCurrentTime", &UUserWidget::execGetAnimationCurrentTime },
			{ "GetExtension", &UUserWidget::execGetExtension },
			{ "GetExtensions", &UUserWidget::execGetExtensions },
			{ "GetIsVisible", &UUserWidget::execGetIsVisible },
			{ "GetOwningPlayerCameraManager", &UUserWidget::execGetOwningPlayerCameraManager },
			{ "GetOwningPlayerPawn", &UUserWidget::execGetOwningPlayerPawn },
			{ "IsAnimationPlaying", &UUserWidget::execIsAnimationPlaying },
			{ "IsAnimationPlayingForward", &UUserWidget::execIsAnimationPlayingForward },
			{ "IsAnyAnimationPlaying", &UUserWidget::execIsAnyAnimationPlaying },
			{ "IsListeningForInputAction", &UUserWidget::execIsListeningForInputAction },
			{ "IsPlayingAnimation", &UUserWidget::execIsPlayingAnimation },
			{ "ListenForInputAction", &UUserWidget::execListenForInputAction },
			{ "OnAnimationFinished", &UUserWidget::execOnAnimationFinished },
			{ "OnAnimationStarted", &UUserWidget::execOnAnimationStarted },
			{ "PauseAnimation", &UUserWidget::execPauseAnimation },
			{ "PlayAnimation", &UUserWidget::execPlayAnimation },
			{ "PlayAnimationForward", &UUserWidget::execPlayAnimationForward },
			{ "PlayAnimationReverse", &UUserWidget::execPlayAnimationReverse },
			{ "PlayAnimationTimeRange", &UUserWidget::execPlayAnimationTimeRange },
			{ "PlaySound", &UUserWidget::execPlaySound },
			{ "RegisterInputComponent", &UUserWidget::execRegisterInputComponent },
			{ "RemoveExtension", &UUserWidget::execRemoveExtension },
			{ "RemoveExtensions", &UUserWidget::execRemoveExtensions },
			{ "RemoveFromViewport", &UUserWidget::execRemoveFromViewport },
			{ "ReverseAnimation", &UUserWidget::execReverseAnimation },
			{ "SetAlignmentInViewport", &UUserWidget::execSetAlignmentInViewport },
			{ "SetAnchorsInViewport", &UUserWidget::execSetAnchorsInViewport },
			{ "SetAnimationCurrentTime", &UUserWidget::execSetAnimationCurrentTime },
			{ "SetColorAndOpacity", &UUserWidget::execSetColorAndOpacity },
			{ "SetDesiredSizeInViewport", &UUserWidget::execSetDesiredSizeInViewport },
			{ "SetForegroundColor", &UUserWidget::execSetForegroundColor },
			{ "SetInputActionBlocking", &UUserWidget::execSetInputActionBlocking },
			{ "SetInputActionPriority", &UUserWidget::execSetInputActionPriority },
			{ "SetNumLoopsToPlay", &UUserWidget::execSetNumLoopsToPlay },
			{ "SetOwningPlayer", &UUserWidget::execSetOwningPlayer },
			{ "SetPadding", &UUserWidget::execSetPadding },
			{ "SetPlaybackSpeed", &UUserWidget::execSetPlaybackSpeed },
			{ "SetPositionInViewport", &UUserWidget::execSetPositionInViewport },
			{ "StopAllAnimations", &UUserWidget::execStopAllAnimations },
			{ "StopAnimation", &UUserWidget::execStopAnimation },
			{ "StopAnimationsAndLatentActions", &UUserWidget::execStopAnimationsAndLatentActions },
			{ "StopListeningForAllInputActions", &UUserWidget::execStopListeningForAllInputActions },
			{ "StopListeningForInputAction", &UUserWidget::execStopListeningForInputAction },
			{ "UnbindAllFromAnimationFinished", &UUserWidget::execUnbindAllFromAnimationFinished },
			{ "UnbindAllFromAnimationStarted", &UUserWidget::execUnbindAllFromAnimationStarted },
			{ "UnbindFromAnimationFinished", &UUserWidget::execUnbindFromAnimationFinished },
			{ "UnbindFromAnimationStarted", &UUserWidget::execUnbindFromAnimationStarted },
			{ "UnregisterInputComponent", &UUserWidget::execUnregisterInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserWidget_AddExtension_Statics
	{
		struct UserWidget_eventAddExtension_Parms
		{
			TSubclassOf<UUserWidgetExtension>  InExtensionType;
			UUserWidgetExtension* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InExtensionType;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_InExtensionType = { "InExtensionType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventAddExtension_Parms, InExtensionType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventAddExtension_Parms, ReturnValue), Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_AddExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_InExtensionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_AddExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_AddExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Extension" },
		{ "Comment", "/** Add the extension of the requested type. */" },
		{ "DeterminesOutputType", "InExtensionType" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Add the extension of the requested type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_AddExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "AddExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::UserWidget_eventAddExtension_Parms), Z_Construct_UFunction_UUserWidget_AddExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_AddExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_AddExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics
	{
		struct UserWidget_eventAddToPlayerScreen_Parms
		{
			int32 ZOrder;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventAddToPlayerScreen_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventAddToPlayerScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventAddToPlayerScreen_Parms), &Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ZOrder" },
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/**\n\x09 * Adds the widget to the game's viewport in a section dedicated to the player.  This is valuable in a split screen\n\x09 * game where you need to only show a widget over a player's portion of the viewport.\n\x09 *\n\x09 * @param ZOrder The higher the number, the more on top this widget will be.\n\x09 */" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Adds the widget to the game's viewport in a section dedicated to the player.  This is valuable in a split screen\ngame where you need to only show a widget over a player's portion of the viewport.\n\n@param ZOrder The higher the number, the more on top this widget will be." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "AddToPlayerScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::UserWidget_eventAddToPlayerScreen_Parms), Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_AddToPlayerScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_AddToPlayerScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_AddToViewport_Statics
	{
		struct UserWidget_eventAddToViewport_Parms
		{
			int32 ZOrder;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventAddToViewport_Parms, ZOrder), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "ZOrder" },
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/**\n\x09 * Adds it to the game's viewport and fills the entire screen, unless SetDesiredSizeInViewport is called\n\x09 * to explicitly set the size.\n\x09 *\n\x09 * @param ZOrder The higher the number, the more on top this widget will be.\n\x09 */" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Adds it to the game's viewport and fills the entire screen, unless SetDesiredSizeInViewport is called\nto explicitly set the size.\n\n@param ZOrder The higher the number, the more on top this widget will be." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "AddToViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::UserWidget_eventAddToViewport_Parms), Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_AddToViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_AddToViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics
	{
		struct UserWidget_eventBindToAnimationEvent_Parms
		{
			UWidgetAnimation* Animation;
			FScriptDelegate Delegate;
			EWidgetAnimationEvent AnimationEvent;
			FName UserTag;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationEvent_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationEvent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationEvent_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationEvent_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_AnimationEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_AnimationEvent = { "AnimationEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationEvent_Parms, AnimationEvent), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(nullptr, 0) }; // 1444873952
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationEvent_Parms, UserTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_AnimationEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_AnimationEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::NewProp_UserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Allows binding to a specific animation's event.\n\x09 * @param Animation the animation to listen for starting or finishing.\n\x09 * @param Delegate the delegate to call when the animation's state changes\n\x09 * @param AnimationEvent the event to watch for.\n\x09 * @param UserTag Scopes the delegate to only be called when the animation completes with a specific tag set on it when it was played.\n\x09 */" },
		{ "CPP_Default_UserTag", "None" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Allows binding to a specific animation's event.\n@param Animation the animation to listen for starting or finishing.\n@param Delegate the delegate to call when the animation's state changes\n@param AnimationEvent the event to watch for.\n@param UserTag Scopes the delegate to only be called when the animation completes with a specific tag set on it when it was played." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "BindToAnimationEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::UserWidget_eventBindToAnimationEvent_Parms), Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_BindToAnimationEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_BindToAnimationEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics
	{
		struct UserWidget_eventBindToAnimationFinished_Parms
		{
			UWidgetAnimation* Animation;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationFinished_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Bind an animation finished delegate.\n\x09 * @param Animation the animation to listen for starting or finishing.\n\x09 * @param Delegate the delegate to call when the animation's state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Bind an animation finished delegate.\n@param Animation the animation to listen for starting or finishing.\n@param Delegate the delegate to call when the animation's state changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "BindToAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::UserWidget_eventBindToAnimationFinished_Parms), Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_BindToAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_BindToAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics
	{
		struct UserWidget_eventBindToAnimationStarted_Parms
		{
			UWidgetAnimation* Animation;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationStarted_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventBindToAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Bind an animation started delegate.\n\x09 * @param Animation the animation to listen for starting or finishing.\n\x09 * @param Delegate the delegate to call when the animation's state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Bind an animation started delegate.\n@param Animation the animation to listen for starting or finishing.\n@param Delegate the delegate to call when the animation's state changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "BindToAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::UserWidget_eventBindToAnimationStarted_Parms), Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_BindToAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_BindToAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09 * Cancels any pending Delays or timer callbacks for this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Cancels any pending Delays or timer callbacks for this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "CancelLatentActions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_CancelLatentActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_CancelLatentActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_Construct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_Construct_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\n\x09 * this event may be called multiple times due to adding and removing from the hierarchy.\n\x09 * If you need a true called-once-when-created event, use OnInitialized.\n\x09 */" },
		{ "Keywords", "Begin Play" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called after the underlying slate widget is constructed.  Depending on how the slate object is used\nthis event may be called multiple times due to adding and removing from the hierarchy.\nIf you need a true called-once-when-created event, use OnInitialized." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_Construct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "Construct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_Construct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_Construct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_Construct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_Construct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_Destruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_Destruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Called when a widget is no longer referenced causing the slate resource to destroyed.  Just like\n\x09 * Construct this event can be called multiple times.\n\x09 */" },
		{ "Keywords", "End Play, Destroy" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a widget is no longer referenced causing the slate resource to destroyed.  Just like\nConstruct this event can be called multiple times." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_Destruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "Destruct", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_Destruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_Destruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_Destruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_Destruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Flushes all animations on all widgets to guarantee that any queued updates are processed before this call returns\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Flushes all animations on all widgets to guarantee that any queued updates are processed before this call returns" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "FlushAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_FlushAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_FlushAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics
	{
		struct UserWidget_eventGetAlignmentInViewport_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetAlignmentInViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetAlignmentInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::UserWidget_eventGetAlignmentInViewport_Parms), Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics
	{
		struct UserWidget_eventGetAnchorsInViewport_Parms
		{
			FAnchors ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetAnchorsInViewport_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) }; // 3429000087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetAnchorsInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::UserWidget_eventGetAnchorsInViewport_Parms), Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics
	{
		struct UserWidget_eventGetAnimationCurrentTime_Parms
		{
			const UWidgetAnimation* InAnimation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetAnimationCurrentTime_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetAnimationCurrentTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Gets the current time of the animation in this widget\n\x09 * \n\x09 * @param The name of the animation to get the current time for\n\x09 * @return the current time of the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Gets the current time of the animation in this widget\n\n@param The name of the animation to get the current time for\n@return the current time of the animation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetAnimationCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::UserWidget_eventGetAnimationCurrentTime_Parms), Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetExtension_Statics
	{
		struct UserWidget_eventGetExtension_Parms
		{
			TSubclassOf<UUserWidgetExtension>  ExtensionType;
			UUserWidgetExtension* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExtensionType;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ExtensionType = { "ExtensionType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetExtension_Parms, ExtensionType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetExtension_Parms, ReturnValue), Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ExtensionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetExtension_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Extension" },
		{ "Comment", "/** Find the first extension of the requested type. */" },
		{ "DeterminesOutputType", "ExtensionType" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Find the first extension of the requested type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::UserWidget_eventGetExtension_Parms), Z_Construct_UFunction_UUserWidget_GetExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetExtensions_Statics
	{
		struct UserWidget_eventGetExtensions_Parms
		{
			TSubclassOf<UUserWidgetExtension>  ExtensionType;
			TArray<UUserWidgetExtension*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExtensionType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ExtensionType = { "ExtensionType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetExtensions_Parms, ExtensionType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetExtensions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ExtensionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Extension" },
		{ "Comment", "/** Find the extensions of the requested type. */" },
		{ "DeterminesOutputType", "ExtensionType" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Find the extensions of the requested type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetExtensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::UserWidget_eventGetExtensions_Parms), Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetExtensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetExtensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics
	{
		struct UserWidget_eventGetIsVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventGetIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventGetIsVisible_Parms), &Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsInViewport instead" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetIsVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::UserWidget_eventGetIsVisible_Parms), Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetIsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetIsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics
	{
		struct UserWidget_eventGetOwningPlayerCameraManager_Parms
		{
			APlayerCameraManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetOwningPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Gets the player camera manager associated with this UI.\n\x09 * @return Gets the owning player camera manager that's owned by the player controller assigned to this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Gets the player camera manager associated with this UI.\n@return Gets the owning player camera manager that's owned by the player controller assigned to this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetOwningPlayerCameraManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::UserWidget_eventGetOwningPlayerCameraManager_Parms), Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics
	{
		struct UserWidget_eventGetOwningPlayerPawn_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventGetOwningPlayerPawn_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Gets the player pawn associated with this UI.\n\x09 * @return Gets the owning player pawn that's owned by the player controller assigned to this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Gets the player pawn associated with this UI.\n@return Gets the owning player pawn that's owned by the player controller assigned to this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "GetOwningPlayerPawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::UserWidget_eventGetOwningPlayerPawn_Parms), Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics
	{
		struct UserWidget_eventIsAnimationPlaying_Parms
		{
			const UWidgetAnimation* InAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventIsAnimationPlaying_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_InAnimation_MetaData)) };
	void Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsAnimationPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsAnimationPlaying_Parms), &Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Gets whether an animation is currently playing on this widget.\n\x09 * \n\x09 * @param InAnimation The animation to check the playback status of\n\x09 * @return True if the animation is currently playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Gets whether an animation is currently playing on this widget.\n\n@param InAnimation The animation to check the playback status of\n@return True if the animation is currently playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsAnimationPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::UserWidget_eventIsAnimationPlaying_Parms), Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsAnimationPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsAnimationPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics
	{
		struct UserWidget_eventIsAnimationPlayingForward_Parms
		{
			const UWidgetAnimation* InAnimation;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventIsAnimationPlayingForward_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_InAnimation_MetaData)) };
	void Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsAnimationPlayingForward_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsAnimationPlayingForward_Parms), &Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * returns true if the animation is currently playing forward, false otherwise.\n\x09 *\n\x09 * @param InAnimation The playing animation that we want to know about\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "returns true if the animation is currently playing forward, false otherwise.\n\n@param InAnimation The playing animation that we want to know about" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsAnimationPlayingForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::UserWidget_eventIsAnimationPlayingForward_Parms), Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics
	{
		struct UserWidget_eventIsAnyAnimationPlaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsAnyAnimationPlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsAnyAnimationPlaying_Parms), &Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * @return True if any animation is currently playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "@return True if any animation is currently playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsAnyAnimationPlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::UserWidget_eventIsAnyAnimationPlaying_Parms), Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsInteractable_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsInteractable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsInteractable_Parms), &Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface | Interaction" },
		{ "Comment", "/**\n\x09 * Gets a value indicating if the widget is interactive.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Gets a value indicating if the widget is interactive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsInteractable", nullptr, nullptr, sizeof(UserWidget_eventIsInteractable_Parms), Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsInteractable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsInteractable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics
	{
		struct UserWidget_eventIsListeningForInputAction_Parms
		{
			FName ActionName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventIsListeningForInputAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsListeningForInputAction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsListeningForInputAction_Parms), &Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Checks if the action has a registered callback with the input component.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Checks if the action has a registered callback with the input component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsListeningForInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::UserWidget_eventIsListeningForInputAction_Parms), Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsListeningForInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsListeningForInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics
	{
		struct UserWidget_eventIsPlayingAnimation_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventIsPlayingAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventIsPlayingAnimation_Parms), &Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/** Are we currently playing any animations? */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Are we currently playing any animations?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "IsPlayingAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::UserWidget_eventIsPlayingAnimation_Parms), Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_IsPlayingAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_IsPlayingAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics
	{
		struct UserWidget_eventListenForInputAction_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> EventType;
			bool bConsume;
			FScriptDelegate Callback;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
		static void NewProp_bConsume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsume;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Callback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventListenForInputAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventListenForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) }; // 1054153585
	void Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_bConsume_SetBit(void* Obj)
	{
		((UserWidget_eventListenForInputAction_Parms*)Obj)->bConsume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_bConsume = { "bConsume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventListenForInputAction_Parms), &Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_bConsume_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_Callback = { "Callback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventListenForInputAction_Parms, Callback), Z_Construct_UDelegateFunction_UMG_OnInputAction__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1587436050
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_EventType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_bConsume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::NewProp_Callback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\n\x09 * that we're not currently in UI-Only Input Mode.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and\nthat we're not currently in UI-Only Input Mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "ListenForInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::UserWidget_eventListenForInputAction_Parms), Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_ListenForInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_ListenForInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFocusEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::NewProp_InFocusEvent = { "InFocusEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAddedToFocusPath_Parms, InFocusEvent), Z_Construct_UScriptStruct_FFocusEvent, METADATA_PARAMS(nullptr, 0) }; // 1366461117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::NewProp_InFocusEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If focus is gained on on this widget or on a child widget and this widget is added\n\x09 * to the focus path, and wasn't previously part of it, this event is called.\n\x09 *\n\x09 * @param  InFocusEvent  FocusEvent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "If focus is gained on on this widget or on a child widget and this widget is added\nto the focus path, and wasn't previously part of it, this event is called.\n\n@param  InFocusEvent  FocusEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnAddedToFocusPath", nullptr, nullptr, sizeof(UserWidget_eventOnAddedToFocusPath_Parms), Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAnalogInputEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAnalogValueChanged_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_InAnalogInputEvent = { "InAnalogInputEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAnalogValueChanged_Parms, InAnalogInputEvent), Z_Construct_UScriptStruct_FAnalogInputEvent, METADATA_PARAMS(nullptr, 0) }; // 4262370743
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAnalogValueChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_InAnalogInputEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09* Called when an analog value changes on a button that supports analog\n\x09*\n\x09* @param MyGeometry The Geometry of the widget receiving the event\n\x09* @param  InAnalogInputEvent  Analog Event\n\x09* @return  Returns whether the event was handled, along with other possible actions\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when an analog value changes on a button that supports analog\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param  InAnalogInputEvent  Analog Event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnAnalogValueChanged", nullptr, nullptr, sizeof(UserWidget_eventOnAnalogValueChanged_Parms), Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAnimationFinished_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Called when an animation has either played all the way through or is stopped\n\x09 *\n\x09 * @param Animation The animation that has finished playing\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when an animation has either played all the way through or is stopped\n\n@param Animation The animation that has finished playing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnAnimationFinished", nullptr, nullptr, sizeof(UserWidget_eventOnAnimationFinished_Parms), Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnAnimationStarted_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Called when an animation is started.\n\x09 *\n\x09 * @param Animation the animation that started\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when an animation is started.\n\n@param Animation the animation that started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnAnimationStarted", nullptr, nullptr, sizeof(UserWidget_eventOnAnimationStarted_Parms), Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C08, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragCancelled_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_PointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_PointerEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragCancelled_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called when the user cancels the drag operation, typically when they simply release the mouse button after\n\x09 * beginning a drag operation, but failing to complete the drag.\n\x09 *\n\x09 * @param  PointerEvent  Last mouse event from when the drag was canceled.\n\x09 * @param  Operation     The drag operation that was canceled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when the user cancels the drag operation, typically when they simply release the mouse button after\nbeginning a drag operation, but failing to complete the drag.\n\n@param  PointerEvent  Last mouse event from when the drag was canceled.\n@param  Operation     The drag operation that was canceled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDragCancelled", nullptr, nullptr, sizeof(UserWidget_eventOnDragCancelled_Parms), Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDragCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDragCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragDetected_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_PointerEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragDetected_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_PointerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_PointerEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragDetected_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called when Slate detects that a widget started to be dragged.\n\x09 *\n\x09 * @param  InMyGeometry  Widget geometry\n\x09 * @param  PointerEvent  MouseMove that triggered the drag\n\x09 * @param  Operation     The drag operation that was detected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when Slate detects that a widget started to be dragged.\n\n@param  InMyGeometry  Widget geometry\n@param  PointerEvent  MouseMove that triggered the drag\n@param  Operation     The drag operation that was detected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDragDetected", nullptr, nullptr, sizeof(UserWidget_eventOnDragDetected_Parms), Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDragDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDragDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragEnter_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragEnter_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(nullptr, 0) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragEnter_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called during drag and drop when the drag enters the widget.\n\x09 *\n\x09 * @param MyGeometry     The geometry of the widget receiving the event.\n\x09 * @param PointerEvent   The mouse event from when the drag entered the widget.\n\x09 * @param Operation      The drag operation that entered the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called during drag and drop when the drag enters the widget.\n\n@param MyGeometry     The geometry of the widget receiving the event.\n@param PointerEvent   The mouse event from when the drag entered the widget.\n@param Operation      The drag operation that entered the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDragEnter", nullptr, nullptr, sizeof(UserWidget_eventOnDragEnter_Parms), Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDragEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDragEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragLeave_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(nullptr, 0) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragLeave_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called during drag and drop when the drag leaves the widget.\n\x09 *\n\x09 * @param PointerEvent   The mouse event from when the drag left the widget.\n\x09 * @param Operation      The drag operation that entered the widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called during drag and drop when the drag leaves the widget.\n\n@param PointerEvent   The mouse event from when the drag left the widget.\n@param Operation      The drag operation that entered the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDragLeave", nullptr, nullptr, sizeof(UserWidget_eventOnDragLeave_Parms), Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDragLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDragLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDragOver_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragOver_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragOver_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(nullptr, 0) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDragOver_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventOnDragOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventOnDragOver_Parms), &Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called during drag and drop when the the mouse is being dragged over a widget.\n\x09 *\n\x09 * @param MyGeometry     The geometry of the widget receiving the event.\n\x09 * @param PointerEvent   The mouse event from when the drag occurred over the widget.\n\x09 * @param Operation      The drag operation over the widget.\n\x09 *\n\x09 * @return 'true' to indicate that you handled the drag over operation.  Returning 'false' will cause the operation to continue to bubble up.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called during drag and drop when the the mouse is being dragged over a widget.\n\n@param MyGeometry     The geometry of the widget receiving the event.\n@param PointerEvent   The mouse event from when the drag occurred over the widget.\n@param Operation      The drag operation over the widget.\n\n@return 'true' to indicate that you handled the drag over operation.  Returning 'false' will cause the operation to continue to bubble up." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDragOver", nullptr, nullptr, sizeof(UserWidget_eventOnDragOver_Parms), Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDragOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDragOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnDrop_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointerEvent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDrop_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_PointerEvent = { "PointerEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDrop_Parms, PointerEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(nullptr, 0) }; // 3180245440
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnDrop_Parms, Operation), Z_Construct_UClass_UDragDropOperation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UserWidget_eventOnDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventOnDrop_Parms), &Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnDrop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_PointerEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_Operation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnDrop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Drag and Drop" },
		{ "Comment", "/**\n\x09 * Called when the user is dropping something onto a widget.  Ends the drag and drop operation, even if no widget handles this.\n\x09 *\n\x09 * @param MyGeometry     The geometry of the widget receiving the event.\n\x09 * @param PointerEvent   The mouse event from when the drag occurred over the widget.\n\x09 * @param Operation      The drag operation over the widget.\n\x09 * \n\x09 * @return 'true' to indicate you handled the drop operation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when the user is dropping something onto a widget.  Ends the drag and drop operation, even if no widget handles this.\n\n@param MyGeometry     The geometry of the widget receiving the event.\n@param PointerEvent   The mouse event from when the drag occurred over the widget.\n@param Operation      The drag operation over the widget.\n\n@return 'true' to indicate you handled the drop operation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnDrop", nullptr, nullptr, sizeof(UserWidget_eventOnDrop_Parms), Z_Construct_UFunction_UUserWidget_OnDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFocusEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::NewProp_InFocusEvent = { "InFocusEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnFocusLost_Parms, InFocusEvent), Z_Construct_UScriptStruct_FFocusEvent, METADATA_PARAMS(nullptr, 0) }; // 1366461117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::NewProp_InFocusEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called when this widget loses focus.  This event does not bubble.\n\x09 *\n\x09 * @param  InFocusEvent  FocusEvent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when this widget loses focus.  This event does not bubble.\n\n@param  InFocusEvent  FocusEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnFocusLost", nullptr, nullptr, sizeof(UserWidget_eventOnFocusLost_Parms), Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnFocusLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnFocusLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFocusEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnFocusReceived_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_InFocusEvent = { "InFocusEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnFocusReceived_Parms, InFocusEvent), Z_Construct_UScriptStruct_FFocusEvent, METADATA_PARAMS(nullptr, 0) }; // 1366461117
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnFocusReceived_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_InFocusEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called when keyboard focus is given to this widget.  This event does not bubble.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param InFocusEvent  FocusEvent\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when keyboard focus is given to this widget.  This event does not bubble.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param InFocusEvent  FocusEvent\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnFocusReceived", nullptr, nullptr, sizeof(UserWidget_eventOnFocusReceived_Parms), Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnFocusReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnFocusReceived_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** \n\x09 * Called once only at game time on non-template instances.\n\x09 * While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\n\x09 * If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called once only at game time on non-template instances.\nWhile Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.\nIf you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InCharacterEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyChar_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_InCharacterEvent = { "InCharacterEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyChar_Parms, InCharacterEvent), Z_Construct_UScriptStruct_FCharacterEvent, METADATA_PARAMS(nullptr, 0) }; // 379286313
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyChar_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_InCharacterEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called after a character is entered while this widget has focus\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param  InCharacterEvent  Character event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called after a character is entered while this widget has focus\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param  InCharacterEvent  Character event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnKeyChar", nullptr, nullptr, sizeof(UserWidget_eventOnKeyChar_Parms), Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnKeyChar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnKeyChar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyDown_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(nullptr, 0) }; // 1482041026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_InKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called after a key (keyboard, controller, ...) is pressed when this widget has focus (this event bubbles if not handled)\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param  InKeyEvent  Key event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called after a key (keyboard, controller, ...) is pressed when this widget has focus (this event bubbles if not handled)\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param  InKeyEvent  Key event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnKeyDown", nullptr, nullptr, sizeof(UserWidget_eventOnKeyDown_Parms), Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnKeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnKeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyUp_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyUp_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(nullptr, 0) }; // 1482041026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnKeyUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_InKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called after a key (keyboard, controller, ...) is released when this widget has focus\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param  InKeyEvent  Key event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called after a key (keyboard, controller, ...) is released when this widget has focus\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param  InKeyEvent  Key event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnKeyUp", nullptr, nullptr, sizeof(UserWidget_eventOnKeyUp_Parms), Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnKeyUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnKeyUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMotionEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMotionDetected_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_InMotionEvent = { "InMotionEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMotionDetected_Parms, InMotionEvent), Z_Construct_UScriptStruct_FMotionEvent, METADATA_PARAMS(nullptr, 0) }; // 2504140278
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMotionDetected_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_InMotionEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when motion is detected (controller or device)\n\x09 * e.g. Someone tilts or shakes their controller.\n\x09 * \n\x09 * @param MyGeometry    The geometry of the widget receiving the event.\n\x09 * @param MotionEvent\x09The motion event generated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when motion is detected (controller or device)\ne.g. Someone tilts or shakes their controller.\n\n@param MyGeometry    The geometry of the widget receiving the event.\n@param MotionEvent   The motion event generated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMotionDetected", nullptr, nullptr, sizeof(UserWidget_eventOnMotionDetected_Parms), Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMotionDetected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMotionDetected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMyGeometry = { "InMyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDoubleClick_Parms, InMyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMouseEvent = { "InMouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDoubleClick_Parms, InMouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDoubleClick_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_InMouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * Called when a mouse button is double clicked.  Override this in derived classes.\n\x09 *\n\x09 * @param  InMyGeometry  Widget geometry\n\x09 * @param  InMouseEvent  Mouse button event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a mouse button is double clicked.  Override this in derived classes.\n\n@param  InMyGeometry  Widget geometry\n@param  InMouseEvent  Mouse button event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseButtonDoubleClick", nullptr, nullptr, sizeof(UserWidget_eventOnMouseButtonDoubleClick_Parms), Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDown_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * The system calls this method to notify the widget that a mouse button was pressed within it. This event is bubbled.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param MouseEvent Information about the input event\n\x09 * @return Whether the event was handled along with possible requests for the system to take action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The system calls this method to notify the widget that a mouse button was pressed within it. This event is bubbled.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param MouseEvent Information about the input event\n@return Whether the event was handled along with possible requests for the system to take action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseButtonDown", nullptr, nullptr, sizeof(UserWidget_eventOnMouseButtonDown_Parms), Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonUp_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonUp_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseButtonUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * The system calls this method to notify the widget that a mouse button was release within it. This event is bubbled.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param MouseEvent Information about the input event\n\x09 * @return Whether the event was handled along with possible requests for the system to take action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The system calls this method to notify the widget that a mouse button was release within it. This event is bubbled.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param MouseEvent Information about the input event\n@return Whether the event was handled along with possible requests for the system to take action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseButtonUp", nullptr, nullptr, sizeof(UserWidget_eventOnMouseButtonUp_Parms), Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseButtonUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseButtonUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when mouse capture is lost if it was owned by this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when mouse capture is lost if it was owned by this widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseCaptureLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseEnter_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseEnter_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::NewProp_MouseEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param MouseEvent Information about the input event\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param MouseEvent Information about the input event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseEnter", nullptr, nullptr, sizeof(UserWidget_eventOnMouseEnter_Parms), Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseLeave_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::NewProp_MouseEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * The system will use this event to notify a widget that the cursor has left it. This event is NOT bubbled.\n\x09 *\n\x09 * @param MouseEvent Information about the input event\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The system will use this event to notify a widget that the cursor has left it. This event is NOT bubbled.\n\n@param MouseEvent Information about the input event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseLeave", nullptr, nullptr, sizeof(UserWidget_eventOnMouseLeave_Parms), Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseMove_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseMove_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseMove_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * The system calls this method to notify the widget that a mouse moved within it. This event is bubbled.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param MouseEvent Information about the input event\n\x09 * @return Whether the event was handled along with possible requests for the system to take action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The system calls this method to notify the widget that a mouse moved within it. This event is bubbled.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param MouseEvent Information about the input event\n@return Whether the event was handled along with possible requests for the system to take action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseMove", nullptr, nullptr, sizeof(UserWidget_eventOnMouseMove_Parms), Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseWheel_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseWheel_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnMouseWheel_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * Called when the mouse wheel is spun. This event is bubbled.\n\x09 *\n\x09 * @param  MouseEvent  Mouse event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when the mouse wheel is spun. This event is bubbled.\n\n@param  MouseEvent  Mouse event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnMouseWheel", nullptr, nullptr, sizeof(UserWidget_eventOnMouseWheel_Parms), Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnMouseWheel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnMouseWheel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnPaint_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPaint_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPaint_Parms, Context), Z_Construct_UScriptStruct_FPaintContext, METADATA_PARAMS(nullptr, 0) }; // 2207669548
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnPaint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPaint_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnPaint_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface | Painting" },
		{ "Comment", "/**\n\x09 * \n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnPaint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnPaint", nullptr, nullptr, sizeof(UserWidget_eventOnPaint_Parms), Z_Construct_UFunction_UUserWidget_OnPaint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPaint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnPaint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPaint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnPaint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnPaint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InKeyEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewKeyDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_InKeyEvent = { "InKeyEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewKeyDown_Parms, InKeyEvent), Z_Construct_UScriptStruct_FKeyEvent, METADATA_PARAMS(nullptr, 0) }; // 1482041026
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewKeyDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_InKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Called after a key (keyboard, controller, ...) is pressed when this widget or a child of this widget has focus\n\x09 * If a widget handles this event, OnKeyDown will *not* be passed to the focused widget.\n\x09 *\n\x09 * This event is primarily to allow parent widgets to consume an event before a child widget processes\n\x09 * it and it should be used only when there is no better design alternative.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param  InKeyEvent  Key event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called after a key (keyboard, controller, ...) is pressed when this widget or a child of this widget has focus\nIf a widget handles this event, OnKeyDown will *not* be passed to the focused widget.\n\nThis event is primarily to allow parent widgets to consume an event before a child widget processes\nit and it should be used only when there is no better design alternative.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param  InKeyEvent  Key event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnPreviewKeyDown", nullptr, nullptr, sizeof(UserWidget_eventOnPreviewKeyDown_Parms), Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewMouseButtonDown_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MouseEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MouseEvent = { "MouseEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewMouseButtonDown_Parms, MouseEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MouseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MouseEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnPreviewMouseButtonDown_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_MouseEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "Comment", "/**\n\x09 * Just like OnMouseButtonDown, but tunnels instead of bubbling.\n\x09 * If this event is handled, OnMouseButtonDown will not be sent.\n\x09 * \n\x09 * Use this event sparingly as preview events generally make UIs more\n\x09 * difficult to reason about.\n\x09 *\n\x09 * @param MyGeometry The Geometry of the widget receiving the event\n\x09 * @param MouseEvent Information about the input event\n\x09 * @return Whether the event was handled along with possible requests for the system to take action.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Just like OnMouseButtonDown, but tunnels instead of bubbling.\nIf this event is handled, OnMouseButtonDown will not be sent.\n\nUse this event sparingly as preview events generally make UIs more\ndifficult to reason about.\n\n@param MyGeometry The Geometry of the widget receiving the event\n@param MouseEvent Information about the input event\n@return Whether the event was handled along with possible requests for the system to take action." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnPreviewMouseButtonDown", nullptr, nullptr, sizeof(UserWidget_eventOnPreviewMouseButtonDown_Parms), Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFocusEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::NewProp_InFocusEvent = { "InFocusEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnRemovedFromFocusPath_Parms, InFocusEvent), Z_Construct_UScriptStruct_FFocusEvent, METADATA_PARAMS(nullptr, 0) }; // 1366461117
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::NewProp_InFocusEvent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * If focus is lost on on this widget or on a child widget and this widget is\n\x09 * no longer part of the focus path.\n\x09 *\n\x09 * @param  InFocusEvent  FocusEvent\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "If focus is lost on on this widget or on a child widget and this widget is\nno longer part of the focus path.\n\n@param  InFocusEvent  FocusEvent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnRemovedFromFocusPath", nullptr, nullptr, sizeof(UserWidget_eventOnRemovedFromFocusPath_Parms), Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTouchEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTouchEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchEnded_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_InTouchEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_InTouchEvent = { "InTouchEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchEnded_Parms, InTouchEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_InTouchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_InTouchEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchEnded_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_InTouchEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when a touchpad touch is ended (finger lifted)\n\x09 * \n\x09 * @param MyGeometry    The geometry of the widget receiving the event.\n\x09 * @param InTouchEvent\x09The touch event generated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a touchpad touch is ended (finger lifted)\n\n@param MyGeometry    The geometry of the widget receiving the event.\n@param InTouchEvent  The touch event generated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnTouchEnded", nullptr, nullptr, sizeof(UserWidget_eventOnTouchEnded_Parms), Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnTouchEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnTouchEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTouchEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTouchEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchForceChanged_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_InTouchEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_InTouchEvent = { "InTouchEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchForceChanged_Parms, InTouchEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_InTouchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_InTouchEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchForceChanged_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_InTouchEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09* Called when a touchpad force has changed (user pressed down harder or let up)\n\x09*\n\x09* @param MyGeometry    The geometry of the widget receiving the event.\n\x09* @param InTouchEvent\x09The touch event generated\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a touchpad force has changed (user pressed down harder or let up)\n\n@param MyGeometry    The geometry of the widget receiving the event.\n@param InTouchEvent   The touch event generated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnTouchForceChanged", nullptr, nullptr, sizeof(UserWidget_eventOnTouchForceChanged_Parms), Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnTouchForceChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnTouchForceChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GestureEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GestureEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchGesture_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_GestureEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_GestureEvent = { "GestureEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchGesture_Parms, GestureEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_GestureEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_GestureEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchGesture_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_GestureEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when the user performs a gesture on trackpad. This event is bubbled.\n\x09 *\n\x09 * @param MyGeometry     The geometry of the widget receiving the event.\n\x09 * @param  GestureEvent  gesture event\n\x09 * @return  Returns whether the event was handled, along with other possible actions\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when the user performs a gesture on trackpad. This event is bubbled.\n\n@param MyGeometry     The geometry of the widget receiving the event.\n@param  GestureEvent  gesture event\n@return  Returns whether the event was handled, along with other possible actions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnTouchGesture", nullptr, nullptr, sizeof(UserWidget_eventOnTouchGesture_Parms), Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnTouchGesture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnTouchGesture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTouchEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTouchEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchMoved_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_InTouchEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_InTouchEvent = { "InTouchEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchMoved_Parms, InTouchEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_InTouchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_InTouchEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchMoved_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_InTouchEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when a touchpad touch is moved  (finger moved)\n\x09 * \n\x09 * @param MyGeometry    The geometry of the widget receiving the event.\n\x09 * @param InTouchEvent\x09The touch event generated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a touchpad touch is moved  (finger moved)\n\n@param MyGeometry    The geometry of the widget receiving the event.\n@param InTouchEvent  The touch event generated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnTouchMoved", nullptr, nullptr, sizeof(UserWidget_eventOnTouchMoved_Parms), Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnTouchMoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnTouchMoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTouchEvent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTouchEvent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchStarted_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_InTouchEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_InTouchEvent = { "InTouchEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchStarted_Parms, InTouchEvent), Z_Construct_UScriptStruct_FPointerEvent, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_InTouchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_InTouchEvent_MetaData)) }; // 3180245440
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventOnTouchStarted_Parms, ReturnValue), Z_Construct_UScriptStruct_FEventReply, METADATA_PARAMS(nullptr, 0) }; // 2162511330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_InTouchEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Touch Input" },
		{ "Comment", "/**\n\x09 * Called when a touchpad touch is started (finger down)\n\x09 * \n\x09 * @param MyGeometry    The geometry of the widget receiving the event.\n\x09 * @param InTouchEvent\x09The touch event generated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when a touchpad touch is started (finger down)\n\n@param MyGeometry    The geometry of the widget receiving the event.\n@param InTouchEvent  The touch event generated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "OnTouchStarted", nullptr, nullptr, sizeof(UserWidget_eventOnTouchStarted_Parms), Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_OnTouchStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_OnTouchStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics
	{
		struct UserWidget_eventPauseAnimation_Parms
		{
			const UWidgetAnimation* InAnimation;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPauseAnimation_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPauseAnimation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Pauses an already running animation in this widget\n\x09 * \n\x09 * @param The name of the animation to pause\n\x09 * @return the time point the animation was at when it was paused, relative to its start position.  Use this as the StartAtTime when you trigger PlayAnimation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Pauses an already running animation in this widget\n\n@param The name of the animation to pause\n@return the time point the animation was at when it was paused, relative to its start position.  Use this as the StartAtTime when you trigger PlayAnimation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PauseAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::UserWidget_eventPauseAnimation_Parms), Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PauseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PauseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics
	{
		struct UserWidget_eventPlayAnimation_Parms
		{
			UWidgetAnimation* InAnimation;
			float StartAtTime;
			int32 NumLoopsToPlay;
			TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
			float PlaybackSpeed;
			bool bRestoreState;
			UUMGSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, StartAtTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, NumLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) }; // 3644434193
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((UserWidget_eventPlayAnimation_Parms*)Obj)->bRestoreState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventPlayAnimation_Parms), &Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimation_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_StartAtTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_NumLoopsToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_PlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_bRestoreState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Plays an animation in this widget a specified number of times\n\x09 * \n\x09 * @param InAnimation The animation to play\n\x09 * @param StartAtTime The time in the animation from which to start playing, relative to the start position. For looped animations, this will only affect the first playback of the animation.\n\x09 * @param NumLoopsToPlay The number of times to loop this animation (0 to loop indefinitely)\n\x09 * @param PlaybackSpeed The speed at which the animation should play\n\x09 * @param PlayMode Specifies the playback mode\n\x09 * @param bRestoreState Restores widgets to their pre-animated state when the animation stops\n\x09 */" },
		{ "CPP_Default_bRestoreState", "false" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Plays an animation in this widget a specified number of times\n\n@param InAnimation The animation to play\n@param StartAtTime The time in the animation from which to start playing, relative to the start position. For looped animations, this will only affect the first playback of the animation.\n@param NumLoopsToPlay The number of times to loop this animation (0 to loop indefinitely)\n@param PlaybackSpeed The speed at which the animation should play\n@param PlayMode Specifies the playback mode\n@param bRestoreState Restores widgets to their pre-animated state when the animation stops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PlayAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::UserWidget_eventPlayAnimation_Parms), Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics
	{
		struct UserWidget_eventPlayAnimationForward_Parms
		{
			UWidgetAnimation* InAnimation;
			float PlaybackSpeed;
			bool bRestoreState;
			UUMGSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationForward_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationForward_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((UserWidget_eventPlayAnimationForward_Parms*)Obj)->bRestoreState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventPlayAnimationForward_Parms), &Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationForward_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_bRestoreState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Plays an animation on this widget relative to it's current state forward.  You should use this version in situations where\n\x09 * say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding\n\x09 * in the opposite direction.\n\x09 * \n\x09 * @param InAnimation The animation to play\n\x09 * @param PlayMode Specifies the playback mode\n\x09 * @param PlaybackSpeed The speed at which the animation should play\n\x09 * @param bRestoreState Restores widgets to their pre-animated state when the animation stops\n\x09 */" },
		{ "CPP_Default_bRestoreState", "false" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Plays an animation on this widget relative to it's current state forward.  You should use this version in situations where\nsay a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding\nin the opposite direction.\n\n@param InAnimation The animation to play\n@param PlayMode Specifies the playback mode\n@param PlaybackSpeed The speed at which the animation should play\n@param bRestoreState Restores widgets to their pre-animated state when the animation stops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PlayAnimationForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::UserWidget_eventPlayAnimationForward_Parms), Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PlayAnimationForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PlayAnimationForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics
	{
		struct UserWidget_eventPlayAnimationReverse_Parms
		{
			UWidgetAnimation* InAnimation;
			float PlaybackSpeed;
			bool bRestoreState;
			UUMGSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationReverse_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationReverse_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((UserWidget_eventPlayAnimationReverse_Parms*)Obj)->bRestoreState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventPlayAnimationReverse_Parms), &Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationReverse_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_bRestoreState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Plays an animation on this widget relative to it's current state in reverse.  You should use this version in situations where\n\x09 * say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding\n\x09 * in the opposite direction.\n\x09 *\n\x09 * @param InAnimation The animation to play\n\x09 * @param PlayMode Specifies the playback mode\n\x09 * @param PlaybackSpeed The speed at which the animation should play\n\x09 * @param bRestoreState Restores widgets to their pre-animated state when the animation stops\n\x09 */" },
		{ "CPP_Default_bRestoreState", "false" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Plays an animation on this widget relative to it's current state in reverse.  You should use this version in situations where\nsay a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding\nin the opposite direction.\n\n@param InAnimation The animation to play\n@param PlayMode Specifies the playback mode\n@param PlaybackSpeed The speed at which the animation should play\n@param bRestoreState Restores widgets to their pre-animated state when the animation stops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PlayAnimationReverse", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::UserWidget_eventPlayAnimationReverse_Parms), Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PlayAnimationReverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PlayAnimationReverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics
	{
		struct UserWidget_eventPlayAnimationTimeRange_Parms
		{
			UWidgetAnimation* InAnimation;
			float StartAtTime;
			float EndAtTime;
			int32 NumLoopsToPlay;
			TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode;
			float PlaybackSpeed;
			bool bRestoreState;
			UUMGSequencePlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAtTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAtTime;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlayMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static void NewProp_bRestoreState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_StartAtTime = { "StartAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, StartAtTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_EndAtTime = { "EndAtTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, EndAtTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, NumLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_PlayMode = { "PlayMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, PlayMode), Z_Construct_UEnum_UMG_EUMGSequencePlayMode, METADATA_PARAMS(nullptr, 0) }; // 3644434193
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_bRestoreState_SetBit(void* Obj)
	{
		((UserWidget_eventPlayAnimationTimeRange_Parms*)Obj)->bRestoreState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_bRestoreState = { "bRestoreState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventPlayAnimationTimeRange_Parms), &Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_bRestoreState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlayAnimationTimeRange_Parms, ReturnValue), Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_StartAtTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_EndAtTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_NumLoopsToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_PlayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_PlaybackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_bRestoreState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Plays an animation in this widget a specified number of times stopping at a specified time\n\x09 * \n\x09 * @param InAnimation The animation to play\n\x09 * @param StartAtTime The time in the animation from which to start playing, relative to the start position. For looped animations, this will only affect the first playback of the animation.\n\x09 * @param EndAtTime The absolute time in the animation where to stop, this is only considered in the last loop.\n\x09 * @param NumLoopsToPlay The number of times to loop this animation (0 to loop indefinitely)\n\x09 * @param PlayMode Specifies the playback mode\n\x09 * @param PlaybackSpeed The speed at which the animation should play\n\x09 * @param bRestoreState Restores widgets to their pre-animated state when the animation stops\n\x09 */" },
		{ "CPP_Default_bRestoreState", "false" },
		{ "CPP_Default_EndAtTime", "0.000000" },
		{ "CPP_Default_NumLoopsToPlay", "1" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "CPP_Default_PlayMode", "Forward" },
		{ "CPP_Default_StartAtTime", "0.000000" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Plays an animation in this widget a specified number of times stopping at a specified time\n\n@param InAnimation The animation to play\n@param StartAtTime The time in the animation from which to start playing, relative to the start position. For looped animations, this will only affect the first playback of the animation.\n@param EndAtTime The absolute time in the animation where to stop, this is only considered in the last loop.\n@param NumLoopsToPlay The number of times to loop this animation (0 to loop indefinitely)\n@param PlayMode Specifies the playback mode\n@param PlaybackSpeed The speed at which the animation should play\n@param bRestoreState Restores widgets to their pre-animated state when the animation stops" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PlayAnimationTimeRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::UserWidget_eventPlayAnimationTimeRange_Parms), Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PlaySound_Statics
	{
		struct UserWidget_eventPlaySound_Parms
		{
			USoundBase* SoundToPlay;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_PlaySound_Statics::NewProp_SoundToPlay = { "SoundToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventPlaySound_Parms, SoundToPlay), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PlaySound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PlaySound_Statics::NewProp_SoundToPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PlaySound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound" },
		{ "Comment", "/**\n\x09 * Plays a sound through the UI\n\x09 *\n\x09 * @param The sound to play\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the UGameplayStatics::PlaySound2D instead." },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Plays a sound through the UI\n\n@param The sound to play" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PlaySound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_PlaySound_Statics::UserWidget_eventPlaySound_Parms), Z_Construct_UFunction_UUserWidget_PlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_PreConstruct_Statics
	{
		static void NewProp_IsDesignTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDesignTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::NewProp_IsDesignTime_SetBit(void* Obj)
	{
		((UserWidget_eventPreConstruct_Parms*)Obj)->IsDesignTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::NewProp_IsDesignTime = { "IsDesignTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventPreConstruct_Parms), &Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::NewProp_IsDesignTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::NewProp_IsDesignTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\n\x09 * the setup in the designer and since generally that same setup code is required at runtime, it's called there\n\x09 * as well.\n\x09 *\n\x09 * **WARNING**\n\x09 * This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\n\x09 * state, if you call something that doesn't expect to be run at editor time, you may crash the editor.\n\x09 *\n\x09 * In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\n\x09 * PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview\nthe setup in the designer and since generally that same setup code is required at runtime, it's called there\nas well.\n\n**WARNING**\nThis is intended purely for cosmetic updates using locally owned data, you can not safely access any game related\nstate, if you call something that doesn't expect to be run at editor time, you may crash the editor.\n\nIn the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off\nPreConstruct evaluation in the Widget Designer settings in the Editor Preferences." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "PreConstruct", nullptr, nullptr, sizeof(UserWidget_eventPreConstruct_Parms), Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_PreConstruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_PreConstruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * ListenForInputAction will automatically Register an Input Component with the player input system.\n\x09 * If you however, want to Pause and Resume, listening for a set of actions, the best way is to use\n\x09 * UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "ListenForInputAction will automatically Register an Input Component with the player input system.\nIf you however, want to Pause and Resume, listening for a set of actions, the best way is to use\nUnregisterInputComponent to pause, and RegisterInputComponent to resume listening." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "RegisterInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_RegisterInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_RegisterInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics
	{
		struct UserWidget_eventRemoveExtension_Parms
		{
			UUserWidgetExtension* InExtension;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InExtension_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InExtension;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::NewProp_InExtension_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::NewProp_InExtension = { "InExtension", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventRemoveExtension_Parms, InExtension), Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::NewProp_InExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::NewProp_InExtension_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::NewProp_InExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Extension" },
		{ "Comment", "/** Remove the extension. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Remove the extension." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "RemoveExtension", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::UserWidget_eventRemoveExtension_Parms), Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_RemoveExtension()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_RemoveExtension_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics
	{
		struct UserWidget_eventRemoveExtensions_Parms
		{
			TSubclassOf<UUserWidgetExtension>  InExtensionType;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InExtensionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::NewProp_InExtensionType = { "InExtensionType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventRemoveExtensions_Parms, InExtensionType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::NewProp_InExtensionType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Extension" },
		{ "Comment", "/** Remove all extensions of the requested type. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Remove all extensions of the requested type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "RemoveExtensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::UserWidget_eventRemoveExtensions_Parms), Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_RemoveExtensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_RemoveExtensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use RemoveFromParent instead" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "RemoveFromViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_RemoveFromViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_RemoveFromViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics
	{
		struct UserWidget_eventReverseAnimation_Parms
		{
			const UWidgetAnimation* InAnimation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventReverseAnimation_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::NewProp_InAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09* If an animation is playing, this function will reverse the playback.\n\x09*\n\x09* @param InAnimation The playing animation that we want to reverse\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "If an animation is playing, this function will reverse the playback.\n\n@param InAnimation The playing animation that we want to reverse" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "ReverseAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::UserWidget_eventReverseAnimation_Parms), Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_ReverseAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_ReverseAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics
	{
		struct UserWidget_eventSetAlignmentInViewport_Parms
		{
			FVector2D Alignment;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Alignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetAlignmentInViewport_Parms, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::NewProp_Alignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetAlignmentInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::UserWidget_eventSetAlignmentInViewport_Parms), Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics
	{
		struct UserWidget_eventSetAnchorsInViewport_Parms
		{
			FAnchors Anchors;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Anchors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetAnchorsInViewport_Parms, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) }; // 3429000087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::NewProp_Anchors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetAnchorsInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::UserWidget_eventSetAnchorsInViewport_Parms), Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics
	{
		struct UserWidget_eventSetAnimationCurrentTime_Parms
		{
			const UWidgetAnimation* InAnimation;
			float InTime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetAnimationCurrentTime_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetAnimationCurrentTime_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::NewProp_InTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Sets the current time of the animation in this widget. Does not change state.\n\x09 * \n\x09 * @param The name of the animation to get the current time for\n\x09 * @param The current time of the animation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the current time of the animation in this widget. Does not change state.\n\n@param The name of the animation to get the current time for\n@param The current time of the animation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetAnimationCurrentTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::UserWidget_eventSetAnimationCurrentTime_Parms), Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics
	{
		struct UserWidget_eventSetColorAndOpacity_Parms
		{
			FLinearColor InColorAndOpacity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity = { "InColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetColorAndOpacity_Parms, InColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::NewProp_InColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Sets the tint of the widget, this affects all child widgets.\n\x09 * \n\x09 * @param InColorAndOpacity\x09The tint to apply to all child widgets.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the tint of the widget, this affects all child widgets.\n\n@param InColorAndOpacity     The tint to apply to all child widgets." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::UserWidget_eventSetColorAndOpacity_Parms), Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics
	{
		struct UserWidget_eventSetDesiredSizeInViewport_Parms
		{
			FVector2D Size;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetDesiredSizeInViewport_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/*  */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetDesiredSizeInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::UserWidget_eventSetDesiredSizeInViewport_Parms), Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics
	{
		struct UserWidget_eventSetForegroundColor_Parms
		{
			FSlateColor InForegroundColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InForegroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::NewProp_InForegroundColor = { "InForegroundColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetForegroundColor_Parms, InForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(nullptr, 0) }; // 3007839000
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::NewProp_InForegroundColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Sets the foreground color of the widget, this is inherited by sub widgets.  Any color property \n\x09 * that is marked as inherit will use this color.\n\x09 *\n\x09 * @param InForegroundColor\x09The foreground color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the foreground color of the widget, this is inherited by sub widgets.  Any color property\nthat is marked as inherit will use this color.\n\n@param InForegroundColor     The foreground color." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetForegroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::UserWidget_eventSetForegroundColor_Parms), Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetForegroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetForegroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics
	{
		struct UserWidget_eventSetInputActionBlocking_Parms
		{
			bool bShouldBlock;
		};
		static void NewProp_bShouldBlock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBlock;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::NewProp_bShouldBlock_SetBit(void* Obj)
	{
		((UserWidget_eventSetInputActionBlocking_Parms*)Obj)->bShouldBlock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::NewProp_bShouldBlock = { "bShouldBlock", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventSetInputActionBlocking_Parms), &Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::NewProp_bShouldBlock_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::NewProp_bShouldBlock,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetInputActionBlocking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::UserWidget_eventSetInputActionBlocking_Parms), Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetInputActionBlocking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetInputActionBlocking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics
	{
		struct UserWidget_eventSetInputActionPriority_Parms
		{
			int32 NewPriority;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::NewProp_NewPriority = { "NewPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetInputActionPriority_Parms, NewPriority), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::NewProp_NewPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetInputActionPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::UserWidget_eventSetInputActionPriority_Parms), Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetInputActionPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetInputActionPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics
	{
		struct UserWidget_eventSetNumLoopsToPlay_Parms
		{
			const UWidgetAnimation* InAnimation;
			int32 NumLoopsToPlay;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumLoopsToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetNumLoopsToPlay_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_NumLoopsToPlay = { "NumLoopsToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetNumLoopsToPlay_Parms, NumLoopsToPlay), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::NewProp_NumLoopsToPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09* Changes the number of loops to play given a playing animation\n\x09*\n\x09* @param InAnimation The animation that is already playing\n\x09* @param NumLoopsToPlay The number of loops to play. (0 to loop indefinitely)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Changes the number of loops to play given a playing animation\n\n@param InAnimation The animation that is already playing\n@param NumLoopsToPlay The number of loops to play. (0 to loop indefinitely)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetNumLoopsToPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::UserWidget_eventSetNumLoopsToPlay_Parms), Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics
	{
		struct UserWidget_eventSetOwningPlayer_Parms
		{
			APlayerController* LocalPlayerController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::NewProp_LocalPlayerController = { "LocalPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetOwningPlayer_Parms, LocalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::NewProp_LocalPlayerController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "Comment", "/**\n\x09 * Sets the local player associated with this UI via PlayerController reference.\n\x09 * @param LocalPlayerController The PlayerController of the local player you want to be the conceptual owner of this UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the local player associated with this UI via PlayerController reference.\n@param LocalPlayerController The PlayerController of the local player you want to be the conceptual owner of this UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetOwningPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::UserWidget_eventSetOwningPlayer_Parms), Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetPadding_Statics
	{
		struct UserWidget_eventSetPadding_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Sets the padding for the user widget, putting a larger gap between the widget border and it's root widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the padding for the user widget, putting a larger gap between the widget border and it's root widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetPadding_Statics::UserWidget_eventSetPadding_Parms), Z_Construct_UFunction_UUserWidget_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics
	{
		struct UserWidget_eventSetPlaybackSpeed_Parms
		{
			const UWidgetAnimation* InAnimation;
			float PlaybackSpeed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetPlaybackSpeed_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_PlaybackSpeed = { "PlaybackSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetPlaybackSpeed_Parms, PlaybackSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::NewProp_PlaybackSpeed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09* Changes the playback rate of a playing animation\n\x09*\n\x09* @param InAnimation The animation that is already playing\n\x09* @param PlaybackRate Playback rate multiplier (1 is default)\n\x09*/" },
		{ "CPP_Default_PlaybackSpeed", "1.000000" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Changes the playback rate of a playing animation\n\n@param InAnimation The animation that is already playing\n@param PlaybackRate Playback rate multiplier (1 is default)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetPlaybackSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::UserWidget_eventSetPlaybackSpeed_Parms), Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics
	{
		struct UserWidget_eventSetPositionInViewport_Parms
		{
			FVector2D Position;
			bool bRemoveDPIScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_bRemoveDPIScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDPIScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventSetPositionInViewport_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_bRemoveDPIScale_SetBit(void* Obj)
	{
		((UserWidget_eventSetPositionInViewport_Parms*)Obj)->bRemoveDPIScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_bRemoveDPIScale = { "bRemoveDPIScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UserWidget_eventSetPositionInViewport_Parms), &Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_bRemoveDPIScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::NewProp_bRemoveDPIScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Viewport" },
		{ "Comment", "/**\n\x09 * Sets the widgets position in the viewport.\n\x09 * @param Position The 2D position to set the widget to in the viewport.\n\x09 * @param bRemoveDPIScale If you've already calculated inverse DPI, set this to false.  \n\x09 * Otherwise inverse DPI is applied to the position so that when the location is scaled \n\x09 * by DPI, it ends up in the expected position.\n\x09 */" },
		{ "CPP_Default_bRemoveDPIScale", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Sets the widgets position in the viewport.\n@param Position The 2D position to set the widget to in the viewport.\n@param bRemoveDPIScale If you've already calculated inverse DPI, set this to false.\nOtherwise inverse DPI is applied to the position so that when the location is scaled\nby DPI, it ends up in the expected position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "SetPositionInViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::UserWidget_eventSetPositionInViewport_Parms), Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_SetPositionInViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_SetPositionInViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Stop All actively running animations.\n\x09 * \n\x09 * @param The name of the animation to stop\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Stop All actively running animations.\n\n@param The name of the animation to stop" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "StopAllAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_StopAllAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_StopAllAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_StopAnimation_Statics
	{
		struct UserWidget_eventStopAnimation_Parms
		{
			const UWidgetAnimation* InAnimation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::NewProp_InAnimation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventStopAnimation_Parms, InAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::NewProp_InAnimation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::NewProp_InAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface|Animation" },
		{ "Comment", "/**\n\x09 * Stops an already running animation in this widget\n\x09 * \n\x09 * @param The name of the animation to stop\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Stops an already running animation in this widget\n\n@param The name of the animation to stop" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "StopAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::UserWidget_eventStopAnimation_Parms), Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_StopAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_StopAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Delay" },
		{ "Comment", "/**\n\x09* Cancels any pending Delays or timer callbacks for this widget, and stops all active animations on the widget.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Cancels any pending Delays or timer callbacks for this widget, and stops all active animations on the widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "StopAnimationsAndLatentActions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Stops listening to all input actions, and unregisters the input component with the player controller.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Stops listening to all input actions, and unregisters the input component with the player controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "StopListeningForAllInputActions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics
	{
		struct UserWidget_eventStopListeningForInputAction_Parms
		{
			FName ActionName;
			TEnumAsByte<EInputEvent> EventType;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EventType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::NewProp_ActionName = { "ActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventStopListeningForInputAction_Parms, ActionName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventStopListeningForInputAction_Parms, EventType), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(nullptr, 0) }; // 1054153585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::NewProp_ActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::NewProp_EventType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * Removes the binding for a particular action's callback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Removes the binding for a particular action's callback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "StopListeningForInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::UserWidget_eventStopListeningForInputAction_Parms), Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_StopListeningForInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_StopListeningForInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_Tick_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyGeometry;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserWidget_Tick_Statics::NewProp_MyGeometry = { "MyGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventTick_Parms, MyGeometry), Z_Construct_UScriptStruct_FGeometry, METADATA_PARAMS(nullptr, 0) }; // 1967684469
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUserWidget_Tick_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventTick_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_Tick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_Tick_Statics::NewProp_MyGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_Tick_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Ticks this widget.  Override in derived classes, but always call the parent implementation.\n\x09 *\n\x09 * @param  MyGeometry The space allotted for this widget\n\x09 * @param  InDeltaTime  Real time passed since last tick\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Ticks this widget.  Override in derived classes, but always call the parent implementation.\n\n@param  MyGeometry The space allotted for this widget\n@param  InDeltaTime  Real time passed since last tick" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "Tick", nullptr, nullptr, sizeof(UserWidget_eventTick_Parms), Z_Construct_UFunction_UUserWidget_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics
	{
		struct UserWidget_eventUnbindAllFromAnimationFinished_Parms
		{
			UWidgetAnimation* Animation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindAllFromAnimationFinished_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "UnbindAllFromAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::UserWidget_eventUnbindAllFromAnimationFinished_Parms), Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics
	{
		struct UserWidget_eventUnbindAllFromAnimationStarted_Parms
		{
			UWidgetAnimation* Animation;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindAllFromAnimationStarted_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::NewProp_Animation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "UnbindAllFromAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::UserWidget_eventUnbindAllFromAnimationStarted_Parms), Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics
	{
		struct UserWidget_eventUnbindFromAnimationFinished_Parms
		{
			UWidgetAnimation* Animation;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindFromAnimationFinished_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindFromAnimationFinished_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Unbind an animation finished delegate.\n\x09 * @param Animation the animation to listen for starting or finishing.\n\x09 * @param Delegate the delegate to call when the animation's state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Unbind an animation finished delegate.\n@param Animation the animation to listen for starting or finishing.\n@param Delegate the delegate to call when the animation's state changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "UnbindFromAnimationFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::UserWidget_eventUnbindFromAnimationFinished_Parms), Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics
	{
		struct UserWidget_eventUnbindFromAnimationStarted_Parms
		{
			UWidgetAnimation* Animation;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindFromAnimationStarted_Parms, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserWidget_eventUnbindFromAnimationStarted_Parms, Delegate), Z_Construct_UDelegateFunction_UMG_WidgetAnimationDynamicEvent__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 2583291704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Unbind an animation started delegate.\n\x09 * @param Animation the animation to listen for starting or finishing.\n\x09 * @param Delegate the delegate to call when the animation's state changes\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Unbind an animation started delegate.\n@param Animation the animation to listen for starting or finishing.\n@param Delegate the delegate to call when the animation's state changes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "UnbindFromAnimationStarted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::UserWidget_eventUnbindFromAnimationStarted_Parms), Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Input" },
		{ "Comment", "/**\n\x09 * StopListeningForAllInputActions will automatically Register an Input Component with the player input system.\n\x09 * If you however, want to Pause and Resume, listening for a set of actions, the best way is to use\n\x09 * UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "StopListeningForAllInputActions will automatically Register an Input Component with the player input system.\nIf you however, want to Pause and Resume, listening for a set of actions, the best way is to use\nUnregisterInputComponent to pause, and RegisterInputComponent to resume listening." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserWidget, nullptr, "UnregisterInputComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserWidget_UnregisterInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserWidget_UnregisterInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidget);
	UClass* Z_Construct_UClass_UUserWidget_NoRegister()
	{
		return UUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacityDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ColorAndOpacityDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ForegroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForegroundColorDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ForegroundColorDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVisibilityChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVisibilityChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFocusable_MetaData[];
#endif
		static void NewProp_bIsFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFocusable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopAction_MetaData[];
#endif
		static void NewProp_bStopAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAction;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveSequencePlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSequencePlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveSequencePlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationTickManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimationTickManager;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StoppedSequencePlayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoppedSequencePlayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StoppedSequencePlayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedSlotBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedSlotBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedSlotBindings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetTree;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignTimeSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesignTimeSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DesignSizeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignSizeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DesignSizeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PaletteCategory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBackground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewBackground;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasScriptImplementedTick_MetaData[];
#endif
		static void NewProp_bHasScriptImplementedTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasScriptImplementedTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasScriptImplementedPaint_MetaData[];
#endif
		static void NewProp_bHasScriptImplementedPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasScriptImplementedPaint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickFrequency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationCallbacks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationCallbacks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationCallbacks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserWidget_AddExtension, "AddExtension" }, // 2736705084
		{ &Z_Construct_UFunction_UUserWidget_AddToPlayerScreen, "AddToPlayerScreen" }, // 4278614153
		{ &Z_Construct_UFunction_UUserWidget_AddToViewport, "AddToViewport" }, // 2736686488
		{ &Z_Construct_UFunction_UUserWidget_BindToAnimationEvent, "BindToAnimationEvent" }, // 4229154474
		{ &Z_Construct_UFunction_UUserWidget_BindToAnimationFinished, "BindToAnimationFinished" }, // 4155254602
		{ &Z_Construct_UFunction_UUserWidget_BindToAnimationStarted, "BindToAnimationStarted" }, // 2117168640
		{ &Z_Construct_UFunction_UUserWidget_CancelLatentActions, "CancelLatentActions" }, // 3802003610
		{ &Z_Construct_UFunction_UUserWidget_Construct, "Construct" }, // 3624249891
		{ &Z_Construct_UFunction_UUserWidget_Destruct, "Destruct" }, // 2099401971
		{ &Z_Construct_UFunction_UUserWidget_FlushAnimations, "FlushAnimations" }, // 115290161
		{ &Z_Construct_UFunction_UUserWidget_GetAlignmentInViewport, "GetAlignmentInViewport" }, // 3110162726
		{ &Z_Construct_UFunction_UUserWidget_GetAnchorsInViewport, "GetAnchorsInViewport" }, // 3560369873
		{ &Z_Construct_UFunction_UUserWidget_GetAnimationCurrentTime, "GetAnimationCurrentTime" }, // 121406602
		{ &Z_Construct_UFunction_UUserWidget_GetExtension, "GetExtension" }, // 389201329
		{ &Z_Construct_UFunction_UUserWidget_GetExtensions, "GetExtensions" }, // 3245797973
		{ &Z_Construct_UFunction_UUserWidget_GetIsVisible, "GetIsVisible" }, // 3093434115
		{ &Z_Construct_UFunction_UUserWidget_GetOwningPlayerCameraManager, "GetOwningPlayerCameraManager" }, // 102628273
		{ &Z_Construct_UFunction_UUserWidget_GetOwningPlayerPawn, "GetOwningPlayerPawn" }, // 2192954054
		{ &Z_Construct_UFunction_UUserWidget_IsAnimationPlaying, "IsAnimationPlaying" }, // 4107969541
		{ &Z_Construct_UFunction_UUserWidget_IsAnimationPlayingForward, "IsAnimationPlayingForward" }, // 2746634054
		{ &Z_Construct_UFunction_UUserWidget_IsAnyAnimationPlaying, "IsAnyAnimationPlaying" }, // 539404468
		{ &Z_Construct_UFunction_UUserWidget_IsInteractable, "IsInteractable" }, // 1301444301
		{ &Z_Construct_UFunction_UUserWidget_IsListeningForInputAction, "IsListeningForInputAction" }, // 1128906231
		{ &Z_Construct_UFunction_UUserWidget_IsPlayingAnimation, "IsPlayingAnimation" }, // 2307834303
		{ &Z_Construct_UFunction_UUserWidget_ListenForInputAction, "ListenForInputAction" }, // 2035257815
		{ &Z_Construct_UFunction_UUserWidget_OnAddedToFocusPath, "OnAddedToFocusPath" }, // 2837085251
		{ &Z_Construct_UFunction_UUserWidget_OnAnalogValueChanged, "OnAnalogValueChanged" }, // 2056779447
		{ &Z_Construct_UFunction_UUserWidget_OnAnimationFinished, "OnAnimationFinished" }, // 2952327402
		{ &Z_Construct_UFunction_UUserWidget_OnAnimationStarted, "OnAnimationStarted" }, // 1194705125
		{ &Z_Construct_UFunction_UUserWidget_OnDragCancelled, "OnDragCancelled" }, // 1387273155
		{ &Z_Construct_UFunction_UUserWidget_OnDragDetected, "OnDragDetected" }, // 112318002
		{ &Z_Construct_UFunction_UUserWidget_OnDragEnter, "OnDragEnter" }, // 481263036
		{ &Z_Construct_UFunction_UUserWidget_OnDragLeave, "OnDragLeave" }, // 524491281
		{ &Z_Construct_UFunction_UUserWidget_OnDragOver, "OnDragOver" }, // 3226469218
		{ &Z_Construct_UFunction_UUserWidget_OnDrop, "OnDrop" }, // 1257007141
		{ &Z_Construct_UFunction_UUserWidget_OnFocusLost, "OnFocusLost" }, // 4236362636
		{ &Z_Construct_UFunction_UUserWidget_OnFocusReceived, "OnFocusReceived" }, // 4165182813
		{ &Z_Construct_UFunction_UUserWidget_OnInitialized, "OnInitialized" }, // 927910132
		{ &Z_Construct_UFunction_UUserWidget_OnKeyChar, "OnKeyChar" }, // 1626482730
		{ &Z_Construct_UFunction_UUserWidget_OnKeyDown, "OnKeyDown" }, // 2194805734
		{ &Z_Construct_UFunction_UUserWidget_OnKeyUp, "OnKeyUp" }, // 2089511087
		{ &Z_Construct_UFunction_UUserWidget_OnMotionDetected, "OnMotionDetected" }, // 2789227214
		{ &Z_Construct_UFunction_UUserWidget_OnMouseButtonDoubleClick, "OnMouseButtonDoubleClick" }, // 1051067417
		{ &Z_Construct_UFunction_UUserWidget_OnMouseButtonDown, "OnMouseButtonDown" }, // 3375900024
		{ &Z_Construct_UFunction_UUserWidget_OnMouseButtonUp, "OnMouseButtonUp" }, // 3198396516
		{ &Z_Construct_UFunction_UUserWidget_OnMouseCaptureLost, "OnMouseCaptureLost" }, // 1594210163
		{ &Z_Construct_UFunction_UUserWidget_OnMouseEnter, "OnMouseEnter" }, // 2665441873
		{ &Z_Construct_UFunction_UUserWidget_OnMouseLeave, "OnMouseLeave" }, // 2469206708
		{ &Z_Construct_UFunction_UUserWidget_OnMouseMove, "OnMouseMove" }, // 1987314103
		{ &Z_Construct_UFunction_UUserWidget_OnMouseWheel, "OnMouseWheel" }, // 3453991729
		{ &Z_Construct_UFunction_UUserWidget_OnPaint, "OnPaint" }, // 4029325305
		{ &Z_Construct_UFunction_UUserWidget_OnPreviewKeyDown, "OnPreviewKeyDown" }, // 2369628918
		{ &Z_Construct_UFunction_UUserWidget_OnPreviewMouseButtonDown, "OnPreviewMouseButtonDown" }, // 3230669152
		{ &Z_Construct_UFunction_UUserWidget_OnRemovedFromFocusPath, "OnRemovedFromFocusPath" }, // 2532903354
		{ &Z_Construct_UFunction_UUserWidget_OnTouchEnded, "OnTouchEnded" }, // 1713349645
		{ &Z_Construct_UFunction_UUserWidget_OnTouchForceChanged, "OnTouchForceChanged" }, // 574534674
		{ &Z_Construct_UFunction_UUserWidget_OnTouchGesture, "OnTouchGesture" }, // 154570306
		{ &Z_Construct_UFunction_UUserWidget_OnTouchMoved, "OnTouchMoved" }, // 745483110
		{ &Z_Construct_UFunction_UUserWidget_OnTouchStarted, "OnTouchStarted" }, // 3229488393
		{ &Z_Construct_UFunction_UUserWidget_PauseAnimation, "PauseAnimation" }, // 2100958324
		{ &Z_Construct_UFunction_UUserWidget_PlayAnimation, "PlayAnimation" }, // 543245183
		{ &Z_Construct_UFunction_UUserWidget_PlayAnimationForward, "PlayAnimationForward" }, // 4235633771
		{ &Z_Construct_UFunction_UUserWidget_PlayAnimationReverse, "PlayAnimationReverse" }, // 3017652862
		{ &Z_Construct_UFunction_UUserWidget_PlayAnimationTimeRange, "PlayAnimationTimeRange" }, // 523509336
		{ &Z_Construct_UFunction_UUserWidget_PlaySound, "PlaySound" }, // 771451162
		{ &Z_Construct_UFunction_UUserWidget_PreConstruct, "PreConstruct" }, // 2775322041
		{ &Z_Construct_UFunction_UUserWidget_RegisterInputComponent, "RegisterInputComponent" }, // 2704272324
		{ &Z_Construct_UFunction_UUserWidget_RemoveExtension, "RemoveExtension" }, // 218203295
		{ &Z_Construct_UFunction_UUserWidget_RemoveExtensions, "RemoveExtensions" }, // 1034290410
		{ &Z_Construct_UFunction_UUserWidget_RemoveFromViewport, "RemoveFromViewport" }, // 1236050371
		{ &Z_Construct_UFunction_UUserWidget_ReverseAnimation, "ReverseAnimation" }, // 3137344792
		{ &Z_Construct_UFunction_UUserWidget_SetAlignmentInViewport, "SetAlignmentInViewport" }, // 2940888879
		{ &Z_Construct_UFunction_UUserWidget_SetAnchorsInViewport, "SetAnchorsInViewport" }, // 3490028429
		{ &Z_Construct_UFunction_UUserWidget_SetAnimationCurrentTime, "SetAnimationCurrentTime" }, // 1093785465
		{ &Z_Construct_UFunction_UUserWidget_SetColorAndOpacity, "SetColorAndOpacity" }, // 1618489408
		{ &Z_Construct_UFunction_UUserWidget_SetDesiredSizeInViewport, "SetDesiredSizeInViewport" }, // 1435031345
		{ &Z_Construct_UFunction_UUserWidget_SetForegroundColor, "SetForegroundColor" }, // 2984781649
		{ &Z_Construct_UFunction_UUserWidget_SetInputActionBlocking, "SetInputActionBlocking" }, // 2627538479
		{ &Z_Construct_UFunction_UUserWidget_SetInputActionPriority, "SetInputActionPriority" }, // 1336302661
		{ &Z_Construct_UFunction_UUserWidget_SetNumLoopsToPlay, "SetNumLoopsToPlay" }, // 245967691
		{ &Z_Construct_UFunction_UUserWidget_SetOwningPlayer, "SetOwningPlayer" }, // 3078384183
		{ &Z_Construct_UFunction_UUserWidget_SetPadding, "SetPadding" }, // 2221806449
		{ &Z_Construct_UFunction_UUserWidget_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 2435368597
		{ &Z_Construct_UFunction_UUserWidget_SetPositionInViewport, "SetPositionInViewport" }, // 3454356326
		{ &Z_Construct_UFunction_UUserWidget_StopAllAnimations, "StopAllAnimations" }, // 1255342849
		{ &Z_Construct_UFunction_UUserWidget_StopAnimation, "StopAnimation" }, // 3848436256
		{ &Z_Construct_UFunction_UUserWidget_StopAnimationsAndLatentActions, "StopAnimationsAndLatentActions" }, // 4025455435
		{ &Z_Construct_UFunction_UUserWidget_StopListeningForAllInputActions, "StopListeningForAllInputActions" }, // 185818974
		{ &Z_Construct_UFunction_UUserWidget_StopListeningForInputAction, "StopListeningForInputAction" }, // 214839468
		{ &Z_Construct_UFunction_UUserWidget_Tick, "Tick" }, // 1013873833
		{ &Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationFinished, "UnbindAllFromAnimationFinished" }, // 1880717851
		{ &Z_Construct_UFunction_UUserWidget_UnbindAllFromAnimationStarted, "UnbindAllFromAnimationStarted" }, // 1081897908
		{ &Z_Construct_UFunction_UUserWidget_UnbindFromAnimationFinished, "UnbindFromAnimationFinished" }, // 3993204048
		{ &Z_Construct_UFunction_UUserWidget_UnbindFromAnimationStarted, "UnbindFromAnimationStarted" }, // 3387208829
		{ &Z_Construct_UFunction_UUserWidget_UnregisterInputComponent, "UnregisterInputComponent" }, // 2972432938
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The user widget is extensible by users through the WidgetBlueprint.\n */" },
		{ "DisableNativeTick", "" },
		{ "DontUseGenericSpawnObject", "True" },
		{ "IncludePath", "Blueprint/UserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The user widget is extensible by users through the WidgetBlueprint." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacity_MetaData[] = {
		{ "BlueprintSetter", "SetColorAndOpacity" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The color and opacity of this widget.  Tints all child widgets. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The color and opacity of this widget.  Tints all child widgets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetColorAndOpacity_WrapperImpl, &UUserWidget::GetColorAndOpacity_WrapperImpl, STRUCT_OFFSET(UUserWidget, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacityDelegate = { "ColorAndOpacityDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, ColorAndOpacityDelegate), Z_Construct_UDelegateFunction_UWidget_GetLinearColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacityDelegate_MetaData)) }; // 2649853791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColor_MetaData[] = {
		{ "BlueprintSetter", "SetForegroundColor" },
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * The foreground color of the widget, this is inherited by sub widgets.  Any color property\n\x09 * that is marked as inherit will use this color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The foreground color of the widget, this is inherited by sub widgets.  Any color property\nthat is marked as inherit will use this color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColor = { "ForegroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetForegroundColor_WrapperImpl, &UUserWidget::GetForegroundColor_WrapperImpl, STRUCT_OFFSET(UUserWidget, ForegroundColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColorDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColorDelegate = { "ForegroundColorDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, ForegroundColorDelegate), Z_Construct_UDelegateFunction_UWidget_GetSlateColor__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColorDelegate_MetaData)) }; // 3609107523
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_OnVisibilityChanged_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "Comment", "/** Called when the visibility has changed */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Called when the visibility has changed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_OnVisibilityChanged = { "OnVisibilityChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, OnVisibilityChanged), Z_Construct_UDelegateFunction_UMG_OnVisibilityChangedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_OnVisibilityChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_OnVisibilityChanged_MetaData)) }; // 816349634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_Padding_MetaData[] = {
		{ "BlueprintSetter", "SetPadding" },
		{ "Category", "Appearance" },
		{ "Comment", "/** The padding area around the content. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The padding area around the content." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetPadding_WrapperImpl, &UUserWidget::GetPadding_WrapperImpl, STRUCT_OFFSET(UUserWidget, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_Priority_MetaData[] = {
		{ "BlueprintSetter", "SetInputActionPriority" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetPriority_WrapperImpl, &UUserWidget::GetPriority_WrapperImpl, STRUCT_OFFSET(UUserWidget, Priority), METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Setting this flag to true, allows this widget to accept focus when clicked, or when navigated to. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Setting this flag to true, allows this widget to accept focus when clicked, or when navigated to." },
	};
#endif
	void Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_SetBit(void* Obj)
	{
		((UUserWidget*)Obj)->bIsFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable = { "bIsFocusable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetbIsFocusable_WrapperImpl, &UUserWidget::GetbIsFocusable_WrapperImpl, sizeof(uint8), sizeof(UUserWidget), &Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_MetaData[] = {
		{ "BlueprintSetter", "SetInputActionBlocking" },
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_SetBit(void* Obj)
	{
		((UUserWidget*)Obj)->bStopAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction = { "bStopAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, &UUserWidget::SetbStopAction_WrapperImpl, &UUserWidget::GetbStopAction_WrapperImpl, sizeof(uint8), sizeof(UUserWidget), &Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers_Inner = { "ActiveSequencePlayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers_MetaData[] = {
		{ "Comment", "/** All the sequence players currently playing */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "All the sequence players currently playing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers = { "ActiveSequencePlayers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, ActiveSequencePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationTickManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationTickManager = { "AnimationTickManager", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, AnimationTickManager), Z_Construct_UClass_UUMGSequenceTickManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationTickManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationTickManager_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers_Inner = { "StoppedSequencePlayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUMGSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers_MetaData[] = {
		{ "Comment", "/** List of sequence players to cache and clean up when safe */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "List of sequence players to cache and clean up when safe" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers = { "StoppedSequencePlayers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, StoppedSequencePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings_Inner = { "NamedSlotBindings", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedSlotBinding, METADATA_PARAMS(nullptr, 0) }; // 137295323
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings_MetaData[] = {
		{ "Comment", "/** Stores the widgets being assigned to named slots */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Stores the widgets being assigned to named slots" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings = { "NamedSlotBindings", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, NamedSlotBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings_MetaData)) }; // 137295323
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidgetExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions_MetaData[] = {
		{ "Comment", "/** The UserWidget extensions */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The UserWidget extensions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "Comment", "/** The widget tree contained inside this user widget initialized by the blueprint */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The widget tree contained inside this user widget initialized by the blueprint" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0014400000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_WidgetTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_WidgetTree_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignTimeSize_MetaData[] = {
		{ "Comment", "/** Stores the design time desired size of the user widget */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "Stores the design time desired size of the user widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignTimeSize = { "DesignTimeSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, DesignTimeSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignTimeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignTimeSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode = { "DesignSizeMode", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, DesignSizeMode), Z_Construct_UEnum_UMG_EDesignPreviewSizeMode, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode_MetaData)) }; // 1910679653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_PaletteCategory_MetaData[] = {
		{ "Comment", "/** The category this widget appears in the palette. */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "The category this widget appears in the palette." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_PaletteCategory = { "PaletteCategory", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, PaletteCategory), METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_PaletteCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_PaletteCategory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_PreviewBackground_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/**\n\x09 * A preview background that you can use when designing the UI to get a sense of scale on the screen.  Use\n\x09 * a texture with a screenshot of your game in it, for example if you were designing a HUD.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "A preview background that you can use when designing the UI to get a sense of scale on the screen.  Use\na texture with a screenshot of your game in it, for example if you were designing a HUD." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_PreviewBackground = { "PreviewBackground", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, PreviewBackground), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_PreviewBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_PreviewBackground_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_MetaData[] = {
		{ "Comment", "/** If a widget has an implemented tick blueprint function */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "If a widget has an implemented tick blueprint function" },
	};
#endif
	void Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_SetBit(void* Obj)
	{
		((UUserWidget*)Obj)->bHasScriptImplementedTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick = { "bHasScriptImplementedTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUserWidget), &Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_MetaData[] = {
		{ "Comment", "/** If a widget has an implemented paint blueprint function */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "If a widget has an implemented paint blueprint function" },
	};
#endif
	void Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_SetBit(void* Obj)
	{
		((UUserWidget*)Obj)->bHasScriptImplementedPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint = { "bHasScriptImplementedPaint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UUserWidget), &Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Performance" },
		{ "Comment", "/**\n\x09 * This widget is allowed to tick. If this is unchecked tick will never be called, animations will not play correctly, and latent actions will not execute.\n\x09 * Uncheck this for performance reasons only\n\x09 */" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
		{ "ToolTip", "This widget is allowed to tick. If this is unchecked tick will never be called, animations will not play correctly, and latent actions will not execute.\nUncheck this for performance reasons only" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency = { "TickFrequency", nullptr, (EPropertyFlags)0x0040000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, TickFrequency), Z_Construct_UEnum_UMG_EWidgetTickFrequency, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency_MetaData)) }; // 2187635387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0024080000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks_Inner = { "AnimationCallbacks", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimationEventBinding, METADATA_PARAMS(nullptr, 0) }; // 109046314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/UserWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks = { "AnimationCallbacks", nullptr, (EPropertyFlags)0x0020088000202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserWidget, AnimationCallbacks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks_MetaData)) }; // 109046314
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ColorAndOpacityDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ForegroundColorDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_OnVisibilityChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_bIsFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_bStopAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_ActiveSequencePlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationTickManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_StoppedSequencePlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_NamedSlotBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_Extensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_WidgetTree,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignTimeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_DesignSizeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_PaletteCategory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_PreviewBackground,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_bHasScriptImplementedPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_TickFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_InputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserWidget_Statics::NewProp_AnimationCallbacks,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUserWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNamedSlotInterface_NoRegister, (int32)VTABLE_OFFSET(UUserWidget, INamedSlotInterface), false },  // 982470384
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidget_Statics::ClassParams = {
		&UUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUserWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidget()
	{
		if (!Z_Registration_Info_UClass_UUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidget.OuterSingleton, Z_Construct_UClass_UUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserWidget.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUserWidget>()
	{
		return UUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidget);
	UUserWidget::~UUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::EnumInfo[] = {
		{ EWidgetTickFrequency_StaticEnum, TEXT("EWidgetTickFrequency"), &Z_Registration_Info_UEnum_EWidgetTickFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2187635387U) },
		{ EWidgetAnimationEvent_StaticEnum, TEXT("EWidgetAnimationEvent"), &Z_Registration_Info_UEnum_EWidgetAnimationEvent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1444873952U) },
		{ EUMGSequencePlayMode_StaticEnum, TEXT("EUMGSequencePlayMode"), &Z_Registration_Info_UEnum_EUMGSequencePlayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3644434193U) },
#if WITH_EDITORONLY_DATA
		{ EDesignPreviewSizeMode_StaticEnum, TEXT("EDesignPreviewSizeMode"), &Z_Registration_Info_UEnum_EDesignPreviewSizeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1910679653U) },
#endif
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ScriptStructInfo[] = {
		{ FAnimationEventBinding::StaticStruct, Z_Construct_UScriptStruct_FAnimationEventBinding_Statics::NewStructOps, TEXT("AnimationEventBinding"), &Z_Registration_Info_UScriptStruct_AnimationEventBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationEventBinding), 109046314U) },
		{ FPaintContext::StaticStruct, Z_Construct_UScriptStruct_FPaintContext_Statics::NewStructOps, TEXT("PaintContext"), &Z_Registration_Info_UScriptStruct_PaintContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaintContext), 2207669548U) },
		{ FNamedSlotBinding::StaticStruct, Z_Construct_UScriptStruct_FNamedSlotBinding_Statics::NewStructOps, TEXT("NamedSlotBinding"), &Z_Registration_Info_UScriptStruct_NamedSlotBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedSlotBinding), 137295323U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidget, UUserWidget::StaticClass, TEXT("UUserWidget"), &Z_Registration_Info_UClass_UUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidget), 2271934129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_3315784133(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_UserWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
