// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTouchInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TouchInputControl;
class UScriptStruct* FTouchInputControl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TouchInputControl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TouchInputControl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTouchInputControl, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TouchInputControl"));
	}
	return Z_Registration_Info_UScriptStruct_TouchInputControl.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTouchInputControl>()
{
	return FTouchInputControl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTouchInputControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Image1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Image2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Image2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisualSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisualSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InteractionSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainInputKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MainInputKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AltInputKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AltInputKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTouchInputControl>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, this is the Thumb" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1 = { "Image1", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, Image1), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, this is the Background" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2 = { "Image2", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, Image2), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The center point of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize = { "VisualSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, VisualSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "For sticks, the size of the thumb (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize = { "ThumbSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, ThumbSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The interactive size of the control (if <= 1.0, it's relative to screen, > 1.0 is absolute)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize = { "InteractionSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, InteractionSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The scale for control input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale = { "InputScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, InputScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The main input to send from this control (for sticks, this is the horizontal axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey = { "MainInputKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, MainInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData[] = {
		{ "Category", "Control" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "The alternate input to send from this control (for sticks, this is the vertical axis)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey = { "AltInputKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTouchInputControl, AltInputKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Image2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_VisualSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_ThumbSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InteractionSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_InputScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_MainInputKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewProp_AltInputKey,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTouchInputControl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TouchInputControl",
		sizeof(FTouchInputControl),
		alignof(FTouchInputControl),
		Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTouchInputControl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTouchInputControl()
	{
		if (!Z_Registration_Info_UScriptStruct_TouchInputControl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TouchInputControl.InnerSingleton, Z_Construct_UScriptStruct_FTouchInputControl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TouchInputControl.InnerSingleton;
	}
	void UTouchInterface::StaticRegisterNativesUTouchInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTouchInterface);
	UClass* Z_Construct_UClass_UTouchInterface_NoRegister()
	{
		return UTouchInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTouchInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Controls_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controls_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Controls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InactiveOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InactiveOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUntilDeactive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeUntilDeactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUntilReset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeUntilReset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivationDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivationDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreventRecenter_MetaData[];
#endif
		static void NewProp_bPreventRecenter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreventRecenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartupDelay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTouchInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Defines an interface by which touch input can be controlled using any number of buttons and virtual joysticks\n */" },
		{ "IncludePath", "GameFramework/TouchInterface.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Defines an interface by which touch input can be controlled using any number of buttons and virtual joysticks" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_Inner = { "Controls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTouchInputControl, METADATA_PARAMS(nullptr, 0) }; // 2978520415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls = { "Controls", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, Controls), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_MetaData)) }; // 2978520415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while any control is active" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity = { "ActiveOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, ActiveOpacity), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Opacity (0.0 - 1.0) of all controls while no controls are active" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity = { "InactiveOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, InactiveOpacity), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after user interaction will all controls fade out to Inactive Opacity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive = { "TimeUntilDeactive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, TimeUntilDeactive), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after going inactive will controls reset/recenter themselves (0.0 will disable this feature)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset = { "TimeUntilReset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, TimeUntilReset), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "How long after joystick enabled for touch (0.0 will disable this feature)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay = { "ActivationDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, ActivationDelay), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Whether to prevent joystick re-center" },
	};
#endif
	void Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_SetBit(void* Obj)
	{
		((UTouchInterface*)Obj)->bPreventRecenter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter = { "bPreventRecenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTouchInterface), &Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData[] = {
		{ "Category", "TouchInterface" },
		{ "ModuleRelativePath", "Classes/GameFramework/TouchInterface.h" },
		{ "ToolTip", "Delay at startup before virtual joystick is drawn" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay = { "StartupDelay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTouchInterface, StartupDelay), METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTouchInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_Controls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActiveOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_InactiveOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilDeactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_TimeUntilReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_ActivationDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_bPreventRecenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTouchInterface_Statics::NewProp_StartupDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTouchInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTouchInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTouchInterface_Statics::ClassParams = {
		&UTouchInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTouchInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTouchInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTouchInterface()
	{
		if (!Z_Registration_Info_UClass_UTouchInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTouchInterface.OuterSingleton, Z_Construct_UClass_UTouchInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTouchInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTouchInterface>()
	{
		return UTouchInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTouchInterface);
	UTouchInterface::~UTouchInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ScriptStructInfo[] = {
		{ FTouchInputControl::StaticStruct, Z_Construct_UScriptStruct_FTouchInputControl_Statics::NewStructOps, TEXT("TouchInputControl"), &Z_Registration_Info_UScriptStruct_TouchInputControl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTouchInputControl), 2978520415U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTouchInterface, UTouchInterface::StaticClass, TEXT("UTouchInterface"), &Z_Registration_Info_UClass_UTouchInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTouchInterface), 1823369267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_1094256924(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_TouchInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
