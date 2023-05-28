// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/CanvasTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextSizingParameters;
class UScriptStruct* FTextSizingParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextSizingParameters, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextSizingParameters"));
	}
	return Z_Registration_Info_UScriptStruct_TextSizingParameters.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextSizingParameters>()
{
	return FTextSizingParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextSizingParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawXL_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawXL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawYL_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawYL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrawFont;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpacingAdjust_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpacingAdjust;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * General purpose data structure for grouping all parameters needed when sizing or wrapping a string\n */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "General purpose data structure for grouping all parameters needed when sizing or wrapping a string" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextSizingParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData[] = {
		{ "Comment", "/** a pixel value representing the horizontal screen location to begin rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the horizontal screen location to begin rendering the string" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX = { "DrawX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawX), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData[] = {
		{ "Comment", "/** a pixel value representing the vertical screen location to begin rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the vertical screen location to begin rendering the string" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY = { "DrawY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawY), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData[] = {
		{ "Comment", "/** a pixel value representing the width of the area available for rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the width of the area available for rendering the string" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL = { "DrawXL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawXL), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData[] = {
		{ "Comment", "/** a pixel value representing the height of the area available for rendering the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "a pixel value representing the height of the area available for rendering the string" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL = { "DrawYL", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawYL), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData[] = {
		{ "Comment", "/** A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling. */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "A value between 0.0 and 1.0, which represents how much the width/height should be scaled, where 1.0 represents 100% scaling." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, Scaling), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData[] = {
		{ "Comment", "/** the font to use for sizing/wrapping the string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "the font to use for sizing/wrapping the string" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont = { "DrawFont", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, DrawFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData[] = {
		{ "Comment", "/** Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Horizontal spacing adjustment between characters and vertical spacing adjustment between wrapped lines" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust = { "SpacingAdjust", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextSizingParameters, SpacingAdjust), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawXL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawYL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_Scaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_DrawFont,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewProp_SpacingAdjust,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextSizingParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextSizingParameters",
		sizeof(FTextSizingParameters),
		alignof(FTextSizingParameters),
		Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextSizingParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextSizingParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton, Z_Construct_UScriptStruct_FTextSizingParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextSizingParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WrappedStringElement;
class UScriptStruct* FWrappedStringElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWrappedStringElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WrappedStringElement"));
	}
	return Z_Registration_Info_UScriptStruct_WrappedStringElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWrappedStringElement>()
{
	return FWrappedStringElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWrappedStringElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping.\n */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "Used by UUIString::WrapString to track information about each line that is generated as the result of wrapping." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWrappedStringElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** the string associated with this line */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the string associated with this line" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWrappedStringElement, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData[] = {
		{ "Comment", "/** the size (in pixels) that it will take to render this string */" },
		{ "ModuleRelativePath", "Public/CanvasTypes.h" },
		{ "ToolTip", "the size (in pixels) that it will take to render this string" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent = { "LineExtent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWrappedStringElement, LineExtent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewProp_LineExtent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWrappedStringElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WrappedStringElement",
		sizeof(FWrappedStringElement),
		alignof(FWrappedStringElement),
		Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWrappedStringElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWrappedStringElement()
	{
		if (!Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton, Z_Construct_UScriptStruct_FWrappedStringElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WrappedStringElement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics::ScriptStructInfo[] = {
		{ FTextSizingParameters::StaticStruct, Z_Construct_UScriptStruct_FTextSizingParameters_Statics::NewStructOps, TEXT("TextSizingParameters"), &Z_Registration_Info_UScriptStruct_TextSizingParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextSizingParameters), 1677595879U) },
		{ FWrappedStringElement::StaticStruct, Z_Construct_UScriptStruct_FWrappedStringElement_Statics::NewStructOps, TEXT("WrappedStringElement"), &Z_Registration_Info_UScriptStruct_WrappedStringElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWrappedStringElement), 2119714693U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_4060505014(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_CanvasTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
