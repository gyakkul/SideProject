// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MetasoundEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorSettings();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetasoundEditorSettings_NoRegister();
	METASOUNDEDITOR_API UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection();
	METASOUNDEDITOR_API UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView();
	METASOUNDEDITOR_API UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget();
	METASOUNDEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection;
	static UEnum* EMetasoundActiveAnalyzerEnvelopeDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("EMetasoundActiveAnalyzerEnvelopeDirection"));
		}
		return Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UEnum* StaticEnum<EMetasoundActiveAnalyzerEnvelopeDirection>()
	{
		return EMetasoundActiveAnalyzerEnvelopeDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enumerators[] = {
		{ "EMetasoundActiveAnalyzerEnvelopeDirection::FromSourceOutput", (int64)EMetasoundActiveAnalyzerEnvelopeDirection::FromSourceOutput },
		{ "EMetasoundActiveAnalyzerEnvelopeDirection::FromDestinationInput", (int64)EMetasoundActiveAnalyzerEnvelopeDirection::FromDestinationInput },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enum_MetaDataParams[] = {
		{ "FromDestinationInput.Name", "EMetasoundActiveAnalyzerEnvelopeDirection::FromDestinationInput" },
		{ "FromSourceOutput.Name", "EMetasoundActiveAnalyzerEnvelopeDirection::FromSourceOutput" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		"EMetasoundActiveAnalyzerEnvelopeDirection",
		"EMetasoundActiveAnalyzerEnvelopeDirection",
		Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.InnerSingleton, Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget;
	static UEnum* EMetasoundMemberDefaultWidget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("EMetasoundMemberDefaultWidget"));
		}
		return Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UEnum* StaticEnum<EMetasoundMemberDefaultWidget>()
	{
		return EMetasoundMemberDefaultWidget_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enumerators[] = {
		{ "EMetasoundMemberDefaultWidget::None", (int64)EMetasoundMemberDefaultWidget::None },
		{ "EMetasoundMemberDefaultWidget::Slider", (int64)EMetasoundMemberDefaultWidget::Slider },
		{ "EMetasoundMemberDefaultWidget::RadialSlider", (int64)EMetasoundMemberDefaultWidget::RadialSlider },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "None.Name", "EMetasoundMemberDefaultWidget::None" },
		{ "RadialSlider.DisplayName", "Knob" },
		{ "RadialSlider.Name", "EMetasoundMemberDefaultWidget::RadialSlider" },
		{ "Slider.Name", "EMetasoundMemberDefaultWidget::Slider" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		"EMetasoundMemberDefaultWidget",
		"EMetasoundMemberDefaultWidget",
		Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.InnerSingleton, Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetasoundActiveDetailView;
	static UEnum* EMetasoundActiveDetailView_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundActiveDetailView.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetasoundActiveDetailView.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("EMetasoundActiveDetailView"));
		}
		return Z_Registration_Info_UEnum_EMetasoundActiveDetailView.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UEnum* StaticEnum<EMetasoundActiveDetailView>()
	{
		return EMetasoundActiveDetailView_StaticEnum();
	}
	struct Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enumerators[] = {
		{ "EMetasoundActiveDetailView::Metasound", (int64)EMetasoundActiveDetailView::Metasound },
		{ "EMetasoundActiveDetailView::General", (int64)EMetasoundActiveDetailView::General },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enum_MetaDataParams[] = {
		{ "General.Name", "EMetasoundActiveDetailView::General" },
		{ "Metasound.Name", "EMetasoundActiveDetailView::Metasound" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		"EMetasoundActiveDetailView",
		"EMetasoundActiveDetailView",
		Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView()
	{
		if (!Z_Registration_Info_UEnum_EMetasoundActiveDetailView.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetasoundActiveDetailView.InnerSingleton, Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetasoundActiveDetailView.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings;
class UScriptStruct* FMetasoundAnalyzerAnimationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings, (UObject*)Z_Construct_UPackage__Script_MetasoundEditor(), TEXT("MetasoundAnalyzerAnimationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.OuterSingleton;
}
template<> METASOUNDEDITOR_API UScriptStruct* StaticStruct<FMetasoundAnalyzerAnimationSettings>()
{
	return FMetasoundAnalyzerAnimationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimateConnections_MetaData[];
#endif
		static void NewProp_bAnimateConnections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimateConnections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeWireThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeWireThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnvelopeSpeed;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnvelopeDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnvelopeDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnvelopeDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericWireThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumericWireThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireScalarMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WireScalarMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireScalarMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WireScalarMax;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMetasoundAnalyzerAnimationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "Comment", "/** Whether or not animated connections are enabled. */" },
		{ "DisplayName", "Animate Connections (Beta)" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Whether or not animated connections are enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections_SetBit(void* Obj)
	{
		((FMetasoundAnalyzerAnimationSettings*)Obj)->bAnimateConnections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections = { "bAnimateConnections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMetasoundAnalyzerAnimationSettings), &Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeWireThickness_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Thickness of default envelope analyzer wire thickness when connection analyzer is active. */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Thickness of default envelope analyzer wire thickness when connection analyzer is active." },
		{ "UIMax", "2" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeWireThickness = { "EnvelopeWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, EnvelopeWireThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeWireThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeWireThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeSpeed_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed of default envelope analyzer drawing over wire when connection analyzer is active, where 0 is full visual history (slowest progress) and 1 is no visual history (fastest progress). */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Speed of default envelope analyzer drawing over wire when connection analyzer is active, where 0 is full visual history (slowest progress) and 1 is no visual history (fastest progress)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeSpeed = { "EnvelopeSpeed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, EnvelopeSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeSpeed_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Whether analyzer envelopes draw from a source output (default) or from the destination input. From the destination input may not\n\x09  * give the expected illusion of audio processing flowing left-to-right, but results in a waveform with earlier events on the left\n\x09  * and later on the right (like a traditional timeline with a moving play head). */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Whether analyzer envelopes draw from a source output (default) or from the destination input. From the destination input may not\ngive the expected illusion of audio processing flowing left-to-right, but results in a waveform with earlier events on the left\nand later on the right (like a traditional timeline with a moving play head)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection = { "EnvelopeDirection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, EnvelopeDirection), Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveAnalyzerEnvelopeDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection_MetaData)) }; // 1468011485
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_NumericWireThickness_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Thickness of default numeric analyzer wire thickness when connection analyzer is active. */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Thickness of default numeric analyzer wire thickness when connection analyzer is active." },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_NumericWireThickness = { "NumericWireThickness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, NumericWireThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_NumericWireThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_NumericWireThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMin_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Minimum height scalar of wire signal analyzers (ex. audio, triggers). */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Minimum height scalar of wire signal analyzers (ex. audio, triggers)." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMin = { "WireScalarMin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, WireScalarMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMax_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Maximum height scalar of wire signal analyzers (ex. audio, triggers). */" },
		{ "EditCondition", "bAnimateConnections" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Maximum height scalar of wire signal analyzers (ex. audio, triggers)." },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMax = { "WireScalarMax", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMetasoundAnalyzerAnimationSettings, WireScalarMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMax_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_bAnimateConnections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeWireThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_EnvelopeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_NumericWireThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewProp_WireScalarMax,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
		nullptr,
		&NewStructOps,
		"MetasoundAnalyzerAnimationSettings",
		sizeof(FMetasoundAnalyzerAnimationSettings),
		alignof(FMetasoundAnalyzerAnimationSettings),
		Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.InnerSingleton, Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings.InnerSingleton;
	}
	void UMetasoundEditorSettings::StaticRegisterNativesUMetasoundEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorSettings);
	UClass* Z_Construct_UClass_UMetasoundEditorSettings_NoRegister()
	{
		return UMetasoundEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinMetaSoundPatchInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinMetaSoundPatchInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinMetaSoundPatchInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPinMetaSoundSourceInAssetMenu_MetaData[];
#endif
		static void NewProp_bPinMetaSoundSourceInAssetMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPinMetaSoundSourceInAssetMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAuthor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultAuthor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AudioPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BooleanPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BooleanPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StringPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimePinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TriggerPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTablePinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WaveTablePinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeNodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NativeNodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetReferenceNodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetReferenceNodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputNodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputNodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputNodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableNodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableNodeTitleColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultInputWidgetType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputWidgetType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultInputWidgetType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalyzerAnimationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnalyzerAnimationSettings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetailView_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetailView_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetailView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundEditorSettings.h" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the MetaSound Patch asset type when creating new assets. */" },
		{ "DisplayName", "Pin MetaSound Patch in Asset Menu" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Whether to pin the MetaSound Patch asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu_SetBit(void* Obj)
	{
		((UMetasoundEditorSettings*)Obj)->bPinMetaSoundPatchInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu = { "bPinMetaSoundPatchInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetasoundEditorSettings), &Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu_MetaData[] = {
		{ "Category", "AssetMenu" },
		{ "Comment", "/** Whether to pin the MetaSound Source asset type when creating new assets. */" },
		{ "DisplayName", "Pin MetaSound Source in Asset Menu" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Whether to pin the MetaSound Source asset type when creating new assets." },
	};
#endif
	void Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu_SetBit(void* Obj)
	{
		((UMetasoundEditorSettings*)Obj)->bPinMetaSoundSourceInAssetMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu = { "bPinMetaSoundSourceInAssetMenu", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetasoundEditorSettings), &Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultAuthor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Default author title to use when authoring a new\n\x09  * MetaSound.  If empty, uses machine name by default.\n\x09  */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Default author title to use when authoring a new\nMetaSound.  If empty, uses machine name by default." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultAuthor = { "DefaultAuthor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, DefaultAuthor), METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultAuthor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultAuthor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Default pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Default pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultPinTypeColor = { "DefaultPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, DefaultPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AudioPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Audio pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Audio pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AudioPinTypeColor = { "AudioPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, AudioPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AudioPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AudioPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Boolean pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Boolean pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_BooleanPinTypeColor = { "BooleanPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, BooleanPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_BooleanPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Floating-point pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Floating-point pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_FloatPinTypeColor = { "FloatPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, FloatPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_FloatPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Integer pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Integer pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_IntPinTypeColor = { "IntPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, IntPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_IntPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Object pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Object pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_ObjectPinTypeColor = { "ObjectPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, ObjectPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_ObjectPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** String pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "String pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_StringPinTypeColor = { "StringPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, StringPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_StringPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TimePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Time pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Time pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TimePinTypeColor = { "TimePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, TimePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TimePinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TimePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TriggerPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** Trigger pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Trigger pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TriggerPinTypeColor = { "TriggerPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, TriggerPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TriggerPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TriggerPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_WaveTablePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** WaveTable pin type color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "WaveTable pin type color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_WaveTablePinTypeColor = { "WaveTablePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, WaveTablePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_WaveTablePinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_WaveTablePinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_NativeNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "Comment", "/** Native node class title color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Native node class title color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_NativeNodeTitleColor = { "NativeNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, NativeNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_NativeNodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_NativeNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AssetReferenceNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "Comment", "/** Title color for references to MetaSound assets */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Title color for references to MetaSound assets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AssetReferenceNodeTitleColor = { "AssetReferenceNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, AssetReferenceNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AssetReferenceNodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AssetReferenceNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_InputNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "Comment", "/** Input node title color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Input node title color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_InputNodeTitleColor = { "InputNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, InputNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_InputNodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_InputNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_OutputNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "Comment", "/** Output node title color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Output node title color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_OutputNodeTitleColor = { "OutputNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, OutputNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_OutputNodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_OutputNodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_VariableNodeTitleColor_MetaData[] = {
		{ "Category", "NodeTitleColors" },
		{ "Comment", "/** Variable node title color */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Variable node title color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_VariableNodeTitleColor = { "VariableNodeTitleColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, VariableNodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_VariableNodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_VariableNodeTitleColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Widget type to show on input nodes by default */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Widget type to show on input nodes by default" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType = { "DefaultInputWidgetType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, DefaultInputWidgetType), Z_Construct_UEnum_MetasoundEditor_EMetasoundMemberDefaultWidget, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType_MetaData)) }; // 3347092090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AnalyzerAnimationSettings_MetaData[] = {
		{ "Category", "GraphAnimation" },
		{ "Comment", "/** Settings for visualizing analyzed MetaSound connections */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Settings for visualizing analyzed MetaSound connections" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AnalyzerAnimationSettings = { "AnalyzerAnimationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, AnalyzerAnimationSettings), Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AnalyzerAnimationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AnalyzerAnimationSettings_MetaData)) }; // 2972110869
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView_MetaData[] = {
		{ "Comment", "/** Determines which details view to show in Metasounds Editor */" },
		{ "ModuleRelativePath", "Private/MetasoundEditorSettings.h" },
		{ "ToolTip", "Determines which details view to show in Metasounds Editor" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView = { "DetailView", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundEditorSettings, DetailView), Z_Construct_UEnum_MetasoundEditor_EMetasoundActiveDetailView, METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView_MetaData)) }; // 3293586089
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundPatchInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_bPinMetaSoundSourceInAssetMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultAuthor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AudioPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_BooleanPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_FloatPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_IntPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_ObjectPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_StringPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TimePinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_TriggerPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_WaveTablePinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_NativeNodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AssetReferenceNodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_InputNodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_OutputNodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_VariableNodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DefaultInputWidgetType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_AnalyzerAnimationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundEditorSettings_Statics::NewProp_DetailView,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorSettings_Statics::ClassParams = {
		&UMetasoundEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetasoundEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorSettings.OuterSingleton, Z_Construct_UClass_UMetasoundEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorSettings.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetasoundEditorSettings>()
	{
		return UMetasoundEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorSettings);
	UMetasoundEditorSettings::~UMetasoundEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::EnumInfo[] = {
		{ EMetasoundActiveAnalyzerEnvelopeDirection_StaticEnum, TEXT("EMetasoundActiveAnalyzerEnvelopeDirection"), &Z_Registration_Info_UEnum_EMetasoundActiveAnalyzerEnvelopeDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1468011485U) },
		{ EMetasoundMemberDefaultWidget_StaticEnum, TEXT("EMetasoundMemberDefaultWidget"), &Z_Registration_Info_UEnum_EMetasoundMemberDefaultWidget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3347092090U) },
		{ EMetasoundActiveDetailView_StaticEnum, TEXT("EMetasoundActiveDetailView"), &Z_Registration_Info_UEnum_EMetasoundActiveDetailView, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3293586089U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FMetasoundAnalyzerAnimationSettings::StaticStruct, Z_Construct_UScriptStruct_FMetasoundAnalyzerAnimationSettings_Statics::NewStructOps, TEXT("MetasoundAnalyzerAnimationSettings"), &Z_Registration_Info_UScriptStruct_MetasoundAnalyzerAnimationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMetasoundAnalyzerAnimationSettings), 2972110869U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorSettings, UMetasoundEditorSettings::StaticClass, TEXT("UMetasoundEditorSettings"), &Z_Registration_Info_UClass_UMetasoundEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorSettings), 2492064442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_2724448411(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Private_MetasoundEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
