// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CSVtoSVGArguments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSVtoSVGArguments() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	CSVTOSVG_API UClass* Z_Construct_UClass_UCSVtoSVGArugments();
	CSVTOSVG_API UClass* Z_Construct_UClass_UCSVtoSVGArugments_NoRegister();
	CSVTOSVG_API UEnum* Z_Construct_UEnum_CSVtoSVG_ESVGTheme();
	EDITORCONFIG_API UClass* Z_Construct_UClass_UEditorConfigBase();
	UPackage* Z_Construct_UPackage__Script_CSVtoSVG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESVGTheme;
	static UEnum* ESVGTheme_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESVGTheme.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESVGTheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CSVtoSVG_ESVGTheme, (UObject*)Z_Construct_UPackage__Script_CSVtoSVG(), TEXT("ESVGTheme"));
		}
		return Z_Registration_Info_UEnum_ESVGTheme.OuterSingleton;
	}
	template<> CSVTOSVG_API UEnum* StaticEnum<ESVGTheme>()
	{
		return ESVGTheme_StaticEnum();
	}
	struct Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enumerators[] = {
		{ "ESVGTheme::Dark", (int64)ESVGTheme::Dark },
		{ "ESVGTheme::Light", (int64)ESVGTheme::Light },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enum_MetaDataParams[] = {
		{ "Dark.Name", "ESVGTheme::Dark" },
		{ "Light.Name", "ESVGTheme::Light" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CSVtoSVG,
		nullptr,
		"ESVGTheme",
		"ESVGTheme",
		Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CSVtoSVG_ESVGTheme()
	{
		if (!Z_Registration_Info_UEnum_ESVGTheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESVGTheme.InnerSingleton, Z_Construct_UEnum_CSVtoSVG_ESVGTheme_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESVGTheme.InnerSingleton;
	}
	void UCSVtoSVGArugments::StaticRegisterNativesUCSVtoSVGArugments()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSVtoSVGArugments);
	UClass* Z_Construct_UClass_UCSVtoSVGArugments_NoRegister()
	{
		return UCSVtoSVGArugments::StaticClass();
	}
	struct Z_Construct_UClass_UCSVtoSVGArugments_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CSV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CSV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFilename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputFilename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skipRows_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_skipRows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smooth_MetaData[];
#endif
		static void NewProp_smooth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_smooth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smoothKernelSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_smoothKernelSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smoothKernelPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothKernelPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noMetadata_MetaData[];
#endif
		static void NewProp_noMetadata_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_noMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_graphOnly_MetaData[];
#endif
		static void NewProp_graphOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_graphOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_budget_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_budget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_thickness;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_theme_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_theme_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_theme;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stacked_MetaData[];
#endif
		static void NewProp_stacked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_stacked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stacktotalstack_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stacktotalstack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interactive_MetaData[];
#endif
		static void NewProp_interactive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_interactive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showaverages_MetaData[];
#endif
		static void NewProp_showaverages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showaverages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colourOffset_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_colourOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_averageThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_averageThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSVtoSVGArugments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CSVtoSVG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::Class_MetaDataParams[] = {
		{ "EditorConfig", "CSVtoSVG" },
		{ "IncludePath", "CSVtoSVGArguments.h" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_CSV_MetaData[] = {
		{ "Category", "RequiredArguments" },
		{ "DisplayName", "CSV" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Specifies a list of CSVs separated by spaces" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_CSV = { "CSV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, CSV), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_CSV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_CSV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "RequiredArguments" },
		{ "DisplayName", "Ouput Directory" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Sets the filename for the SVG output." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputFilename_MetaData[] = {
		{ "Category", "RequiredArguments" },
		{ "DisplayName", "Ouput Filename" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Sets the filename for the SVG output." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputFilename = { "OutputFilename", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, OutputFilename), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputFilename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_skipRows_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Skip Rows" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Skips a specified number of rows in the CSV. This is useful for CSV file sgenerated from the FPSChartStart command, where there's a 4-row summary at the top." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_skipRows = { "skipRows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, skipRows), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_skipRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_skipRows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minX_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "minX" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Clamps the X and Y range of the source data." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minX = { "minX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, minX), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxX_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "maxX" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Clamps the X and Y range of the source data." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxX = { "maxX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, maxX), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minY_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "minY" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Clamps the X and Y range of the source data." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minY = { "minY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, minY), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxY_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "maxY" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Clamps the X and Y range of the source data." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxY = { "maxY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, maxY), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Smooth" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Smooth the graph." },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->smooth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth = { "smooth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelSize_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Smooth kernel size" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Specifies the smoothing kernel size in column entries to use." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelSize = { "smoothKernelSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, smoothKernelSize), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelPercent_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Smooth kernel size" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Specifies the smoothing kernel size as a percentage of the graph length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelPercent = { "smoothKernelPercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, smoothKernelPercent), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_width_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Width" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "The width of the graph." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, width), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_height_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Height" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "The height of the graph." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, height), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_title_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Title" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Sets the title for the graph." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, title), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "No Metadata" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "" },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->noMetadata = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata = { "noMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Graph only" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Render just the graph, no borders." },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->graphOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly = { "graphOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_budget_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Budget [ms]" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Sets the budget line. Default is 33.3." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_budget = { "budget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, budget), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_budget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_budget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_thickness_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Thickness" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Sets the line thickness of the graph." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_thickness = { "thickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, thickness), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_thickness_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Theme" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme = { "theme", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, theme), Z_Construct_UEnum_CSVtoSVG_ESVGTheme, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme_MetaData)) }; // 1781942182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_threshold_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Threshold" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Ignores stats which are entirely under this threshold." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_threshold = { "threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, threshold), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Stacked" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Makes a stacked graph for cumulative stats." },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->stacked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked = { "stacked", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacktotalstack_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Stacked Total Stat" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Specifies the total stat. Valid for stacked graphs only." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacktotalstack = { "stacktotalstack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, stacktotalstack), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacktotalstack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacktotalstack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Interactive" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Adds an interactive frame marker." },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->interactive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive = { "interactive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Show Averages" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Shows stat averages next to the legend and sorts the stats in the legend high to low by average value." },
	};
#endif
	void Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages_SetBit(void* Obj)
	{
		((UCSVtoSVGArugments*)Obj)->showaverages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages = { "showaverages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCSVtoSVGArugments), &Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_colourOffset_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Colour Offset" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Rotates the colours." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_colourOffset = { "colourOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, colourOffset), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_colourOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_colourOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_averageThreshold_MetaData[] = {
		{ "Category", "OptionalArguments" },
		{ "DisplayName", "Average Threshold" },
		{ "EditorConfig", "" },
		{ "ModuleRelativePath", "Public/CSVtoSVGArguments.h" },
		{ "Tooltip", "Ignores stats whose average is under this threshold." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_averageThreshold = { "averageThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSVtoSVGArugments, averageThreshold), METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_averageThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_averageThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSVtoSVGArugments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_CSV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_OutputFilename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_skipRows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_minY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_maxY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smooth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_smoothKernelPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_noMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_graphOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_budget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_theme,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_stacktotalstack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_interactive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_showaverages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_colourOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSVtoSVGArugments_Statics::NewProp_averageThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSVtoSVGArugments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSVtoSVGArugments>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSVtoSVGArugments_Statics::ClassParams = {
		&UCSVtoSVGArugments::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCSVtoSVGArugments_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCSVtoSVGArugments_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSVtoSVGArugments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSVtoSVGArugments()
	{
		if (!Z_Registration_Info_UClass_UCSVtoSVGArugments.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSVtoSVGArugments.OuterSingleton, Z_Construct_UClass_UCSVtoSVGArugments_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSVtoSVGArugments.OuterSingleton;
	}
	template<> CSVTOSVG_API UClass* StaticClass<UCSVtoSVGArugments>()
	{
		return UCSVtoSVGArugments::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSVtoSVGArugments);
	UCSVtoSVGArugments::~UCSVtoSVGArugments() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::EnumInfo[] = {
		{ ESVGTheme_StaticEnum, TEXT("ESVGTheme"), &Z_Registration_Info_UEnum_ESVGTheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1781942182U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSVtoSVGArugments, UCSVtoSVGArugments::StaticClass, TEXT("UCSVtoSVGArugments"), &Z_Registration_Info_UClass_UCSVtoSVGArugments, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSVtoSVGArugments), 3952203159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_1530502370(TEXT("/Script/CSVtoSVG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CSVtoSVG_Public_CSVtoSVGArguments_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
