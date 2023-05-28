// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPFullScreenUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPFullScreenUserWidget() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVPWidgetDisplayType;
	static UEnum* EVPWidgetDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("EVPWidgetDisplayType"));
		}
		return Z_Registration_Info_UEnum_EVPWidgetDisplayType.OuterSingleton;
	}
	template<> VPUTILITIES_API UEnum* StaticEnum<EVPWidgetDisplayType>()
	{
		return EVPWidgetDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators[] = {
		{ "EVPWidgetDisplayType::Inactive", (int64)EVPWidgetDisplayType::Inactive },
		{ "EVPWidgetDisplayType::Viewport", (int64)EVPWidgetDisplayType::Viewport },
		{ "EVPWidgetDisplayType::PostProcess", (int64)EVPWidgetDisplayType::PostProcess },
		{ "EVPWidgetDisplayType::Composure", (int64)EVPWidgetDisplayType::Composure },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Composure.Comment", "/** Render to a texture and send to composure. */" },
		{ "Composure.Name", "EVPWidgetDisplayType::Composure" },
		{ "Composure.ToolTip", "Render to a texture and send to composure." },
		{ "Inactive.Comment", "/** Do not display. */" },
		{ "Inactive.Name", "EVPWidgetDisplayType::Inactive" },
		{ "Inactive.ToolTip", "Do not display." },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "PostProcess.Comment", "/** Display as a post process. */" },
		{ "PostProcess.Name", "EVPWidgetDisplayType::PostProcess" },
		{ "PostProcess.ToolTip", "Display as a post process." },
		{ "Viewport.Comment", "/** Display on a game viewport. */" },
		{ "Viewport.Name", "EVPWidgetDisplayType::Viewport" },
		{ "Viewport.ToolTip", "Display on a game viewport." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		"EVPWidgetDisplayType",
		"EVPWidgetDisplayType",
		Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType()
	{
		if (!Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton, Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVPWidgetDisplayType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport;
class UScriptStruct* FVPFullScreenUserWidget_Viewport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_Viewport"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_Viewport>()
{
	return FVPFullScreenUserWidget_Viewport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_Viewport>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		&NewStructOps,
		"VPFullScreenUserWidget_Viewport",
		sizeof(FVPFullScreenUserWidget_Viewport),
		alignof(FVPFullScreenUserWidget_Viewport),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess;
class UScriptStruct* FVPFullScreenUserWidget_PostProcess::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPFullScreenUserWidget_PostProcess"));
	}
	return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPFullScreenUserWidget_PostProcess>()
{
	return FVPFullScreenUserWidget_PostProcess::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessTintColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessTintColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessOpacityFromTexture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessOpacityFromTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetDrawSize_MetaData[];
#endif
		static void NewProp_bWidgetDrawSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetBackgroundColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetBlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetBlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderTargetBlendMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComposureLayerTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComposureLayerTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComposureLayerTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetRenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetRenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPFullScreenUserWidget_PostProcess>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/**\n\x09 * Post process material used to display the widget.\n\x09 * SlateUI [Texture]\n\x09 * TintColorAndOpacity [Vector]\n\x09 * OpacityFromTexture [Scalar]\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Post process material used to display the widget.\nSlateUI [Texture]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial = { "PostProcessMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Tint color and opacity for this component. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Tint color and opacity for this component." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity = { "PostProcessTintColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0). */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture = { "PostProcessOpacityFromTexture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessOpacityFromTexture), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The size of the rendered widget. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The size of the rendered widget." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcess*)Obj)->bWidgetDrawSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize = { "bWidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The size of the rendered widget. */" },
		{ "EditCondition", "bWidgetDrawSize" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The size of the rendered widget." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize = { "WidgetDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, WidgetDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcess*)Obj)->bWindowFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The visibility of the virtual window created to host the widget. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The visibility of the virtual window created to host the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_MetaData)) }; // 2301094419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Register with the viewport for hardware input from the mouse and keyboard. It can and will steal focus from the viewport." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((FVPFullScreenUserWidget_PostProcess*)Obj)->bReceiveHardwareInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPFullScreenUserWidget_PostProcess), &Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The background color of the render target */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The background color of the render target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor = { "RenderTargetBackgroundColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, RenderTargetBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** The blend mode for the widget. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode = { "RenderTargetBlendMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, RenderTargetBlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_MetaData)) }; // 279818417
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_Inner = { "ComposureLayerTargets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** List of composure layers that are expecting to use the WidgetRenderTarget. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "List of composure layers that are expecting to use the WidgetRenderTarget." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets = { "ComposureLayerTargets", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, ComposureLayerTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData[] = {
		{ "Comment", "/** The target to which the user widget is rendered. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The target to which the user widget is rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget = { "WidgetRenderTarget", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, WidgetRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Comment", "/** Post process component used to add the material to the post process chain. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "Post process component used to add the material to the post process chain." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData[] = {
		{ "Comment", "/** The dynamic instance of the material that the render target is attached to. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance = { "PostProcessMaterialInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPFullScreenUserWidget_PostProcess, PostProcessMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessTintColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessOpacityFromTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bWindowFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WindowVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_bReceiveHardwareInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_RenderTargetBlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_ComposureLayerTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_WidgetRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewProp_PostProcessMaterialInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		&NewStructOps,
		"VPFullScreenUserWidget_PostProcess",
		sizeof(FVPFullScreenUserWidget_PostProcess),
		alignof(FVPFullScreenUserWidget_PostProcess),
		Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess()
	{
		if (!Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess.InnerSingleton;
	}
	void UVPFullScreenUserWidget::StaticRegisterNativesUVPFullScreenUserWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPFullScreenUserWidget);
	UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister()
	{
		return UVPFullScreenUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UVPFullScreenUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EditorDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EditorDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GameDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GameDisplayType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PIEDisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PIEDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PIEDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessDisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessDisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPFullScreenUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world.\n */" },
		{ "IncludePath", "VPFullScreenUserWidget.h" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Will set the Widgets on a viewport either by Widgets are first rendered to a render target, then that render target is displayed in the world." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is an editor world. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is an editor world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType = { "EditorDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, EditorDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_MetaData)) }; // 1154763833
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is a game world. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is a game world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType = { "GameDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, GameDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_MetaData)) }; // 1154763833
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The display type when the world is a PIE world. */" },
		{ "DisplayName", "PIE Display Type" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The display type when the world is a PIE world." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType = { "PIEDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, PIEDisplayType), Z_Construct_UEnum_VPUtilities_EVPWidgetDisplayType, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_MetaData)) }; // 1154763833
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData[] = {
		{ "Category", "Viewport" },
		{ "Comment", "/** Behavior when the widget should be display by the slate attached to the viewport. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Behavior when the widget should be display by the slate attached to the viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType = { "ViewportDisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, ViewportDisplayType), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType_MetaData)) }; // 3960440020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData[] = {
		{ "Category", "Post Process" },
		{ "Comment", "/** Behavior when the widget should be display by a post process. */" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Behavior when the widget should be display by a post process." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType = { "PostProcessDisplayType", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, PostProcessDisplayType), Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType_MetaData)) }; // 2187333088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPFullScreenUserWidget.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPFullScreenUserWidget, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_EditorDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_GameDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PIEDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_ViewportDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_PostProcessDisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPFullScreenUserWidget_Statics::NewProp_Widget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPFullScreenUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPFullScreenUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPFullScreenUserWidget_Statics::ClassParams = {
		&UVPFullScreenUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPFullScreenUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPFullScreenUserWidget()
	{
		if (!Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton, Z_Construct_UClass_UVPFullScreenUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPFullScreenUserWidget.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPFullScreenUserWidget>()
	{
		return UVPFullScreenUserWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPFullScreenUserWidget);
	UVPFullScreenUserWidget::~UVPFullScreenUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::EnumInfo[] = {
		{ EVPWidgetDisplayType_StaticEnum, TEXT("EVPWidgetDisplayType"), &Z_Registration_Info_UEnum_EVPWidgetDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1154763833U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ScriptStructInfo[] = {
		{ FVPFullScreenUserWidget_Viewport::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_Viewport_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_Viewport"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_Viewport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_Viewport), 3960440020U) },
		{ FVPFullScreenUserWidget_PostProcess::StaticStruct, Z_Construct_UScriptStruct_FVPFullScreenUserWidget_PostProcess_Statics::NewStructOps, TEXT("VPFullScreenUserWidget_PostProcess"), &Z_Registration_Info_UScriptStruct_VPFullScreenUserWidget_PostProcess, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPFullScreenUserWidget_PostProcess), 2187333088U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPFullScreenUserWidget, UVPFullScreenUserWidget::StaticClass, TEXT("UVPFullScreenUserWidget"), &Z_Registration_Info_UClass_UVPFullScreenUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPFullScreenUserWidget), 3479844472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_2467752388(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPFullScreenUserWidget_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
