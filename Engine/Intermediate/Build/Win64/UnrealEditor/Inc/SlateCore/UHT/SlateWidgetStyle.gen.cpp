// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateWidgetStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyle() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateWidgetStyle;
class UScriptStruct* FSlateWidgetStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateWidgetStyle, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("SlateWidgetStyle"));
	}
	return Z_Registration_Info_UScriptStruct_SlateWidgetStyle.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FSlateWidgetStyle>()
{
	return FSlateWidgetStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base structure for widget styles.\n */" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyle.h" },
		{ "ToolTip", "Base structure for widget styles." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateWidgetStyle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"SlateWidgetStyle",
		sizeof(FSlateWidgetStyle),
		alignof(FSlateWidgetStyle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlateWidgetStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton, Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SlateWidgetStyle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics::ScriptStructInfo[] = {
		{ FSlateWidgetStyle::StaticStruct, Z_Construct_UScriptStruct_FSlateWidgetStyle_Statics::NewStructOps, TEXT("SlateWidgetStyle"), &Z_Registration_Info_UScriptStruct_SlateWidgetStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateWidgetStyle), 3974281575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_3247609307(TEXT("/Script/SlateCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
