// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/UI/Synth2DSliderStyle.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSynth2DSliderStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	SYNTHESIS_API UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle();
	UPackage* Z_Construct_UPackage__Script_Synthesis();
// End Cross Module References

static_assert(std::is_polymorphic<FSynth2DSliderStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FSynth2DSliderStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Synth2DSliderStyle;
class UScriptStruct* FSynth2DSliderStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSynth2DSliderStyle, (UObject*)Z_Construct_UPackage__Script_Synthesis(), TEXT("Synth2DSliderStyle"));
	}
	return Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.OuterSingleton;
}
template<> SYNTHESIS_API UScriptStruct* StaticStruct<FSynth2DSliderStyle>()
{
	return FSynth2DSliderStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledThumbImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledThumbImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBarImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisabledBarImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Represents the appearance of an SSynth2DSlider\n*/" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Represents the appearance of an SSynth2DSlider" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSynth2DSliderStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage = { "NormalThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, NormalThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "// Image to use for the 2D handle\n" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
		{ "ToolTip", "Image to use for the 2D handle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage = { "DisabledThumbImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledThumbImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage = { "NormalBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, NormalBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage = { "DisabledBarImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, DisabledBarImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage = { "BackgroundImage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, BackgroundImage), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/UI/Synth2DSliderStyle.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness = { "BarThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSynth2DSliderStyle, BarThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledThumbImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_NormalBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_DisabledBarImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewProp_BarThickness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Synthesis,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"Synth2DSliderStyle",
		sizeof(FSynth2DSliderStyle),
		alignof(FSynth2DSliderStyle),
		Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSynth2DSliderStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton, Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Synth2DSliderStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics::ScriptStructInfo[] = {
		{ FSynth2DSliderStyle::StaticStruct, Z_Construct_UScriptStruct_FSynth2DSliderStyle_Statics::NewStructOps, TEXT("Synth2DSliderStyle"), &Z_Registration_Info_UScriptStruct_Synth2DSliderStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSynth2DSliderStyle), 1115585648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_3478762073(TEXT("/Script/Synthesis"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Public_UI_Synth2DSliderStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
