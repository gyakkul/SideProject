// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/VRModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRModeSettings() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UVISettings();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVRModeSettings();
	VREDITOR_API UClass* Z_Construct_UClass_UVRModeSettings_NoRegister();
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EInteractorHand();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractorHand;
	static UEnum* EInteractorHand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInteractorHand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInteractorHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EInteractorHand, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("EInteractorHand"));
		}
		return Z_Registration_Info_UEnum_EInteractorHand.OuterSingleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EInteractorHand>()
	{
		return EInteractorHand_StaticEnum();
	}
	struct Z_Construct_UEnum_VREditor_EInteractorHand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enumerators[] = {
		{ "EInteractorHand::Right", (int64)EInteractorHand::Right },
		{ "EInteractorHand::Left", (int64)EInteractorHand::Left },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enum_MetaDataParams[] = {
		{ "Left.Comment", "/** Left hand */" },
		{ "Left.Name", "EInteractorHand::Left" },
		{ "Left.ToolTip", "Left hand" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "Right.Comment", "/** Right hand */" },
		{ "Right.Name", "EInteractorHand::Right" },
		{ "Right.ToolTip", "Right hand" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VREditor_EInteractorHand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		"EInteractorHand",
		"EInteractorHand",
		Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EInteractorHand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VREditor_EInteractorHand()
	{
		if (!Z_Registration_Info_UEnum_EInteractorHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractorHand.InnerSingleton, Z_Construct_UEnum_VREditor_EInteractorHand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInteractorHand.InnerSingleton;
	}
	void UVRModeSettings::StaticRegisterNativesUVRModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRModeSettings);
	UClass* Z_Construct_UClass_UVRModeSettings_NoRegister()
	{
		return UVRModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVRModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAutoVREditMode_MetaData[];
#endif
		static void NewProp_bEnableAutoVREditMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAutoVREditMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutokeySequences_MetaData[];
#endif
		static void NewProp_bAutokeySequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutokeySequences;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InteractorHand_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorHand_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractorHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWorldMovementGrid_MetaData[];
#endif
		static void NewProp_bShowWorldMovementGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWorldMovementGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWorldMovementPostProcess_MetaData[];
#endif
		static void NewProp_bShowWorldMovementPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWorldMovementPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWorldScaleProgressBar_MetaData[];
#endif
		static void NewProp_bShowWorldScaleProgressBar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWorldScaleProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIBrightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UIBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GizmoScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleClickTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DoubleClickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPressedThreshold_Vive_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerPressedThreshold_Vive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPressedThreshold_Rift_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerPressedThreshold_Rift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InteractorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TeleporterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ModeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVISettings,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Implements the settings for VR Mode.\n*/" },
		{ "IncludePath", "VRModeSettings.h" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Implements the settings for VR Mode." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/**If true, wearing a Vive or Oculus Rift headset will automatically enter VR Editing mode */" },
		{ "DisplayName", "Enable VR Mode Auto-Entry" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "If true, wearing a Vive or Oculus Rift headset will automatically enter VR Editing mode" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bEnableAutoVREditMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode = { "bEnableAutoVREditMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData[] = {
		{ "Category", "Cinematics" },
		{ "Comment", "// Whether or not sequences should be autokeyed\n" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Whether or not sequences should be autokeyed" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bAutokeySequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences = { "bAutokeySequences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Which hand should have the primary interactor laser on it\n" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Which hand should have the primary interactor laser on it" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand = { "InteractorHand", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, InteractorHand), Z_Construct_UEnum_VREditor_EInteractorHand, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_MetaData)) }; // 763281688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData[] = {
		{ "Category", "World Movement" },
		{ "Comment", "/** Show the movement grid for orientation while moving through the world */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Show the movement grid for orientation while moving through the world" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldMovementGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid = { "bShowWorldMovementGrid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData[] = {
		{ "Category", "World Movement" },
		{ "Comment", "/** Dim the surroundings while moving through the world */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Dim the surroundings while moving through the world" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldMovementPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess = { "bShowWorldMovementPostProcess", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "Comment", "/** Display a progress bar while scaling that shows your current scale */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Display a progress bar while scaling that shows your current scale" },
	};
#endif
	void Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_SetBit(void* Obj)
	{
		((UVRModeSettings*)Obj)->bShowWorldScaleProgressBar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar = { "bShowWorldScaleProgressBar", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UVRModeSettings), &Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** Adjusts the brightness of the UI panels */" },
		{ "DisplayName", "UI Panel Brightness" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "Adjusts the brightness of the UI panels" },
		{ "UIMax", "10.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness = { "UIBrightness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, UIBrightness), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData[] = {
		{ "Category", "UI Customization" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The size of the transform gizmo */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The size of the transform gizmo" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale = { "GizmoScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, GizmoScale), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** The maximum time in seconds between two clicks for a double-click to register */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The maximum time in seconds between two clicks for a double-click to register" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime = { "DoubleClickTime", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, DoubleClickTime), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** The amount (between 0-1) you have to depress the Vive controller trigger to register a press */" },
		{ "DisplayName", "Trigger Pressed Threshold (Vive)" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The amount (between 0-1) you have to depress the Vive controller trigger to register a press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive = { "TriggerPressedThreshold_Vive", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, TriggerPressedThreshold_Vive), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData[] = {
		{ "Category", "Motion Controllers" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
		{ "Comment", "/** The amount (between 0-1) you have to depress the Oculus Touch controller trigger to register a press */" },
		{ "DisplayName", "Trigger Pressed Threshold (Oculus Touch)" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The amount (between 0-1) you have to depress the Oculus Touch controller trigger to register a press" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift = { "TriggerPressedThreshold_Rift", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, TriggerPressedThreshold_Rift), METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Refer to UVREditorMode::InteractorClass, or create a derived mode to override the interactor class." },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass = { "InteractorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, InteractorClass), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Refer to UVREditorMode::TeleporterClass, or create a derived mode to override the teleporter class." },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass = { "TeleporterClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, TeleporterClass), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRModeSettings_Statics::NewProp_ModeClass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The mode extension to use when UnrealEd is in VR mode. Use VREditorMode to get default editor behavior or select a custom mode. */" },
		{ "ModuleRelativePath", "Public/VRModeSettings.h" },
		{ "ToolTip", "The mode extension to use when UnrealEd is in VR mode. Use VREditorMode to get default editor behavior or select a custom mode." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVRModeSettings_Statics::NewProp_ModeClass = { "ModeClass", nullptr, (EPropertyFlags)0x0014000002004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVRModeSettings, ModeClass), Z_Construct_UClass_UVREditorModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_ModeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::NewProp_ModeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVRModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bEnableAutoVREditMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bAutokeySequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldMovementPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_bShowWorldScaleProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_UIBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_GizmoScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_DoubleClickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Vive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TriggerPressedThreshold_Rift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_InteractorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_TeleporterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVRModeSettings_Statics::NewProp_ModeClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRModeSettings_Statics::ClassParams = {
		&UVRModeSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVRModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRModeSettings()
	{
		if (!Z_Registration_Info_UClass_UVRModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRModeSettings.OuterSingleton, Z_Construct_UClass_UVRModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRModeSettings.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVRModeSettings>()
	{
		return UVRModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRModeSettings);
	UVRModeSettings::~UVRModeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::EnumInfo[] = {
		{ EInteractorHand_StaticEnum, TEXT("EInteractorHand"), &Z_Registration_Info_UEnum_EInteractorHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 763281688U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRModeSettings, UVRModeSettings::StaticClass, TEXT("UVRModeSettings"), &Z_Registration_Info_UClass_UVRModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRModeSettings), 956130670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_2948462644(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VRModeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
