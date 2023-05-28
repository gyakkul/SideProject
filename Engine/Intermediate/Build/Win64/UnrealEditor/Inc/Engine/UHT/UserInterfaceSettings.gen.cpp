// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserInterfaceSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDPICustomScalingRule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EUIScalingRule();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderFocusRule;
	static UEnum* ERenderFocusRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERenderFocusRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERenderFocusRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERenderFocusRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERenderFocusRule"));
		}
		return Z_Registration_Info_UEnum_ERenderFocusRule.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERenderFocusRule>()
	{
		return ERenderFocusRule_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERenderFocusRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enumerators[] = {
		{ "ERenderFocusRule::Always", (int64)ERenderFocusRule::Always },
		{ "ERenderFocusRule::NonPointer", (int64)ERenderFocusRule::NonPointer },
		{ "ERenderFocusRule::NavigationOnly", (int64)ERenderFocusRule::NavigationOnly },
		{ "ERenderFocusRule::Never", (int64)ERenderFocusRule::Never },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Focus Brush will always be rendered for widgets that have user focus. */" },
		{ "Always.Name", "ERenderFocusRule::Always" },
		{ "Always.ToolTip", "Focus Brush will always be rendered for widgets that have user focus." },
		{ "Comment", "/** When to render the Focus Brush for widgets that have user focus. Based on the EFocusCause. */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "NavigationOnly.Comment", "/** Focus Brush will be rendered for widgets that have user focus only if the focus was set by navigation. */" },
		{ "NavigationOnly.Name", "ERenderFocusRule::NavigationOnly" },
		{ "NavigationOnly.ToolTip", "Focus Brush will be rendered for widgets that have user focus only if the focus was set by navigation." },
		{ "Never.Comment", "/** Focus Brush will not be rendered. */" },
		{ "Never.Name", "ERenderFocusRule::Never" },
		{ "Never.ToolTip", "Focus Brush will not be rendered." },
		{ "NonPointer.Comment", "/** Focus Brush will be rendered for widgets that have user focus not set based on pointer causes. */" },
		{ "NonPointer.Name", "ERenderFocusRule::NonPointer" },
		{ "NonPointer.ToolTip", "Focus Brush will be rendered for widgets that have user focus not set based on pointer causes." },
		{ "ToolTip", "When to render the Focus Brush for widgets that have user focus. Based on the EFocusCause." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERenderFocusRule",
		"ERenderFocusRule",
		Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERenderFocusRule()
	{
		if (!Z_Registration_Info_UEnum_ERenderFocusRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderFocusRule.InnerSingleton, Z_Construct_UEnum_Engine_ERenderFocusRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERenderFocusRule.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUIScalingRule;
	static UEnum* EUIScalingRule_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUIScalingRule.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUIScalingRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EUIScalingRule, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EUIScalingRule"));
		}
		return Z_Registration_Info_UEnum_EUIScalingRule.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EUIScalingRule>()
	{
		return EUIScalingRule_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EUIScalingRule_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enumerators[] = {
		{ "EUIScalingRule::ShortestSide", (int64)EUIScalingRule::ShortestSide },
		{ "EUIScalingRule::LongestSide", (int64)EUIScalingRule::LongestSide },
		{ "EUIScalingRule::Horizontal", (int64)EUIScalingRule::Horizontal },
		{ "EUIScalingRule::Vertical", (int64)EUIScalingRule::Vertical },
		{ "EUIScalingRule::ScaleToFit", (int64)EUIScalingRule::ScaleToFit },
		{ "EUIScalingRule::Custom", (int64)EUIScalingRule::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The Side to use when scaling the UI. */" },
		{ "Custom.Comment", "/** Custom - Allows custom rule interpretation. */" },
		{ "Custom.Name", "EUIScalingRule::Custom" },
		{ "Custom.ToolTip", "Custom - Allows custom rule interpretation." },
		{ "Horizontal.Comment", "/** Evaluates the scale curve based on the X axis of the viewport. */" },
		{ "Horizontal.Name", "EUIScalingRule::Horizontal" },
		{ "Horizontal.ToolTip", "Evaluates the scale curve based on the X axis of the viewport." },
		{ "LongestSide.Comment", "/** Evaluates the scale curve based on the longest side of the viewport. */" },
		{ "LongestSide.Name", "EUIScalingRule::LongestSide" },
		{ "LongestSide.ToolTip", "Evaluates the scale curve based on the longest side of the viewport." },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ScaleToFit.Comment", "/** ScaleToFit - Does not use scale curve. Emulates behavior of scale box by using DesignScreenSize and scaling the content relatively to it. */" },
		{ "ScaleToFit.Name", "EUIScalingRule::ScaleToFit" },
		{ "ScaleToFit.ToolTip", "ScaleToFit - Does not use scale curve. Emulates behavior of scale box by using DesignScreenSize and scaling the content relatively to it." },
		{ "ShortestSide.Comment", "/** Evaluates the scale curve based on the shortest side of the viewport. */" },
		{ "ShortestSide.Name", "EUIScalingRule::ShortestSide" },
		{ "ShortestSide.ToolTip", "Evaluates the scale curve based on the shortest side of the viewport." },
		{ "ToolTip", "The Side to use when scaling the UI." },
		{ "Vertical.Comment", "/** Evaluates the scale curve based on the Y axis of the viewport. */" },
		{ "Vertical.Name", "EUIScalingRule::Vertical" },
		{ "Vertical.ToolTip", "Evaluates the scale curve based on the Y axis of the viewport." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EUIScalingRule_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EUIScalingRule",
		"EUIScalingRule",
		Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EUIScalingRule_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EUIScalingRule()
	{
		if (!Z_Registration_Info_UEnum_EUIScalingRule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUIScalingRule.InnerSingleton, Z_Construct_UEnum_Engine_EUIScalingRule_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUIScalingRule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HardwareCursorReference;
class UScriptStruct* FHardwareCursorReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HardwareCursorReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HardwareCursorReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHardwareCursorReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HardwareCursorReference"));
	}
	return Z_Registration_Info_UScriptStruct_HardwareCursorReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHardwareCursorReference>()
{
	return FHardwareCursorReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHardwareCursorReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CursorPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HotSpot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HotSpot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHardwareCursorReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "Comment", "/**\n\x09 * Specify the partial game content path to the hardware cursor.  For example,\n\x09 *   DO:   Slate/DefaultPointer\n\x09 *   DONT: Slate/DefaultPointer.cur\n\x09 *\n\x09 * NOTE: Having a 'Slate' directory in your game content folder will always be cooked, if\n\x09 *       you're trying to decide where to locate these cursor files.\n\x09 * \n\x09 * The hardware cursor system will search for platform specific formats first if you want to \n\x09 * take advantage of those capabilities.\n\x09 *\n\x09 * Windows:\n\x09 *   .ani -> .cur -> .png\n\x09 *\n\x09 * Mac:\n\x09 *   .tiff -> .png\n\x09 *\n\x09 * Linux:\n\x09 *   .png\n\x09 *\n\x09 * Multi-Resolution Png Fallback\n\x09 *  Because there's not a universal multi-resolution format for cursors there's a pattern we look for\n\x09 *  on all platforms where pngs are all that is found instead of cur/ani/tiff.\n\x09 *\n\x09 *    Pointer.png\n\x09 *    Pointer@1.25x.png\n\x09 *    Pointer@1.5x.png\n\x09 *    Pointer@1.75x.png\n\x09 *    Pointer@2x.png\n\x09 *    ...etc\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Specify the partial game content path to the hardware cursor.  For example,\n  DO:   Slate/DefaultPointer\n  DONT: Slate/DefaultPointer.cur\n\nNOTE: Having a 'Slate' directory in your game content folder will always be cooked, if\n      you're trying to decide where to locate these cursor files.\n\nThe hardware cursor system will search for platform specific formats first if you want to\ntake advantage of those capabilities.\n\nWindows:\n  .ani -> .cur -> .png\n\nMac:\n  .tiff -> .png\n\nLinux:\n  .png\n\nMulti-Resolution Png Fallback\n Because there's not a universal multi-resolution format for cursors there's a pattern we look for\n on all platforms where pngs are all that is found instead of cur/ani/tiff.\n\n   Pointer.png\n   Pointer@1.25x.png\n   Pointer@1.5x.png\n   Pointer@1.75x.png\n   Pointer@2x.png\n   ...etc" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath = { "CursorPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHardwareCursorReference, CursorPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData[] = {
		{ "Category", "Hardware Cursor" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * HotSpot needs to be in normalized (0..1) coordinates since it may apply to different resolution images.\n\x09 * NOTE: This HotSpot is only used on formats that do not provide their own hotspot, e.g. Tiff, PNG.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "HotSpot needs to be in normalized (0..1) coordinates since it may apply to different resolution images.\nNOTE: This HotSpot is only used on formats that do not provide their own hotspot, e.g. Tiff, PNG." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot = { "HotSpot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHardwareCursorReference, HotSpot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_CursorPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewProp_HotSpot,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HardwareCursorReference",
		sizeof(FHardwareCursorReference),
		alignof(FHardwareCursorReference),
		Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHardwareCursorReference()
	{
		if (!Z_Registration_Info_UScriptStruct_HardwareCursorReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HardwareCursorReference.InnerSingleton, Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HardwareCursorReference.InnerSingleton;
	}
	void UUserInterfaceSettings::StaticRegisterNativesUUserInterfaceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserInterfaceSettings);
	UClass* Z_Construct_UClass_UUserInterfaceSettings_NoRegister()
	{
		return UUserInterfaceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUserInterfaceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderFocusRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFocusRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderFocusRule;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HardwareCursors_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HardwareCursors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HardwareCursors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HardwareCursors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SoftwareCursors_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SoftwareCursors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftwareCursors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SoftwareCursors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextEditBeamCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextEditBeamCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairsCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CrosshairsCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabHandCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabHandCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrabHandClosedCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrabHandClosedCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlashedCircleCursor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlashedCircleCursor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ApplicationScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UIScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UIScaleRule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomScalingRuleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UIScaleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowHighDPIInGameMode_MetaData[];
#endif
		static void NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowHighDPIInGameMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesignScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesignScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadWidgetsOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadWidgetsOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAuthorizeAutomaticWidgetVariableCreation_MetaData[];
#endif
		static void NewProp_bAuthorizeAutomaticWidgetVariableCreation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAuthorizeAutomaticWidgetVariableCreation;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CursorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CursorClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRuleClassInstance_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_CustomScalingRuleClassInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomScalingRule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomScalingRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserInterfaceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * User Interface settings that control Slate and UMG.\n */" },
		{ "DisplayName", "User Interface" },
		{ "IncludePath", "Engine/UserInterfaceSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "User Interface settings that control Slate and UMG." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData[] = {
		{ "Category", "Focus" },
		{ "Comment", "/**\n\x09 * Rule to determine if we should render the Focus Brush for widgets that have user focus.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Rule to determine if we should render the Focus Brush for widgets that have user focus." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule = { "RenderFocusRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, RenderFocusRule), Z_Construct_UEnum_Engine_ERenderFocusRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_MetaData)) }; // 2413718841
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp = { "HardwareCursors", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHardwareCursorReference, METADATA_PARAMS(nullptr, 0) }; // 683776271
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp = { "HardwareCursors_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) }; // 396763658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData[] = {
		{ "Category", "Hardware Cursors" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors = { "HardwareCursors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, HardwareCursors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_MetaData)) }; // 396763658 683776271
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp = { "SoftwareCursors", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp = { "SoftwareCursors_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) }; // 396763658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData[] = {
		{ "Category", "Software Cursors" },
		{ "MetaClass", "/Script/UMG.UserWidget" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors = { "SoftwareCursors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, SoftwareCursors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_MetaData)) }; // 396763658
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor = { "DefaultCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, DefaultCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor = { "TextEditBeamCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, TextEditBeamCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor = { "CrosshairsCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CrosshairsCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor = { "HandCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, HandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor = { "GrabHandCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor = { "GrabHandClosedCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, GrabHandClosedCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData[] = {
		{ "Comment", "// DEPRECATED 4.16\n" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "DEPRECATED 4.16" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor = { "SlashedCircleCursor", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, SlashedCircleCursor_DEPRECATED), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a \n\x09 * property in your game title, you can modify this underlying value to scale the entire UI.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "An optional application scale to apply on top of the custom scaling rules.  So if you want to expose a\nproperty in your game title, you can modify this underlying value to scale the entire UI." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale = { "ApplicationScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, ApplicationScale), METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * The rule used when trying to decide what scale to apply.\n\x09 */" },
		{ "DisplayName", "DPI Scale Rule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "The rule used when trying to decide what scale to apply." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule = { "UIScaleRule", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleRule), Z_Construct_UEnum_Engine_EUIScalingRule, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_MetaData)) }; // 3103195560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules.\n\x09 */" },
		{ "MetaClass", "/Script/Engine.DPICustomScalingRule" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Set DPI Scale Rule to Custom, and this class will be used instead of any of the built-in rules." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass = { "CustomScalingRuleClass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * Controls how the UI is scaled at different resolutions based on the DPI Scale Rule\n\x09 */" },
		{ "DisplayName", "DPI Curve" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Controls how the UI is scaled at different resolutions based on the DPI Scale Rule" },
		{ "XAxisName", "Resolution" },
		{ "YAxisName", "Scale" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve = { "UIScaleCurve", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, UIScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve_MetaData)) }; // 1477693291
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData[] = {
		{ "Category", "DPI Scaling" },
		{ "Comment", "/**\n\x09 * If true, game window on desktop platforms will be created with high-DPI awareness enabled.\n\x09 * Recommended to be enabled only if the game's UI allows users to modify 3D resolution scaling.\n\x09 */" },
		{ "DisplayName", "Allow High DPI in Game Mode" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If true, game window on desktop platforms will be created with high-DPI awareness enabled.\nRecommended to be enabled only if the game's UI allows users to modify 3D resolution scaling." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bAllowHighDPIInGameMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode = { "bAllowHighDPIInGameMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData[] = {
		{ "Category", "DPI Scaling|Scale To Fit Rule" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Used only with ScaleToFit scaling rule. Defines native resolution for which were source UI textures created. DPI scaling will be 1.0 at this screen resolution. */" },
		{ "DisplayName", "Design Screen Size" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Used only with ScaleToFit scaling rule. Defines native resolution for which were source UI textures created. DPI scaling will be 1.0 at this screen resolution." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize = { "DesignScreenSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, DesignScreenSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/**\n\x09 * If false, widget references will be stripped during cook for server builds and not loaded at runtime.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "If false, widget references will be stripped during cook for server builds and not loaded at runtime." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bLoadWidgetsOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer = { "bLoadWidgetsOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation_MetaData[] = {
		{ "Category", "Widgets" },
		{ "Comment", "/** \n\x09 * Setting to authorize or not automatic variable creation.\n\x09 * If true, variables will be created automatically, if the type created allows it. Drawback: it's easier to have a bad data architecture because various blueprint graph will have access to many variables.\n\x09 * If false, variables are never created automatically, and you have to create them manually on a case by case basis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
		{ "ToolTip", "Setting to authorize or not automatic variable creation.\nIf true, variables will be created automatically, if the type created allows it. Drawback: it's easier to have a bad data architecture because various blueprint graph will have access to many variables.\nIf false, variables are never created automatically, and you have to create them manually on a case by case basis." },
	};
#endif
	void Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation_SetBit(void* Obj)
	{
		((UUserInterfaceSettings*)Obj)->bAuthorizeAutomaticWidgetVariableCreation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation = { "bAuthorizeAutomaticWidgetVariableCreation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserInterfaceSettings), &Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner = { "CursorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses = { "CursorClasses", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CursorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance = { "CustomScalingRuleClassInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRuleClassInstance), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/UserInterfaceSettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule = { "CustomScalingRule", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserInterfaceSettings, CustomScalingRule), Z_Construct_UClass_UDPICustomScalingRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_RenderFocusRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HardwareCursors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SoftwareCursors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DefaultCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_TextEditBeamCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CrosshairsCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_HandCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_GrabHandClosedCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_SlashedCircleCursor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_ApplicationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_UIScaleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAllowHighDPIInGameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_DesignScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bLoadWidgetsOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_bAuthorizeAutomaticWidgetVariableCreation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CursorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRuleClassInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserInterfaceSettings_Statics::NewProp_CustomScalingRule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserInterfaceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserInterfaceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams = {
		&UUserInterfaceSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserInterfaceSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserInterfaceSettings()
	{
		if (!Z_Registration_Info_UClass_UUserInterfaceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserInterfaceSettings.OuterSingleton, Z_Construct_UClass_UUserInterfaceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserInterfaceSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UUserInterfaceSettings>()
	{
		return UUserInterfaceSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserInterfaceSettings);
	UUserInterfaceSettings::~UUserInterfaceSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::EnumInfo[] = {
		{ ERenderFocusRule_StaticEnum, TEXT("ERenderFocusRule"), &Z_Registration_Info_UEnum_ERenderFocusRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2413718841U) },
		{ EUIScalingRule_StaticEnum, TEXT("EUIScalingRule"), &Z_Registration_Info_UEnum_EUIScalingRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3103195560U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ScriptStructInfo[] = {
		{ FHardwareCursorReference::StaticStruct, Z_Construct_UScriptStruct_FHardwareCursorReference_Statics::NewStructOps, TEXT("HardwareCursorReference"), &Z_Registration_Info_UScriptStruct_HardwareCursorReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHardwareCursorReference), 683776271U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserInterfaceSettings, UUserInterfaceSettings::StaticClass, TEXT("UUserInterfaceSettings"), &Z_Registration_Info_UClass_UUserInterfaceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserInterfaceSettings), 417821866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_3254407611(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_UserInterfaceSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
