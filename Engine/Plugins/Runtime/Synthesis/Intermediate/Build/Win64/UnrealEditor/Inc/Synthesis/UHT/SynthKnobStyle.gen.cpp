// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/UI/SynthKnobStyle.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynthKnobStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SYNTHESIS_API UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESynthKnobSize;
	static UEnum* ESynthKnobSize_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Synthesis_ESynthKnobSize, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("ESynthKnobSize"));
		}
		return Z_Registration_Info_UEnum_ESynthKnobSize.OuterSingleton;
	}
	template<> SYNTHESIS_API UEnum* StaticEnum<ESynthKnobSize>()
	{
		return ESynthKnobSize_StaticEnum();
	}
	struct Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enumerators[] = {
		{ "ESynthKnobSize::Medium", (int64)ESynthKnobSize::Medium },
		{ "ESynthKnobSize::Large", (int64)ESynthKnobSize::Large },
		{ "ESynthKnobSize::Count", (int64)ESynthKnobSize::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "ESynthKnobSize::Count" },
		{ "Large.Name", "ESynthKnobSize::Large" },
		{ "Medium.Name", "ESynthKnobSize::Medium" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Synthesis,
		nullptr,
		"ESynthKnobSize",
		"ESynthKnobSize",
		Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Synthesis_ESynthKnobSize()
	{
		if (!Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton, Z_Construct_UEnum_Synthesis_ESynthKnobSize_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESynthKnobSize.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSynthKnobStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSynthKnobStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SynthKnobStyle;
class UScriptStruct* FSynthKnobStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynthKnobStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("SynthKnobStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SynthKnobStyle.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynthKnobStyle>()
{
	return FSynthKnobStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSynthKnobStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeKnob_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LargeKnob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeKnobOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LargeKnobOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumKnob_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediumKnob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediumKnobOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediumKnobOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValueAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValueAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValueAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_KnobSize_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnobSize_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KnobSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents the appearance of an SSynthKnob\n */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynthKnob" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynthKnobStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the large knob" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob = { "LargeKnob", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, LargeKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the dot handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay = { "LargeKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, LargeKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium large knob\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium large knob" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob = { "MediumKnob", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, MediumKnob), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay = { "MediumKnobOverlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, MediumKnobOverlay), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle = { "MinValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, MinValueAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the medium knob dot handle\n" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "Image to use for the medium knob dot handle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle = { "MaxValueAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, MaxValueAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The size of the knobs to use. */" },
		{ "ModuleRelativePath", "Public/UI/SynthKnobStyle.h" },
		{ "ToolTip", "The size of the knobs to use." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize = { "KnobSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynthKnobStyle, KnobSize), Z_Construct_UEnum_Synthesis_ESynthKnobSize, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_MetaData)) }; // 3440365443
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_LargeKnobOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MediumKnobOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MinValueAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_MaxValueAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewProp_KnobSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"SynthKnobStyle",
		sizeof(FSynthKnobStyle),
		alignof(FSynthKnobStyle),
		Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynthKnobStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton, Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SynthKnobStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::EnumInfo[] = {
		{ ESynthKnobSize_StaticEnum, TEXT("ESynthKnobSize"), &Z_Registration_Info_UEnum_ESynthKnobSize, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3440365443U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::ScriptStructInfo[] = {
		{ FSynthKnobStyle::StaticStruct, Z_Construct_UScriptStruct_FSynthKnobStyle_Statics::NewStructOps, TEXT("SynthKnobStyle"), &Z_Registration_Info_UScriptStruct_SynthKnobStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynthKnobStyle), 2666983424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_668010061(TEXT("/Script/Synthesis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_SynthKnobStyle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
