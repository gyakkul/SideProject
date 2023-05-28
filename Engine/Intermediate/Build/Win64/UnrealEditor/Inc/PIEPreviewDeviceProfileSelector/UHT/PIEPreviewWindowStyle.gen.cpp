// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PIEPreviewWindowStyle.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIEPreviewWindowStyle() {}
// Cross Module References
	PIEPREVIEWDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector();
// End Cross Module References

static_assert(std::is_polymorphic<FPIEPreviewWindowStyle>() == std::is_polymorphic<FSlateWidgetStyle>(), "USTRUCT FPIEPreviewWindowStyle cannot be polymorphic unless super FSlateWidgetStyle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle;
class UScriptStruct* FPIEPreviewWindowStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector(), TEXT("PIEPreviewWindowStyle"));
	}
	return Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.OuterSingleton;
}
template<> PIEPREVIEWDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FPIEPreviewWindowStyle>()
{
	return FPIEPreviewWindowStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenRotationButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenRotationButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuarterMobileContentScaleFactorButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfMobileContentScaleFactorButtonStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullMobileContentScaleFactorButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FullMobileContentScaleFactorButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Represents the appearance of an SPIEWindow\n*/" },
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Represents the appearance of an SPIEWindow" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewWindowStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData[] = {
		{ "Comment", "/** Style used to draw the window ScreenRotationButton button */" },
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window ScreenRotationButton button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle = { "ScreenRotationButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewWindowStyle, ScreenRotationButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "Comment", "/** Style used to draw the window 0.25x button */" },
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 0.25x button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle = { "QuarterMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewWindowStyle, QuarterMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "Comment", "/** Style used to draw the window 0.5x button */" },
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 0.5x button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle = { "HalfMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewWindowStyle, HalfMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle_MetaData)) }; // 2024050934
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData[] = {
		{ "Comment", "/** Style used to draw the window 1X button */" },
		{ "ModuleRelativePath", "Private/PIEPreviewWindowStyle.h" },
		{ "ToolTip", "Style used to draw the window 1X button" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle = { "FullMobileContentScaleFactorButtonStyle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewWindowStyle, FullMobileContentScaleFactorButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle_MetaData)) }; // 2024050934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_ScreenRotationButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_QuarterMobileContentScaleFactorButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_HalfMobileContentScaleFactorButtonStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewProp_FullMobileContentScaleFactorButtonStyle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceProfileSelector,
		Z_Construct_UScriptStruct_FSlateWidgetStyle,
		&NewStructOps,
		"PIEPreviewWindowStyle",
		sizeof(FPIEPreviewWindowStyle),
		alignof(FPIEPreviewWindowStyle),
		Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewWindowStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.InnerSingleton, Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewWindowStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewWindowStyle_h_Statics::ScriptStructInfo[] = {
		{ FPIEPreviewWindowStyle::StaticStruct, Z_Construct_UScriptStruct_FPIEPreviewWindowStyle_Statics::NewStructOps, TEXT("PIEPreviewWindowStyle"), &Z_Registration_Info_UScriptStruct_PIEPreviewWindowStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEPreviewWindowStyle), 538494494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewWindowStyle_h_3410530803(TEXT("/Script/PIEPreviewDeviceProfileSelector"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewWindowStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceProfileSelector_Private_PIEPreviewWindowStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
